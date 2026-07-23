/*
 * XREFs of MiMapSinglePage @ 0x14036C61C
 * Callers:
 *     MiCombineWithStandbyExisting @ 0x1402E9D44 (MiCombineWithStandbyExisting.c)
 *     MiCombineWithExisting @ 0x1402EA2C4 (MiCombineWithExisting.c)
 *     MiCombineInitialInstance @ 0x1402EB42C (MiCombineInitialInstance.c)
 *     MiCopyDataPageToImagePage @ 0x14036E218 (MiCopyDataPageToImagePage.c)
 *     MiInitializeForkMaps @ 0x140A0751C (MiInitializeForkMaps.c)
 *     MiUpdateForkMaps @ 0x140AF6AB0 (MiUpdateForkMaps.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140D004C4 (MmInitializeImageViewExtensionCfg.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 */

unsigned __int64 __fastcall MiMapSinglePage(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char v4; // bp
  int v5; // r14d
  __int64 v7; // rbx
  _QWORD *v8; // rdi
  unsigned int v9; // r8d
  unsigned __int64 ValidPte; // rax
  unsigned __int64 result; // rax

  v4 = a4;
  v5 = a3;
  v7 = a1;
  if ( a1 )
  {
    v8 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( *v8 )
    {
      *v8 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      MiFlushSingleTbEntry(a1, 2LL);
    }
    goto LABEL_4;
  }
  result = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, 1u, a3, a4);
  v8 = (_QWORD *)result;
  if ( result )
  {
    v7 = (__int64)(result << 25) >> 16;
    if ( (v4 & 2) != 0 )
    {
      ValidPte = *(_QWORD *)&CLFS_LSN_NULL_EXT;
LABEL_10:
      *v8 = ValidPte;
      return v7;
    }
LABEL_4:
    v9 = (((v5 >> 31) & 0xFFFFFFFD) + 4) | 2;
    if ( (v5 & 0x40000000) != 0 )
      v9 = ((v5 >> 31) & 0xFFFFFFFD) + 4;
    if ( (*(_DWORD *)(48 * a2 - 0x220000000000LL + 32) & 0xC00000) != 0 )
    {
      if ( (*(_DWORD *)(48 * a2 - 0x220000000000LL + 32) & 0xC00000) == 0x800000 )
        v9 |= 0x18u;
    }
    else
    {
      v9 |= 8u;
    }
    ValidPte = MiMakeValidPte((unsigned __int64)v8, a2, v9 | 0xA0000000);
    goto LABEL_10;
  }
  return result;
}
