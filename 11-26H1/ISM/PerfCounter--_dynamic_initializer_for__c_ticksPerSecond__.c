/*
 * XREFs of PerfCounter::_dynamic_initializer_for__c_ticksPerSecond__ @ 0x180009EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LARGE_INTEGER PerfCounter::_dynamic_initializer_for__c_ticksPerSecond__()
{
  LARGE_INTEGER result; // rax
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  Frequency.QuadPart = 0LL;
  QueryPerformanceFrequency(&Frequency);
  result = Frequency;
  qword_180253ED0 = Frequency.QuadPart;
  return result;
}
