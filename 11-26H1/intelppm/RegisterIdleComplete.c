/*
 * XREFs of RegisterIdleComplete @ 0x140038858
 * Callers:
 *     RegisterHvLpiStates @ 0x14003EA7C (RegisterHvLpiStates.c)
 *     RegisterVmIdleStates @ 0x14003EF70 (RegisterVmIdleStates.c)
 *     RegisterKernelIdleStates @ 0x140041490 (RegisterKernelIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x140038AF8 (RegisterKernelCoordinatedLpiStates.c)
 *     RegisterKernelCoordinatedStates @ 0x140038C78 (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelPlatformStates @ 0x1400398E4 (RegisterKernelPlatformStates.c)
 */

void __fastcall RegisterIdleComplete(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  if ( ++dword_140019830 == dword_1400191A4 )
  {
    IoWorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
    if ( IoWorkItem )
    {
      v3 = *(_QWORD *)(a1 + 280);
      if ( (v3 & 0x20E0000000000LL) != 0 )
      {
        RegisterKernelCoordinatedLpiStates(a1);
      }
      else if ( (v3 & 0x200000200LL) != 0 )
      {
        RegisterKernelCoordinatedStates(a1);
        if ( !qword_140019868 )
          RegisterKernelPlatformStates(a1);
      }
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
      if ( WorkItem )
        IoQueueWorkItem(WorkItem, PepRegisterBootVetoes, CriticalWorkQueue, WorkItem);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        4,
        15,
        (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids);
    }
  }
}
