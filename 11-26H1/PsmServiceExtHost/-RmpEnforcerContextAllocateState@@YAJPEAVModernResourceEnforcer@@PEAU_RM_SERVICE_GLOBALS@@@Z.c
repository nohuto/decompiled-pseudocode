/*
 * XREFs of ?RmpEnforcerContextAllocateState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180083B5C
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18007FEE4 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpEnforcerContextAllocateState(struct ModernResourceEnforcer *a1, struct _RM_SERVICE_GLOBALS *a2)
{
  int v4; // r8d
  int v5; // eax
  int v6; // eax
  int v7; // eax

  v4 = TpAllocTimer((char *)a2 + 128, RmpPowerBoostWatchdogCallback, a2, 0LL);
  if ( v4 >= 0 )
  {
    v4 = TpAllocTimer((char *)a2 + 160, RmpPowerBoostTimedBoostCallback, a2, 0LL);
    if ( v4 >= 0 )
    {
      v5 = TpAllocTimer((char *)a2 + 192, RmpQoSWatchdogCallback, (char *)a2 + 176, 0LL);
      v4 = 0;
      if ( v5 < 0 )
        v4 = v5;
      if ( v4 >= 0 )
      {
        v6 = TpAllocTimer((char *)a2 + 48, RmpGpuMonitorTimerCallback, a2, 0LL);
        v4 = 0;
        if ( v6 < 0 )
          v4 = v6;
        if ( v4 >= 0 )
        {
          v7 = TpAllocWork((char *)a2 + 216, RmpOfferLazyDecommitWorkerCallback, (char *)a2 + 216, 0LL);
          v4 = 0;
          if ( v7 < 0 )
            v4 = v7;
          if ( v4 >= 0 )
          {
            if ( a1 )
            {
              *((_QWORD *)a2 + 5) = a1;
              (*(void (__fastcall **)(struct ModernResourceEnforcer *))(*(_QWORD *)a1 + 8LL))(a1);
            }
            return 0;
          }
        }
      }
    }
  }
  return (unsigned int)v4;
}
