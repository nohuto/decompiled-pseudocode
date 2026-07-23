/*
 * XREFs of MiStandbyPageContentsIntact @ 0x140708D64
 * Callers:
 *     MiConfirmCombinePageContents @ 0x1402EA8E0 (MiConfirmCombinePageContents.c)
 *     MiTranslatePageForCopy @ 0x14033ADCC (MiTranslatePageForCopy.c)
 *     MiCopyDataPageToImagePage @ 0x14036E218 (MiCopyDataPageToImagePage.c)
 *     MiCopyHeaderIfResident @ 0x1404AE5F4 (MiCopyHeaderIfResident.c)
 *     MiStandbyPageStillCombineCandidate @ 0x1404BF3B4 (MiStandbyPageStillCombineCandidate.c)
 * Callees:
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiCheckWriteInProgressFault @ 0x1406FC2EC (MiCheckWriteInProgressFault.c)
 */

_BOOL8 __fastcall MiStandbyPageContentsIntact(__int64 a1)
{
  char v1; // dl
  unsigned __int64 v2; // r9
  int v3; // r11d
  int v4; // r10d
  unsigned int v5; // r8d
  unsigned int v6; // r8d

  v1 = *(_BYTE *)(a1 + 34);
  if ( (v1 & 8) != 0 && ((v1 & 7) == 3 || (v1 & 7) == 7) && (int)MiCheckWriteInProgressFault(a1) < 0 )
    return 0LL;
  if ( (v1 & 7) != 2 )
    return 1LL;
  if ( (v1 & 0x20) != 0 || (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
    return 0LL;
  if ( (unsigned __int16)*(_DWORD *)(a1 + 32) )
    return 1LL;
  if ( (unsigned int)MiGetPfnSlabType(a1) == 9 || (v4 = 1, (*(_DWORD *)(v2 + 32) & 0x8000000) == 0) )
    v4 = v3;
  v5 = *(_DWORD *)(v2 + 32);
  if ( (*(_QWORD *)(v2 + 40) & 0x20000000000000LL) != 0
    || (*(_DWORD *)(v2 + 32) & 0x8000000) != 0
    && (v2 < 0xFFFFDE0000000000uLL
     || v2 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
     || MiIsDecayPfn((__int64)(v2 + 0x220000000000LL) / 48)
     || (v5 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v2) == 9) )
  {
    v6 = 5;
  }
  else
  {
    v6 = HIBYTE(v5) & 7;
  }
  return v4
      || v6 >= *(unsigned __int8 *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v2 + 40) >> 43) & 0x3FFLL))
                                  + 16484LL);
}
