/*
 * XREFs of BiOpenKey @ 0x1409A6EF4
 * Callers:
 *     BiDeleteRegistryValue @ 0x140778A88 (BiDeleteRegistryValue.c)
 *     BiIsPortableWorkspaceBoot @ 0x140899208 (BiIsPortableWorkspaceBoot.c)
 *     BiDeleteElement @ 0x1409A1958 (BiDeleteElement.c)
 *     BiDeleteKey @ 0x1409A2588 (BiDeleteKey.c)
 *     BiCreateObject @ 0x1409A3A50 (BiCreateObject.c)
 *     BcdSetElementDataWithFlags @ 0x1409A40A4 (BcdSetElementDataWithFlags.c)
 *     BiCleanupLoadedStores @ 0x1409A4348 (BiCleanupLoadedStores.c)
 *     BiAddStoreFromFile @ 0x1409A458C (BiAddStoreFromFile.c)
 *     BiOpenSystemStore @ 0x1409A53B4 (BiOpenSystemStore.c)
 *     BiSetRegistryValue @ 0x1409A57C0 (BiSetRegistryValue.c)
 *     BiOpenStoreKeyFromObject @ 0x1409A5998 (BiOpenStoreKeyFromObject.c)
 *     BcdGetElementDataWithFlags @ 0x1409A5B60 (BcdGetElementDataWithFlags.c)
 *     BiBuildIdentifierList @ 0x1409A5E6C (BiBuildIdentifierList.c)
 *     BcdOpenObject @ 0x1409A64B8 (BcdOpenObject.c)
 *     BiGetObjectDescription @ 0x1409A6BE0 (BiGetObjectDescription.c)
 *     BiGetRegistryValue @ 0x1409A6CB4 (BiGetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x140B6FB7C (BcdEnumerateObjects.c)
 *     BcdSetBootBcdAsSystemStore @ 0x140D08264 (BcdSetBootBcdAsSystemStore.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwSetSecurityObject @ 0x14072B700 (ZwSetSecurityObject.c)
 *     BiCreateKeySecurityDescriptor @ 0x1409A72B0 (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
