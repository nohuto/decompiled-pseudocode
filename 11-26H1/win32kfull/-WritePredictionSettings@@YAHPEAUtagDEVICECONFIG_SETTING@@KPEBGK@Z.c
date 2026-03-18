/*
 * XREFs of ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1402CA1C0
 * Callers:
 *     WritePointerDeviceSettingsFull @ 0x1402CA69C (WritePointerDeviceSettingsFull.c)
 * Callees:
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x14016E6B4 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x14016EA74 (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z @ 0x1402CA150 (-WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall WritePredictionSettings(
        const unsigned __int16 **a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  unsigned int v4; // edi
  int v5; // ebx
  const unsigned __int16 **v6; // rsi
  void *KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  struct _UNICODE_STRING v9; // [rsp+40h] [rbp-C8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  char v11; // [rsp+88h] [rbp-80h] BYREF

  *(_QWORD *)&v9.Length = 45875200LL;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v4 = 0;
  v9.Buffer = (PWSTR)&v11;
  v5 = RtlUnicodeStringCopyString(&v9, a2, (ULONG)a3);
  if ( v5 >= 0 )
  {
    v5 = RtlUnicodeStringCatString(&v9, (WCHAR *)L"\\Software\\Microsoft\\TouchPrediction");
    if ( v5 >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v9;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( v5 >= 0 )
      {
        v6 = a1;
        do
        {
          v5 = WritePointerDeviceCfgSetting(KeyHandle, *v6, 4u, (unsigned __int8 *)&a1[2 * v4 + 1] + 4, 4u);
          if ( v5 < 0 )
            break;
          ++v4;
          v6 += 2;
        }
        while ( v4 < 3 );
        ZwClose(KeyHandle);
      }
    }
  }
  return v5 >= 0;
}
