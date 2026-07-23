/*
 * XREFs of PiInitFirmwareResources @ 0x140CC7118
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     RtlStringFromGUID @ 0x1409F98E0 (RtlStringFromGUID.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     IopCreateRegistryKeyEx @ 0x140AFB79C (IopCreateRegistryKeyEx.c)
 */

__int64 __fastcall PiInitFirmwareResources(__int64 a1)
{
  int v1; // eax
  int v2; // edi
  const GUID **v3; // rsi
  int v4; // eax
  HANDLE v5; // r14
  const GUID *v6; // r12
  HANDLE v7; // rbx
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING GuidString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+30h] BYREF
  HANDLE v12; // [rsp+88h] [rbp+38h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+40h] BYREF

  v1 = *(_DWORD *)(a1 + 264);
  v12 = 0LL;
  Handle = 0LL;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  KeyHandle = 0LL;
  GuidString = 0LL;
  if ( (v1 & 1) == 0 )
    return 0;
  v3 = (const GUID **)(a1 + 296);
  if ( *v3 == (const GUID *)v3 )
  {
    return 0;
  }
  else
  {
    ValueName.Buffer = L"\\Registry\\Machine\\HARDWARE\\UEFI";
    *(_DWORD *)&ValueName.Length = 4194366;
    v4 = IopCreateRegistryKeyEx(&v12, 0LL, &ValueName, 0xF003Fu, 0, 0LL);
    v5 = v12;
    v2 = v4;
    if ( v4 >= 0 )
    {
      ValueName.Buffer = L"ESRT";
      *(_DWORD *)&ValueName.Length = 655368;
      v2 = IopCreateRegistryKeyEx(&Handle, v12, &ValueName, 0xF003Fu, 0, 0LL);
      if ( v2 >= 0 )
      {
        v6 = *v3;
        if ( *v3 != (const GUID *)v3 )
        {
          do
          {
            v2 = RtlStringFromGUID(v6 + 1, &GuidString);
            if ( v2 < 0 )
              break;
            v2 = IopCreateRegistryKeyEx(&KeyHandle, Handle, &GuidString, 0xF003Fu, 0, 0LL);
            RtlFreeAnsiString(&GuidString);
            if ( v2 < 0 )
              break;
            v7 = KeyHandle;
            ValueName.Buffer = (wchar_t *)L"Type";
            *(_DWORD *)&ValueName.Length = 655368;
            ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, (PVOID)&v6[2], 4u);
            *(_DWORD *)&ValueName.Length = 1048590;
            ValueName.Buffer = L"Version";
            ZwSetValueKey(v7, &ValueName, 0, 4u, &v6[2].Data2, 4u);
            *(_DWORD *)&ValueName.Length = 3014700;
            ValueName.Buffer = L"LowestSupportedVersion";
            ZwSetValueKey(v7, &ValueName, 0, 4u, v6[2].Data4, 4u);
            *(_DWORD *)&ValueName.Length = 2490404;
            ValueName.Buffer = (wchar_t *)L"LastAttemptVersion";
            ZwSetValueKey(v7, &ValueName, 0, 4u, (PVOID)&v6[3], 4u);
            *(_DWORD *)&ValueName.Length = 2359330;
            ValueName.Buffer = (wchar_t *)L"LastAttemptStatus";
            ZwSetValueKey(v7, &ValueName, 0, 4u, &v6[3].Data2, 4u);
            ZwClose(v7);
            v6 = *(const GUID **)&v6->Data1;
          }
          while ( v6 != (const GUID *)v3 );
          v5 = v12;
        }
      }
      if ( Handle )
        ZwClose(Handle);
    }
    if ( v5 )
      ZwClose(v5);
  }
  return (unsigned int)v2;
}
