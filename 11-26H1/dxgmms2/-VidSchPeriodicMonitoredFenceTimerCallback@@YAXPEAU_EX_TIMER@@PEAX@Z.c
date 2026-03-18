/*
 * XREFs of ?VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x140055E30
 * Callers:
 *     <none>
 * Callees:
 *     VidSchSignalSyncObjectsFromCpu @ 0x1400069F0 (VidSchSignalSyncObjectsFromCpu.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchiCalculatePeriodicTargetFrameNumber @ 0x1400444B4 (VidSchiCalculatePeriodicTargetFrameNumber.c)
 *     ?VidSchiGetCurrentVSyncPeriod100ns@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x1400445F4 (-VidSchiGetCurrentVSyncPeriod100ns@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 *     McTemplateK0pqqiix_EtwWriteTransfer @ 0x1400547C8 (McTemplateK0pqqiix_EtwWriteTransfer.c)
 *     ?VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z @ 0x140055D74 (-VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z.c)
 */

void __fastcall VidSchPeriodicMonitoredFenceTimerCallback(struct _EX_TIMER *a1, unsigned int *a2)
{
  __int64 v2; // r8
  __int64 v4; // rdi
  unsigned __int64 v5; // r14
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  unsigned int v10; // edx
  unsigned __int64 CurrentVSyncPeriod100ns; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  unsigned __int64 v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct _VIDSCH_GLOBAL *v22; // [rsp+20h] [rbp-68h]
  struct _VIDSCH_GLOBAL *v23; // [rsp+20h] [rbp-68h]
  __int64 v24; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF
  int v26; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 v27; // [rsp+A0h] [rbp+18h] BYREF

  v2 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 8LL * a2[2] + 3448);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v2 + 8) + 2016LL), &LockHandle);
  v5 = *(_QWORD *)(v4 + 44368);
  v6 = *(_QWORD *)(v4 + 44352);
  v22 = *(struct _VIDSCH_GLOBAL **)(*(_QWORD *)a2 + 8LL);
  v26 = 0;
  v7 = VidSchiCalculatePeriodicTargetFrameNumber((__int64)a2, v5, v6, &v26, v22, v4);
  v8 = *(_QWORD *)a2;
  v9 = v7;
  v10 = *(_DWORD *)(v4 + 24);
  v27 = v7;
  CurrentVSyncPeriod100ns = VidSchiGetCurrentVSyncPeriod100ns(*(struct _VIDSCH_GLOBAL **)(v8 + 8), v10);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( *((_QWORD *)a2 + 6) < v9 )
  {
    v14 = VidSchSignalSyncObjectsFromCpu(1u, (struct _VIDSCH_SYNC_OBJECT **)a2, 0, &v27);
    v15 = v27;
    if ( v14 >= 0 )
      *((_QWORD *)a2 + 6) = v27;
    v17 = VidSchCalculatePeriodicMonitoredFenceTimerDueTime(v5, CurrentVSyncPeriod100ns, *((_QWORD *)a2 + 2), v26);
    if ( v17 > 0 )
    {
      if ( (byte_14008A201 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventPerformanceWarning, v18, 25);
      v17 = -(__int64)CurrentVSyncPeriod100ns;
    }
    ExSetTimer(*((_QWORD *)a2 + 5), v17, 0LL, 0LL);
    if ( (byte_14008A201 & 4) != 0 )
    {
      LODWORD(v24) = a2[6];
      LODWORD(v23) = a2[2];
      McTemplateK0pqqiix_EtwWriteTransfer(v20, v19, v21, *(_QWORD *)a2, v23, v24, v5, v17, v15);
    }
  }
  else
  {
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventPerformanceWarning, v13, 25);
    ExSetTimer(*((_QWORD *)a2 + 5), -(__int64)CurrentVSyncPeriod100ns, 0LL, 0LL);
  }
}
