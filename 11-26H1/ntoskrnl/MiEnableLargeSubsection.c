/*
 * XREFs of MiEnableLargeSubsection @ 0x1406F99BC
 * Callers:
 *     MiIncrementLargeSubsections @ 0x1406FA404 (MiIncrementLargeSubsections.c)
 * Callees:
 *     MiLockLeafPage @ 0x140298E10 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     KeShouldYieldProcessor @ 0x1402D49D0 (KeShouldYieldProcessor.c)
 *     MiMakeValidPte @ 0x1402DA020 (MiMakeValidPte.c)
 *     MiUnlinkPageFromListEx @ 0x1402F7250 (MiUnlinkPageFromListEx.c)
 *     MiLockProtoPoolPageForce @ 0x1403A10E0 (MiLockProtoPoolPageForce.c)
 */

__int64 __fastcall MiEnableLargeSubsection(__int64 a1)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // r15
  unsigned __int64 ValidPte; // rax
  __int64 v4; // r14
  unsigned __int8 v5; // di
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  ULONG_PTR v8; // rax
  unsigned __int64 v9; // rcx
  ULONG_PTR v10; // rbp
  unsigned __int8 v12; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = v1 + 8LL * *(unsigned int *)(a1 + 44);
  ValidPte = MiMakeValidPte(v1, -1LL, (*(_DWORD *)(a1 + 32) >> 1) & 0x1F);
  v4 = 0LL;
  v5 = 17;
  v12 = 17;
  v6 = ValidPte;
  if ( v1 < v2 )
  {
    do
    {
      if ( (v1 & 0xFFF) == 0 || v5 == 17 )
      {
        if ( v5 != 17 )
          MiUnlockProtoPoolPage(v4, v5);
        v7 = MiLockProtoPoolPageForce(v1, &v12);
        v5 = v12;
        v4 = v7;
      }
      v8 = MiLockLeafPage((unsigned __int64 *)v1, 0);
      v9 = *(_QWORD *)v1;
      v10 = v8;
      if ( (*(_QWORD *)v1 & 1) == 0 )
      {
        if ( qword_140E2D740 )
        {
          if ( (v9 & 0x10) != 0 )
            v9 &= ~0x10uLL;
          else
            v9 &= qword_140E2D748;
        }
        v6 = v9 ^ (v9 ^ v6) & 0xFFF0000000000FFFuLL;
        *(_QWORD *)v1 = v6;
        *(_QWORD *)(v8 + 24) &= 0xC000000000000000uLL;
        MiUnlinkPageFromListEx(v8, 0);
        *(_DWORD *)(v10 + 32) = *(_DWORD *)(v10 + 32) & 0xFFF8FFFF | 0x60000;
        *(_DWORD *)(v10 + 32) = (*(_DWORD *)(v10 + 32) + 1) ^ (*(_DWORD *)(v10 + 32) ^ (*(_DWORD *)(v10 + 32) + 1)) & 0xFFFF0000;
      }
      *(_QWORD *)(v10 + 24) = (*(_QWORD *)(v10 + 24) + 1LL) ^ (*(_QWORD *)(v10 + 24) ^ (*(_QWORD *)(v10 + 24) + 1LL)) & 0xC000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v1 += 8LL;
      if ( (v1 & 0x1F8) == 0 && KeShouldYieldProcessor() )
      {
        MiUnlockProtoPoolPage(v4, v5);
        v5 = 17;
        v12 = 17;
      }
    }
    while ( v1 < v2 );
    if ( v5 != 17 )
      MiUnlockProtoPoolPage(v4, v5);
  }
  return 1LL;
}
