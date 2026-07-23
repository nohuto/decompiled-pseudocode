/*
 * XREFs of FsRtlOplockBreakH2 @ 0x140AB7FB0
 * Callers:
 *     FsRtlOplockBreakH @ 0x140791540 (FsRtlOplockBreakH.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpAttachOplockKey @ 0x14030CCC0 (FsRtlpAttachOplockKey.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403F5200 (FsRtlpOplockBreakByCacheFlags.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 */

__int64 __fastcall FsRtlOplockBreakH2(
        __int64 *a1,
        IRP *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7,
        unsigned __int16 *a8)
{
  __int64 v11; // rsi
  __int64 CurrentStackLocation; // r14
  unsigned int v13; // ebx
  __int64 v15; // [rsp+20h] [rbp-A8h]
  _QWORD v16[11]; // [rsp+70h] [rbp-58h] BYREF
  char v17; // [rsp+D0h] [rbp+8h] BYREF
  char v18; // [rsp+D8h] [rbp+10h] BYREF
  unsigned int v19; // [rsp+E0h] [rbp+18h]

  v11 = *a1;
  CurrentStackLocation = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  v17 = 0;
  v13 = 0;
  v18 = 0;
  if ( !v11 )
    return v13;
  v13 = FsRtlpAttachOplockKey(a2);
  if ( v13 )
    goto LABEL_20;
  if ( *(_BYTE *)CurrentStackLocation )
  {
LABEL_11:
    v16[0] = a4;
    v16[1] = a5;
    v16[2] = a6;
    do
    {
      v18 = 0;
      if ( !v17 )
      {
        ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v11 + 152));
        v17 = 1;
      }
      LODWORD(v15) = 0;
      v13 = FsRtlpOplockBreakByCacheFlags(
              v11,
              CurrentStackLocation,
              a2,
              a3,
              v15,
              0x2000,
              a7,
              a8,
              (__int64)v16,
              0LL,
              &v17,
              (__int64)&v18);
    }
    while ( v18 );
    goto LABEL_20;
  }
  if ( !a7 )
  {
    if ( !a8 )
      goto LABEL_8;
LABEL_19:
    v13 = -1073741811;
    goto LABEL_20;
  }
  if ( !a8 )
    goto LABEL_19;
  a3 |= 0x40000000u;
  v19 = a3;
LABEL_8:
  if ( (*(_DWORD *)(*(_QWORD *)(CurrentStackLocation + 8) + 16LL) & 0xFFEFFE7F) != 0 )
  {
    if ( (*(_DWORD *)(CurrentStackLocation + 16) & 0x10000) != 0 )
    {
      a3 |= 0x10000000u;
      v19 = a3;
    }
    goto LABEL_11;
  }
  v13 = 0;
LABEL_20:
  if ( v17 )
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v11 + 152));
  return v13;
}
