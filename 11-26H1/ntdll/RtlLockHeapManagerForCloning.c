/*
 * XREFs of RtlLockHeapManagerForCloning @ 0x180144390
 * Callers:
 *     RtlCloneUserProcess @ 0x18015C640 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x18015CB00 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpGetNextProcessHeapDescriptor @ 0x1800DBCA0 (RtlpGetNextProcessHeapDescriptor.c)
 *     RtlpCSparseBitmapLock @ 0x1800E8F60 (RtlpCSparseBitmapLock.c)
 *     RtlpGetPreviousProcessHeapDescriptor @ 0x180144F54 (RtlpGetPreviousProcessHeapDescriptor.c)
 *     RtlpLockHeapForClone @ 0x180145468 (RtlpLockHeapForClone.c)
 *     RtlpUnlockHeapForClone @ 0x18014564C (RtlpUnlockHeapForClone.c)
 *     RtlpFlsClonePrepare @ 0x18014F308 (RtlpFlsClonePrepare.c)
 *     RtlpHpUnlockHeapManagerForClone @ 0x180150868 (RtlpHpUnlockHeapManagerForClone.c)
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

  RtlEnterCriticalSection((__int64)&RtlpProcessHeapsLock);
  RtlpCSparseBitmapLock((__int64)&unk_1801C78C0, 1LL, (__int64)v7);
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
  RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
  return (unsigned int)v3;
}
