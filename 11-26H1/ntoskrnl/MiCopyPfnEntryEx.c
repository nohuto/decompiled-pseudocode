/*
 * XREFs of MiCopyPfnEntryEx @ 0x140293AD0
 * Callers:
 *     MiCopyTradePageMetaData @ 0x140292E3C (MiCopyTradePageMetaData.c)
 *     MiReplaceTransitionPageInitializeTargetPfn @ 0x140293340 (MiReplaceTransitionPageInitializeTargetPfn.c)
 *     MiTradeActivePage @ 0x140294DF8 (MiTradeActivePage.c)
 *     MiSwapNumaStandbyPage @ 0x1402AAAF0 (MiSwapNumaStandbyPage.c)
 *     MiMigratePfn @ 0x1402D8A10 (MiMigratePfn.c)
 *     MiCombineInitialFinish @ 0x1402EC334 (MiCombineInitialFinish.c)
 *     MiSwapHardFaultPage @ 0x14031ED1C (MiSwapHardFaultPage.c)
 *     MiReplacePageTablePage @ 0x14033E3DC (MiReplacePageTablePage.c)
 *     MiTradeStackPageFast @ 0x14040A528 (MiTradeStackPageFast.c)
 *     MiSwitchKstackPages @ 0x140532FD0 (MiSwitchKstackPages.c)
 *     MiTradeBootImagePage @ 0x140D071EC (MiTradeBootImagePage.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 */

