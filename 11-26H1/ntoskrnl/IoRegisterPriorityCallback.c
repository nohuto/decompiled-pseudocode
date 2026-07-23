/*
 * XREFs of IoRegisterPriorityCallback @ 0x1405CDC30
 * Callers:
 *     <none>
 * Callees:
 *     ExCompareExchangeCallBack @ 0x14045C5C4 (ExCompareExchangeCallBack.c)
 *     PspUserApcKernelRoutine @ 0x1409FEEE0 (PspUserApcKernelRoutine.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall IoRegisterPriorityCallback(unsigned __int64 a1, unsigned __int64 a2)
{
  struct _EX_RUNDOWN_REF *Pool2; // rbx
  __int64 v6; // rsi

  if ( (*(_DWORD *)(a1 + 16) & 0x200) != 0 )
    return 3221227288LL;
  Pool2 = (struct _EX_RUNDOWN_REF *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 3221225626LL;
  Pool2[3].Count = a2;
  Pool2[1].Count = (unsigned __int64)IopBoostThreadCallback;
  v6 = 0LL;
  Pool2[2].Count = (unsigned __int64)Pool2;
  Pool2[4].Count = a1;
  Pool2->Count = 0LL;
  while ( (unsigned int)v6 < 8 )
  {
    if ( ExCompareExchangeCallBack(&IopUpdatePriorityCallbackRoutine[v6], Pool2, 0LL) )
    {
      _InterlockedIncrement(&IopUpdatePriorityCallbackRoutineCount);
      *(_DWORD *)(a1 + 16) |= 0x200u;
      return 0LL;
    }
    v6 = (unsigned int)(v6 + 1);
  }
  PspUserApcKernelRoutine(Pool2);
  return 3221225485LL;
}
