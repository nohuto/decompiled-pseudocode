/*
 * XREFs of ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18003F560
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024AB0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180014080 (-HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800143EC (-HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180018CB0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800265E4 (-RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180026E1C (-RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilIsImportanceUserImpactful@@YAKT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18003E7E4 (-HampUtilIsImportanceUserImpactful@@YAKT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ?RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18003E9C0 (-RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 *     ?HampHostIsForegroundBoostedOrPending@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003F7F4 (-HampHostIsForegroundBoostedOrPending@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18003F9E0 (-RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@K@Z @ 0x18003FBB0 (-HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECU.c)
 *     ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z @ 0x18003FF1C (-RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z.c)
 *     ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18004465C (-RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpSystemPriorityBoostThreadBegin@@YAJXZ @ 0x18006840C (-RmpSystemPriorityBoostThreadBegin@@YAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18006E74C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     ?RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18008C3D0 (-RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 */

void __fastcall RmpEnforcementUnoptimizeHost(__int64 a1, char a2)
{
  __int64 v2; // rsi
  _DWORD *v5; // rbp
  unsigned int IsForegroundBoostedOrPending; // r12d
  BOOL v7; // r15d
  BOOL v8; // r14d
  int v9; // r15d
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  int ThreadInformation; // [rsp+58h] [rbp+10h] BYREF

  v2 = a1 + 56;
  if ( (a2 & 0x10) != 0 )
  {
    HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 56));
    RmpActivityHostSetCommitSavings((struct _RM_ACTIVITY_HOST *)a1, 0);
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v2, 0);
  }
  v5 = (_DWORD *)(a1 + 1252);
  if ( (a2 & 0x27) != 0 )
    *v5 &= ~(a2 & 0x27);
  if ( (a2 & 8) != 0 )
  {
    HampHostWaitForInSwapTurn((struct _RM_HAM_ACTIVITY_HOST *)v2);
    if ( (*(_QWORD *)(v2 + 664) & 0x200000000000LL) == 0 )
    {
      *(_DWORD *)(a1 + 1256) |= 8u;
      IsForegroundBoostedOrPending = HampHostIsForegroundBoostedOrPending((struct _RM_HAM_ACTIVITY_HOST *)v2);
      v7 = IsForegroundBoostedOrPending || HampUtilIsImportanceUserImpactful(*(_DWORD *)(v2 + 680));
      RmReleaseEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
      v8 = 0;
      if ( v7 )
        v8 = (int)RmpPowerBoostEnableDisable(*(struct _RM_SERVICE_GLOBALS **)(a1 + 48), 1u) >= 0;
      if ( IsForegroundBoostedOrPending )
        v9 = RmpSystemPriorityBoostThreadBegin();
      else
        v9 = 0;
      RmpEnforcementUpdateSwapState((struct _RM_ACTIVITY_HOST *)a1, 0);
      if ( IsForegroundBoostedOrPending )
      {
        ThreadInformation = v9;
        NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &ThreadInformation, 4u);
      }
      if ( v8 )
        RmpPowerBoostEnableDisable(*(struct _RM_SERVICE_GLOBALS **)(a1 + 48), 0);
      RmAcquireEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
      *(_DWORD *)(a1 + 1256) &= ~8u;
    }
    *v5 &= ~8u;
    *(_QWORD *)(v2 + 664) &= ~0x200000000000uLL;
    HampHostEndInSwapTurn((struct _RM_HAM_ACTIVITY_HOST *)v2);
  }
  if ( a2 < 0 )
  {
    v10 = *(_QWORD *)(v2 + 672);
    v11 = 1LL;
    v12 = 2LL;
    do
    {
      v10 |= v11++;
      --v12;
    }
    while ( v12 );
    *(_QWORD *)(v2 + 672) = v10;
    *(_DWORD *)(a1 + 1256) |= 0x80u;
    *(_DWORD *)(a1 + 1256) ^= (*v5 ^ *(_DWORD *)(a1 + 1256)) & 0x100;
    RmReleaseEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
    if ( (int)RmpSystemChangePsmApplicationState(a1, 0LL, 0LL) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgs();
    HampHostChangeApplicationExecutionState(v2, 0LL, 1LL);
    RmAcquireEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
    *(_DWORD *)(a1 + 1256) &= 0xFFFFFE7F;
    *v5 &= 0xFFFFFE7F;
    *(_QWORD *)(v2 + 664) &= 0xFFFFFFFF1FFFFFFFuLL;
  }
  if ( (a2 & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 1256) |= 0x40u;
    RmReleaseEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
    RmpSystemFreezeHostJob((struct _RM_ACTIVITY_HOST *)a1, 0);
    RmAcquireEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
    *(_DWORD *)(a1 + 1256) &= ~0x40u;
    *v5 &= ~0x40u;
  }
}
