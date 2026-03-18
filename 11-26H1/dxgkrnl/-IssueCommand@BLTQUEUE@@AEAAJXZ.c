/*
 * XREFs of ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x140446154
 * Callers:
 *     ?AcquireVidPnSourceOwnership@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1402823F8 (-AcquireVidPnSourceOwnership@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?NotifyGlobalVmBusStatusChange@BLTQUEUE@@QEAAXE@Z @ 0x140283608 (-NotifyGlobalVmBusStatusChange@BLTQUEUE@@QEAAXE@Z.c)
 *     ?NotifyHostMonitorPowerState@BLTQUEUE@@QEAAXE@Z @ 0x1402836EC (-NotifyHostMonitorPowerState@BLTQUEUE@@QEAAXE@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x140283948 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 *     ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x1402842E4 (-UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403C5B84 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1403FA1C4 (-Flush@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x14009B7EC (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall BLTQUEUE::IssueCommand(BLTQUEUE *this)
{
  struct _KMUTANT *v3; // rdi
  unsigned int v4; // ebx

  *((_QWORD *)this + 91) = KeGetCurrentThread();
  *((LARGE_INTEGER *)this + 110) = KeQueryPerformanceCounter(0LL);
  KeSetEvent((PRKEVENT)this + 23, 0, 0);
  KeWaitForSingleObject((char *)this + 576, Executive, 0, 0, 0LL);
  *((_QWORD *)this + 91) = 0LL;
  if ( !(unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
    return *((unsigned int *)this + 176);
  v3 = (struct _KMUTANT *)((char *)this + 600);
  KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
  v4 = *((_DWORD *)this + 176);
  KeReleaseMutex(v3, 0);
  return v4;
}
