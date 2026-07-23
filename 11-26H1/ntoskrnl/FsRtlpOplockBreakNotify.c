/*
 * XREFs of FsRtlpOplockBreakNotify @ 0x14079186C
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x140AA46C0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     FsRtlpModifyThreadPriorities @ 0x1403FB0D4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1404CE5A4 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpWaitOnIrp @ 0x1404E5834 (FsRtlpWaitOnIrp.c)
 */

__int64 __fastcall FsRtlpOplockBreakNotify(__int64 a1, __int64 a2, IRP *a3)
{
  char v6; // si
  unsigned int v7; // edi
  _QWORD v8[3]; // [rsp+48h] [rbp-20h] BYREF

  if ( !a1 )
  {
    a3->IoStatus.Status = 0;
    IofCompleteRequest(a3, 1);
    return 0LL;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  v6 = 1;
  if ( (*(_DWORD *)(a1 + 144) & 0x1F00F00) != 0
    || *(_QWORD *)(a1 + 72) != a1 + 72
    || (*(_DWORD *)(a1 + 144) & 0x20000) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 144) & 0x80u) == 0 )
    {
      v6 = 0;
      a3->IoStatus.Status = 0;
      FsRtlpModifyThreadPriorities(a1, 0LL, 1);
      FsRtlpOplockSendModernAppTermination(a1, 0LL);
      v8[0] = 0LL;
      v8[2] = 0LL;
      v8[1] = FsRtlpNotifyOplockBreakComplete;
      v7 = FsRtlpWaitOnIrp(a1, (__int64)a3, v8, 0LL, 0LL, 0, 0LL);
      goto LABEL_10;
    }
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x8000020 | 1;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  a3->IoStatus.Status = 0;
  IofCompleteRequest(a3, 1);
  v7 = 0;
LABEL_10:
  if ( v6 )
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  return v7;
}
