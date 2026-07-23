/*
 * XREFs of MI_PAGE_TO_FULL_COLOR @ 0x14028D4F0
 * Callers:
 *     MiPageFreeToZero @ 0x14028B780 (MiPageFreeToZero.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028BE54 (MiUnlinkFreeOrZeroedPage.c)
 *     MiFreeZeroPageToColorHead @ 0x14028D340 (MiFreeZeroPageToColorHead.c)
 *     MiTradePageMarkedBad @ 0x14028DD80 (MiTradePageMarkedBad.c)
 *     MiDeleteUltraThreadContext @ 0x14028EB40 (MiDeleteUltraThreadContext.c)
 *     MiTradePage @ 0x140290ED0 (MiTradePage.c)
 *     MiReuseUltraPageTable @ 0x14029ECD4 (MiReuseUltraPageTable.c)
 *     MiWalkImageReleasePage @ 0x1402AE49C (MiWalkImageReleasePage.c)
 *     MiInsertFreeZeroPage @ 0x1402BEC30 (MiInsertFreeZeroPage.c)
 *     MiCompleteSecureProcessFault @ 0x14038CC80 (MiCompleteSecureProcessFault.c)
 *     MiInsertPossiblyBadPage @ 0x1403D04D4 (MiInsertPossiblyBadPage.c)
 *     MiSwapStackPage @ 0x140409E34 (MiSwapStackPage.c)
 *     MiDeleteUltraMapContext @ 0x14045E5A0 (MiDeleteUltraMapContext.c)
 *     MiFinalizeImageHeaderPage @ 0x1404C18CC (MiFinalizeImageHeaderPage.c)
 *     MiPrivateFixup @ 0x14051FCB0 (MiPrivateFixup.c)
 *     MiProtectDriverSectionPte @ 0x1406EAA00 (MiProtectDriverSectionPte.c)
 * Callees:
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MI_PAGE_TO_FULL_COLOR(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rdi
  int v3; // r8d
  char *v4; // rbx
  int v5; // ebx
  char v6; // r9
  int v7; // r8d
  unsigned int v8; // ecx
  int i; // edx
  int v11; // r9d

  v2 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v3 = dword_140E2D804;
  if ( dword_140E2D800 > (unsigned int)dword_140E2D804
    || (v4 = (char *)qword_140E2D860 + 16 * dword_140E2D800, BugCheckParameter2 < *(_QWORD *)v4)
    || dword_140E2D800 != dword_140E2D804 && BugCheckParameter2 >= *((_QWORD *)v4 + 2) )
  {
    for ( i = 0; ; i = v11 + 1 )
    {
      while ( 1 )
      {
        if ( v3 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, 0LL, 0LL);
        v11 = (i + v3) >> 1;
        v4 = (char *)qword_140E2D860 + 16 * v11;
        if ( BugCheckParameter2 >= *(_QWORD *)v4 )
          break;
        if ( !v11 )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, (ULONG_PTR)qword_140E2D860, 0LL);
        v3 = v11 - 1;
      }
      if ( v11 == dword_140E2D804 || BugCheckParameter2 < *((_QWORD *)v4 + 2) )
        break;
    }
    dword_140E2D800 = (i + v3) >> 1;
  }
  v5 = *((_DWORD *)v4 + 2);
  if ( qword_140E2D868 )
    v6 = *(_BYTE *)(MiSearchChannelTable(BugCheckParameter2) + 12);
  else
    v6 = 0;
  v7 = 3;
  if ( (*(_QWORD *)(v2 + 40) & 0x10000000000LL) != 0 )
  {
    v7 = 3 - ((*(_DWORD *)(v2 + 36) >> 27) & 3);
    if ( v7 == 3 )
      v7 = 3;
  }
  v8 = (unsigned __int8)(BugCheckParameter2 / MiPageSizes[v7] % (unsigned int)dword_140E2D900[v7]) | (*(_DWORD *)(v2 + 32) >> 4) & 0xC0000 | ((v6 & 1 | (2 * (v5 & 0x3F | ((v7 & 3) << 7)))) << 8);
  if ( v7 != 3 && BugCheckParameter2 < 0x100000 )
    v8 |= 0x8000u;
  return v8;
}
