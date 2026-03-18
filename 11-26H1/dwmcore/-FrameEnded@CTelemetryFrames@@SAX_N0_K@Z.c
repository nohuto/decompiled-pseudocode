/*
 * XREFs of ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x180031DA0
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030DC0 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     _anonymous_namespace_::OutputCurrentFrameToEtw @ 0x180031F10 (_anonymous_namespace_--OutputCurrentFrameToEtw.c)
 */

void __fastcall CTelemetryFrames::FrameEnded(__int64 a1, char a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  HANDLE CurrentThread; // rax
  BOOL v6; // eax
  unsigned __int64 v7; // r9
  unsigned __int64 CycleTime; // [rsp+40h] [rbp+18h] BYREF

  CycleTime = a3;
  if ( a2 )
    dword_1803DE380 |= 0x80u;
  ++dword_1803DE38C;
  v3 = 0LL;
  v4 = ::CycleTime;
  byte_1803DE8D4 = dword_1803DE408 != dword_1803DE968;
  CycleTime = 0LL;
  if ( qword_1803DE930 )
  {
    CurrentThread = GetCurrentThread();
    v6 = QueryThreadCycleTime(CurrentThread, &CycleTime);
    v3 = CycleTime;
    if ( v6 )
      qword_1803DE3A8 += CycleTime - qword_1803DE930;
  }
  *((_QWORD *)&xmmword_1803DE4D0 + 1) = 0LL;
  qword_1803DE3E0 = v3 - v4;
  if ( 1000000 * ((unsigned __int64)-qword_1803DE8D8 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
     + 1000000 * ((unsigned __int64)-qword_1803DE8D8 / g_qpcFrequency.QuadPart) > (unsigned int)dword_1803DE3A4 )
    dword_1803DE3A4 = 1000000 * ((unsigned __int64)-qword_1803DE8D8 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
                    + 1000000 * ((unsigned __int64)-qword_1803DE8D8 / g_qpcFrequency.QuadPart);
  dword_1803DD36C = 3;
  anonymous_namespace_::OutputCurrentFrameToEtw();
  v7 = (unsigned __int64)(qword_1803DE8D8 - xmmword_1803DE4D0) % g_qpcFrequency.QuadPart;
  if ( 1000 * ((unsigned __int64)(qword_1803DE8D8 - xmmword_1803DE4D0) / g_qpcFrequency.QuadPart)
     + 1000 * v7 / g_qpcFrequency.QuadPart >= (unsigned int)CCommonRegistryData::TelemetryFramesSequenceMaximumPeriodMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(
      (unsigned int)CCommonRegistryData::TelemetryFramesSequenceMaximumPeriodMilliseconds,
      1000 * v7 % g_qpcFrequency.QuadPart);
}
