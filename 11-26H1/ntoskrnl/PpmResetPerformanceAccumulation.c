/*
 * XREFs of PpmResetPerformanceAccumulation @ 0x1404CB92C
 * Callers:
 *     PpmResetPerfTimes @ 0x1404CB840 (PpmResetPerfTimes.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall PpmResetPerformanceAccumulation(__int64 a1)
{
  LARGE_INTEGER PerformanceCounter; // rax
  char v3; // cl
  LARGE_INTEGER v4; // r8
  LARGE_INTEGER v5; // rdx
  unsigned __int128 v6; // rax

  if ( _bittest64((const signed __int64 *)(a1 + 36832), 0x27u) )
    *(_QWORD *)(a1 + 35096) = __readmsr(0xDB2u);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v3 = *(_BYTE *)(a1 + 172);
  v4 = PerformanceCounter;
  v5 = PerformanceCounter;
  if ( v3 )
    v5.QuadPart = PerformanceCounter.QuadPart << v3;
  v6 = (unsigned __int64)v5.QuadPart * (unsigned __int128)*(unsigned __int64 *)(a1 + 176);
  *(LARGE_INTEGER *)(a1 + 35016) = v4;
  *(_QWORD *)(a1 + 34984) = *((_QWORD *)&v6 + 1);
  return v6;
}
