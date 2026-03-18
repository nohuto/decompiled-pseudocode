/*
 * XREFs of MiGetImageExtensionBaseAddress @ 0x140A883F4
 * Callers:
 *     MiMapImageScpCfgPages @ 0x14036A450 (MiMapImageScpCfgPages.c)
 *     MiQueryImageExtensionInformation @ 0x1404E6410 (MiQueryImageExtensionInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetImageExtensionBaseAddress(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(***(_QWORD ***)(a1 + 80) + 8LL) << 12)
       + ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12);
}
