/*
 * XREFs of PiDevCfgGetDriverConfigurationKeyScope @ 0x1405DB1E8
 * Callers:
 *     PiDevCfgQueryIncludedDriverNode @ 0x1407AA688 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140AD3638 (PiDevCfgQueryIncludedDriverConfigurations.c)
 * Callees:
 *     _wcsicmp @ 0x140536570 (_wcsicmp.c)
 */

__int64 __fastcall PiDevCfgGetDriverConfigurationKeyScope(wchar_t *Str2)
{
  unsigned int v1; // ebx
  unsigned int i; // edi

  v1 = 0;
  for ( i = 0; i < 0xB; ++i )
  {
    if ( !wcsicmp((&off_140BDAB90)[2 * i], Str2) )
      return *((unsigned int *)&off_140BDAB90 + 4 * i + 2);
  }
  return v1;
}
