/*
 * XREFs of sub_1400AF078 @ 0x1400AF078
 * Callers:
 *     sub_14018377C @ 0x14018377C (sub_14018377C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400BB2E0 @ 0x1400BB2E0 (sub_1400BB2E0.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 sub_1400AF078()
{
  __int64 v0; // rdi
  ULONG v1; // ebx
  ULONG v2; // ebx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  ULONG v13; // ebx
  ULONG v14; // eax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+20h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  memset_0(&qword_1401690E0, 0, 0xB8uLL);
  qword_1401690E0 = 917506LL;
  unk_140169108 = 28LL;
  *(_OWORD *)&xmmword_140169130 = 0LL;
  *(&xmmword_140169130 + 1) = (PVOID)0x1C0000000ALL;
  xmmword_140169140 = 0LL;
  qword_140169170 = 0xFC00000026LL;
  v0 = 2LL;
  *(_QWORD *)&xmmword_140169140 = 0xE00090002LL;
  xmmword_140169110 = 0LL;
  *(_QWORD *)&xmmword_140169110 = 327682LL;
  *(_OWORD *)&xmmword_140169160 = 0LL;
  *(_OWORD *)&xmmword_1401690E8 = 0LL;
  *(&xmmword_140169160 + 1) = (PVOID)252;
  *(_OWORD *)&xmmword_1401690F8 = 0LL;
  *(_OWORD *)&xmmword_140169120 = 0LL;
  *(_OWORD *)&xmmword_140169150 = 0LL;
  v1 = KeGetRecommendedSharedDataAlignment() + 911;
  LODWORD(dword_140169178) = v1 & -KeGetRecommendedSharedDataAlignment();
  v2 = KeGetRecommendedSharedDataAlignment() + 16 * HIDWORD(qword_140169170) - 1;
  LODWORD(dword_14016917C) = v2 & -KeGetRecommendedSharedDataAlignment();
  dword_140168DB0 = KeQueryMaximumProcessorCountEx(0xFFFFu);
  LODWORD(Size) = dword_140169178 * dword_140168DB0;
  LODWORD(dword_140169184) = dword_14016917C * dword_140168DB0;
  if ( byte_140168724 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  qword_140169188 = PerformanceCounter.QuadPart;
  if ( (_WORD)qword_1401690E0 )
  {
    xmmword_1401690E8 = (PVOID)sub_1400143E0(72LL, 8LL * (unsigned __int16)qword_1401690E0, 1700028754LL, 0LL);
    if ( !xmmword_1401690E8 )
      goto LABEL_50;
  }
  else
  {
    xmmword_1401690E8 = 0LL;
  }
  if ( WORD1(qword_1401690E0) )
  {
    *(&xmmword_1401690E8 + 1) = (PVOID)sub_1400143E0(72LL, 8LL * WORD1(qword_1401690E0), 1700028754LL, 0LL);
    if ( !*(&xmmword_1401690E8 + 1) )
      goto LABEL_50;
  }
  else
  {
    *(&xmmword_1401690E8 + 1) = 0LL;
  }
  if ( WORD2(qword_1401690E0) )
  {
    xmmword_1401690F8 = (PVOID)sub_1400143E0(72LL, 8LL * WORD2(qword_1401690E0), 1700028754LL, 0LL);
    if ( !xmmword_1401690F8 )
      goto LABEL_50;
  }
  else
  {
    xmmword_1401690F8 = 0LL;
  }
  if ( HIWORD(qword_1401690E0) )
  {
    *(&xmmword_1401690F8 + 1) = (PVOID)sub_1400143E0(72LL, 8LL * HIWORD(qword_1401690E0), 1700028754LL, 0LL);
    if ( !*(&xmmword_1401690F8 + 1) )
      goto LABEL_50;
  }
  else
  {
    *(&xmmword_1401690F8 + 1) = 0LL;
  }
  if ( (_WORD)xmmword_140169110 )
  {
    *((_QWORD *)&xmmword_140169110 + 1) = sub_1400143E0(
                                            72LL,
                                            8LL * (unsigned __int16)xmmword_140169110,
                                            1700028754LL,
                                            0LL);
    if ( !*((_QWORD *)&xmmword_140169110 + 1) )
      goto LABEL_50;
  }
  else
  {
    *((_QWORD *)&xmmword_140169110 + 1) = 0LL;
  }
  if ( WORD1(xmmword_140169110) )
  {
    xmmword_140169120 = (PVOID)sub_1400143E0(72LL, 8LL * WORD1(xmmword_140169110), 1700028754LL, 0LL);
    if ( !xmmword_140169120 )
      goto LABEL_50;
  }
  else
  {
    xmmword_140169120 = 0LL;
  }
  if ( WORD2(xmmword_140169110) )
  {
    *(&xmmword_140169120 + 1) = (PVOID)sub_1400143E0(72LL, 8LL * WORD2(xmmword_140169110), 1700028754LL, 0LL);
    if ( !*(&xmmword_140169120 + 1) )
      goto LABEL_50;
  }
  else
  {
    *(&xmmword_140169120 + 1) = 0LL;
  }
  if ( WORD3(xmmword_140169110) )
  {
    xmmword_140169130 = (PVOID)sub_1400143E0(72LL, 8LL * WORD3(xmmword_140169110), 1700028754LL, 0LL);
    if ( !xmmword_140169130 )
      goto LABEL_50;
  }
  else
  {
    xmmword_140169130 = 0LL;
  }
  if ( (_WORD)xmmword_140169140 )
  {
    *((_QWORD *)&xmmword_140169140 + 1) = sub_1400143E0(
                                            72LL,
                                            8LL * (unsigned __int16)xmmword_140169140,
                                            1700028754LL,
                                            0LL);
    if ( !*((_QWORD *)&xmmword_140169140 + 1) )
      goto LABEL_50;
  }
  else
  {
    *((_QWORD *)&xmmword_140169140 + 1) = 0LL;
  }
  if ( WORD1(xmmword_140169140) )
  {
    xmmword_140169150 = (PVOID)sub_1400143E0(72LL, 8LL * WORD1(xmmword_140169140), 1700028754LL, 0LL);
    if ( !xmmword_140169150 )
      goto LABEL_50;
  }
  else
  {
    xmmword_140169150 = 0LL;
  }
  if ( WORD2(xmmword_140169140) )
  {
    *(&xmmword_140169150 + 1) = (PVOID)sub_1400143E0(72LL, 8LL * WORD2(xmmword_140169140), 1700028754LL, 0LL);
    if ( !*(&xmmword_140169150 + 1) )
      goto LABEL_50;
  }
  else
  {
    *(&xmmword_140169150 + 1) = 0LL;
  }
  if ( WORD3(xmmword_140169140) )
  {
    xmmword_140169160 = (PVOID)sub_1400143E0(72LL, 8LL * WORD3(xmmword_140169140), 1700028754LL, 0LL);
    if ( !xmmword_140169160 )
    {
LABEL_50:
      v4 = -1073741801;
      sub_1400BB2E0();
      dword_1401684A8 = 0;
      return v4;
    }
  }
  else
  {
    xmmword_140169160 = 0LL;
  }
  v5 = 0LL;
  v6 = 0LL;
  v7 = 2LL;
  do
  {
    *(_QWORD *)((char *)xmmword_1401690E8 + v5) = v6++;
    v5 += 8LL;
    --v7;
  }
  while ( v7 );
  v8 = 0LL;
  v9 = 0LL;
  v10 = 2LL;
  do
  {
    *(_QWORD *)(v8 + *((_QWORD *)&xmmword_140169110 + 1)) = v9++;
    v8 += 8LL;
    --v10;
  }
  while ( v10 );
  v11 = 0LL;
  v12 = 0LL;
  do
  {
    *(_QWORD *)(v11 + *((_QWORD *)&xmmword_140169140 + 1)) = v12++;
    v11 += 8LL;
    --v0;
  }
  while ( v0 );
  if ( byte_140168724 && dword_1401684AC )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    *(_QWORD *)*(&xmmword_1401690E8 + 1) = (PerformanceFrequency.QuadPart << 7) / 1000000;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 1) = (PerformanceFrequency.QuadPart << 8) / 1000000;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 2) = (PerformanceFrequency.QuadPart << 9) / 1000000;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 3) = PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 4) = 4 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 5) = 16 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 6) = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 7) = (PerformanceFrequency.QuadPart << 7) / 1000;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 8) = (PerformanceFrequency.QuadPart << 8) / 1000;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 9) = (PerformanceFrequency.QuadPart << 9) / 1000;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 10) = 1000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 11) = 2000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 12) = 10000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 13) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)xmmword_140169120 = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)xmmword_140169120 + 1) = (PerformanceFrequency.QuadPart << 8) / 1000;
    *((_QWORD *)xmmword_140169120 + 2) = (PerformanceFrequency.QuadPart << 10) / 1000;
    *((_QWORD *)xmmword_140169120 + 3) = 5120 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)xmmword_140169120 + 4) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)*(&xmmword_140169150 + 1) = (PerformanceFrequency.QuadPart << 7) / 1000000;
    *((_QWORD *)*(&xmmword_140169150 + 1) + 1) = (PerformanceFrequency.QuadPart << 8) / 1000000;
    *((_QWORD *)*(&xmmword_140169150 + 1) + 2) = (PerformanceFrequency.QuadPart << 9) / 1000000;
    *((_QWORD *)*(&xmmword_140169150 + 1) + 3) = PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_140169150 + 1) + 4) = 4 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_140169150 + 1) + 5) = 16 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_140169150 + 1) + 6) = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)*(&xmmword_140169150 + 1) + 7) = (PerformanceFrequency.QuadPart << 7) / 1000;
    *((_QWORD *)*(&xmmword_140169150 + 1) + 8) = (PerformanceFrequency.QuadPart << 8) / 1000;
    *((_QWORD *)*(&xmmword_140169150 + 1) + 9) = (PerformanceFrequency.QuadPart << 9) / 1000;
    *((_QWORD *)*(&xmmword_140169150 + 1) + 10) = 1000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_140169150 + 1) + 11) = 2000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_140169150 + 1) + 12) = 10000 * PerformanceFrequency.QuadPart / 1000;
  }
  else
  {
    *(_QWORD *)*(&xmmword_1401690E8 + 1) = 1280LL;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 1) = 2560LL;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 2) = 5120LL;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 3) = 10000LL;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 4) = 40000LL;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 5) = 160000LL;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 6) = 640000LL;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 7) = 1280000LL;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 8) = 2560000LL;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 9) = 5120000LL;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 10) = 10000000LL;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 11) = 20000000LL;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 12) = 100000000LL;
    *((_QWORD *)*(&xmmword_1401690E8 + 1) + 13) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)xmmword_140169120 = 640000LL;
    *((_QWORD *)xmmword_140169120 + 1) = 2560000LL;
    *((_QWORD *)xmmword_140169120 + 2) = 10240000LL;
    *((_QWORD *)xmmword_140169120 + 3) = 51200000LL;
    *((_QWORD *)xmmword_140169120 + 4) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)*(&xmmword_140169150 + 1) = 1280LL;
    *((_QWORD *)*(&xmmword_140169150 + 1) + 1) = 2560LL;
    *((_QWORD *)*(&xmmword_140169150 + 1) + 2) = 5120LL;
    *((_QWORD *)*(&xmmword_140169150 + 1) + 3) = 10000LL;
    *((_QWORD *)*(&xmmword_140169150 + 1) + 4) = 40000LL;
    *((_QWORD *)*(&xmmword_140169150 + 1) + 5) = 160000LL;
    *((_QWORD *)*(&xmmword_140169150 + 1) + 6) = 640000LL;
    *((_QWORD *)*(&xmmword_140169150 + 1) + 7) = 1280000LL;
    *((_QWORD *)*(&xmmword_140169150 + 1) + 8) = 2560000LL;
    *((_QWORD *)*(&xmmword_140169150 + 1) + 9) = 5120000LL;
    *((_QWORD *)*(&xmmword_140169150 + 1) + 10) = 10000000LL;
    *((_QWORD *)*(&xmmword_140169150 + 1) + 11) = 20000000LL;
    *((_QWORD *)*(&xmmword_140169150 + 1) + 12) = 100000000LL;
  }
  *((_QWORD *)*(&xmmword_140169150 + 1) + 13) = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)xmmword_140169150 = 4096LL;
  *((_QWORD *)xmmword_140169150 + 1) = 0x2000LL;
  *((_QWORD *)xmmword_140169150 + 2) = 0x4000LL;
  *((_QWORD *)xmmword_140169150 + 3) = 0x8000LL;
  *((_QWORD *)xmmword_140169150 + 4) = 0x10000LL;
  *((_QWORD *)xmmword_140169150 + 5) = 0x20000LL;
  *((_QWORD *)xmmword_140169150 + 6) = 0x40000LL;
  *((_QWORD *)xmmword_140169150 + 7) = 0x100000LL;
  *((_QWORD *)xmmword_140169150 + 8) = 0x7FFFFFFFFFFFFFFFLL;
  v13 = -KeGetRecommendedSharedDataAlignment();
  v14 = v13 & (KeGetRecommendedSharedDataAlignment() + 31);
  v4 = 0;
  dword_140169190 = v14;
  LODWORD(dword_140169194) = dword_140168DB0 * v14;
  return v4;
}
