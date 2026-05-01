/*
 * XREFs of ?_ReadRegistryValue@MultitaskingViewConfigHelpers@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x1804A6F4C
 * Callers:
 *     ??$_ReadOptionalRegistryValue@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAJ@Z @ 0x1804A5F14 (--$_ReadOptionalRegistryValue@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAJ@Z.c)
 *     ??$_ReadOptionalRegistryValue@M@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAM@Z @ 0x1804A5F44 (--$_ReadOptionalRegistryValue@M@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAM@Z.c)
 *     ??$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z @ 0x1804A5F88 (--$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z.c)
 *     ??$_ReadOptionalRegistryValue@_N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEA_N@Z @ 0x1804A5FCC (--$_ReadOptionalRegistryValue@_N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEA_N@Z.c)
 *     ?_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z @ 0x1804A6CA8 (-_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall MultitaskingViewConfigHelpers::_ReadRegistryValue(
        MultitaskingViewConfigHelpers *this,
        const WCHAR *a2,
        unsigned __int16 *a3,
        unsigned int *a4)
{
  LSTATUS result; // eax
  DWORD v5; // [rsp+60h] [rbp+18h] BYREF

  *(_DWORD *)a3 = 0;
  v5 = 4;
  result = RegGetValueW((HKEY)this, 0LL, a2, 0x10u, 0LL, a3, &v5);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
