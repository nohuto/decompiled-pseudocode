/*
 * XREFs of ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800611CC
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180083200 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_H.c)
 * Callees:
 *     ?HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@Z @ 0x180033ADC (-HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@.c)
 *     ?HampHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEAU_RM_PSM_KEY@@PEAT_RM_SID@@K_K@Z @ 0x180036658 (-HampHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEAU_RM_PSM_KEY@@PE.c)
 *     ?RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800426C0 (-RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSystemQueryHostJobHandle@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAX@Z @ 0x1800613A8 (-HampSystemQueryHostJobHandle@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAX@Z.c)
 *     ?RmpSystemResourceTimerCreate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@P6AXPEAX1@ZPEAPEAX@Z @ 0x18006387C (-RmpSystemResourceTimerCreate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@P6AXPEAX1@ZPEAPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18006E74C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall HampHostAllocateState(struct _HOST_ACTIVITY_MANAGER *a1, struct _RM_HAM_ACTIVITY_HOST *a2, char a3)
{
  HANDLE v3; // rsi
  unsigned __int64 v4; // r14
  struct _HAM_HOSTID_ENTRY *v7; // rax
  int HostJobHandle; // ebx
  struct _RM_HAM_ACTIVITY_HOST *v9; // rcx
  int v10; // eax
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = (unsigned __int64)a2 - 56;
  Handle = 0LL;
  if ( (a3 & 1) != 0
    || (v7 = HampHostIdStoreReferenceId(
               (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 792),
               (struct _RM_HAM_ACTIVITY_HOST *)((char *)a2 + 24),
               (union _RM_SID *)((v4 & -(__int64)(a2 != 0LL)) + 544),
               (void *)*(unsigned int *)((v4 & -(__int64)(a2 != 0LL)) + 0x264),
               *(_QWORD *)((v4 & -(__int64)(a2 != 0LL)) + 0x20)),
        (*((_QWORD *)a2 + 73) = v7) != 0LL) )
  {
    HostJobHandle = HampSystemQueryHostJobHandle(a2, (void **)a2 + 72);
    if ( HostJobHandle >= 0 )
    {
      HostJobHandle = TpAllocWork((char *)a2 + 640, RmHamHostStateWorker, v4 & -(__int64)(a2 != 0LL), 0LL);
      if ( HostJobHandle >= 0 )
      {
        HostJobHandle = TpAllocWork((char *)a2 + 632, HampHostTerminateWorker, a2, 0LL);
        if ( HostJobHandle >= 0 )
        {
          if ( *((_BYTE *)a2 + 592) != 1
            || (HostJobHandle = TpAllocWork((char *)a2 + 648, HampHostPlmServiceDesktopBridgeHost, a2, 0LL),
                HostJobHandle >= 0) )
          {
            HostJobHandle = RmpSystemResourceTimerCreate(a2, HampHostQuiesceTimerCallback, (void **)a2 + 100);
            if ( HostJobHandle >= 0 )
            {
              HostJobHandle = RmpSystemResourceTimerCreate(
                                a2,
                                (void (*)(void *, void *))HampHostDelayedEnforcementTimerCallback,
                                (void **)a2 + 125);
              if ( HostJobHandle >= 0 )
              {
                if ( (unsigned int)RmHamHostGetJobType(a2) != 2
                  || (v10 = HampSystemQueryHostJobHandle(v9, &Handle), v3 = Handle, HostJobHandle = v10, v10 >= 0)
                  && (HostJobHandle = HampWakeContextFindOrCreate(
                                        (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 680),
                                        *(_QWORD *)((v4 & -(__int64)(a2 != 0LL)) + 0x20),
                                        Handle,
                                        (struct _CEM_RC_OBJECT **)a2 + 132),
                      HostJobHandle >= 0) )
                {
                  HostJobHandle = 0;
                }
                if ( v3 )
                  NtClose(v3);
              }
            }
          }
        }
      }
    }
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgs();
    return (unsigned int)-1058275322;
  }
  return (unsigned int)HostJobHandle;
}
