/*
 * XREFs of FsRtlpOplockPerfSummarizeData @ 0x140791EDC
 * Callers:
 *     FsRtlpOplockPerfSendData @ 0x140AEAF28 (FsRtlpOplockPerfSendData.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14043F380 (KiQueryUnbiasedInterruptTime.c)
 *     FsRtlpComputeLargeRatio @ 0x1405B98C4 (FsRtlpComputeLargeRatio.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     FsRtlpOplockPerfGetLatencyNsBucket @ 0x140791D20 (FsRtlpOplockPerfGetLatencyNsBucket.c)
 */

unsigned __int64 FsRtlpOplockPerfSummarizeData()
{
  __int64 v0; // rdi
  __int64 v1; // rsi
  __int64 v2; // rdx
  _OWORD *v3; // rax
  _OWORD *v4; // rcx
  __int128 v5; // xmm1
  __int64 v6; // rcx
  unsigned __int64 result; // rax
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int16 i; // cx
  _OWORD *v15; // rcx
  __int128 v16; // xmm1

  v0 = 0LL;
  if ( byte_140E65DC0 )
    memset_0(&word_140E65DF0, 0, 0x50uLL);
  v1 = 2LL;
  v2 = 2LL;
  v3 = **(_OWORD ***)g_OplockPerfData;
  v4 = (_OWORD *)g_OplockPerfSummaryContext;
  do
  {
    *v4 = *v3;
    v4[1] = v3[1];
    v4[2] = v3[2];
    v4[3] = v3[3];
    v4[4] = v3[4];
    v4[5] = v3[5];
    v4[6] = v3[6];
    v4 += 8;
    v5 = v3[7];
    v3 += 8;
    *(v4 - 1) = v5;
    --v2;
  }
  while ( v2 );
  v6 = *(_QWORD *)(*(_QWORD *)g_OplockPerfData + 16LL);
  *(_QWORD *)(*(_QWORD *)g_OplockPerfData + 16LL) = 0LL;
  qword_140E65E10 = FsRtlpComputeLargeRatio(v6, 1000000000LL, qword_140E65DA0);
  qword_140E65DB8 = KiQueryUnbiasedInterruptTime();
  qword_140E65E30 = qword_140E65DB8 - *(_QWORD *)(g_OplockPerfData + 8);
  result = 0x624DD2F1A9FBE77LL * (qword_140E65E30 / 0xAuLL);
  qword_140E65E38 = qword_140E65E30 / 0xAuLL / 0x3E8;
  if ( byte_140E65DC0 )
  {
    *(_QWORD *)(g_OplockPerfData + 8) = qword_140E65DB8;
    v8 = 16LL;
    v9 = 0LL;
    do
    {
      v10 = *(_QWORD *)(*(_QWORD *)g_OplockPerfData + 8LL);
      v11 = *(_QWORD *)(v9 + g_OplockPerfSummaryContext) - *(_QWORD *)(v10 + v9);
      v12 = FsRtlpComputeLargeRatio(
              *(_QWORD *)(v9 + g_OplockPerfSummaryContext + 8) - *(_QWORD *)(v10 + v9 + 8),
              1000000000LL,
              qword_140E65DA0);
      v9 += 16LL;
      *(_QWORD *)(xmmword_140E65DD0 + 8LL * (unsigned __int16)word_140E65DF0) = v11;
      qword_140E65DF8 += v11;
      ++word_140E65DF0;
      *(_QWORD *)(*((_QWORD *)&xmmword_140E65DD0 + 1) + 8LL * (unsigned __int16)word_140E65DF2) = v12;
      qword_140E65E00 += v12;
      ++word_140E65DF2;
      --v8;
    }
    while ( v8 );
    v13 = 0LL;
    for ( i = 0; i < 0x10u; ++i )
    {
      v13 += *(_QWORD *)(xmmword_140E65DD0 + 8LL * i);
      if ( v13 >= qword_140E65DF8 / 2 )
      {
        qword_140E65E28 = qword_140E65D20[i];
        break;
      }
    }
    if ( qword_140E65DF8 <= 0 )
    {
      qword_140E65E08 = 0LL;
    }
    else
    {
      v0 = qword_140E65E00 / qword_140E65DF8;
      qword_140E65E08 = qword_140E65E00 / qword_140E65DF8;
    }
    qword_140E65E20 = FsRtlpOplockPerfGetLatencyNsBucket(v0);
    qword_140E65E18 = FsRtlpOplockPerfGetLatencyNsBucket(qword_140E65E10);
    result = *(_QWORD *)(*(_QWORD *)g_OplockPerfData + 8LL);
    v15 = (_OWORD *)g_OplockPerfSummaryContext;
    do
    {
      *(_OWORD *)result = *v15;
      *(_OWORD *)(result + 16) = v15[1];
      *(_OWORD *)(result + 32) = v15[2];
      *(_OWORD *)(result + 48) = v15[3];
      *(_OWORD *)(result + 64) = v15[4];
      *(_OWORD *)(result + 80) = v15[5];
      *(_OWORD *)(result + 96) = v15[6];
      result += 128LL;
      v16 = v15[7];
      v15 += 8;
      *(_OWORD *)(result - 16) = v16;
      --v1;
    }
    while ( v1 );
  }
  return result;
}
