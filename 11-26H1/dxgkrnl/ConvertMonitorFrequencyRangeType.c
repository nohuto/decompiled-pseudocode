/*
 * XREFs of ConvertMonitorFrequencyRangeType @ 0x14006CBB4
 * Callers:
 *     ?ConvertFrequencyRange@@YAJPEBU_FrequencyRangeDescriptor@@PEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x140060984 (-ConvertFrequencyRange@@YAJPEBU_FrequencyRangeDescriptor@@PEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertMonitorFrequencyRangeType(int a1, _DWORD *a2)
{
  __int64 result; // rax

  if ( a1 == 1 )
  {
    *a2 = 1;
  }
  else
  {
    if ( a1 != 2 )
    {
      WdLogSingleEntry1(2LL);
      result = 3223192408LL;
      WdLogGlobalForLineNumber = 94;
      *a2 = 0;
      return result;
    }
    *a2 = 2;
  }
  return 0LL;
}