char __fastcall MiCopyPfnEntryEx(__m128i *a1, const __m128i *a2, char a3)
{
  __m128i *v3; // r9
  char v4; // r11
  __m128i v6; // xmm1
  __int64 v7; // rdx
  signed __int64 v8; // rax
  signed __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  char v13; // al
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  _KPROCESS *Process; // r10
  unsigned __int64 KernelWaitTime; // r11
  __int64 v21; // r8
  unsigned __int64 v22; // rcx
  __m128i v24; // [rsp+20h] [rbp-30h] BYREF
  __m128i v25; // [rsp+30h] [rbp-20h] BYREF
  __m128i v26; // [rsp+40h] [rbp-10h] BYREF

  v3 = a1;
  v4 = a3;
  v24 = _mm_loadu_si128(a2);
  v25 = _mm_loadu_si128(a2 + 1);
  v6 = _mm_loadu_si128(a2 + 2);
  v26 = v6;
  v26.m128i_i8[3] = (((a1[2].m128i_i32[0] & 0x40000000) != 0) << 6) | v6.m128i_i8[3] & 0x3F;
  if ( (((unsigned __int64)v6.m128i_i64[1] >> 60) & 7) == 3 )
  {
    v7 = v26.m128i_i64[1];
    v8 = _InterlockedCompareExchange64(&v26.m128i_i64[1], v26.m128i_i64[1] & 0x8FFFFFFFFFFFFFFFuLL, v26.m128i_i64[1]);
    if ( v7 != v8 )
    {
      do
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange64(&v26.m128i_i64[1], v8 & 0x8FFFFFFFFFFFFFFFuLL, v8);
      }
      while ( v9 != v8 );
    }
  }
  v26.m128i_i32[0] = a1[2].m128i_i32[0] & 0xFFC00000 ^ (v26.m128i_i32[0] ^ a1[2].m128i_i32[0] & 0xFFC00000) & 0xFF3FFFFF;
  v26.m128i_i64[1] = ((unsigned __int64)(unsigned __int16)((unsigned __int64)a1[2].m128i_i64[1] >> 43) << 43) ^ (v26.m128i_i64[1] ^ ((unsigned __int64)(unsigned __int16)((unsigned __int64)a1[2].m128i_i64[1] >> 43) << 43)) & 0xFFE007FFFFFFFFFFuLL;
  if ( (((unsigned __int16)((unsigned __int64)a1[2].m128i_i64[1] >> 43) ^ (unsigned __int16)((unsigned __int64)a2[2].m128i_i64[1] >> 43)) & 0x3FF) != 0
    && (*(_DWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * (((unsigned __int64)a1[2].m128i_i64[1] >> 43) & 0x3FF))
                  + 4LL) & 0x20) == 0
    && (*(_DWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * (((unsigned __int64)a2[2].m128i_i64[1] >> 43) & 0x3FF))
                  + 4LL) & 0x20) == 0
    && (a2[1].m128i_i32[0] & 0x400LL) == 0 )
  {
    v25.m128i_i64[0] = MiUpdatePageFileHighInPte(v25.m128i_i64[0], 0) & 0xFFFFFFFFFFFF0FFFuLL;
  }
  LOBYTE(v10) = v26.m128i_i8[2] & 7;
  if ( (v26.m128i_i8[2] & 7) != 6 )
  {
    LOBYTE(v10) = -1;
    v25.m128i_i64[1] = v3[1].m128i_i64[1] & 0xF800000000000000uLL ^ (v25.m128i_i64[1] ^ v3[1].m128i_i64[1] & 0xF800000000000000uLL) & 0xC7FFFFFFFFFFFFFFuLL;
  }
  if ( (v4 & 4) == 0 )
  {
    if ( (v26.m128i_i32[0] & 0x70000) != 0x60000
      || v26.m128i_i64[1] < 0
      || (v11 = v24.m128i_i64[1] | 0x8000000000000000uLL,
          (v24.m128i_i64[1] | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL)
      || v11 > 0xFFFFF6FFFFFFFFFFuLL
      || (v12 = (__int64)(v11 << 25) >> 16, v12 < 0xFFFFF68000000000uLL)
      || v12 > 0xFFFFF6FFFFFFFFFFuLL
      || (LOBYTE(v10) = v26.m128i_i8[4], (v26.m128i_i32[1] & 0x4000000) == 0) )
    {
      v13 = v3[2].m128i_i8[2] & 7;
      if ( v13 && ((v13 - 1) & 0xFB) != 0 )
      {
        v22 = (unsigned __int64)v3[1].m128i_i64[0] >> 16;
        if ( (v3[1].m128i_i64[0] & 0x400) != 0 )
          v22 = (unsigned __int64)v3[1].m128i_i64[0] >> 2;
        v15 = v22 & 1;
      }
      else
      {
        v14 = v3[1].m128i_i64[0];
        if ( qword_140E2D8C0 && (v3[1].m128i_i64[0] & 0x10) == 0 )
          HIDWORD(v14) &= HIDWORD(qword_140E2D8C8);
        v15 = HIDWORD(v14) == -3;
      }
      v16 = v25.m128i_i64[0];
      if ( (unsigned __int64)&v25 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v25 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v18 = v25.m128i_i64[0];
        if ( (v25.m128i_i8[0] & 1) != 0
          && ((v25.m128i_i8[0] & 0x20) == 0 || (v25.m128i_i8[0] & 0x42) == 0)
          && (MiFlags & 0x1800000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 )
          {
            KernelWaitTime = Process[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v21 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)&v25 >> 3) & 0x1FF));
              if ( (v21 & 0x20) != 0 )
                v18 = v25.m128i_i64[0] | 0x20;
              v16 = v18 | 0x42;
              if ( (v21 & 0x42) == 0 )
                v16 = v18;
            }
          }
        }
      }
      if ( (v16 & 0x400) != 0 )
      {
        v17 = 4 * v15;
        v10 = v16 & 0xFFFFFFFFFFFFFFFBuLL;
      }
      else
      {
        v17 = v15 << 16;
        v10 = v16 & 0xFFFFFFFFFFFEFFFFuLL;
      }
      v25.m128i_i64[0] = v10 | v17;
    }
  }
  *v3 = _mm_loadu_si128(&v24);
  v3[1] = _mm_loadu_si128(&v25);
  v3[2] = _mm_loadu_si128(&v26);
  return v10;
}
