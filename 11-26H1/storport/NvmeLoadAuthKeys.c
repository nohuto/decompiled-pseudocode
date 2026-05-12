/*
 * XREFs of NvmeLoadAuthKeys @ 0x140075F84
 * Callers:
 *     DllInitialize @ 0x1400ACAB0 (DllInitialize.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     TransformNvmeAuthKey @ 0x140077FF4 (TransformNvmeAuthKey.c)
 */

void NvmeLoadAuthKeys()
{
  unsigned int *Pool; // rbx
  ULONG v1; // edi
  ULONG i; // edx
  _DWORD *v3; // rdx
  UCHAR *inserted; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp+10h] BYREF
  void *KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\NVMeAuthKeys");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    Pool = (unsigned int *)RaidAllocatePool(64LL, 840LL, 1095655762LL, 0LL);
    if ( Pool )
    {
      v1 = 0;
      for ( i = 0; ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, Pool, 0x348u, &ResultLength) >= 0; i = v1 )
      {
        if ( Pool[3] >= 0x214 )
        {
          v3 = (unsigned int *)((char *)Pool + Pool[2]);
          if ( *v3 == 1314275659 )
          {
            inserted = (UCHAR *)RtlInsertElementGenericTable(&NvmeAuthKeyTable, v3, 0x314u, 0LL);
            if ( !inserted || (int)TransformNvmeAuthKey(inserted + 20, (__int64)(inserted + 14), inserted + 532) < 0 )
              break;
          }
        }
        ++v1;
      }
      ExFreePoolWithTag(Pool, 0x414E6152u);
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
