/*
 * XREFs of PopSetNewPolicyValue @ 0x140A3DED8
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x14077595C (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x140A3E538 (PopSetPowerSettingValue.c)
 *     PopStateIsSessionSpecific @ 0x140A3E980 (PopStateIsSessionSpecific.c)
 *     RtlStringFromGUIDEx @ 0x140A3EB50 (RtlStringFromGUIDEx.c)
 *     PpmSetProfilePolicySetting @ 0x140A3FC14 (PpmSetProfilePolicySetting.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 */

__int64 __fastcall PopSetNewPolicyValue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v5; // edi
  __int64 v6; // rax
  unsigned int v7; // ebp
  unsigned int v8; // r15d
  unsigned int v9; // eax
  __int64 v10; // rax
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF

  v3 = a1 + 20;
  LOBYTE(a3) = 1;
  v12 = 0LL;
  v5 = 0;
  if ( (int)RtlStringFromGUIDEx(a1 + 20, &v12, a3) >= 0 && *((_QWORD *)&v12 + 1) )
    ExFreePool(*((PVOID *)&v12 + 1));
  if ( !(unsigned __int8)PopStateIsSessionSpecific(v3) )
  {
    v6 = *(_QWORD *)(a1 + 36) - *(_QWORD *)&GUID_PROCESSOR_SETTINGS_SUBGROUP.Data1;
    v7 = *(_DWORD *)(a1 + 52);
    v8 = *(_DWORD *)(a1 + 56);
    if ( !v6 )
      v6 = *(_QWORD *)(a1 + 44) - *(_QWORD *)GUID_PROCESSOR_SETTINGS_SUBGROUP.Data4;
    if ( v6 )
      return (unsigned int)PopSetPowerSettingValue(v3, 0xFFFFFFFFLL, v7, v8, a1 + 60);
    v9 = PpmSetProfilePolicySetting((int)a1 + 4, v3, v7, (int)a1 + 60, *(_DWORD *)(a1 + 56));
    if ( v9 != -1073741275 )
      v5 = v9;
    v10 = *(_QWORD *)(a1 + 4) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_DEFAULT.Data1;
    if ( !v10 )
      v10 = *(_QWORD *)(a1 + 12) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_DEFAULT.Data4;
    if ( !v10 )
      return (unsigned int)PopSetPowerSettingValue(v3, 0xFFFFFFFFLL, v7, v8, a1 + 60);
  }
  return v5;
}
