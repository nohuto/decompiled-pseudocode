/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x180046C58
 * Callers:
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x1800065D0 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x18000338C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x180046BE0 (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180046FB4 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostHasEmptiedWorkingSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180047320 (-RmpActivityHostHasEmptiedWorkingSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800473A0 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800476B0 (-RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180047704 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x18006D394 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 */

void __fastcall RmpMemoryMonitorEmptyPolicyActOnHosts(
        struct _RM_MEMORY_MONITOR_DATA *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5,
        struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *a6,
        unsigned __int8 *a7,
        unsigned __int8 *a8)
{
  unsigned __int8 *v8; // rdi
  __int64 v9; // r13
  unsigned int v10; // r14d
  char *v11; // rsi
  __int64 v12; // rbx
  int v13; // r9d
  char v14; // r11
  int v15; // eax
  int v16; // r8d
  int v17; // edx
  int v18; // r11d
  __int64 v19; // rdi
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v20; // rax
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **v21; // rcx
  unsigned __int64 v22; // rax
  int v23; // eax
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  bool v28[8]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+48h] [rbp-18h] BYREF
  __int64 v30; // [rsp+50h] [rbp-10h] BYREF
  __int64 v31; // [rsp+58h] [rbp-8h] BYREF
  struct _RM_ACTIVITY_HOST_METRICS *v32; // [rsp+A8h] [rbp+48h]
  unsigned int v33; // [rsp+B0h] [rbp+50h]

  v33 = a3;
  v32 = a2;
  v8 = a8;
  v9 = *(_QWORD *)a1;
  v10 = 0;
  *a7 = 0;
  *a8 = 0;
  while ( v10 < a3 )
  {
    v11 = (char *)a2 + 64 * (unsigned __int64)v10;
    v12 = *((_QWORD *)v11 + 6);
    if ( *((__int16 *)v11 + 30) < 0 )
    {
      if ( (unsigned int)dword_1800E1278 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E1278, 1LL) )
      {
        v29 = *(_QWORD *)v11;
        v30 = *((_QWORD *)v11 + 3);
        v31 = *(_QWORD *)(v12 + 32);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v25,
          (__int64)&unk_1800D3906,
          v26,
          v27,
          (__int64)&v31,
          (__int64)&v30,
          (__int64)&v29);
      }
      RmpActivityHostAddToRemediationGroup((struct _RM_ACTIVITY_HOST *)v12, a6);
      RmpActivityHostRevokeResourceSets(v12, 3LL, 4LL);
      v19 = 24LL;
    }
    else
    {
      if ( !RmpPolicyActivityHostIsValidEmptyTarget(*((struct _RM_ACTIVITY_HOST **)v11 + 6)) )
        return;
      if ( (a5 & 8) != 0 )
      {
        RmpPolicyComputeDesiredEmptyState(v9 + 200, v12, 2);
        if ( (a5 & 4) == 0 )
          *v8 = 1;
        v19 = RmpActivityHostHasEmptiedWorkingSet((struct _RM_ACTIVITY_HOST *)v12) != 0 ? 32LL : 24LL;
      }
      else if ( RmpActivityHostHasEmptiedWorkingSet((struct _RM_ACTIVITY_HOST *)v12) )
      {
        if ( v14 )
          return;
        v23 = 0;
        v16 = *(_DWORD *)(v12 + 1440);
        LOBYTE(v13) = (*(_DWORD *)(v12 + 1252) & 0x10) == 0;
        if ( ((unsigned __int8)v13 & ((v16 & 0x200) == 0)) != 0 )
        {
          v24 = 2 * (*(_DWORD *)(v9 + 304) & 1);
          if ( (v16 & 0x100) == 0 )
            v24 |= 2 * (*(_DWORD *)(v9 + 304) & 2);
          if ( (*(_DWORD *)(v9 + 304) & 4) != 0 )
            v23 = v24;
          else
            v23 = v24 | 0x22;
        }
        v18 = v23 | *(_DWORD *)(v12 + 1252) & 0x27;
        if ( (a5 & 4) == 0 )
          *v8 = 1;
        v19 = 32LL;
      }
      else
      {
        v15 = 0;
        v16 = *(_DWORD *)(v12 + 1440);
        LOBYTE(v13) = (*(_DWORD *)(v12 + 1252) & 0x10) == 0;
        if ( ((unsigned __int8)v13 & ((v16 & 0x200) == 0)) != 0 )
        {
          v17 = 2 * (*(_DWORD *)(v9 + 304) & 1);
          if ( (v16 & 0x100) == 0 )
            v17 |= 2 * (*(_DWORD *)(v9 + 304) & 2);
          v15 = v17 | 2;
          if ( (*(_BYTE *)(v9 + 304) & 4) != 0 )
            v15 = v17;
        }
        v18 = v15 | *(_DWORD *)(v12 + 1252) & 0x27;
        v19 = 24LL;
      }
      *(_DWORD *)(v12 + 1444) |= v18;
      if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 1) != 0 && (qword_1800E1290 & 1) == qword_1800E1290 )
      {
        v31 = *(_QWORD *)&v11[v19];
        v30 = *(_QWORD *)(v12 + 32);
        v28[0] = (v18 & 0x20) != 0;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
          (unsigned int)&dword_1800E1278,
          (unsigned int)&unk_1800D3807,
          v16,
          v13,
          (__int64)&v30,
          (__int64)&v31,
          (__int64)v28);
      }
      *(_QWORD *)(v12 + 1408) = a6;
      v20 = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)(v12 + 1416);
      v21 = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)*((_QWORD *)a6 + 1);
      if ( *v21 != a6 )
        __fastfail(3u);
      *(_QWORD *)v20 = a6;
      *(_QWORD *)(v12 + 1424) = v21;
      *v21 = v20;
      *((_QWORD *)a6 + 1) = v20;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 16)) <= 1 )
        __fastfail(0xEu);
      RmpActivityHostCheckQueueWork(*((struct _RM_ACTIVITY_HOST **)v11 + 6));
    }
    *a7 = 1;
    if ( (a5 & 2) != 0 || *(_QWORD *)&v11[v19] > a4 )
      break;
    v22 = a4 - *(_QWORD *)&v11[v19];
    ++v10;
    v8 = a8;
    a3 = v33;
    a2 = v32;
    a4 = v22;
  }
}
