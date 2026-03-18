/*
 * XREFs of VidSchQueryVidPnSourceStatistics @ 0x140056C20
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?GetVSyncTimeCounters@DXGADAPTER@@QEAAXIW4VSYNC_TIME_STATS_TYPE@@PEAUVSYNC_TIME_COUNTERS@@@Z @ 0x14002F018 (-GetVSyncTimeCounters@DXGADAPTER@@QEAAXIW4VSYNC_TIME_STATS_TYPE@@PEAUVSYNC_TIME_COUNTERS@@@Z.c)
 *     CopyVidPnSourceStatistics @ 0x1400C1C98 (CopyVidPnSourceStatistics.c)
 */

__int64 __fastcall VidSchQueryVidPnSourceStatistics(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // eax
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v9; // r8
  __int64 v10; // r10
  __int64 v11; // rax
  __int64 v12; // rcx
  __m128i *v13; // rax
  __m128i v14; // xmm1
  __int64 v15; // rcx
  __int64 v16; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+58h] [rbp-28h]
  __int64 v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+78h] [rbp-8h]

  v3 = *(_DWORD *)(a1 + 48);
  v6 = a2;
  if ( a2 < v3 )
  {
    CopyVidPnSourceStatistics(a3, *(_QWORD *)(a1 + 8LL * a2 + 6728));
    v11 = v10 + a1;
    if ( !*(_BYTE *)(a1 + 2500) )
      v11 = a1;
    *(_QWORD *)(v9 + 16) = *(unsigned __int8 *)(v11 + 2096);
    v12 = *(_QWORD *)(a1 + 16);
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    DXGADAPTER::GetVSyncTimeCounters(v12, v10, 0, (__int64)&v16);
    if ( *(_BYTE *)(a1 + 67) )
    {
      _mm_lfence();
      v13 = *(__m128i **)(a1 + 8 * v6 + 3448);
      v14 = v13[4917];
      v15 = v13[4917].m128i_i64[0];
      v19 = v13[4918].m128i_i64[0];
      a3[3] = v16 + v15;
      a3[4] = v17 + _mm_srli_si128(v14, 8).m128i_u64[0];
      a3[5] = v19 + v18;
    }
    else
    {
      a3[3] = v16;
      a3[4] = v17;
      a3[5] = v18;
    }
    CopyVidPnSourceStatistics(
      a3 + 10,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(g_pVidSchSystemProcess + 32) + 8LL * *(unsigned int *)(a1 + 4)) + 8 * v6 + 88));
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(1LL, a2, v3);
    WdLogGlobalForLineNumber = 12623;
    DxgkLogInternalTriageEvent(v7, 0x40000LL);
    return 3221225485LL;
  }
}
