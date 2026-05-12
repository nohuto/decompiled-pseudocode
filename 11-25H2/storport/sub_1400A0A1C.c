/*
 * XREFs of sub_1400A0A1C @ 0x1400A0A1C
 * Callers:
 *     sub_1401ACC34 @ 0x1401ACC34 (sub_1401ACC34.c)
 * Callees:
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400A0A1C(__int64 a1)
{
  unsigned int v1; // ebx
  NTSTATUS RegistryValues; // eax
  __int64 ValueData; // [rsp+48h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  void *DeviceRegKey; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES DeviceRegKey_8; // [rsp+60h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  _BYTE Dst[8]; // [rsp+A8h] [rbp-60h] BYREF
  int v11; // [rsp+B0h] [rbp-58h]
  const WCHAR *v12; // [rsp+B8h] [rbp-50h]
  __int64 *p_ValueData; // [rsp+C0h] [rbp-48h]
  int v14; // [rsp+C8h] [rbp-40h]
  __int64 *v15; // [rsp+D0h] [rbp-38h]
  int v16; // [rsp+D8h] [rbp-30h]

  v1 = 0;
  LODWORD(ValueData) = 0;
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  memset(&DeviceRegKey_8, 0, sizeof(DeviceRegKey_8));
  DestinationString = 0LL;
  if ( !a1 || (*(_DWORD *)(a1 + 1952) & 0x10) == 0 )
  {
    v1 = -1056964601;
    goto LABEL_15;
  }
  if ( KeGetCurrentIrql() )
  {
    v1 = -1056964600;
    goto LABEL_15;
  }
  if ( IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(a1 + 8), 1u, 0x2001Fu, &DeviceRegKey) < 0 )
    goto LABEL_6;
  RtlInitUnicodeString(&DestinationString, L"Disk");
  DeviceRegKey_8.RootDirectory = DeviceRegKey;
  DeviceRegKey_8.Length = 48;
  DeviceRegKey_8.ObjectName = &DestinationString;
  DeviceRegKey_8.Attributes = 576;
  *(_OWORD *)&DeviceRegKey_8.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &DeviceRegKey_8) >= 0 )
  {
    memset_0(Dst, 0, 0x150uLL);
    p_ValueData = &ValueData;
    v11 = 288;
    v15 = &ValueData;
    v12 = L"UserWriteCacheSetting";
    v14 = 67108868;
    v16 = 4;
    RegistryValues = RtlQueryRegistryValuesEx(1073741828LL, KeyHandle, Dst, 0LL, 0LL);
    goto LABEL_10;
  }
  RegistryValues = ZwCreateKey(&KeyHandle, 0x2001Fu, &DeviceRegKey_8, 0, 0LL, 0, 0LL);
  if ( RegistryValues < 0 )
  {
LABEL_10:
    if ( RegistryValues != -1073741772 )
      goto LABEL_12;
  }
  LODWORD(ValueData) = 1;
  RegistryValues = RtlWriteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, L"UserWriteCacheSetting", 4u, &ValueData, 4u);
LABEL_12:
  if ( RegistryValues < 0 )
LABEL_6:
    v1 = -1056964607;
LABEL_15:
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v1;
}
