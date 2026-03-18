/*
 * XREFs of MI_PAGE_TO_FULL_COLOR @ 0x14028DF90
 * Callers:
 *     MiPageFreeToZero @ 0x14028C220 (MiPageFreeToZero.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028C8F4 (MiUnlinkFreeOrZeroedPage.c)
 *     MiFreeZeroPageToColorHead @ 0x14028DDE0 (MiFreeZeroPageToColorHead.c)
 *     MiTradePageMarkedBad @ 0x14028E820 (MiTradePageMarkedBad.c)
 *     MiDeleteUltraThreadContext @ 0x14028F5E0 (MiDeleteUltraThreadContext.c)
 *     MiTradePage @ 0x140291970 (MiTradePage.c)
 *     MiReuseUltraPageTable @ 0x14029F784 (MiReuseUltraPageTable.c)
 *     MiWalkImageReleasePage @ 0x1402CC6DC (MiWalkImageReleasePage.c)
 *     MiInsertFreeZeroPage @ 0x1402DCE70 (MiInsertFreeZeroPage.c)
 *     MiCompleteSecureProcessFault @ 0x14038AED0 (MiCompleteSecureProcessFault.c)
 *     MiInsertPossiblyBadPage @ 0x1403C65E0 (MiInsertPossiblyBadPage.c)
 *     MiSwapStackPage @ 0x140415804 (MiSwapStackPage.c)
 *     MiDeleteUltraMapContext @ 0x1404655E0 (MiDeleteUltraMapContext.c)
 *     MiFinalizeImageHeaderPage @ 0x1404C7B8C (MiFinalizeImageHeaderPage.c)
 *     MiPrivateFixup @ 0x14051D784 (MiPrivateFixup.c)
 *     MiProtectDriverSectionPte @ 0x1406E5D50 (MiProtectDriverSectionPte.c)
 * Callees:
 *     MiSearchChannelTable @ 0x1402CBEE8 (MiSearchChannelTable.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
  v3 = dword_140E2D684;
  if ( dword_140E2D680 > (unsigned int)dword_140E2D684
    || (v4 = (char *)qword_140E2D6E0 + 16 * dword_140E2D680, BugCheckParameter2 < *(_QWORD *)v4)
    || dword_140E2D680 != dword_140E2D684 && BugCheckParameter2 >= *((_QWORD *)v4 + 2) )
  {
    for ( i = 0; ; i = v11 + 1 )
    {
      while ( 1 )
      {
        if ( v3 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, 0LL, 0LL);
        v11 = (i + v3) >> 1;
        v4 = (char *)qword_140E2D6E0 + 16 * v11;
        if ( BugCheckParameter2 >= *(_QWORD *)v4 )
          break;
        if ( !v11 )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, (ULONG_PTR)qword_140E2D6E0, 0LL);
        v3 = v11 - 1;
      }
      if ( v11 == dword_140E2D684 || BugCheckParameter2 < *((_QWORD *)v4 + 2) )
        break;
    }
    dword_140E2D680 = (i + v3) >> 1;
  }
  v5 = *((_DWORD *)v4 + 2);
  if ( qword_140E2D6E8 )
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
  v8 = (unsigned __int8)(BugCheckParameter2 / MiPageSizes[v7] % (unsigned int)dword_140E2D780[v7]) | (*(_DWORD *)(v2 + 32) >> 4) & 0xC0000 | ((v6 & 1 | (2 * (v5 & 0x3F | ((v7 & 3) << 7)))) << 8);
  if ( v7 != 3 && BugCheckParameter2 < 0x100000 )
    v8 |= 0x8000u;
  return v8;
}
