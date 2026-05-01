/*
 * XREFs of ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x18006D394
 * Callers:
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x180046C58 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_ME.c)
 *     ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180069E68 (-RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REAS.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@35@Z @ 0x180003048 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U1@U3@@-$_tl.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180007A00 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18001562C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180018CB0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003DE80 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003DF14 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?HampHostComputeEffectivePriority@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180057890 (-HampHostComputeEffectivePriority@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 */

void __fastcall RmpActivityHostRevokeResourceSets(__int64 a1, int a2, int a3)
{
  struct _RM_HAM_ACTIVITY_HOST *v6; // rsi
  int v7; // edi
  unsigned __int64 v8; // r15
  int v9; // r12d
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  int v14; // ebx
  _QWORD v15[3]; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 v16; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v17; // [rsp+B8h] [rbp+50h] BYREF
  int v18; // [rsp+C0h] [rbp+58h] BYREF
  unsigned __int64 v19; // [rsp+C8h] [rbp+60h] BYREF

  v16 = 0LL;
  RmpActivityHostQueryCommit((struct _RM_ACTIVITY_HOST *)a1, 0LL, 0LL, &v16);
  v6 = (struct _RM_HAM_ACTIVITY_HOST *)(a1 + 56);
  v7 = 4;
  if ( dword_1800E1278 )
  {
    HampHostAcquireLockSharedEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 56), 0);
    v8 = v16;
    v9 = (unsigned __int8)HampHostComputeEffectivePriority((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 56), v16);
    HampHostReleaseLockSharedEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 56));
    if ( (unsigned int)dword_1800E1278 > 4 && tlgKeywordOn((__int64)&dword_1800E1278, 1LL) )
    {
      v15[0] = *(_QWORD *)(a1 + 32);
      v18 = v9;
      v19 = v8;
      LODWORD(v16) = a3;
      LOBYTE(v17) = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v10,
        (__int64)&unk_1800D1F51,
        v11,
        v12,
        (__int64)v15,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v19,
        (__int64)&v18);
    }
  }
  v13 = a2 - 1;
  if ( v13 && (v14 = v13 - 1) != 0 )
  {
    if ( v14 == 1 )
      v7 = 3;
  }
  else
  {
    v7 = 1;
  }
  HampHostAcquireLockExclusiveEx(v6, 0);
  v17 = 0;
  HampHostQueueTerminateEx((__int64)v6, v7, (unsigned __int8)a3 | 0x700, 0LL, 3, 0, 0LL, &v17);
  HampHostReleaseLockExclusive(v6);
}
