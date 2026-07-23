/*
 * XREFs of MiEnableLargeSubsection @ 0x1406FE68C
 * Callers:
 *     MiIncrementLargeSubsections @ 0x1406FF0D4 (MiIncrementLargeSubsections.c)
 * Callees:
 *     MiLockLeafPage @ 0x140298370 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiLockProtoPoolPageForce @ 0x1403A2E40 (MiLockProtoPoolPageForce.c)
 */

__int64 __fastcall MiEnableLargeSubsection(__int64 a1)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // r15
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r14
  unsigned __int8 v7; // di
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  ULONG_PTR v10; // rax
  unsigned __int64 v11; // rcx
  ULONG_PTR v12; // rbp
  unsigned __int8 v14; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = v1 + 8LL * *(unsigned int *)(a1 + 44);
  ValidPte = MiMakeValidPte(v1, -1LL, (*(_DWORD *)(a1 + 32) >> 1) & 0x1F);
  v6 = 0LL;
  v7 = 17;
  v14 = 17;
  v8 = ValidPte;
  if ( v1 < v2 )
  {
    do
    {
      if ( (v1 & 0xFFF) == 0 || v7 == 17 )
      {
        if ( v7 != 17 )
        {
          LOBYTE(v4) = v7;
          MiUnlockProtoPoolPage(v6, v4, v5);
        }
        v9 = MiLockProtoPoolPageForce(v1, &v14);
        v7 = v14;
        v6 = v9;
      }
      v10 = MiLockLeafPage((unsigned __int64 *)v1, 0);
      v11 = *(_QWORD *)v1;
      v12 = v10;
      if ( (*(_QWORD *)v1 & 1) == 0 )
      {
        if ( qword_140E2D8C0 )
        {
          if ( (v11 & 0x10) != 0 )
            v11 &= ~0x10uLL;
          else
            v11 &= qword_140E2D8C8;
        }
        v8 = v11 ^ (v11 ^ v8) & 0xFFF0000000000FFFuLL;
        *(_QWORD *)v1 = v8;
        *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
        MiUnlinkPageFromListEx(v10, 0);
        *(_DWORD *)(v12 + 32) = *(_DWORD *)(v12 + 32) & 0xFFF8FFFF | 0x60000;
        *(_DWORD *)(v12 + 32) = (*(_DWORD *)(v12 + 32) + 1) ^ (*(_DWORD *)(v12 + 32) ^ (*(_DWORD *)(v12 + 32) + 1)) & 0xFFFF0000;
      }
      v4 = (*(_QWORD *)(v12 + 24) + 1LL) ^ (*(_QWORD *)(v12 + 24) ^ (*(_QWORD *)(v12 + 24) + 1LL)) & 0xC000000000000000uLL;
      *(_QWORD *)(v12 + 24) = v4;
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v1 += 8LL;
      if ( (v1 & 0x1F8) == 0 && KeShouldYieldProcessor() )
      {
        LOBYTE(v4) = v7;
        MiUnlockProtoPoolPage(v6, v4, v5);
        v7 = 17;
        v14 = 17;
      }
    }
    while ( v1 < v2 );
    if ( v7 != 17 )
    {
      LOBYTE(v4) = v7;
      MiUnlockProtoPoolPage(v6, v4, v5);
    }
  }
  return 1LL;
}
