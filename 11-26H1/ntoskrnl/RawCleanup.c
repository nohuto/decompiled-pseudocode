/*
 * XREFs of RawCleanup @ 0x140A35394
 * Callers:
 *     RawDispatch @ 0x140A35180 (RawDispatch.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     IofCompleteRequest @ 0x1403FD9D0 (IofCompleteRequest.c)
 *     RawInitiateDeleteVolume @ 0x1404BD434 (RawInitiateDeleteVolume.c)
 *     FsRtlNotifyVolumeEvent @ 0x140790A70 (FsRtlNotifyVolumeEvent.c)
 *     IoRemoveLinkShareAccessEx @ 0x140A354A0 (IoRemoveLinkShareAccessEx.c)
 */

__int64 __fastcall RawCleanup(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3)
{
  struct _FAST_MUTEX *v3; // r14
  char v7; // bp

  v3 = (struct _FAST_MUTEX *)&AdvancedHeader[2];
  v7 = 0;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&AdvancedHeader[2]);
  IoRemoveLinkShareAccessEx(*(_QWORD *)(a3 + 48), (char *)&AdvancedHeader[1].Resource + 4, 0LL, 0LL);
  if ( *(_QWORD *)(a3 + 48) == *(_QWORD *)&AdvancedHeader[1].BypassIoOpenCount )
  {
    *(_DWORD *)&AdvancedHeader[1].NodeTypeCode &= ~1u;
    v7 = 1;
    *(_QWORD *)&AdvancedHeader[1].BypassIoOpenCount = 0LL;
  }
  if ( *(void **)(a3 + 48) == AdvancedHeader[1].AePushLock )
  {
    AdvancedHeader[1].AePushLock = 0LL;
    RawInitiateDeleteVolume(AdvancedHeader, 1, 0);
  }
  KeReleaseGuardedMutex(v3);
  if ( v7 )
    FsRtlNotifyVolumeEvent(*(PFILE_OBJECT *)(a3 + 48), 5u);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 1);
  return 0LL;
}
