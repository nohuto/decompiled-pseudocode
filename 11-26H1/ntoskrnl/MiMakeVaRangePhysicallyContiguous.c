/*
 * XREFs of MiMakeVaRangePhysicallyContiguous @ 0x1407101BC
 * Callers:
 *     MiProcessVaContiguityInformation @ 0x1407104C0 (MiProcessVaContiguityInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiFreePageChain @ 0x140292004 (MiFreePageChain.c)
 *     MiReplaceTransitionPage @ 0x1402931E8 (MiReplaceTransitionPage.c)
 *     MiTradeActivePage @ 0x140294DF8 (MiTradeActivePage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140295200 (MiReleaseFreshPageAtDpc.c)
 *     MiReturnFreeZeroPage @ 0x1402A9A90 (MiReturnFreeZeroPage.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiGetNextPageTable @ 0x14031A080 (MiGetNextPageTable.c)
 *     MiWorkingSetIsContended @ 0x14031A300 (MiWorkingSetIsContended.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 *     MiUnlinkPageChainHead @ 0x140367C90 (MiUnlinkPageChainHead.c)
 *     MiCheckContiguityTradeEligible @ 0x140705118 (MiCheckContiguityTradeEligible.c)
 */

__int64 __fastcall MiMakeVaRangePhysicallyContiguous(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v5; // r14
  unsigned int v6; // edi
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  char v10; // r12
  unsigned __int64 NextPageTable; // rax
  const __m128i *v12; // rbx
  __m128i *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 DemandZeroPte; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  _QWORD v23[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24; // [rsp+40h] [rbp-38h]
  int v25; // [rsp+90h] [rbp+18h] BYREF

  v23[0] = a4;
  v24 = MiPageSizes[a3];
  v23[1] = a4 - 48 + 48 * v24;
  v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 0;
  v7 = ((((v24 << 12) + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0LL;
  v10 = MiLockWorkingSetShared(a1, a2, v24 << 12);
  while ( v5 <= v7 )
  {
    if ( v8 )
    {
      if ( (v5 & 0xFFF) != 0 )
        goto LABEL_8;
      MiUnlockPageTableInternal(a1, v8);
    }
    NextPageTable = MiGetNextPageTable(v5, v7, v10, 1, &v25);
    if ( !NextPageTable )
      goto LABEL_32;
    v8 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( NextPageTable != v5 )
      break;
LABEL_8:
    if ( (*(_QWORD *)v5 & 1) != 0 )
    {
      v12 = (const __m128i *)(48 * ((*(_QWORD *)v5 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    }
    else
    {
      if ( (*(_QWORD *)v5 & 0xC00LL) != 0x800 )
        break;
      v12 = (const __m128i *)MiLockTransitionLeafPageEx(v5, 0LL, 0);
      if ( !v12 )
        break;
    }
    if ( !MiCheckContiguityTradeEligible(v12) )
      break;
    v13 = (__m128i *)MiUnlinkPageChainHead((__int64)v23);
    if ( (v12[2].m128i_i8[2] & 7) == 6 )
    {
      MiTradeActivePage(v12, v13, (__int64)(v5 << 25) >> 16, 0, 0);
      v25 = 0;
      while ( _interlockedbittestandset64(&v12[1].m128i_i32[2], 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v25);
        while ( v12[1].m128i_i64[1] < 0 );
      }
    }
    else if ( !(unsigned int)MiReplaceTransitionPage((__int64)v12, (__int64)v13, 9LL, 0) )
    {
      _InterlockedAnd64(&v12[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      MiReleaseFreshPageAtDpc((__int64)v13, v14, v15);
      break;
    }
    v12[1].m128i_i64[0] = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v16 = v12[1].m128i_i64[0];
    if ( v16 )
      DemandZeroPte = v16 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    else
      DemandZeroPte = MiMakeDemandZeroPte(4);
    v12[1].m128i_i64[0] = DemandZeroPte;
    MiReturnFreeZeroPage((__int64)v12, 0);
    _InterlockedAnd64(&v12[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v5 & 0x78) == 0 && MiWorkingSetIsContended(a1, 0) || KeShouldYieldProcessor() )
    {
      if ( v8 )
      {
        MiUnlockPageTableInternal(a1, v8);
        v8 = 0LL;
      }
      LOBYTE(v9) = v10;
      MiUnlockWorkingSetShared(a1, v9);
      MiLockWorkingSetShared(a1, v18, v19);
    }
    v5 += 8LL;
  }
  if ( v8 )
    MiUnlockPageTableInternal(a1, v8);
LABEL_32:
  LOBYTE(v9) = v10;
  MiUnlockWorkingSetShared(a1, v9);
  if ( v24 )
  {
    MiFreePageChain((__int64)v23, v20, v21);
    return (unsigned int)-1073741823;
  }
  return v6;
}
