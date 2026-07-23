/*
 * XREFs of PopCalculateTotalHwDripsResidencyV1 @ 0x140534DEC
 * Callers:
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x1407D94D8 (PopSleepstudyCaptureResiliencyStatistics.c)
 *     PopSleepstudyCaptureSessionStatistics @ 0x140B69084 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopCalculateTotalHwDripsResidencyV1(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _DWORD *a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  int v6; // ecx

  result = -1LL;
  if ( a1 == -1LL || a2 == -1LL )
  {
    *a4 |= 0x80u;
  }
  else
  {
    if ( a2 < a1 )
    {
      result = 0LL;
      v6 = 64;
    }
    else
    {
      v5 = a2 - a1;
      result = v5;
      if ( v5 > a3 )
        result = a3;
      v6 = a3 < v5 ? 32 : 16;
    }
    *a4 |= v6;
  }
  return result;
}
