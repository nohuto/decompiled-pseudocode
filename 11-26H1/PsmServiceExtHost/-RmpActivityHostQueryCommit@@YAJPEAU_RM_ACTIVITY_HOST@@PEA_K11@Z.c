/*
 * XREFs of ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180007A00
 * Callers:
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x180006D80 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x1800085A0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x1800449A0 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x18006D394 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 * Callees:
 *     ?QueryCurrentMemoryUsage@ModernResourceEnforcer@@QEAAJPEBGPEAT_RM_SID@@KK_KKPEA_K3@Z @ 0x180007D10 (-QueryCurrentMemoryUsage@ModernResourceEnforcer@@QEAAJPEBGPEAT_RM_SID@@KK_KKPEA_K3@Z.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180007EE0 (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostQueryCommit(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  const wchar_t *v4; // rbx
  char v7; // al
  __int64 v8; // rcx
  unsigned int v9; // r9d
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  int v19; // eax
  unsigned __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v25; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v26; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 *v28; // [rsp+90h] [rbp-70h]
  unsigned __int64 *v29; // [rsp+98h] [rbp-68h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-50h] BYREF
  void *v32; // [rsp+C0h] [rbp-40h]
  int v33; // [rsp+C8h] [rbp-38h]
  int v34; // [rsp+CCh] [rbp-34h]
  __int64 *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  const wchar_t *v37; // [rsp+E0h] [rbp-20h]
  int v38; // [rsp+E8h] [rbp-18h]
  int v39; // [rsp+ECh] [rbp-14h]
  unsigned __int64 *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  unsigned __int64 *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  unsigned __int64 *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]

  v28 = a2;
  v22 = 0LL;
  v4 = (const wchar_t *)((char *)a1 + 80);
  v21 = 0LL;
  v20 = 0LL;
  v7 = *((_BYTE *)a1 + 648);
  v8 = *((_QWORD *)a1 + 6);
  v9 = *((_DWORD *)a1 + 153);
  v29 = a3;
  result = ModernResourceEnforcer::QueryCurrentMemoryUsage(
             *(ModernResourceEnforcer **)(v8 + 40),
             v4,
             (union _RM_SID *)(v4 + 232),
             v9,
             *((_DWORD *)v4 + 134),
             *((_QWORD *)a1 + 4),
             v7 != 0 ? 4 : 0,
             &v21,
             &v20);
  if ( (int)result >= 0 )
  {
    if ( (int)RmpActivityHostQueryCommitDebt(a1, &v22) >= 0 )
    {
      v11 = v22;
    }
    else
    {
      v11 = 0LL;
      v22 = 0LL;
    }
    v12 = v21;
    v13 = v21;
    if ( v11 < v21 )
      v13 = v11;
    v14 = v21 - v13;
    if ( v21 && v14 <= 1 )
      v14 = 1LL;
    v15 = v20;
    v16 = v20 + v14;
    if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 1) != 0 && (qword_1800E1290 & 1) == qword_1800E1290 )
    {
      LODWORD(v20) = *((_DWORD *)a1 + 154);
      v27 = *((_QWORD *)a1 + 4);
      v48 = &v23;
      v46 = &v24;
      v44 = &v25;
      v42 = &v26;
      v40 = &v20;
      v23 = v11;
      v24 = v15;
      v25 = v21;
      v26 = v16;
      v49 = 8LL;
      v47 = 8LL;
      v45 = 8LL;
      v43 = 8LL;
      v41 = 4LL;
      if ( v4 )
      {
        v17 = -1LL;
        while ( v4[++v17] != 0 )
          ;
        v19 = 2 * v17 + 2;
      }
      else
      {
        v4 = &word_1800BBB1C;
        v19 = 2;
      }
      v38 = v19;
      v39 = 0;
      v35 = &v27;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800E1280;
      EventDescriptor.Keyword = 1LL;
      v37 = v4;
      v36 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)off_1800E1280;
      v32 = &unk_1800D21DA;
      v34 = 1;
      UserData.Reserved = 2;
      v33 = 150;
      LODWORD(v21) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
    }
    if ( v28 )
      *v28 = v14;
    if ( v29 )
      *v29 = v15 + v12;
    if ( a4 )
      *a4 = v16;
    return 0LL;
  }
  return result;
}
