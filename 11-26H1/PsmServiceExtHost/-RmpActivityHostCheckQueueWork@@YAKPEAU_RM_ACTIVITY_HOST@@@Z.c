/*
 * XREFs of ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180046FB4
 * Callers:
 *     ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800446D0 (-RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x180046C58 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_ME.c)
 *     ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180089BC4 (-RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180089DFC (-RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800094B0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002409C (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpActivityHostCheckQueueWork(struct _RM_ACTIVITY_HOST *a1)
{
  DWORD v1; // r15d
  struct _RM_HAM_ACTIVITY_HOST *v2; // rbp
  char v3; // si
  int v5; // edi
  _QWORD *Value; // rbx
  int v7; // ebx
  int v8; // eax
  bool v9; // zf
  unsigned __int8 v10; // cl
  int v11; // eax
  unsigned int v12; // edi
  __int64 *v13; // rax
  __int64 v14; // r8

  v1 = HampLockTrackerId;
  v2 = (struct _RM_ACTIVITY_HOST *)((char *)a1 + 56);
  v3 = 0;
  v5 = 1;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  CempLockAcquireExclusive((__int64)v2);
  if ( *((int *)a1 + 6) < 0
    || (v7 = *((_DWORD *)a1 + 313),
        v8 = RmpPolicyComputeDesiredState((__int64)a1),
        v9 = v7 == v8,
        v10 = v8,
        v11 = *((_DWORD *)a1 + 314),
        v3 = !v9,
        ((v10 ^ (unsigned __int8)v7) & 0x40) == 0)
    && (v11 & 0x40) == 0
    && ((v10 & 8) != 0 || (((unsigned __int8)v7 | (unsigned __int8)v11) & 8) == 0)
    && ((v10 & 0x10) != 0 || (((unsigned __int8)v7 | (unsigned __int8)v11) & 0x10) == 0) )
  {
    v5 = 0;
  }
  v12 = HampHostCheckQueueStateWorker(v2, v3) | v5;
  if ( HampLockTrackerId != -1 )
  {
    v13 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v14 = *v13;
    if ( (*v13 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v9 = v13[2]-- == 1;
    if ( v9 )
      *v13 = v14 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)v2 + 2) = 0;
  RtlReleaseSRWLockExclusive(v2);
  return v12;
}
