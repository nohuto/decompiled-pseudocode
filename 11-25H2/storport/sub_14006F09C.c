/*
 * XREFs of sub_14006F09C @ 0x14006F09C
 * Callers:
 *     DllInitialize @ 0x1400A3DE0 (DllInitialize.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400711BC @ 0x1400711BC (sub_1400711BC.c)
 */

void sub_14006F09C()
{
  unsigned int *v0; // rbx
  ULONG v1; // edi
  ULONG i; // edx
  _DWORD *v3; // rdx
  UCHAR *inserted; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp+10h] BYREF
  void *KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\NVMeAuthKeys");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v0 = (unsigned int *)sub_1400143E0(64LL, 840LL, 1095655762LL, 0LL);
    if ( v0 )
    {
      v1 = 0;
      for ( i = 0; ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, v0, 0x348u, &ResultLength) >= 0; i = v1 )
      {
        if ( v0[3] >= 0x214 )
        {
          v3 = (unsigned int *)((char *)v0 + v0[2]);
          if ( *v3 == 1314275659 )
          {
            inserted = (UCHAR *)RtlInsertElementGenericTable(&Table, v3, 0x314u, 0LL);
            if ( !inserted || (int)sub_1400711BC(inserted + 20, (__int64)(inserted + 14), inserted + 532) < 0 )
              break;
          }
        }
        ++v1;
      }
      ExFreePoolWithTag(v0, 0x414E6152u);
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
