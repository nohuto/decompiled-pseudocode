/*
 * XREFs of PiDevCfgGetDriverConfigurationKeyScope @ 0x1405DDA98
 * Callers:
 *     PiDevCfgQueryIncludedDriverNode @ 0x1407AD478 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140AEA96C (PiDevCfgQueryIncludedDriverConfigurations.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 */

__int64 __fastcall PiDevCfgGetDriverConfigurationKeyScope(wchar_t *Str2)
{
  unsigned int v1; // ebx
  unsigned int i; // edi

  v1 = 0;
  for ( i = 0; i < 0xB; ++i )
  {
    if ( !wcsicmp((&off_140BE1A40)[2 * i], Str2) )
      return *((unsigned int *)&off_140BE1A40 + 4 * i + 2);
  }
  return v1;
}
