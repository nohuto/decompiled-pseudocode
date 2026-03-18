/*
 * XREFs of ReadPointerDeviceCfgDWORDSetting @ 0x1400B2D30
 * Callers:
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1400B14CC (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 *     GetDWORDSettingValuesEx @ 0x1400B2B50 (GetDWORDSettingValuesEx.c)
 *     GetDWORDSettingValues @ 0x1400B2C10 (GetDWORDSettingValues.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall ReadPointerDeviceCfgDWORDSetting(HANDLE KeyHandle, __int64 a2)
{
  const WCHAR *v3; // rdx
  _DWORD *v5; // rbx
  NTSTATUS v6; // edi
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG Length; // [rsp+58h] [rbp+10h] BYREF

  Length = 16;
  v3 = *(const WCHAR **)a2;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, v3);
  v5 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, Length, 0x78707355u);
  if ( v5 )
  {
    v6 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v5, Length, &Length);
    if ( v6 >= 0 && v5[1] == 4 )
      *(_DWORD *)(a2 + 12) = v5[3];
    GreDeleteFastMutex((char *)v5);
  }
  else
  {
    return (unsigned int)-1073741595;
  }
  return (unsigned int)v6;
}
