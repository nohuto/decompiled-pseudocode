/*
 * XREFs of ObpDeferPushRefDerefInfo @ 0x1404EDF50
 * Callers:
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 */

__int64 __fastcall ObpDeferPushRefDerefInfo(__int64 a1, __int16 a2, int a3, __int64 a4, int a5)
{
  __int64 result; // rax
  _QWORD *v10; // rdx
  PVOID SystemArgument2; // rax
  signed __int64 v12; // rax
  PVOID v13; // rtt
  signed __int64 v14; // rcx

  result = (__int64)RtlpInterlockedPopEntrySList(&ObpWorkItemFreeList);
  if ( result )
  {
    v10 = (_QWORD *)(result + 16);
    *(_DWORD *)(result + 36) = a5;
    *(_QWORD *)(result + 24) = a1;
    *(_WORD *)(result + 32) = a2;
    *(_DWORD *)(result + 40) = a3;
    *(_OWORD *)(result + 48) = *(_OWORD *)a4;
    *(_OWORD *)(result + 64) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)(result + 80) = *(_OWORD *)(a4 + 32);
    *(_OWORD *)(result + 96) = *(_OWORD *)(a4 + 48);
    *(_OWORD *)(result + 112) = *(_OWORD *)(a4 + 64);
    *(_OWORD *)(result + 128) = *(_OWORD *)(a4 + 80);
    *(_OWORD *)(result + 144) = *(_OWORD *)(a4 + 96);
    *(_OWORD *)(result + 160) = *(_OWORD *)(a4 + 112);
    *(_QWORD *)(result + 176) = *(_QWORD *)(a4 + 128);
    SystemArgument2 = ObpStackTraceLock.SchedulerApc.SystemArgument2;
    *v10 = ObpStackTraceLock.SchedulerApc.SystemArgument2;
    v13 = SystemArgument2;
    v12 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)&ObpStackTraceLock.SchedulerApc.SystemArgument2,
            (signed __int64)v10,
            (signed __int64)SystemArgument2);
    if ( v13 != (PVOID)v12 )
    {
      do
      {
        v14 = v12;
        *v10 = v12;
        v12 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)&ObpStackTraceLock.SchedulerApc.SystemArgument2,
                (signed __int64)v10,
                v12);
      }
      while ( v12 != v14 );
    }
    result = (unsigned int)_InterlockedCompareExchange(&stru_140E66D40.WaitBlock[0].SpareLong, 1, 0);
    if ( !(_DWORD)result )
      return KiInsertQueueDpc((ULONG_PTR)&ObpStackTraceLock.MutantListHead, 0LL, 0LL, 0LL, 0);
  }
  else
  {
    _InterlockedIncrement64((volatile signed __int64 *)&stru_140E66D40.WaitBlock[0].Object);
  }
  return result;
}
