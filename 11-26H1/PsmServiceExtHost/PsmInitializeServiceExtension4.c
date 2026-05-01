/*
 * XREFs of PsmInitializeServiceExtension4 @ 0x180074560
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800018EC (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180014F54 (-ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     CempLockTrackerMarkAcquired @ 0x180046900 (CempLockTrackerMarkAcquired.c)
 *     CempLockTrackerMarkReleased @ 0x180046990 (CempLockTrackerMarkReleased.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F48C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     IsQueryUserTokenPresent @ 0x18006FB1C (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x18006FBFC (IsPsmQueryBackgroundActivationTypePresent.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18006FDF4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     RmpLaunchAllRpcServers @ 0x180070D0C (RmpLaunchAllRpcServers.c)
 *     ?ArManagerCreate@@YAJPEAPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180074CF4 (-ArManagerCreate@@YAJPEAPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180074DBC (-ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ??0ModernResourceEnforcer@@QEAA@PEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@@Z @ 0x18007F6FC (--0ModernResourceEnforcer@@QEAA@PEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@@Z.c)
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18007FEE4 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800800A0 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800801E0 (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800804C8 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800805F8 (-RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z @ 0x180080BD4 (-RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall PsmInitializeServiceExtension4(struct _PSM_EXT_INTERNAL_FUNCTION_TABLE4 *a1)
{
  struct _ACTIVITY_RESTARTER *v2; // rsi
  ModernResourceEnforcer *v3; // rax
  struct ModernResourceEnforcer *v4; // rdi
  struct _RM_SERVICE_GLOBALS *v5; // r14
  int AllModuleState; // ebx
  struct ModernResourceEnforcer *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  struct _RM_SERVICE_GLOBALS *v10; // r14
  struct _RM_SERVICE_GLOBALS *v11; // rbx
  struct _ACTIVITY_RESTARTER *v12; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v13[5]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v14[176]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v15[144]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v16[144]; // [rsp+190h] [rbp+90h] BYREF

  memset_0(v15, 0, 0x88uLL);
  memset_0(v16, 0, 0x88uLL);
  HampLockTrackerId = TlsAlloc();
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v15);
  v2 = 0LL;
  v12 = 0LL;
  if ( IsPsmQueryBackgroundActivationTypePresent() && IsQueryUserTokenPresent() )
  {
    v3 = (ModernResourceEnforcer *)operator new(0x130uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v3 || (v4 = ModernResourceEnforcer::ModernResourceEnforcer(v3, a1)) == 0LL )
    {
LABEL_18:
      v11 = RmSvcGlobals;
      if ( RmSvcGlobals )
      {
        RmpRundownAllModules(RmSvcGlobals);
        RmpCleanupAllModules(v11);
        RmSvcGlobals = 0LL;
      }
      goto LABEL_20;
    }
    RmSvcGlobals = (struct _RM_SERVICE_GLOBALS *)&RmpSvcGlobals;
    TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_1800E1278, 0LL, 0LL);
    TraceLoggingRegisterEx_EventRegister_EventSetInformation(
      (ULONGLONG *)&dword_1800E12B0,
      (ULONGLONG)HampManagerTracingControlCallback,
      (ULONGLONG)RmSvcGlobals + 2360);
    v5 = RmSvcGlobals;
    memset_0(v14, 0, sizeof(v14));
    RmpGetResourceManagerRuntimeConfiguration((struct _RM_RUNTIME_CONFIGURATION *)v14);
    RmpInitializeAllModules((struct _RM_RUNTIME_CONFIGURATION *)v14, v5);
    AllModuleState = RmpAllocateAllModuleState(v4, v5);
    if ( AllModuleState >= 0 )
    {
      AllModuleState = RmpStartAllModules(v5);
      if ( AllModuleState >= 0 )
      {
        g_pResourceManager = (ExecutionModel::ResourceManager *)*((_QWORD *)RmSvcGlobals + 443);
        (*(void (__fastcall **)(ExecutionModel::ResourceManager *))(*(_QWORD *)g_pResourceManager + 8LL))(g_pResourceManager);
        AllModuleState = RmpLaunchAllRpcServers();
        v7 = v4;
        if ( AllModuleState < 0 )
        {
LABEL_12:
          (*(void (__fastcall **)(struct ModernResourceEnforcer *))(*(_QWORD *)v7 + 16LL))(v7);
          goto LABEL_15;
        }
        ArLockTrackerId = TlsAlloc();
        AllModuleState = ArManagerCreate(&v12);
        v7 = v4;
        if ( AllModuleState < 0 )
        {
          v2 = v12;
          goto LABEL_12;
        }
        ArUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v16);
        CempLockTrackerMarkAcquired(ArLockTrackerId, v8, 0, 0);
        CempLockAcquireExclusive((__int64)&ArGlobalLock);
        ArGlobals = v12;
        dword_1800E2480 = 0;
        RtlReleaseSRWLockExclusive(&ArGlobalLock);
        CempLockTrackerMarkReleased(ArLockTrackerId, v9, 0);
        CempLockTrackerClearForThread(ArLockTrackerId);
        v10 = RmSvcGlobals;
        if ( IsNotifyGameModeExtensionRecipientsPresentPresent() )
        {
          v13[0] = RmGameModeCpuSetManagerCreateClientContext;
          v13[1] = RmGameModeCpuSetManagerAcquireExplicitCpuSets;
          v13[2] = RmGameModeCpuSetManagerRegisterProcessWithAllocation;
          v13[3] = RmGameModeCpuSetManagerReleaseAllocation;
          v13[4] = RmGameModeCpuSetManagerReleaseProcessRegistration;
          InitializeGameModeExtension(v13, v10);
        }
      }
    }
    v7 = v4;
    goto LABEL_12;
  }
  AllModuleState = -1073741822;
LABEL_15:
  if ( v2 )
    ArManagerDestroy(v2);
  if ( AllModuleState < 0 )
    goto LABEL_18;
LABEL_20:
  CempLockTrackerClearForThread(HampLockTrackerId);
}
