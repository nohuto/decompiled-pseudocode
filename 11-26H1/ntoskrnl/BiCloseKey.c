/*
 * XREFs of BiCloseKey @ 0x1409A7258
 * Callers:
 *     BiIsPortableWorkspaceBoot @ 0x140899208 (BiIsPortableWorkspaceBoot.c)
 *     BiCloseStore @ 0x1409A120C (BiCloseStore.c)
 *     BiUnloadHiveByHandle @ 0x1409A12A4 (BiUnloadHiveByHandle.c)
 *     BiDeleteElement @ 0x1409A1958 (BiDeleteElement.c)
 *     BiDeleteKey @ 0x1409A2588 (BiDeleteKey.c)
 *     BiCreateObject @ 0x1409A3A50 (BiCreateObject.c)
 *     BcdSetElementDataWithFlags @ 0x1409A40A4 (BcdSetElementDataWithFlags.c)
 *     BiCleanupLoadedStores @ 0x1409A4348 (BiCleanupLoadedStores.c)
 *     BiAddStoreFromFile @ 0x1409A458C (BiAddStoreFromFile.c)
 *     BiOpenSystemStore @ 0x1409A53B4 (BiOpenSystemStore.c)
 *     BiSetRegistryValue @ 0x1409A57C0 (BiSetRegistryValue.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1409A594C (BiSetFirmwareModifiedFromObject.c)
 *     BiOpenStoreKeyFromObject @ 0x1409A5998 (BiOpenStoreKeyFromObject.c)
 *     BcdGetElementDataWithFlags @ 0x1409A5B60 (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x1409A5E18 (BcdCloseObject.c)
 *     BiBuildIdentifierList @ 0x1409A5E6C (BiBuildIdentifierList.c)
 *     BcdOpenObject @ 0x1409A64B8 (BcdOpenObject.c)
 *     BiGetObjectDescription @ 0x1409A6BE0 (BiGetObjectDescription.c)
 *     BiSetObjectDescription @ 0x140B56BF0 (BiSetObjectDescription.c)
 *     BcdEnumerateObjects @ 0x140B6FB7C (BcdEnumerateObjects.c)
 *     BcdSetBootBcdAsSystemStore @ 0x140D08264 (BcdSetBootBcdAsSystemStore.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetSecurityObject @ 0x14072B700 (ZwSetSecurityObject.c)
 *     BiCreateKeySecurityDescriptor @ 0x1409A72B0 (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
