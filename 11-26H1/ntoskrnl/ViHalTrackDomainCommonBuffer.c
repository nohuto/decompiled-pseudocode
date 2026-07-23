/*
 * XREFs of ViHalTrackDomainCommonBuffer @ 0x140C2D424
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x140644B20 (VfAllocateDomainCommonBuffer.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall ViHalTrackDomainCommonBuffer(_QWORD *a1)
{
  KIRQL v2; // al
  __int64 v3; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140F08610);
  v3 = ViDomainCommonBufferList;
  if ( *(__int64 **)(ViDomainCommonBufferList + 8) != &ViDomainCommonBufferList )
    __fastfail(3u);
  *a1 = ViDomainCommonBufferList;
  a1[1] = &ViDomainCommonBufferList;
  *(_QWORD *)(v3 + 8) = a1;
  ViDomainCommonBufferList = (__int64)a1;
  KeReleaseSpinLock(&qword_140F08610, v2);
}
