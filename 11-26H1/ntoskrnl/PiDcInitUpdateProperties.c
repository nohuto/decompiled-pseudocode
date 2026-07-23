/*
 * XREFs of PiDcInitUpdateProperties @ 0x1407AA6AC
 * Callers:
 *     PiDcInit @ 0x140CCB840 (PiDcInit.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1403C27C0 (RtlInsertElementGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwEnumerateValueKey @ 0x140728220 (ZwEnumerateValueKey.c)
 *     ZwEnumerateKey @ 0x140728600 (ZwEnumerateKey.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     RtlUnicodeStringToInteger @ 0x140975540 (RtlUnicodeStringToInteger.c)
 *     IopOpenRegistryKeyEx @ 0x1409DC0A0 (IopOpenRegistryKeyEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 PiDcInitUpdateProperties()
{
  __int64 Pool2; // rdi
  int v1; // ebx
  int v2; // eax
  ULONG i; // r14d
  NTSTATUS v4; // eax
  _WORD *v5; // r15
  ULONG j; // esi
  NTSTATUS v7; // eax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-19h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-9h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-1h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp+7h] BYREF
  GUID Guid; // [rsp+60h] [rbp+Fh] BYREF
  ULONG Value; // [rsp+70h] [rbp+1Fh] BYREF
  GUID Buffer; // [rsp+78h] [rbp+27h] BYREF
  __int64 v16; // [rsp+88h] [rbp+37h]

  KeyHandle = 0LL;
  Handle = 0LL;
  Value = 0;
  v16 = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  Guid = 0LL;
  Buffer = 0LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
  {
    v1 = -1073741670;
    goto LABEL_27;
  }
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\DeviceContainerPropertyUpdateEvents");
  v2 = IopOpenRegistryKeyEx(&KeyHandle, 0LL, &DestinationString, 8LL);
  v1 = v2;
  if ( v2 != -1073741772 )
  {
    if ( v2 < 0 )
      goto LABEL_27;
    for ( i = 0; ; ++i )
    {
      v4 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, (PVOID)Pool2, 0x218u, &ResultLength);
      v1 = v4;
      if ( v4 == -2147483622 )
        break;
      if ( v4 < 0 )
        goto LABEL_27;
      v5 = (_WORD *)(Pool2 + 16);
      DestinationString.Buffer = (wchar_t *)(Pool2 + 16);
      DestinationString.Length = *(_WORD *)(Pool2 + 12);
      DestinationString.MaximumLength = DestinationString.Length;
      v1 = IopOpenRegistryKeyEx(&Handle, KeyHandle, &DestinationString, 131097LL);
      if ( v1 < 0 )
        goto LABEL_27;
      for ( j = 0; ; ++j )
      {
        v7 = ZwEnumerateValueKey(Handle, j, KeyValueFullInformation, (PVOID)Pool2, 0x218u, &ResultLength);
        v1 = v7;
        if ( v7 == -2147483622 )
          break;
        if ( v7 != -2147483643 )
        {
          if ( v7 < 0 )
            goto LABEL_24;
          if ( (unsigned int)(*(_DWORD *)v5 - 80) <= 0x12 )
          {
            *(_DWORD *)&DestinationString.Length = 4980812;
            DestinationString.Buffer = (wchar_t *)(Pool2 + 20);
            if ( RtlGUIDFromString(&DestinationString, &Guid) >= 0 )
            {
              DestinationString.Buffer = (wchar_t *)(Pool2 + 98);
              DestinationString.Length = *v5 - 78;
              DestinationString.MaximumLength = DestinationString.Length;
              if ( RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value) >= 0 )
              {
                LODWORD(v16) = Value;
                Buffer = Guid;
                if ( *(_DWORD *)(Pool2 + 4) == 4 && *(_DWORD *)(Pool2 + 12) == 4 )
                  HIDWORD(v16) = *(_DWORD *)(*(unsigned int *)(Pool2 + 8) + Pool2);
                else
                  HIDWORD(v16) = 0;
                if ( !RtlInsertElementGenericTableAvl(&PiDcUpdateProperties, &Buffer, 0x18u, 0LL) )
                {
                  v1 = -1073741670;
                  goto LABEL_24;
                }
              }
            }
          }
        }
      }
      v1 = 0;
LABEL_24:
      ZwClose(Handle);
      Handle = 0LL;
      if ( v1 < 0 )
        goto LABEL_27;
    }
  }
  v1 = 0;
LABEL_27:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0x47706E50u);
  return (unsigned int)v1;
}
