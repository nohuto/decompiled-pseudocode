/*
 * XREFs of MiTradePageWritePte @ 0x14029EE3C
 * Callers:
 *     MiTradePageMarkedActive @ 0x140292720 (MiTradePageMarkedActive.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiWriteValidPteNewPage @ 0x14029F1C0 (MiWriteValidPteNewPage.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 *     MiTransformValidPteInPlace @ 0x1403444D8 (MiTransformValidPteInPlace.c)
 */

__int64 __fastcall MiTradePageWritePte(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdx
  int v5; // eax
  unsigned __int64 *v6; // r10
  __int64 v7; // rcx
  __int64 HasShadow; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v15; // r9
  int v16; // eax
  unsigned __int64 *v17; // r8
  unsigned __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rdx
  int v22; // ecx
  unsigned __int64 *v23; // r10
  __int64 v24; // rdi
  signed __int64 v25; // rax
  char v26; // cl
  __int64 v27; // rdx
  unsigned int v28; // eax
  int v29; // eax
  __int64 v30; // rdi
  unsigned __int64 v31; // [rsp+40h] [rbp+8h] BYREF

  v4 = (*(_QWORD *)(a1 + 248) << 12) ^ (*(_QWORD *)(a1 + 272) ^ (*(_QWORD *)(a1 + 248) << 12)) & 0xFFF0000000000FFFuLL;
  *(_QWORD *)(a1 + 280) = v4;
  v5 = *(_DWORD *)(a1 + 16);
  if ( (v5 & 0x20) != 0 )
  {
    v24 = *(_QWORD *)(a1 + 264);
    *(_QWORD *)(a1 + 280) = v4 | 0x20;
    LODWORD(v31) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v31);
      while ( *(__int64 *)(v24 + 24) < 0 );
    }
    if ( (MiFlags & 0x8000000) != 0 )
      _mm_lfence();
    v25 = _InterlockedCompareExchange64(
            *(volatile signed __int64 **)(a1 + 192),
            *(_QWORD *)(a1 + 280),
            *(_QWORD *)(a1 + 272));
    if ( *(_QWORD *)(a1 + 272) == v25 )
    {
      v26 = 1;
    }
    else
    {
      v26 = 0;
      *(_QWORD *)(a1 + 272) = v25;
    }
    v27 = *(_QWORD *)(a1 + 264);
    if ( !v26 )
    {
      *(_DWORD *)(v27 + 32) = *(_DWORD *)(v27 + 32) & 0xFFF8FFFF | 0x50000;
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 264) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 256) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      return 1LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_DWORD *)a1 |= 1u;
    *(_DWORD *)(*(_QWORD *)(a1 + 256) + 32LL) = *(_DWORD *)(*(_QWORD *)(a1 + 256) + 32LL) & 0xFFF8FFFF | 0x50000;
  }
  else if ( (v5 & 0x200) == 0 )
  {
    if ( (v5 & 0x40) != 0 )
    {
      v6 = *(unsigned __int64 **)(a1 + 192);
      v7 = 0LL;
      v31 = v4;
      if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v28 = MiSanitizeShadowPxe(0LL, &v31, a3);
        v4 = v31;
        v7 = v28;
      }
      *v6 = v4;
      if ( (_DWORD)v7 )
      {
        HasShadow = MiPteHasShadow(v7, v4, a3);
        if ( HasShadow )
        {
          v11 = *(_QWORD *)(HasShadow + 1288);
          if ( v11 )
          {
            v12 = (v10 >> 3) & 0x1FF;
            if ( (v9 & 1) != 0 )
              v13 = v9 & 0x7FFFFFFFFFFFFFFFLL;
            else
              v13 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
            *(_QWORD *)(v11 + 8 * v12) = v13;
          }
        }
      }
    }
    else
    {
      if ( (v5 & 0x100) == 0 && (v5 & 0x50) == 0x10 )
      {
        v30 = *(_QWORD *)(a1 + 264);
        LODWORD(v31) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v31);
          while ( *(__int64 *)(v30 + 24) < 0 );
        }
      }
      v15 = *(_QWORD *)(a1 + 280);
      if ( (v15 & 0x800) != 0 )
      {
        v16 = *(_DWORD *)(a1 + 16);
        if ( (v16 & 0x100) != 0 )
        {
          MiTransformValidPteInPlace(*(_QWORD *)(a1 + 192), 0);
        }
        else
        {
          v17 = *(unsigned __int64 **)(a1 + 192);
          v18 = v15 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
          if ( (v16 & 1) != 0 )
            *v17 = v18;
          else
            MiRewritePteWithLockBit(*(_QWORD *)(a1 + 200), *(_BYTE *)(a1 + 45) & 1, (unsigned __int64)v17, v18);
          MiFlushSingleTbEntry(*(_QWORD *)(a1 + 176), *(unsigned int *)(a1 + 208));
          v21 = *(_QWORD *)(a1 + 280);
          v22 = 0;
          v23 = *(unsigned __int64 **)(a1 + 192);
          v31 = v21;
          if ( (unsigned __int64)v23 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v23 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            v29 = MiSanitizeShadowPxe(0LL, &v31, v19);
            v21 = v31;
            v22 = v29;
          }
          *v23 = v21;
          if ( v22 )
            MiWritePteShadow(v23, v21, v19, v20);
        }
        *(_DWORD *)a1 |= 1u;
      }
      else
      {
        MiWriteValidPteNewPage(*(_QWORD *)(a1 + 192), *(_QWORD *)(a1 + 280), 0LL);
      }
    }
  }
  if ( (*(_DWORD *)a1 & 1) == 0 )
    MiFlushSingleTbEntry(*(_QWORD *)(a1 + 176), *(unsigned int *)(a1 + 208));
  return 0LL;
}
