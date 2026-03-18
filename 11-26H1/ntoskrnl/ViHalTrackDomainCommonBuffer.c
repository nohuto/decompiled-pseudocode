/*
 * XREFs of ViHalTrackDomainCommonBuffer @ 0x140C27414
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x140640F40 (VfAllocateDomainCommonBuffer.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall ViHalTrackDomainCommonBuffer(_QWORD *a1)
{
  KIRQL v2; // al
  __int64 v3; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140F082B0);
  v3 = ViDomainCommonBufferList;
  if ( *(__int64 **)(ViDomainCommonBufferList + 8) != &ViDomainCommonBufferList )
    __fastfail(3u);
  *a1 = ViDomainCommonBufferList;
  a1[1] = &ViDomainCommonBufferList;
  *(_QWORD *)(v3 + 8) = a1;
  ViDomainCommonBufferList = (__int64)a1;
  KeReleaseSpinLock(&qword_140F082B0, v2);
}
