/*
 * XREFs of RegisterIdleComplete @ 0x140034EA8
 * Callers:
 *     RegisterKernelIdleStates @ 0x140035700 (RegisterKernelIdleStates.c)
 *     RegisterHvLpiStates @ 0x14003DE6C (RegisterHvLpiStates.c)
 *     RegisterVmIdleStates @ 0x14003E360 (RegisterVmIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x14003545C (RegisterKernelCoordinatedLpiStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1400355DC (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelPlatformStates @ 0x140036AE4 (RegisterKernelPlatformStates.c)
 */

void __fastcall RegisterIdleComplete(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  if ( ++dword_140015C60 == dword_1400155D4 )
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
        if ( !qword_140015C98 )
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
