/*
 * XREFs of ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x1800065D0
 * Callers:
 *     ?RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180004DC0 (-RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONI.c)
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x180005000 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180004230 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x180004AE0 (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180006CE0 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x180006D80 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180007750 (-RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x1800083CC (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x180046C58 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_ME.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 __fastcall RmpMemoryMonitorEmptyWorkingSets(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v6; // r14d
  DWORD v7; // edi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  int v10; // edx
  __int64 v11; // rdi
  int v12; // r8d
  unsigned int v13; // r13d
  __int64 v14; // rbx
  __int16 v15; // ax
  unsigned __int64 v16; // r15
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // ax
  bool v19; // zf
  __int64 v20; // r8
  void *v21; // rcx
  struct _RM_ACTIVITY_HOST *Next; // rbx
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned int v25; // edx
  unsigned int v26; // ebx
  _QWORD *v27; // rax
  __int64 *v28; // rax
  __int64 v29; // rdx
  _QWORD *v31; // rdi
  _QWORD *v32; // rcx
  _QWORD *v33; // rdx
  int v34; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int16 v35; // [rsp+44h] [rbp-35h]
  unsigned int v36; // [rsp+48h] [rbp-31h]
  int v37; // [rsp+4Ch] [rbp-2Dh]
  int v38; // [rsp+50h] [rbp-29h]
  int v39; // [rsp+54h] [rbp-25h]
  _QWORD v40[3]; // [rsp+58h] [rbp-21h] BYREF
  _OWORD v41[6]; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int8 v42; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v43; // [rsp+E8h] [rbp+6Fh]
  __int64 v44; // [rsp+F0h] [rbp+77h]
  unsigned __int8 v45; // [rsp+F8h] [rbp+7Fh] BYREF

  v44 = a3;
  v43 = a2;
  v40[1] = v40;
  v40[0] = v40;
  v40[2] = a1[4];
  v34 = 0;
  v45 = 0;
  v42 = 0;
  if ( (a4 & 0x20) != 0 )
  {
    v36 = 0;
    v6 = 0;
  }
  else if ( (a4 & 8) != 0 )
  {
    v6 = 1;
    v36 = 1;
  }
  else
  {
    v36 = 1;
    v6 = 0;
  }
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v7) )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  CurrentThreadId = GetCurrentThreadId();
  v10 = a4 & 1;
  dword_1800E3390 = CurrentThreadId;
  v11 = *a1;
  v12 = a4 & 0x10;
  v38 = v10;
  v13 = a4 | 0x20;
  v39 = v12;
  v37 = a4 | 0x20;
  while ( 1 )
  {
    *(_WORD *)(v11 + 164) = 0;
    v14 = *a1;
    *(_DWORD *)(v11 + 156) = 0;
    v15 = 40;
    v16 = v13;
    if ( v6 != 1 )
      v15 = 8;
    v17 = v15 | 0x13;
    v41[0] = 0LL;
    if ( !v10 )
      v17 = v15;
    v18 = v17 | 2;
    v19 = v12 == 0;
    v20 = *(unsigned int *)(v11 + 152);
    v41[1] = 0LL;
    if ( v19 )
      v18 = v17;
    v21 = *(void **)(v11 + 120);
    v35 = v18;
    if ( v6 == 1 )
      v16 = a4;
    memset_0(v21, 0, v20 << 6);
    RmpObjectTableEnumerationBegin(
      (struct _RM_OBJECT_TABLE *)(v14 - 296),
      (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v41);
    Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v41);
    if ( Next )
    {
      do
      {
        if ( RmpMemoryMonitorEmptyPolicyFilterCallback(Next, (void *)v16) )
        {
          v23 = *(_QWORD *)(v11 + 120);
          v24 = (unsigned __int64)*(unsigned int *)(v11 + 156) << 6;
          *(_QWORD *)(v24 + v23) = 0LL;
          *(_QWORD *)(v24 + v23 + 8) = 0LL;
          *(_QWORD *)(v24 + v23 + 16) = 0LL;
          *(_QWORD *)(v24 + v23 + 24) = 0LL;
          *(_QWORD *)(v24 + v23 + 32) = 0LL;
          *(_QWORD *)(v24 + v23 + 40) = 0LL;
          *(_QWORD *)(v24 + v23 + 56) = 0LL;
          *(_QWORD *)(v24 + v23 + 48) = Next;
          ++*(_DWORD *)(v11 + 156);
        }
        RmpObjectRelease(Next);
        Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v41);
      }
      while ( Next );
      v13 = v37;
    }
    RtlReleaseSRWLockShared(*(_QWORD *)&v41[0] + 16LL);
    if ( *(_DWORD *)(v11 + 156) )
      RmpActivityHostPopulateMetrics(v11 + 120, v35, 0LL);
    v25 = *(_DWORD *)(v11 + 156);
    if ( !v25 )
    {
      v45 = 0;
      goto LABEL_25;
    }
    RmpMemoryMonitorEmptyPolicyProcessHostArray(*(struct _RM_ACTIVITY_HOST_METRICS **)(v11 + 120), v25, a4);
    RmpMemoryMonitorEmptyPolicyActOnHosts(
      (struct _RM_MEMORY_MONITOR_DATA *)a1,
      *(struct _RM_ACTIVITY_HOST_METRICS **)(v11 + 120),
      *(_DWORD *)(v11 + 156),
      *(_QWORD *)(v43 + 56) - *(_QWORD *)(v44 + 56),
      a4,
      (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v40,
      &v45,
      &v42);
    if ( v45 )
      break;
LABEL_25:
    if ( ++v6 > v36 )
    {
      v26 = 2;
      goto LABEL_27;
    }
    v10 = v38;
    v12 = v39;
  }
  RmpReleaseGlobalLock();
  if ( (unsigned int)RmpMemoryMonitorWaitForEvents(
                       (struct _RM_MEMORY_MONITOR_DATA *)a1,
                       13,
                       *((_DWORD *)a1 + 18),
                       (enum _RM_MEMORY_MONITOR_EVENT *)&v34) )
  {
    if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 1) != 0 && (qword_1800E1290 & 1) == qword_1800E1290 )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        &dword_1800E1278,
        &unk_1800D3BAE);
    goto LABEL_45;
  }
  if ( v34 != 3 || !v42 )
    goto LABEL_45;
  if ( (unsigned int)dword_1800E1278 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E1278, 1LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      &dword_1800E1278,
      &unk_1800D37D6);
  if ( !(unsigned int)RmpMemoryMonitorWaitForEvents(
                        (struct _RM_MEMORY_MONITOR_DATA *)a1,
                        5,
                        *((_DWORD *)a1 + 18),
                        (enum _RM_MEMORY_MONITOR_EVENT *)&v34)
    && v34 == 2 )
  {
    v26 = 4;
  }
  else
  {
LABEL_45:
    v26 = 0;
  }
  RmpAcquireGlobalLock();
LABEL_27:
  v27 = (_QWORD *)v40[0];
  if ( (_QWORD *)v40[0] != v40 )
  {
    do
    {
      v31 = (_QWORD *)*v27;
      v32 = v27 - 177;
      if ( *(_QWORD **)(*v27 + 8LL) != v27 || (v33 = (_QWORD *)v27[1], (_QWORD *)*v33 != v27) )
        __fastfail(3u);
      *v33 = v31;
      v31[1] = v33;
      v32[176] = 0LL;
      RmpObjectRelease(v32);
      v27 = v31;
    }
    while ( v31 != v40 );
  }
  dword_1800E3390 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v28 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v29 = *v28;
    if ( (*v28 & 1) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v19 = v28[1]-- == 1;
    if ( v19 )
      *v28 = v29 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  return v26;
}
