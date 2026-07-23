/*
 * XREFs of HalpQueryPostSleepStats @ 0x140787F1C
 * Callers:
 *     HaliQuerySystemInformation @ 0x140BF38E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall HalpQueryPostSleepStats(_DWORD *a1)
{
  LARGE_INTEGER v2; // r8
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  KeQueryPerformanceCounter(&PerformanceFrequency);
  v2 = PerformanceFrequency;
  *a1 = (unsigned __int64)(1000 * (qword_140F882A8 + qword_140F882D0 - qword_140F882B0 - HalpHiberResumePerf))
      / PerformanceFrequency.QuadPart;
  a1[1] = (unsigned __int64)(1000 * (qword_140F882E0 + qword_140F882F8 - qword_140F882E8 - qword_140F882D8))
        / v2.QuadPart;
  a1[2] = (unsigned __int64)(1000 * qword_140F882B8) / v2.QuadPart;
  a1[3] = (unsigned __int64)(1000 * qword_140F882C0) / v2.QuadPart;
  a1[4] = (unsigned __int64)(1000 * qword_140F882C8) / v2.QuadPart;
  a1[5] = (unsigned __int64)(1000 * qword_140F882F0) / v2.QuadPart;
  return 0LL;
}
