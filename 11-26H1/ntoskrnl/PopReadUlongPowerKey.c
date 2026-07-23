/*
 * XREFs of PopReadUlongPowerKey @ 0x140603800
 * Callers:
 *     PopQueryHiberPersistedRegValue @ 0x1407D37B8 (PopQueryHiberPersistedRegValue.c)
 *     PopBatteryInitPhaseTwo @ 0x140CDB010 (PopBatteryInitPhaseTwo.c)
 * Callees:
 *     PopReadRegKeyValue @ 0x1404E60C8 (PopReadRegKeyValue.c)
 */

__int64 __fastcall PopReadUlongPowerKey(
        const WCHAR *a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  __int64 result; // rax
  unsigned int v10; // ecx

  result = PopReadRegKeyValue(
             (wchar_t *)L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\POWER",
             a1,
             4uLL,
             4,
             a2);
  if ( (int)result < 0 )
  {
    *a2 = a3;
    return result;
  }
  v10 = *a2;
  if ( *a2 != a6 )
  {
    if ( v10 >= a4 )
    {
      if ( v10 <= a5 )
        return result;
      *a2 = a5;
    }
    else
    {
      *a2 = a4;
    }
    return 3221226034LL;
  }
  return result;
}
