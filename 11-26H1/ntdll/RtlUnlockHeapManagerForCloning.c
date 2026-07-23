/*
 * XREFs of RtlUnlockHeapManagerForCloning @ 0x1801444C0
 * Callers:
 *     RtlCloneUserProcess @ 0x18015C500 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015C810 (RtlCompleteProcessCloning.c)
 * Callees:
 *     RtlpGetNextProcessHeapDescriptor @ 0x1800D8C10 (RtlpGetNextProcessHeapDescriptor.c)
 *     RtlpGetPreviousProcessHeapDescriptor @ 0x180144E04 (RtlpGetPreviousProcessHeapDescriptor.c)
 *     RtlpIsHeapAccessibleInClone @ 0x18014528C (RtlpIsHeapAccessibleInClone.c)
 *     RtlpUnlockHeapForClone @ 0x1801454FC (RtlpUnlockHeapForClone.c)
 *     RtlpHpUnlockHeapManagerForClone @ 0x180150718 (RtlpHpUnlockHeapManagerForClone.c)
 */

NTSTATUS __fastcall RtlUnlockHeapManagerForCloning(unsigned int a1)
{
  __int64 **i; // rcx
  __int64 PreviousProcessHeapDescriptor; // rbx
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  __int64 **v6; // rax
  __int64 *NextProcessHeapDescriptor; // rax

  if ( a1 )
    Timer = 0LL;
  for ( i = 0LL; ; i = (__int64 **)PreviousProcessHeapDescriptor )
  {
    NextProcessHeapDescriptor = RtlpGetNextProcessHeapDescriptor(i);
    PreviousProcessHeapDescriptor = (__int64)NextProcessHeapDescriptor;
    if ( !NextProcessHeapDescriptor )
      break;
    if ( !a1 || (unsigned int)RtlpIsHeapAccessibleInClone((PVOID)NextProcessHeapDescriptor[2]) )
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
  RtlpHpUnlockHeapManagerForClone(a1);
  return RtlpReleaseHeapListLock(a1);
}
