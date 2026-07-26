/*
 * XREFs of ?ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x14016AB10
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x140071F80 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14016A220 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

__int64 __fastcall ndisCheckIfDeviceNeedsInstallation(HANDLE *a1, void **a2, _BYTE *a3)
{
  const wchar_t *v5; // rax
  __int64 v6; // r9
  NTSTATUS v7; // ecx
  __int16 v8; // r9
  _UNICODE_STRING v10; // [rsp+20h] [rbp-18h] BYREF

  v5 = L"NetCfgInstanceId";
  v6 = 0x7FFFLL;
  v10 = 0LL;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v6;
  }
  while ( v6 );
  v7 = -1073741811;
  if ( v6 )
  {
    v7 = 0;
    v8 = 2 * v6;
    v10.Buffer = L"NetCfgInstanceId";
    v10.Length = -2 - v8;
    v10.MaximumLength = -v8;
  }
  if ( v7 >= 0 )
    v7 = KRegKey::QueryValueString(a1, &v10, a2);
  if ( v7 == -1073741772 )
  {
    *a3 = 1;
    return 0LL;
  }
  else if ( v7 )
  {
    return (unsigned int)v7;
  }
  else
  {
    *a3 = 0;
    return 0LL;
  }
}
