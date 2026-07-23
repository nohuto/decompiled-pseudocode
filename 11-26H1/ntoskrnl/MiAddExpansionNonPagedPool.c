/*
 * XREFs of MiAddExpansionNonPagedPool @ 0x140523104
 * Callers:
 *     MiFreeLargeInitializationCodePages @ 0x140522D3C (MiFreeLargeInitializationCodePages.c)
 *     MiInitializeNonPagedPool @ 0x140CFFF28 (MiInitializeNonPagedPool.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiClearPfnReuseFields @ 0x14031C280 (MiClearPfnReuseFields.c)
 *     MiInsertPageChainHead @ 0x14033C0E0 (MiInsertPageChainHead.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 *     MiReturnPhysicalPoolPages @ 0x140520550 (MiReturnPhysicalPoolPages.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall MiAddExpansionNonPagedPool(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned __int64 DemandZeroPte; // rsi
  __int64 v4; // rdx
  __int64 v5; // rbp
  int v6; // edi
  _DWORD *v7; // r15
  int v8; // edx
  int v9; // ebx
  unsigned __int8 CurrentIrql; // bl
  __int128 v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]
  int v13; // [rsp+78h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 )
  {
    DemandZeroPte = MiMakeDemandZeroPte(4);
    v5 = 48 * v4 - 0x220000000000LL;
    v11 = 0LL;
    v12 = 0LL;
    v6 = -1;
    v7 = (_DWORD *)(v5 + 32);
    do
    {
      v9 = MiPageToNode((v5 + 0x220000000000LL) / 48);
      if ( v6 != v9 )
      {
        MiReturnPhysicalPoolPages(0LL, (__int64)&v11);
        v6 = v9;
      }
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v8) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v8);
      }
      v13 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v13);
        while ( *(__int64 *)(v5 + 24) < 0 );
      }
      MiClearPfnReuseFields(v5);
      *(_DWORD *)(v5 + 32) = *v7 & 0xFFFF0000;
      *(_QWORD *)(v5 + 24) &= 0xC000000000000000uLL;
      *(_QWORD *)(v5 + 16) = DemandZeroPte;
      MiSetPfnIdentity(v5, 0);
      *(_DWORD *)(v5 + 32) |= 0x10000000u;
      MiSetPfnContainingFrame(v5, 0LL);
      if ( (*(_DWORD *)(v5 + 32) & 0xC00000) != 0x400000 )
        MiChangePageAttribute(v5, 1u);
      *(_QWORD *)(v5 + 8) = -8LL;
      *(_DWORD *)(v5 + 32) = *(_DWORD *)(v5 + 32) & 0xFFF8FFFF | 0x50000;
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      MiInsertPageChainHead((__int64 *)&v11, (__int64 *)v5);
      v5 += 48LL;
      v7 += 12;
      --v2;
    }
    while ( v2 );
    MiReturnPhysicalPoolPages(0LL, (__int64)&v11);
  }
}
