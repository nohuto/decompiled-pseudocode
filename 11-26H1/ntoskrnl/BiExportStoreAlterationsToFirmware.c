/*
 * XREFs of BiExportStoreAlterationsToFirmware @ 0x14089911C
 * Callers:
 *     BiCloseStore @ 0x1409A120C (BiCloseStore.c)
 *     BcdForciblyUnloadStore @ 0x140B6D9BC (BcdForciblyUnloadStore.c)
 * Callees:
 *     BiExportStoreAlterationsToEfi @ 0x14089A258 (BiExportStoreAlterationsToEfi.c)
 *     BiGetFirmwareType @ 0x1409A5660 (BiGetFirmwareType.c)
 */

__int64 __fastcall BiExportStoreAlterationsToFirmware(void *a1)
{
  int v2; // eax
  int v3; // eax

  v2 = BiGetFirmwareType(0LL) - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
      return BiExportStoreAlterationsToEfi(a1);
    if ( v3 != 1 )
      return 3221225659LL;
  }
  return 0LL;
}
