/*
 * XREFs of NvmeControllerPerfStateTransition @ 0x14003BB08
 * Callers:
 *     NvmeAdapterActiveCondition @ 0x14003B9C0 (NvmeAdapterActiveCondition.c)
 *     NvmeControllerMaxOperationalPower @ 0x14012705C (NvmeControllerMaxOperationalPower.c)
 * Callees:
 *     Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledDeviceUsageNoInline @ 0x1400B2790 (Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall NvmeControllerPerfStateTransition(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 *v6; // rcx
  _DWORD *v7; // r9
  __int64 v8; // rcx

  v1 = 0;
  v2 = a1 + 128;
  if ( !(unsigned int)Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledDeviceUsageNoInline()
    || (v3 = *(_QWORD *)(*(_QWORD *)v2 + 160LL)) != 0 && *(_QWORD *)(v3 + 8) && *(_DWORD *)(*(_QWORD *)v2 + 84LL) == 1 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)v2 + 160LL);
    if ( (*(_DWORD *)(v4 + 176) & 4) != 0 )
    {
      v5 = *(unsigned __int8 *)(v4 + 183);
      v6 = *(__int64 **)(v4 + 8);
      if ( *(_BYTE *)(v4 + 182) != (_BYTE)v5 && !_interlockedbittestandset((volatile signed __int32 *)(v4 + 212), 0) )
      {
        v7 = v6 + 12;
        *((_DWORD *)v6 + 26) = v5;
        v8 = *v6;
        *v7 = 0;
        PoFxIssueComponentPerfStateChange(v8, 0LL, 0LL, v7, v5);
        return 1;
      }
    }
  }
  return v1;
}
