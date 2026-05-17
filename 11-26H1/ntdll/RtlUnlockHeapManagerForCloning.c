/*
 * XREFs of RtlUnlockHeapManagerForCloning @ 0x1801445D0
 * Callers:
 *     RtlCloneUserProcess @ 0x18015C640 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015C950 (RtlCompleteProcessCloning.c)
 * Callees:
 *     RtlpGetNextProcessHeapDescriptor @ 0x1800DBCA0 (RtlpGetNextProcessHeapDescriptor.c)
 *     RtlpGetPreviousProcessHeapDescriptor @ 0x180144F54 (RtlpGetPreviousProcessHeapDescriptor.c)
 *     RtlpIsHeapAccessibleInClone @ 0x1801453DC (RtlpIsHeapAccessibleInClone.c)
 *     RtlpUnlockHeapForClone @ 0x18014564C (RtlpUnlockHeapForClone.c)
 *     RtlpHpUnlockHeapManagerForClone @ 0x180150868 (RtlpHpUnlockHeapManagerForClone.c)
 */

__int64 __fastcall RtlUnlockHeapManagerForCloning(unsigned int a1)
{
  __int64 **i; // rcx
  __int64 PreviousProcessHeapDescriptor; // rbx
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  __int64 **v6; // rax
  __int64 *NextProcessHeapDescriptor; // rax

  if ( a1 )
    qword_1801C7268 = 0LL;
  for ( i = 0LL; ; i = (__int64 **)PreviousProcessHeapDescriptor )
  {
    NextProcessHeapDescriptor = RtlpGetNextProcessHeapDescriptor(i);
    PreviousProcessHeapDescriptor = (__int64)NextProcessHeapDescriptor;
    if ( !NextProcessHeapDescriptor )
      break;
    if ( !a1 || (unsigned int)RtlpIsHeapAccessibleInClone(NextProcessHeapDescriptor[2]) )
    {
      RtlpUnlockHeapForClone(*(_QWORD *)(PreviousProcessHeapDescriptor + 16), a1);
    }
    else
    {
      PreviousProcessHeapDescriptor = RtlpGetPreviousProcessHeapDescriptor(PreviousProcessHeapDescriptor);
      v4 = *(__int64 **)PreviousProcessHeapDescriptor;
      v5 = **(__int64 ***)PreviousProcessHeapDescriptor;
      if ( v5[1] != *(_QWORD *)PreviousProcessHeapDescriptor || (v6 = (__int64 **)v4[1], *v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      v5[1] = (__int64)v6;
    }
  }
  if ( a1 )
  {
    qword_1801CCF70 = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
    dword_1801CCF68 = -2;
    dword_1801CCF6C = 1;
    qword_1801CCF78 = 0LL;
  }
  RtlpHpUnlockHeapManagerForClone(a1);
  return RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
}
