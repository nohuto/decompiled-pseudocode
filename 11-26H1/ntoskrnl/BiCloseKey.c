/*
 * XREFs of BiCloseKey @ 0x1409D6368
 * Callers:
 *     BiIsPortableWorkspaceBoot @ 0x140892E08 (BiIsPortableWorkspaceBoot.c)
 *     BiCloseStore @ 0x1409D022C (BiCloseStore.c)
 *     BiUnloadHiveByHandle @ 0x1409D02C4 (BiUnloadHiveByHandle.c)
 *     BiDeleteElement @ 0x1409D0978 (BiDeleteElement.c)
 *     BiDeleteKey @ 0x1409D15A8 (BiDeleteKey.c)
 *     BiCreateObject @ 0x1409D2A70 (BiCreateObject.c)
 *     BcdSetElementDataWithFlags @ 0x1409D30C4 (BcdSetElementDataWithFlags.c)
 *     BiCleanupLoadedStores @ 0x1409D3368 (BiCleanupLoadedStores.c)
 *     BiAddStoreFromFile @ 0x1409D35AC (BiAddStoreFromFile.c)
 *     BiOpenSystemStore @ 0x1409D43D4 (BiOpenSystemStore.c)
 *     BiSetRegistryValue @ 0x1409D47E0 (BiSetRegistryValue.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1409D496C (BiSetFirmwareModifiedFromObject.c)
 *     BiOpenStoreKeyFromObject @ 0x1409D49B8 (BiOpenStoreKeyFromObject.c)
 *     BcdGetElementDataWithFlags @ 0x1409D4B80 (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x1409D4E38 (BcdCloseObject.c)
 *     BiBuildIdentifierList @ 0x1409D4E8C (BiBuildIdentifierList.c)
 *     BcdOpenObject @ 0x1409D54D8 (BcdOpenObject.c)
 *     BiGetObjectDescription @ 0x1409D5C00 (BiGetObjectDescription.c)
 *     BiSetObjectDescription @ 0x140B54350 (BiSetObjectDescription.c)
 *     BcdEnumerateObjects @ 0x140B5C474 (BcdEnumerateObjects.c)
 *     BcdSetBootBcdAsSystemStore @ 0x140D01EC4 (BcdSetBootBcdAsSystemStore.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwSetSecurityObject @ 0x140726B30 (ZwSetSecurityObject.c)
 *     BiCreateKeySecurityDescriptor @ 0x1409D63C0 (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall BiCloseKey(HANDLE Handle)
{
  void *KeySecurityDescriptor; // rax
  void *v3; // rbx

  KeySecurityDescriptor = (void *)BiCreateKeySecurityDescriptor(393241);
  v3 = KeySecurityDescriptor;
  if ( KeySecurityDescriptor )
  {
    ZwSetSecurityObject(Handle, 4u, KeySecurityDescriptor);
    ExFreePoolWithTag(v3, 0x4B444342u);
  }
  return ZwClose(Handle);
}
