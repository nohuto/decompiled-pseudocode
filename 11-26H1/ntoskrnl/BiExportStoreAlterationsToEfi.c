/*
 * XREFs of BiExportStoreAlterationsToEfi @ 0x140893E58
 * Callers:
 *     BiExportStoreAlterationsToFirmware @ 0x140892D1C (BiExportStoreAlterationsToFirmware.c)
 * Callees:
 *     BiFreeIdentifierList @ 0x1409D290C (BiFreeIdentifierList.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     BiBuildIdentifierList @ 0x1409D4E8C (BiBuildIdentifierList.c)
 *     BiExportEfiBootManager @ 0x140B37EA8 (BiExportEfiBootManager.c)
 *     BiExportBcdObjects @ 0x140B43AB8 (BiExportBcdObjects.c)
 */

__int64 __fastcall BiExportStoreAlterationsToEfi(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  BiLogMessage(2LL, L"Exporting store alterations to efi");
  v7[1] = v7;
  v7[0] = v7;
  v3 = BiBuildIdentifierList(a1, v2, v7);
  if ( v3 < 0 )
    goto LABEL_6;
  v4 = BiExportBcdObjects(a1, v7);
  if ( v4 < 0 )
    v3 = v4;
  v5 = v3;
  v3 = BiExportEfiBootManager(a1, v7);
  if ( v3 < 0 || (v3 = v5, v5 < 0) )
LABEL_6:
    BiLogMessage(4LL, L"BiExportStoreAlterationsToEfi failed %x", (unsigned int)v3);
  BiFreeIdentifierList(v7);
  return (unsigned int)v3;
}
