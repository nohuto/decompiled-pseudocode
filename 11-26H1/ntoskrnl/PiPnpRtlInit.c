/*
 * XREFs of PiPnpRtlInit @ 0x1407A9F14
 * Callers:
 *     PnpBootPhaseComplete @ 0x14079EA7C (PnpBootPhaseComplete.c)
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14021A0F0 (ExInitializeResourceLite.c)
 *     CmIsStateSeparationEnabled @ 0x1404CEFB4 (CmIsStateSeparationEnabled.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PiDrvDbInit @ 0x1407B889C (PiDrvDbInit.c)
 *     _PnpCtxRegisterMachineNode @ 0x14089C3F8 (_PnpCtxRegisterMachineNode.c)
 *     _PnpCtxSetNtPlugPlayRoutine @ 0x14089C598 (_PnpCtxSetNtPlugPlayRoutine.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxOpenMachine @ 0x140AE5860 (_PnpCtxOpenMachine.c)
 */

__int64 __fastcall PiPnpRtlInit(unsigned int a1)
{
  int v2; // ebx
  int v3; // ecx
  int v4; // r8d
  __int64 v5; // rcx
  int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // [rsp+28h] [rbp-20h]
  HANDLE Handle; // [rsp+58h] [rbp+10h] BYREF

  Handle = 0LL;
  if ( a1 )
    return (unsigned int)PiDrvDbInit(a1);
  qword_140F839E8 = (__int64)&PiPnpRtlActiveOperations;
  PiPnpRtlActiveOperations = (__int64)&PiPnpRtlActiveOperations;
  v2 = ExInitializeResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
  if ( v2 >= 0 )
  {
    v2 = ExInitializeResourceLite(&PiPnpRtlActiveOperationsLock);
    if ( v2 >= 0 )
    {
      v2 = PnpCtxOpenMachine(v3, 0, v4, 0);
      if ( v2 >= 0 )
      {
        if ( !CmIsStateSeparationEnabled()
          || (int)PnpCtxRegOpenKey(PiPnpRtlCtx, -2147483646, (unsigned int)L"DEVICES", 0, 0x2000000, (__int64)&Handle) < 0
          || (v2 = PnpCtxRegisterMachineNode(v5, (unsigned int)L"DEVICES", 2, v6, (__int64)Handle, v12),
              ZwClose(Handle),
              v2 >= 0) )
        {
          v2 = PnpCtxSetNtPlugPlayRoutine(v5, 1LL, PiPnpRtlGetDeviceNtPropertyRoutine);
          if ( v2 >= 0 )
          {
            v2 = PnpCtxSetNtPlugPlayRoutine(v7, 2LL, PiPnpRtlGetDeviceStatus);
            if ( v2 >= 0 )
            {
              v2 = PnpCtxSetNtPlugPlayRoutine(v8, 3LL, PiPnpRtlGetDeviceRelatedDeviceRoutine);
              if ( v2 >= 0 )
              {
                v2 = PnpCtxSetNtPlugPlayRoutine(v9, 4LL, PiPnpRtlGetDeviceRelationsList);
                if ( v2 >= 0 )
                {
                  v2 = PnpCtxSetNtPlugPlayRoutine(v10, 5LL, PiPnpRtlGetDeviceInterfaceEnabled);
                  if ( v2 >= 0 )
                  {
                    _InterlockedExchange64(
                      (volatile __int64 *)(*(_QWORD *)&PiPnpRtlCtx + 488LL),
                      (__int64)&PiPnpRtlObjectActionCallback);
                    _InterlockedExchange64(
                      (volatile __int64 *)(*(_QWORD *)&PiPnpRtlCtx + 504LL),
                      (__int64)&PiPnpRtlCmActionCallback);
                    _InterlockedExchange64(
                      (volatile __int64 *)(*(_QWORD *)&PiPnpRtlCtx + 496LL),
                      (__int64)PiPnpRtlObjectEventCallback);
                    return (unsigned int)PiDrvDbInit(a1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v2;
}
