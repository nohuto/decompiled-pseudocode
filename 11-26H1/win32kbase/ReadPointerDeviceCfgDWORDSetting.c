/*
 * XREFs of ReadPointerDeviceCfgDWORDSetting @ 0x1400F0690
 * Callers:
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1400EE59C (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 *     GetDWORDSettingValuesEx @ 0x1400F04A0 (GetDWORDSettingValuesEx.c)
 *     GetDWORDSettingValues @ 0x1400F0570 (GetDWORDSettingValues.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall ReadPointerDeviceCfgDWORDSetting(HANDLE KeyHandle, __int64 a2)
{
  const WCHAR *v3; // rdx
  _DWORD *v5; // rbx
  __int64 v6; // rdx
  NTSTATUS v7; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG Length; // [rsp+58h] [rbp+10h] BYREF

  Length = 16;
  v3 = *(const WCHAR **)a2;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, v3);
  v5 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, Length, 0x78707355u);
  if ( v5 )
  {
    v7 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v5, Length, &Length);
    if ( v7 >= 0 && v5[1] == 4 )
      *(_DWORD *)(a2 + 12) = v5[3];
    GreDeleteFastMutex((char *)v5, v6, v8, v9);
  }
  else
  {
    return (unsigned int)-1073741595;
  }
  return (unsigned int)v7;
}
