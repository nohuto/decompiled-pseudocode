/*
 * XREFs of RtlLockHeapManagerForCloning @ 0x180144290
 * Callers:
 *     RtlCloneUserProcess @ 0x18015C500 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x18015C9C0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlpReleaseHeapListLock @ 0x1800762B0 (RtlpReleaseHeapListLock.c)
 *     RtlpAcquireHeapListLock @ 0x1800762FC (RtlpAcquireHeapListLock.c)
 *     RtlpGetNextProcessHeapDescriptor @ 0x1800D8C10 (RtlpGetNextProcessHeapDescriptor.c)
 *     RtlpCSparseBitmapLock @ 0x1800E8170 (RtlpCSparseBitmapLock.c)
 *     RtlpGetPreviousProcessHeapDescriptor @ 0x180144E04 (RtlpGetPreviousProcessHeapDescriptor.c)
 *     RtlpLockHeapForClone @ 0x180145318 (RtlpLockHeapForClone.c)
 *     RtlpUnlockHeapForClone @ 0x1801454FC (RtlpUnlockHeapForClone.c)
 *     RtlpFlsClonePrepare @ 0x18014F1B8 (RtlpFlsClonePrepare.c)
 *     RtlpHpUnlockHeapManagerForClone @ 0x180150718 (RtlpHpUnlockHeapManagerForClone.c)
 */

__int64 RtlLockHeapManagerForCloning()
{
  __int64 **v0; // rcx
  __int64 *NextProcessHeapDescriptor; // rax
  __int64 *v2; // rbx
  int v3; // edi
  __int64 PreviousProcessHeapDescriptor; // rax
  __int64 **v5; // rbx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  RtlpAcquireHeapListLock();
  RtlpCSparseBitmapLock((_RTL_SRWLOCK *)BaseAddress, 1, (__int64)v7);
  RtlpFlsClonePrepare(&RtlpHpEnvFlsContext);
  v0 = 0LL;
  do
  {
    NextProcessHeapDescriptor = RtlpGetNextProcessHeapDescriptor(v0);
    v2 = NextProcessHeapDescriptor;
    if ( !NextProcessHeapDescriptor )
      return 0;
    v3 = RtlpLockHeapForClone(NextProcessHeapDescriptor[2]);
    v0 = (__int64 **)v2;
  }
  while ( v3 >= 0 );
  while ( 1 )
  {
    PreviousProcessHeapDescriptor = RtlpGetPreviousProcessHeapDescriptor(v0);
    v5 = (__int64 **)PreviousProcessHeapDescriptor;
    if ( !PreviousProcessHeapDescriptor )
      break;
    RtlpUnlockHeapForClone(*(_QWORD *)(PreviousProcessHeapDescriptor + 16), 0LL);
    v0 = v5;
  }
  RtlpHpUnlockHeapManagerForClone(0LL);
  RtlpReleaseHeapListLock(0);
  return (unsigned int)v3;
}
