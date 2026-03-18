/*
 * XREFs of CcLockSystemCacheBuffer @ 0x14052625C
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14026D270 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x14046BC40 (CcCopyBytesToUserBuffer.c)
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x1402E2870 (FsRtlIsNtstatusExpected.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     IopAllocateMdl @ 0x14039EBE0 (IopAllocateMdl.c)
 *     IoFreeMdl @ 0x14039F190 (IoFreeMdl.c)
 *     MmProbeAndLockPagesEx @ 0x14039FAC0 (MmProbeAndLockPagesEx.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 */

PVOID __fastcall CcLockSystemCacheBuffer(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4, int *a5)
{
  PVOID v5; // rsi
  char v7; // bp
  __int64 Mdl; // rax
  __int64 v9; // rbx
  NTSTATUS v10; // eax
  int v11; // ecx
  PVOID v12; // rax
  PVOID result; // rax

  v5 = 0LL;
  *a5 = 0;
  v7 = a4;
  Mdl = IopAllocateMdl(a1, a3, 0, a4, 0LL, 0);
  v9 = Mdl;
  if ( Mdl )
  {
    v10 = MmProbeAndLockPagesEx(Mdl, 2LL * (v7 & 3));
    *a5 = v10;
    if ( v10 < 0 )
    {
      if ( !FsRtlIsNtstatusExpected(v10) )
        *a5 = -1073741592;
      IoFreeMdl((PMDL)v9);
      v9 = 0LL;
    }
    v11 = *a5;
    if ( *a5 >= 0 )
    {
      if ( (*(_BYTE *)(v9 + 10) & 5) != 0 )
      {
        v5 = *(PVOID *)(v9 + 24);
      }
      else
      {
        v12 = MmMapLockedPagesSpecifyCache((PMDL)v9, 0, MmCached, 0LL, 0, 0x40000000u);
        v11 = *a5;
        v5 = v12;
      }
      if ( v5 )
      {
        if ( v11 >= 0 )
          goto LABEL_16;
      }
      else
      {
        *a5 = -1073741670;
      }
    }
    if ( v9 )
    {
      MmUnlockPages((PMDL)v9);
      IoFreeMdl((PMDL)v9);
      v9 = 0LL;
    }
  }
  else
  {
    *a5 = -1073741670;
  }
LABEL_16:
  result = v5;
  *a2 = v9;
  return result;
}
