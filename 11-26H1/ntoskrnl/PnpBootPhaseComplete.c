/*
 * XREFs of PnpBootPhaseComplete @ 0x14079EA7C
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1408547AC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PnpRequestDeviceAction @ 0x14047BEF8 (PnpRequestDeviceAction.c)
 *     PiDmaGuardInitialize @ 0x1405DF48C (PiDmaGuardInitialize.c)
 *     PiPnpRtlInit @ 0x1407A9F14 (PiPnpRtlInit.c)
 *     PpDevCfgProcessDevices @ 0x1407AFCB0 (PpDevCfgProcessDevices.c)
 *     ExSubscribeWnfStateChange @ 0x1409C4400 (ExSubscribeWnfStateChange.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 PnpBootPhaseComplete()
{
  int v0; // ebx
  void *v1; // rcx
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  __int128 v4; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+50h] [rbp-18h]

  v0 = PiPnpRtlInit(2LL);
  if ( v0 >= 0 )
  {
    PnpBootMode = 0;
    if ( PnpSetupOOBEInProgress
      && (int)ExSubscribeWnfStateChange(
                (unsigned int)&PnpSetupWnfSubscription,
                (unsigned int)&WNF_DEP_OOBE_COMPLETE,
                1,
                0,
                (__int64)PipUpdateSetupOobeCompleteWnfCallback,
                0LL) < 0 )
    {
      PnpSetupOOBEInProgress = 0;
    }
    v0 = PiDmaGuardInitialize(2);
    if ( v0 >= 0 )
    {
      *(_QWORD *)&v4 = 1LL;
      *((_QWORD *)&v4 + 1) = AlpcMessageDeleteProcedure;
      v5 = 0LL;
      Pdcv2ActivationClientRegister(121LL, &v4, &PnpPdcClientHandle);
      v4 = 0LL;
      v1 = (void *)*((_QWORD *)IopRootDeviceNode + 4);
      DWORD2(v4) = 39;
      PnpRequestDeviceAction(v1, 2u, 0, &v4, 0LL, 0LL, 0LL);
      v0 = PpDevCfgProcessDevices();
      if ( v0 >= 0 )
      {
        Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
        if ( Pool2 )
        {
          Pool2->Parameter = Pool2;
          Pool2->WorkerRoutine = PipUpdateDeviceProducts;
          Pool2->List.Flink = 0LL;
          ExQueueWorkItem(Pool2, NormalWorkQueue);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return (unsigned int)v0;
}
