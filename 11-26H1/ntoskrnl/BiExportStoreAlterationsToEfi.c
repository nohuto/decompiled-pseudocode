/*
 * XREFs of BiExportStoreAlterationsToEfi @ 0x14089A258
 * Callers:
 *     BiExportStoreAlterationsToFirmware @ 0x14089911C (BiExportStoreAlterationsToFirmware.c)
 * Callees:
 *     BiFreeIdentifierList @ 0x1409A38EC (BiFreeIdentifierList.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BiBuildIdentifierList @ 0x1409A5E6C (BiBuildIdentifierList.c)
 *     BiExportEfiBootManager @ 0x140B3A0B8 (BiExportEfiBootManager.c)
 *     BiExportBcdObjects @ 0x140B459A8 (BiExportBcdObjects.c)
 */

__int64 __fastcall BiExportStoreAlterationsToEfi(HANDLE BcdStoreHandle)
{
  int v2; // ebx
  int v3; // eax
  int v4; // edi
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  BiLogMessage(2LL, L"Exporting store alterations to efi");
  v6[1] = v6;
  v6[0] = v6;
  v2 = BiBuildIdentifierList(BcdStoreHandle);
  if ( v2 < 0 )
    goto LABEL_6;
  v3 = BiExportBcdObjects(BcdStoreHandle, v6);
  if ( v3 < 0 )
    v2 = v3;
  v4 = v2;
  v2 = BiExportEfiBootManager(BcdStoreHandle, v6);
  if ( v2 < 0 || (v2 = v4, v4 < 0) )
LABEL_6:
    BiLogMessage(4LL, L"BiExportStoreAlterationsToEfi failed %x", (unsigned int)v2);
  BiFreeIdentifierList(v6);
  return (unsigned int)v2;
}
