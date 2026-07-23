/*
 * XREFs of MiTradePageMarkedPoisoned @ 0x140512E38
 * Callers:
 *     MiTradePage @ 0x140290ED0 (MiTradePage.c)
 * Callees:
 *     MiReuseStandbyPage @ 0x1402A973C (MiReuseStandbyPage.c)
 *     MiReturnFreeZeroPage @ 0x1402A9A90 (MiReturnFreeZeroPage.c)
 *     MiAddMdlPageToTradeBlock @ 0x14046C0B0 (MiAddMdlPageToTradeBlock.c)
 */

char __fastcall MiTradePageMarkedPoisoned(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rbx
  __int64 v6; // rax

  v2 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 56) = 1;
  v5 = 48 * v2 - 0x220000000000LL;
  LODWORD(v6) = *(_DWORD *)(a1 + 12);
  if ( (_DWORD)v6 == 2 )
  {
    LODWORD(v6) = *(_DWORD *)(v5 + 32);
    if ( (_WORD)v6 )
    {
      _InterlockedAdd(&dword_140EF9120, 1u);
      *(_DWORD *)(a1 + 56) = 1;
LABEL_14:
      *(_BYTE *)(a1 + 9) = 1;
      return v6;
    }
    if ( (unsigned int)MiReuseStandbyPage(48 * v2 - 0x220000000000LL) )
    {
      *(_QWORD *)(a1 + 48) = 1LL;
      LOBYTE(v6) = MiAddMdlPageToTradeBlock(a2, v2);
      *(_DWORD *)(a1 + 56) = 0;
    }
    else
    {
      LOBYTE(v6) = MiReturnFreeZeroPage(48 * v2 - 0x220000000000LL, 0);
      _InterlockedAdd(&dword_140EF911C, 1u);
      *(_DWORD *)(a1 + 56) = 1;
      *(_BYTE *)(a1 + 9) = 1;
    }
  }
  else if ( (_DWORD)v6 != 6
         || (*(_BYTE *)(v5 + 34) & 0x10) != 0
         || (LODWORD(v6) = *(_DWORD *)(v5 + 32), (_WORD)v6 != 1)
         || (LOBYTE(v6) = (*(_QWORD *)(v5 + 40) >> 60) & 7, (_BYTE)v6 == 2)
         || (v6 = *(_QWORD *)v5, (*(_QWORD *)v5 & 1) == 0)
         || (LODWORD(v6) = *(_DWORD *)(v5 + 32), (v6 & 0x8000000) != 0) )
  {
    _InterlockedAdd(&dword_140EF9130, 1u);
    goto LABEL_14;
  }
  return v6;
}
