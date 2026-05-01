/*
 * XREFs of ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x1800449A0
 * Callers:
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x1800085A0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 *     ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800446D0 (-RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180069E68 (-RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REAS.c)
 * Callees:
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180007A00 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180045630 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180059AC8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$00@@@-$_tlgWr.c)
 */

__int64 __fastcall RmpActivityHostDecommitOfferedMemory(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_OFFERED_DECOMMIT_INFO *a2)
{
  unsigned __int64 v2; // rsi
  int v3; // ebx
  bool v4; // zf
  unsigned int v7; // edx
  int (*v8)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *); // r9
  int v9; // r15d
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  bool v14; // al
  __int64 v15; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v16; // [rsp+88h] [rbp+38h] BYREF
  unsigned __int64 v17; // [rsp+90h] [rbp+40h] BYREF
  __int64 v18; // [rsp+98h] [rbp+48h] BYREF

  v2 = 0LL;
  v3 = *((_DWORD *)a2 + 4) & 2;
  v16 = 0LL;
  v4 = (*((_BYTE *)a2 + 16) & 1) == 0;
  v17 = 0LL;
  if ( v4 )
  {
    v7 = 0x2000;
    v8 = (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostDecommitOfferedMemoryDxgCallback;
  }
  else
  {
    if ( v3 )
      RmpAcquireGlobalLock();
    RmpActivityHostQueryCommit(a1, 0LL, 0LL, &v17);
    if ( v3 )
      RmpReleaseGlobalLock();
    v2 = v17;
    v8 = RmpActivityHostDecommitOfferedMemoryCommitSaveCallback;
    v7 = 8193;
  }
  v9 = RmHamHostActOnProcesses(a1, v7, 0, v8, a2);
  if ( v9 >= 0 )
  {
    if ( (*((_BYTE *)a2 + 16) & 1) != 0 )
    {
      if ( v3 )
        RmpAcquireGlobalLock();
      v9 = RmpActivityHostQueryCommit(a1, 0LL, 0LL, &v16);
      if ( v3 )
        RmpReleaseGlobalLock();
      if ( v9 >= 0 && v2 >= v16 )
      {
        v4 = (*((_BYTE *)a2 + 16) & 4) == 0;
        *((_QWORD *)a2 + 1) = v2 - v16;
        if ( !v4 )
          *((_DWORD *)a1 + 312) |= 4u;
      }
    }
    if ( v3 )
      RmpAcquireGlobalLock();
    *((_QWORD *)a1 + 152) += *((_QWORD *)a2 + 1);
    if ( v3 )
      RmpReleaseGlobalLock();
  }
  if ( (unsigned int)dword_1800E1278 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E1278, 25LL) )
  {
    v14 = (*((_DWORD *)a2 + 4) & 2) != 0;
    LODWORD(v17) = v9;
    LOBYTE(v16) = v14;
    v18 = *((_QWORD *)a2 + 1);
    v15 = *((_QWORD *)a1 + 4);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v11,
      (unsigned int)&unk_1800D1E2B,
      v12,
      v13,
      (__int64)&v17,
      (__int64)&v15,
      (__int64)&v18,
      (__int64)&v16);
  }
  return (unsigned int)v9;
}
