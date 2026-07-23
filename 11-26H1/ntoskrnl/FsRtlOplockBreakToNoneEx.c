/*
 * XREFs of FsRtlOplockBreakToNoneEx @ 0x1405B8790
 * Callers:
 *     FsRtlOplockBreakToNone @ 0x1405B8730 (FsRtlOplockBreakToNone.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403F5200 (FsRtlpOplockBreakByCacheFlags.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpOplockBreakToNone @ 0x1405297A0 (FsRtlpOplockBreakToNone.c)
 */

NTSTATUS __stdcall FsRtlOplockBreakToNoneEx(
        POPLOCK Oplock,
        PIRP Irp,
        ULONG Flags,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  PFAST_MUTEX *v7; // rbx
  NTSTATUS v8; // edi
  ULONG v9; // esi
  __int64 v11; // [rsp+20h] [rbp-78h]
  char v12[8]; // [rsp+60h] [rbp-38h] BYREF
  PVOID v13; // [rsp+68h] [rbp-30h]
  _QWORD v14[4]; // [rsp+70h] [rbp-28h] BYREF
  char v15; // [rsp+A0h] [rbp+8h] BYREF

  v7 = (PFAST_MUTEX *)*Oplock;
  v13 = *Oplock;
  v15 = 0;
  v12[0] = 0;
  if ( (Flags & 0x10) != 0 )
  {
    v8 = -1073741811;
  }
  else
  {
    v14[0] = Context;
    v14[1] = CompletionRoutine;
    v14[2] = PostIrpRoutine;
    v9 = Flags | 8;
    do
    {
      v12[0] = 0;
      if ( !v15 )
      {
        ExAcquireFastMutexUnsafe(v7[19]);
        v15 = 1;
      }
      v8 = FsRtlpOplockBreakToNone(
             (__int64)v7,
             (__int64)Irp->Tail.Overlay.CurrentStackLocation,
             (__int64)Irp,
             v9,
             v11,
             v14,
             0LL,
             &v15,
             v12);
      if ( !v8 )
      {
        LODWORD(v11) = 0;
        v8 = FsRtlpOplockBreakByCacheFlags(
               (__int64)v7,
               (__int64)Irp->Tail.Overlay.CurrentStackLocation,
               Irp,
               v9,
               v11,
               28672,
               0LL,
               0LL,
               (__int64)v14,
               0LL,
               &v15,
               (__int64)v12);
      }
    }
    while ( v12[0] );
  }
  if ( v15 )
    ExReleaseFastMutexUnsafe(v7[19]);
  return v8;
}
