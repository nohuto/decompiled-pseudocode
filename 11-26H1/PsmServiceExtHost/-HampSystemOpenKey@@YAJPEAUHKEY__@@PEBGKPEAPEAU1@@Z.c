/*
 * XREFs of ?HampSystemOpenKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18005E2A8
 * Callers:
 *     ?RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z @ 0x180080968 (-RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z.c)
 *     ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180081378 (-InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall HampSystemOpenKey(HKEY a1, const unsigned __int16 *a2, REGSAM a3, HKEY *phkResult)
{
  LSTATUS result; // eax

  result = RegOpenKeyExW(a1, a2, 0, a3, phkResult);
  if ( result > 0 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
