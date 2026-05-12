/*
 * XREFs of StorpInitializePerfTelemetry @ 0x1400B7744
 * Callers:
 *     StorpRegisterTraceLogging @ 0x14019020C (StorpRegisterTraceLogging.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorpUninitializePerfTelemetry @ 0x1400C44E0 (StorpUninitializePerfTelemetry.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 StorpInitializePerfTelemetry()
{
  __int64 v0; // rsi
  ULONG RecommendedSharedDataAlignment; // edi
  int v2; // ebx
  ULONG v3; // edi
  int v4; // ebx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  ULONG v15; // ebx
  ULONG v16; // eax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+20h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  memset_0(&TelemetryPerfContext, 0, 0xB8uLL);
  TelemetryPerfContext = 917506LL;
  *(_OWORD *)&xmmword_140173070 = 0LL;
  v0 = 2LL;
  unk_140173048 = 28LL;
  xmmword_140173080 = 0LL;
  *(&xmmword_140173070 + 1) = (PVOID)0x1C0000000ALL;
  xmmword_140173050 = 0LL;
  qword_1401730B0 = 0xFC00000026LL;
  *(_OWORD *)&xmmword_1401730A0 = 0LL;
  *(_QWORD *)&xmmword_140173050 = 327682LL;
  *(_OWORD *)&xmmword_140173060 = 0LL;
  *(_QWORD *)&xmmword_140173080 = 0xE00090002LL;
  *(_OWORD *)&xmmword_140173090 = 0LL;
  *(&xmmword_1401730A0 + 1) = (PVOID)252;
  RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  v2 = 24 * qword_1401730B0;
  LODWORD(dword_1401730B8) = -RecommendedSharedDataAlignment & (KeGetRecommendedSharedDataAlignment() + v2 - 1);
  v3 = KeGetRecommendedSharedDataAlignment();
  v4 = 16 * HIDWORD(qword_1401730B0);
  LODWORD(dword_1401730BC) = -v3 & (KeGetRecommendedSharedDataAlignment() + v4 - 1);
  g_RaidNumberProcessors = KeQueryMaximumProcessorCountEx(0xFFFFu);
  LODWORD(Size) = dword_1401730B8 * g_RaidNumberProcessors;
  LODWORD(dword_1401730C4) = dword_1401730BC * g_RaidNumberProcessors;
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  qword_1401730C8 = PerformanceCounter.QuadPart;
  if ( (_WORD)TelemetryPerfContext )
  {
    P = (PVOID)RaidAllocatePool(72LL, 8LL * (unsigned __int16)TelemetryPerfContext, 1700028754LL, 0LL);
    if ( !P )
      goto LABEL_50;
  }
  else
  {
    P = 0LL;
  }
  if ( WORD1(TelemetryPerfContext) )
  {
    qword_140173030 = (PVOID)RaidAllocatePool(72LL, 8LL * WORD1(TelemetryPerfContext), 1700028754LL, 0LL);
    if ( !qword_140173030 )
      goto LABEL_50;
  }
  else
  {
    qword_140173030 = 0LL;
  }
  if ( WORD2(TelemetryPerfContext) )
  {
    qword_140173038 = (PVOID)RaidAllocatePool(72LL, 8LL * WORD2(TelemetryPerfContext), 1700028754LL, 0LL);
    if ( !qword_140173038 )
      goto LABEL_50;
  }
  else
  {
    qword_140173038 = 0LL;
  }
  if ( HIWORD(TelemetryPerfContext) )
  {
    qword_140173040 = (PVOID)RaidAllocatePool(72LL, 8LL * HIWORD(TelemetryPerfContext), 1700028754LL, 0LL);
    if ( !qword_140173040 )
      goto LABEL_50;
  }
  else
  {
    qword_140173040 = 0LL;
  }
  if ( (_WORD)xmmword_140173050 )
  {
    *((_QWORD *)&xmmword_140173050 + 1) = RaidAllocatePool(
                                            72LL,
                                            8LL * (unsigned __int16)xmmword_140173050,
                                            1700028754LL,
                                            0LL);
    if ( !*((_QWORD *)&xmmword_140173050 + 1) )
      goto LABEL_50;
  }
  else
  {
    *((_QWORD *)&xmmword_140173050 + 1) = 0LL;
  }
  if ( WORD1(xmmword_140173050) )
  {
    xmmword_140173060 = (PVOID)RaidAllocatePool(72LL, 8LL * WORD1(xmmword_140173050), 1700028754LL, 0LL);
    if ( !xmmword_140173060 )
      goto LABEL_50;
  }
  else
  {
    xmmword_140173060 = 0LL;
  }
  if ( WORD2(xmmword_140173050) )
  {
    *(&xmmword_140173060 + 1) = (PVOID)RaidAllocatePool(72LL, 8LL * WORD2(xmmword_140173050), 1700028754LL, 0LL);
    if ( !*(&xmmword_140173060 + 1) )
      goto LABEL_50;
  }
  else
  {
    *(&xmmword_140173060 + 1) = 0LL;
  }
  if ( WORD3(xmmword_140173050) )
  {
    xmmword_140173070 = (PVOID)RaidAllocatePool(72LL, 8LL * WORD3(xmmword_140173050), 1700028754LL, 0LL);
    if ( !xmmword_140173070 )
      goto LABEL_50;
  }
  else
  {
    xmmword_140173070 = 0LL;
  }
  if ( (_WORD)xmmword_140173080 )
  {
    *((_QWORD *)&xmmword_140173080 + 1) = RaidAllocatePool(
                                            72LL,
                                            8LL * (unsigned __int16)xmmword_140173080,
                                            1700028754LL,
                                            0LL);
    if ( !*((_QWORD *)&xmmword_140173080 + 1) )
      goto LABEL_50;
  }
  else
  {
    *((_QWORD *)&xmmword_140173080 + 1) = 0LL;
  }
  if ( WORD1(xmmword_140173080) )
  {
    xmmword_140173090 = (PVOID)RaidAllocatePool(72LL, 8LL * WORD1(xmmword_140173080), 1700028754LL, 0LL);
    if ( !xmmword_140173090 )
      goto LABEL_50;
  }
  else
  {
    xmmword_140173090 = 0LL;
  }
  if ( WORD2(xmmword_140173080) )
  {
    *(&xmmword_140173090 + 1) = (PVOID)RaidAllocatePool(72LL, 8LL * WORD2(xmmword_140173080), 1700028754LL, 0LL);
    if ( !*(&xmmword_140173090 + 1) )
      goto LABEL_50;
  }
  else
  {
    *(&xmmword_140173090 + 1) = 0LL;
  }
  if ( WORD3(xmmword_140173080) )
  {
    xmmword_1401730A0 = (PVOID)RaidAllocatePool(72LL, 8LL * WORD3(xmmword_140173080), 1700028754LL, 0LL);
    if ( !xmmword_1401730A0 )
    {
LABEL_50:
      v6 = -1073741801;
      StorpUninitializePerfTelemetry();
      g_StorpTraceLoggingPerformanceEnabled = 0;
      return v6;
    }
  }
  else
  {
    xmmword_1401730A0 = 0LL;
  }
  v7 = 0LL;
  v8 = 0LL;
  v9 = 2LL;
  do
  {
    *(_QWORD *)((char *)P + v7) = v8++;
    v7 += 8LL;
    --v9;
  }
  while ( v9 );
  v10 = 0LL;
  v11 = 0LL;
  v12 = 2LL;
  do
  {
    *(_QWORD *)(v10 + *((_QWORD *)&xmmword_140173050 + 1)) = v11++;
    v10 += 8LL;
    --v12;
  }
  while ( v12 );
  v13 = 0LL;
  v14 = 0LL;
  do
  {
    *(_QWORD *)(*((_QWORD *)&xmmword_140173080 + 1) + v13) = v14++;
    v13 += 8LL;
    --v0;
  }
  while ( v0 );
  if ( UseQPCTime && g_StorpTraceLoggingPerformanceHighResolutionTimer )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    *(_QWORD *)qword_140173030 = (PerformanceFrequency.QuadPart << 7) / 1000000;
    *((_QWORD *)qword_140173030 + 1) = (PerformanceFrequency.QuadPart << 8) / 1000000;
    *((_QWORD *)qword_140173030 + 2) = (PerformanceFrequency.QuadPart << 9) / 1000000;
    *((_QWORD *)qword_140173030 + 3) = PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)qword_140173030 + 4) = 4 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)qword_140173030 + 5) = 16 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)qword_140173030 + 6) = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)qword_140173030 + 7) = (PerformanceFrequency.QuadPart << 7) / 1000;
    *((_QWORD *)qword_140173030 + 8) = (PerformanceFrequency.QuadPart << 8) / 1000;
    *((_QWORD *)qword_140173030 + 9) = (PerformanceFrequency.QuadPart << 9) / 1000;
    *((_QWORD *)qword_140173030 + 10) = 1000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)qword_140173030 + 11) = 2000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)qword_140173030 + 12) = 10000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)qword_140173030 + 13) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)xmmword_140173060 = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)xmmword_140173060 + 1) = (PerformanceFrequency.QuadPart << 8) / 1000;
    *((_QWORD *)xmmword_140173060 + 2) = (PerformanceFrequency.QuadPart << 10) / 1000;
    *((_QWORD *)xmmword_140173060 + 3) = 5120 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)xmmword_140173060 + 4) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)*(&xmmword_140173090 + 1) = (PerformanceFrequency.QuadPart << 7) / 1000000;
    *((_QWORD *)*(&xmmword_140173090 + 1) + 1) = (PerformanceFrequency.QuadPart << 8) / 1000000;
    *((_QWORD *)*(&xmmword_140173090 + 1) + 2) = (PerformanceFrequency.QuadPart << 9) / 1000000;
    *((_QWORD *)*(&xmmword_140173090 + 1) + 3) = PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_140173090 + 1) + 4) = 4 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_140173090 + 1) + 5) = 16 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_140173090 + 1) + 6) = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)*(&xmmword_140173090 + 1) + 7) = (PerformanceFrequency.QuadPart << 7) / 1000;
    *((_QWORD *)*(&xmmword_140173090 + 1) + 8) = (PerformanceFrequency.QuadPart << 8) / 1000;
    *((_QWORD *)*(&xmmword_140173090 + 1) + 9) = (PerformanceFrequency.QuadPart << 9) / 1000;
    *((_QWORD *)*(&xmmword_140173090 + 1) + 10) = 1000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_140173090 + 1) + 11) = 2000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_140173090 + 1) + 12) = 10000 * PerformanceFrequency.QuadPart / 1000;
  }
  else
  {
    *(_QWORD *)qword_140173030 = 1280LL;
    *((_QWORD *)qword_140173030 + 1) = 2560LL;
    *((_QWORD *)qword_140173030 + 2) = 5120LL;
    *((_QWORD *)qword_140173030 + 3) = 10000LL;
    *((_QWORD *)qword_140173030 + 4) = 40000LL;
    *((_QWORD *)qword_140173030 + 5) = 160000LL;
    *((_QWORD *)qword_140173030 + 6) = 640000LL;
    *((_QWORD *)qword_140173030 + 7) = 1280000LL;
    *((_QWORD *)qword_140173030 + 8) = 2560000LL;
    *((_QWORD *)qword_140173030 + 9) = 5120000LL;
    *((_QWORD *)qword_140173030 + 10) = 10000000LL;
    *((_QWORD *)qword_140173030 + 11) = 20000000LL;
    *((_QWORD *)qword_140173030 + 12) = 100000000LL;
    *((_QWORD *)qword_140173030 + 13) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)xmmword_140173060 = 640000LL;
    *((_QWORD *)xmmword_140173060 + 1) = 2560000LL;
    *((_QWORD *)xmmword_140173060 + 2) = 10240000LL;
    *((_QWORD *)xmmword_140173060 + 3) = 51200000LL;
    *((_QWORD *)xmmword_140173060 + 4) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)*(&xmmword_140173090 + 1) = 1280LL;
    *((_QWORD *)*(&xmmword_140173090 + 1) + 1) = 2560LL;
    *((_QWORD *)*(&xmmword_140173090 + 1) + 2) = 5120LL;
    *((_QWORD *)*(&xmmword_140173090 + 1) + 3) = 10000LL;
    *((_QWORD *)*(&xmmword_140173090 + 1) + 4) = 40000LL;
    *((_QWORD *)*(&xmmword_140173090 + 1) + 5) = 160000LL;
    *((_QWORD *)*(&xmmword_140173090 + 1) + 6) = 640000LL;
    *((_QWORD *)*(&xmmword_140173090 + 1) + 7) = 1280000LL;
    *((_QWORD *)*(&xmmword_140173090 + 1) + 8) = 2560000LL;
    *((_QWORD *)*(&xmmword_140173090 + 1) + 9) = 5120000LL;
    *((_QWORD *)*(&xmmword_140173090 + 1) + 10) = 10000000LL;
    *((_QWORD *)*(&xmmword_140173090 + 1) + 11) = 20000000LL;
    *((_QWORD *)*(&xmmword_140173090 + 1) + 12) = 100000000LL;
  }
  *((_QWORD *)*(&xmmword_140173090 + 1) + 13) = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)xmmword_140173090 = 4096LL;
  *((_QWORD *)xmmword_140173090 + 1) = 0x2000LL;
  *((_QWORD *)xmmword_140173090 + 2) = 0x4000LL;
  *((_QWORD *)xmmword_140173090 + 3) = 0x8000LL;
  *((_QWORD *)xmmword_140173090 + 4) = 0x10000LL;
  *((_QWORD *)xmmword_140173090 + 5) = 0x20000LL;
  *((_QWORD *)xmmword_140173090 + 6) = 0x40000LL;
  *((_QWORD *)xmmword_140173090 + 7) = 0x100000LL;
  *((_QWORD *)xmmword_140173090 + 8) = 0x7FFFFFFFFFFFFFFFLL;
  v15 = KeGetRecommendedSharedDataAlignment() + 31;
  v16 = v15 & -KeGetRecommendedSharedDataAlignment();
  v6 = 0;
  dword_1401730D0 = v16;
  LODWORD(dword_1401730D4) = g_RaidNumberProcessors * v16;
  return v6;
}
