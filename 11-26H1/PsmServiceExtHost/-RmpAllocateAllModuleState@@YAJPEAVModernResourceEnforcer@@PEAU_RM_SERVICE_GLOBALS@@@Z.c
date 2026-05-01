/*
 * XREFs of ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18007FEE4
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180074560 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?RmpMemoryMonitorAllocateState@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x18006CD34 (-RmpMemoryMonitorAllocateState@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 *     ?HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BA70 (-HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x180081208 (-CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@P.c)
 *     ?RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180083364 (-RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpEnforcerContextAllocateState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180083B5C (-RmpEnforcerContextAllocateState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800847B8 (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerCreateClientContext@@YAJPEAU_RM_CPU_SET_MANAGER@@KPEAPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x1800850D8 (-RmpCpuSetManagerCreateClientContext@@YAJPEAU_RM_CPU_SET_MANAGER@@KPEAPEAU_RM_CPU_SET_CLIENT_CON.c)
 */

__int64 __fastcall RmpAllocateAllModuleState(struct ModernResourceEnforcer *a1, struct _RM_SERVICE_GLOBALS *a2)
{
  unsigned int v4; // ebx
  int ModuleState; // r8d
  DWORD CurrentProcessId; // eax
  signed int State; // eax
  int v8; // eax
  struct ExecutionModel::ResourceManager **v9; // r9
  int v10; // eax
  DWORD cbSid; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  ModuleState = RmpActivityHostAllocateModuleState(a2);
  if ( ModuleState >= 0 )
  {
    ModuleState = RmpCpuSetManagerAllocateState(a2);
    if ( ModuleState >= 0 )
    {
      ModuleState = RmpEnforcerContextAllocateState(a1, a2);
      if ( ModuleState >= 0 )
      {
        CurrentProcessId = GetCurrentProcessId();
        ModuleState = RmpCpuSetManagerCreateClientContext(
                        (struct _RM_CPU_SET_MANAGER *)(*((_QWORD *)a2 + 276) + 792LL),
                        CurrentProcessId,
                        (struct _RM_CPU_SET_CLIENT_CONTEXT **)a2 + 281);
        if ( ModuleState >= 0 )
          ModuleState = TpAllocWork((char *)a2 + 2272, RmpGameModePolicyWorker, (char *)a2 + 2208, 0LL);
        if ( ModuleState >= 0 )
        {
          State = RmpMemoryMonitorAllocateState((void **)a2 + 39);
          ModuleState = 0;
          if ( State < 0 )
            ModuleState = State;
          if ( ModuleState >= 0 )
          {
            ModuleState = HampManagerAllocateState((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 2360));
            if ( ModuleState >= 0 )
            {
              v8 = TpAllocTimer((char *)a2 + 672, RmpTelemetryTimerCallback, a2, 0LL);
              ModuleState = 0;
              if ( v8 < 0 )
                ModuleState = v8;
              if ( ModuleState >= 0 )
              {
                cbSid = 68;
                if ( CreateWellKnownSid(WinNullSid, 0LL, (char *)a2 + 3468, &cbSid) )
                {
                  if ( !a1 )
                    goto LABEL_20;
                  v10 = TpAllocWork((char *)a1 + 264, ModernResourceEnforcer::NotificationWorkCallback, a1, 0LL);
                  ModuleState = 0;
                  if ( v10 < 0 )
                    ModuleState = v10;
                  if ( ModuleState >= 0 )
                  {
LABEL_20:
                    if ( (int)ExecutionModel::CreateResourceManager(
                                a2,
                                a1,
                                (struct _RM_SERVICE_GLOBALS *)((char *)a2 + 3544),
                                v9) < 0 )
                      return (unsigned int)-1073741823;
                    return v4;
                  }
                }
                else
                {
                  return (unsigned int)-1073741823;
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)ModuleState;
}
