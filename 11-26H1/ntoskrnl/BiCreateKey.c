/*
 * XREFs of BiCreateKey @ 0x1409A6848
 * Callers:
 *     BiCreateObject @ 0x1409A3A50 (BiCreateObject.c)
 *     BcdSetElementDataWithFlags @ 0x1409A40A4 (BcdSetElementDataWithFlags.c)
 *     BiAddStoreFromFile @ 0x1409A458C (BiAddStoreFromFile.c)
 *     BiSetObjectDescription @ 0x140B56BF0 (BiSetObjectDescription.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ZwSetSecurityObject @ 0x14072B700 (ZwSetSecurityObject.c)
 *     BiCreateKeySecurityDescriptor @ 0x1409A72B0 (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiCreateKey(
        unsigned __int64 a1,
        const WCHAR *a2,
        ACCESS_MASK a3,
        unsigned int a4,
        HANDLE *a5,
        bool *a6)
{
  char v6; // r14
  const WCHAR *v8; // rax
  unsigned int i; // r15d
  int v11; // edi
  char v12; // r12
  ULONG v13; // edi
  void *KeySecurityDescriptor; // rax
  void *v15; // r14
  NTSTATUS v16; // edi
  ACCESS_MASK DesiredAccess; // [rsp+40h] [rbp-98h]
  ULONG Disposition; // [rsp+44h] [rbp-94h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-90h] BYREF
  HANDLE v21; // [rsp+50h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-70h] BYREF

  v6 = a4;
  v8 = a2;
  Disposition = 0;
  v21 = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  for ( i = 0; ; ++i )
  {
    KeyHandle = 0LL;
    RtlInitUnicodeString(&DestinationString, v8);
    a1 &= ~2uLL;
    a3 |= 0x40000u;
    v11 = 64;
    DesiredAccess = a3;
    v12 = 0;
    if ( (v6 & 1) != 0 )
    {
      v11 = 192;
      if ( (a3 & 0x60019) != a3 )
      {
        DesiredAccess = 0x40000;
        v12 = 1;
      }
    }
    v13 = v11 | 0x200;
    KeySecurityDescriptor = (void *)BiCreateKeySecurityDescriptor(983103);
    v15 = KeySecurityDescriptor;
    if ( KeySecurityDescriptor )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = (HANDLE)a1;
      ObjectAttributes.Attributes = v13;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.SecurityDescriptor = KeySecurityDescriptor;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      v16 = ZwCreateKey(&KeyHandle, DesiredAccess, &ObjectAttributes, 0, 0LL, (a4 >> 1) & 1, &Disposition);
      if ( v16 < 0 )
        goto LABEL_12;
      if ( v12 )
      {
        v16 = ZwSetSecurityObject(KeyHandle, 4u, v15);
        if ( v16 < 0 )
          goto LABEL_12;
        v16 = ZwOpenKey(&v21, a3, &ObjectAttributes);
        if ( v16 < 0 )
          goto LABEL_12;
        ZwClose(KeyHandle);
        KeyHandle = v21;
      }
      if ( a6 )
        *a6 = Disposition == 1;
      *a5 = KeyHandle;
LABEL_12:
      if ( v16 >= 0 )
        goto LABEL_13;
      goto LABEL_22;
    }
    v16 = -1073741703;
LABEL_22:
    if ( KeyHandle )
      ZwClose(KeyHandle);
LABEL_13:
    if ( v15 )
      ExFreePoolWithTag(v15, 0x4B444342u);
    if ( v16 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
    v6 = a4;
    v8 = a2;
  }
  return (unsigned int)v16;
}
