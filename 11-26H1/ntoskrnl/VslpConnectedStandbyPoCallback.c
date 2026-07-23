/*
 * XREFs of VslpConnectedStandbyPoCallback @ 0x140B129F0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslpConnectedStandbyPoCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  char v9; // al
  _BYTE v11[8]; // [rsp+20h] [rbp-88h] BYREF
  char v12; // [rsp+28h] [rbp-80h]
  int v13; // [rsp+38h] [rbp-70h]

  memset_0(v11, 0, 0x68uLL);
  v6 = *(_QWORD *)&SettingGuid->Data1;
  v7 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *(_QWORD *)&SettingGuid->Data1;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)&SettingGuid->Data1 )
    v7 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( v7 )
  {
    v8 = *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 - v6;
    if ( *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 == v6 )
      v8 = *(_QWORD *)GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data4 - *(_QWORD *)SettingGuid->Data4;
    if ( v8 )
      return 3221225659LL;
    v13 = 2;
  }
  else
  {
    v13 = 1;
  }
  v9 = v12;
  if ( *Value )
    v9 = 1;
  v12 = v9;
  return VslpEnterIumSecureMode(2u, 0x42u, 0, (__int64)v11);
}
