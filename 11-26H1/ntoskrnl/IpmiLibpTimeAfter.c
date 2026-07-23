/*
 * XREFs of IpmiLibpTimeAfter @ 0x140722C5C
 * Callers:
 *     IpmiLibpKcsSpinRegister @ 0x140722B9C (IpmiLibpKcsSpinRegister.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 */

bool __fastcall IpmiLibpTimeAfter(__int64 a1, __int64 a2)
{
  ULONG v2; // ebx
  LARGE_INTEGER PerformanceCounter; // rax
  bool v4; // cc
  LONG v6; // [rsp+3Ch] [rbp+14h]

  v6 = HIDWORD(a2);
  v2 = a2;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v4 = PerformanceCounter.HighPart <= v6;
  if ( PerformanceCounter.HighPart == v6 )
  {
    if ( PerformanceCounter.LowPart >= v2 )
      return 1;
    v4 = PerformanceCounter.HighPart <= v6;
  }
  return !v4;
}
