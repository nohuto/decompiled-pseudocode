/*
 * XREFs of WheapInitWnfCallbacks @ 0x14085078C
 * Callers:
 *     WheaInitialize @ 0x140CEDE58 (WheaInitialize.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1409C4400 (ExSubscribeWnfStateChange.c)
 */

__int64 WheapInitWnfCallbacks()
{
  __int64 result; // rax
  struct _LIST_ENTRY *v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  *(_OWORD *)&CmpContextListLock.WaitBlockFill11[32] = 0uLL;
  result = ExSubscribeWnfStateChange(
             (unsigned int)&v1,
             (unsigned int)&WNF_MM_BAD_MEMORY_QUARANTINED,
             1,
             0,
             (__int64)WheapProcessOfflineList,
             0LL);
  if ( (int)result >= 0 )
  {
    result = (__int64)v1;
    CmpContextListLock.WaitBlock[1].WaitListEntry.Blink = v1;
  }
  return result;
}
