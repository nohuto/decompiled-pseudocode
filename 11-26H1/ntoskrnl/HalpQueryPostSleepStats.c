/*
 * XREFs of HalpQueryPostSleepStats @ 0x1407853EC
 * Callers:
 *     HaliQuerySystemInformation @ 0x140BED8E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall HalpQueryPostSleepStats(_DWORD *a1)
{
  LARGE_INTEGER v2; // r8
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  KeQueryPerformanceCounter(&PerformanceFrequency);
  v2 = PerformanceFrequency;
  *a1 = (unsigned __int64)(1000 * (qword_140F87EA8 + qword_140F87ED0 - qword_140F87EB0 - HalpHiberResumePerf))
      / PerformanceFrequency.QuadPart;
  a1[1] = (unsigned __int64)(1000 * (qword_140F87EE0 + qword_140F87EF8 - qword_140F87EE8 - qword_140F87ED8))
        / v2.QuadPart;
  a1[2] = (unsigned __int64)(1000 * qword_140F87EB8) / v2.QuadPart;
  a1[3] = (unsigned __int64)(1000 * qword_140F87EC0) / v2.QuadPart;
  a1[4] = (unsigned __int64)(1000 * qword_140F87EC8) / v2.QuadPart;
  a1[5] = (unsigned __int64)(1000 * qword_140F87EF0) / v2.QuadPart;
  return 0LL;
}
