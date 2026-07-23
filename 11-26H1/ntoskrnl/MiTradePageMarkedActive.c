/*
 * XREFs of MiTradePageMarkedActive @ 0x140292720
 * Callers:
 *     MiTradePage @ 0x140290ED0 (MiTradePage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiInitializePageTradePacket @ 0x140292A70 (MiInitializePageTradePacket.c)
 *     MiMakeTradeVaReadOnly @ 0x140292D94 (MiMakeTradeVaReadOnly.c)
 *     MiCopyTradePageMetaData @ 0x140292E3C (MiCopyTradePageMetaData.c)
 *     MiTradeForLeafPage @ 0x140293044 (MiTradeForLeafPage.c)
 *     MiUnlockStealVm @ 0x140294270 (MiUnlockStealVm.c)
 *     MiGetPageToTrade @ 0x140294740 (MiGetPageToTrade.c)
 *     MiLockTargetPageForTrade @ 0x1402948C0 (MiLockTargetPageForTrade.c)
 *     MiTradePageWritePte @ 0x14029EE3C (MiTradePageWritePte.c)
 *     MiReturnFreeZeroPage @ 0x1402A9A90 (MiReturnFreeZeroPage.c)
 *     MiTradeForPageTablePage @ 0x14033D4EC (MiTradeForPageTablePage.c)
 *     MiPfnIsActivePageTable @ 0x1403A9508 (MiPfnIsActivePageTable.c)
 *     MiRevertPfnActivePageTable @ 0x140462130 (MiRevertPfnActivePageTable.c)
 *     MiTradePageReleaseLocks @ 0x140468FDC (MiTradePageReleaseLocks.c)
 *     MiUpdateTradePagePreCopy @ 0x140480A80 (MiUpdateTradePagePreCopy.c)
 *     MiTrimPoisonedPage @ 0x14070488C (MiTrimPoisonedPage.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiTradePageMarkedActive(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 result; // rax
  unsigned int PageToTrade; // ebx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // eax
  unsigned int v15; // edi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  int v23[4]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v24[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh]
  char v26[8]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v27; // [rsp+40h] [rbp-C0h]
  int v28; // [rsp+68h] [rbp-98h]
  _QWORD *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+D0h] [rbp-30h]
  int v31; // [rsp+100h] [rbp+0h]
  __int64 v32; // [rsp+128h] [rbp+28h]
  __int64 v33; // [rsp+130h] [rbp+30h]
  __int64 v34; // [rsp+138h] [rbp+38h]

  v25 = 0;
  memset_0(v24, 0, 0x11CuLL);
  v6 = *a1;
  *((_DWORD *)a1 + 14) = 1;
  v7 = 48 * v6 - 0x220000000000LL;
  result = MiInitializePageTradePacket(v24, a1, a2, a3);
  if ( (_DWORD)result )
    return result;
  if ( *(int *)(v7 + 32) < 0 )
  {
    PageToTrade = MiTrimPoisonedPage(v24);
  }
  else
  {
    PageToTrade = MiGetPageToTrade(v24);
    if ( !PageToTrade )
    {
      if ( v34 == v33 )
      {
        v34 = 0LL;
        PageToTrade = 0;
        v30 = 0LL;
        v15 = 0;
        goto LABEL_16;
      }
      PageToTrade = MiLockTargetPageForTrade(v24);
      if ( !PageToTrade )
      {
        MiMakeTradeVaReadOnly(v24);
        v10 = v31;
        if ( v31 == 1 )
        {
          if ( (v27 & 4) != 0 )
            v10 = 2;
          v31 = v10;
        }
        PageToTrade = MiCopyTradePageMetaData(v24);
        if ( !PageToTrade )
        {
          if ( (MiUpdateTradePagePreCopy(v24), v13 = v27, v28 == 3) && (v27 & 4) != 0
            || (LOBYTE(v13) = v27 & 0xA, !v31) && (_BYTE)v13 == 8 )
          {
            v14 = MiTradeForPageTablePage(v24);
          }
          else
          {
            v14 = MiTradeForLeafPage(v24, v11, v12, v13);
          }
          PageToTrade = v14;
          if ( !v14 )
          {
            PageToTrade = MiTradePageWritePte(v24);
            v15 = PageToTrade;
            if ( !PageToTrade )
            {
              MiTradePageReleaseLocks(v24);
              goto LABEL_16;
            }
          }
        }
      }
    }
  }
  v15 = PageToTrade;
  if ( PageToTrade )
    v30 = v34;
LABEL_16:
  v16 = v30;
  if ( v30 )
  {
    if ( (unsigned int)MiPfnIsActivePageTable(v30) )
      MiRevertPfnActivePageTable(v16);
    v23[0] = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(v23);
      while ( *(__int64 *)(v16 + 24) < 0 );
    }
    *(_DWORD *)(v16 + 32) = *(_DWORD *)(v16 + 32) & 0xFFF8FFFF | 0x50000;
    if ( (v24[0] & 2) != 0 )
    {
      v20 = *(_QWORD *)(v16 + 16);
      v21 = v20 ? v20 & 0xFFFFFFFFFFFFFC1FuLL | 0x80 : MiMakeDemandZeroPte(4);
      *(_QWORD *)(v16 + 16) = v21;
      if ( (v24[0] & 4) != 0 && v16 == v34 )
        MiReturnFreeZeroPage(v16, 4096LL, v19);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v24[0] & 4) != 0 )
    {
      v22 = v30;
      if ( v16 == v34 )
        v22 = 0LL;
      v30 = v22;
    }
  }
  if ( !PageToTrade )
  {
    if ( v29 )
      *v29 = v32;
    _InterlockedIncrement(&dword_140EF8FE4);
    goto LABEL_21;
  }
  if ( (*(_BYTE *)(v33 + 34) & 7) == 6 )
  {
    if ( PageToTrade != 2 )
      goto LABEL_21;
  }
  else
  {
    v15 = 2;
  }
  if ( (*(_QWORD *)(v33 + 24) & 0x4000000000000000LL) != 0 )
    v15 = 1;
  else
    _InterlockedIncrement(&dword_140EF8FE8);
LABEL_21:
  MiUnlockStealVm(v26);
  if ( v30 )
    MiReleaseFreshPage(v30, v17, v18);
  return v15;
}
