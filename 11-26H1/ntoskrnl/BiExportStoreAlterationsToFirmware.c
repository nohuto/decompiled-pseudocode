/*
 * XREFs of BiExportStoreAlterationsToFirmware @ 0x140892D1C
 * Callers:
 *     BiCloseStore @ 0x1409D022C (BiCloseStore.c)
 *     BcdForciblyUnloadStore @ 0x140B6A7AC (BcdForciblyUnloadStore.c)
 * Callees:
 *     BiExportStoreAlterationsToEfi @ 0x140893E58 (BiExportStoreAlterationsToEfi.c)
 *     BiGetFirmwareType @ 0x1409D4680 (BiGetFirmwareType.c)
 */

__int64 __fastcall BiExportStoreAlterationsToFirmware(__int64 a1)
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
