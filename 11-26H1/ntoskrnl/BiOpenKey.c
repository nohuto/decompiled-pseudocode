/*
 * XREFs of BiOpenKey @ 0x1409D5F14
 * Callers:
 *     BiDeleteRegistryValue @ 0x140775BE0 (BiDeleteRegistryValue.c)
 *     BiIsPortableWorkspaceBoot @ 0x140892E08 (BiIsPortableWorkspaceBoot.c)
 *     BiDeleteElement @ 0x1409D0978 (BiDeleteElement.c)
 *     BiDeleteKey @ 0x1409D15A8 (BiDeleteKey.c)
 *     BiCreateObject @ 0x1409D2A70 (BiCreateObject.c)
 *     BcdSetElementDataWithFlags @ 0x1409D30C4 (BcdSetElementDataWithFlags.c)
 *     BiCleanupLoadedStores @ 0x1409D3368 (BiCleanupLoadedStores.c)
 *     BiAddStoreFromFile @ 0x1409D35AC (BiAddStoreFromFile.c)
 *     BiOpenSystemStore @ 0x1409D43D4 (BiOpenSystemStore.c)
 *     BiSetRegistryValue @ 0x1409D47E0 (BiSetRegistryValue.c)
 *     BiOpenStoreKeyFromObject @ 0x1409D49B8 (BiOpenStoreKeyFromObject.c)
 *     BcdGetElementDataWithFlags @ 0x1409D4B80 (BcdGetElementDataWithFlags.c)
 *     BiBuildIdentifierList @ 0x1409D4E8C (BiBuildIdentifierList.c)
 *     BcdOpenObject @ 0x1409D54D8 (BcdOpenObject.c)
 *     BiGetObjectDescription @ 0x1409D5C00 (BiGetObjectDescription.c)
 *     BiGetRegistryValue @ 0x1409D5CD4 (BiGetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x140B5C474 (BcdEnumerateObjects.c)
 *     BcdSetBootBcdAsSystemStore @ 0x140D01EC4 (BcdSetBootBcdAsSystemStore.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwSetSecurityObject @ 0x140726B30 (ZwSetSecurityObject.c)
 *     BiCreateKeySecurityDescriptor @ 0x1409D63C0 (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiOpenKey(unsigned __int64 a1, const WCHAR *a2, ACCESS_MASK a3, HANDLE *a4)
{
  unsigned int i; // esi
  void *KeySecurityDescriptor; // r14
  ACCESS_MASK v10; // edx
  NTSTATUS v11; // ebx
  HANDLE KeyHandle; // [rsp+28h] [rbp-90h] BYREF
  HANDLE v14; // [rsp+30h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 v17; // [rsp+C0h] [rbp+8h]

  v14 = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  for ( i = 0; ; ++i )
  {
    KeyHandle = 0LL;
    KeySecurityDescriptor = 0LL;
    RtlInitUnicodeString(&DestinationString, a2);
    v17 = a1 & 0xFFFFFFFFFFFFFFFDuLL;
    a3 |= 0x40000u;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = (HANDLE)(a1 & 0xFFFFFFFFFFFFFFFDuLL);
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = 0x40000;
    if ( (a3 & 0x60019) == a3 )
      v10 = a3;
    v11 = ZwOpenKey(&KeyHandle, v10, &ObjectAttributes);
    if ( v11 >= 0 )
    {
      if ( (a3 & 0x60019) == a3 )
        goto LABEL_6;
      KeySecurityDescriptor = (void *)BiCreateKeySecurityDescriptor(983103);
      v11 = ZwSetSecurityObject(KeyHandle, 4u, KeySecurityDescriptor);
      if ( v11 >= 0 )
      {
        v11 = ZwOpenKey(&v14, a3, &ObjectAttributes);
        if ( v11 >= 0 )
        {
          ZwClose(KeyHandle);
          KeyHandle = v14;
LABEL_6:
          *a4 = KeyHandle;
        }
      }
    }
    if ( v11 < 0 && KeyHandle )
      ZwClose(KeyHandle);
    if ( KeySecurityDescriptor )
      ExFreePoolWithTag(KeySecurityDescriptor, 0x4B444342u);
    if ( v11 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
    a1 = v17;
  }
  return (unsigned int)v11;
}
