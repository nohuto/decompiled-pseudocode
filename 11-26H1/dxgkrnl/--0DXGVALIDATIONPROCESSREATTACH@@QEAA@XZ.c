/*
 * XREFs of ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140034914
 * Callers:
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x1400346A0 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     DxgSetPowerComponentIdleCB @ 0x140034820 (DxgSetPowerComponentIdleCB.c)
 *     DxgPresentDisplayOnlyProgressCB @ 0x140074FF0 (DxgPresentDisplayOnlyProgressCB.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x1400750A0 (DxgSetPowerComponentIdleCBInternal.c)
 *     DxgkCompleteFStateTransitionCB @ 0x140075110 (DxgkCompleteFStateTransitionCB.c)
 *     DxgkCompletePStateTransitionCB @ 0x140075180 (DxgkCompletePStateTransitionCB.c)
 *     DxgkHardwareContentProtectionTeardownCB @ 0x140075200 (DxgkHardwareContentProtectionTeardownCB.c)
 *     DxgkMitigatedRangeUpdateCB @ 0x1400753E0 (DxgkMitigatedRangeUpdateCB.c)
 *     DxgkPowerRuntimeControlRequestCB @ 0x140075440 (DxgkPowerRuntimeControlRequestCB.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x1400755A0 (DxgkSetPowerComponentLatencyCB.c)
 *     DxgkSetPowerComponentResidencyCB @ 0x140075610 (DxgkSetPowerComponentResidencyCB.c)
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x140075680 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 *     DxgkUpdateContextAllocationCB @ 0x1401C17B0 (DxgkUpdateContextAllocationCB.c)
 *     DxgEnumHandleChildrenCB @ 0x1401C3D80 (DxgEnumHandleChildrenCB.c)
 *     DxgGetHandleDataCB @ 0x1401C4190 (DxgGetHandleDataCB.c)
 *     DxgGetHandleParentCB @ 0x1401C45A0 (DxgGetHandleParentCB.c)
 *     DxgkReleaseHandleDataCB @ 0x1402A65F0 (DxgkReleaseHandleDataCB.c)
 *     DxgkAcquireHandleDataCB @ 0x140361780 (DxgkAcquireHandleDataCB.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x140398E10 (DxgSetPowerComponentActiveCBInternal.c)
 *     DxgCreateContextAllocationCB @ 0x1403C3450 (DxgCreateContextAllocationCB.c)
 *     DxgDestroyContextAllocationCB @ 0x1403CD260 (DxgDestroyContextAllocationCB.c)
 *     DxgkMapContextAllocationCB @ 0x1403DAFA0 (DxgkMapContextAllocationCB.c)
 *     DxgSetPowerComponentActiveCB @ 0x1403DF620 (DxgSetPowerComponentActiveCB.c)
 *     DxgkReserveGpuVirtualAddressRangeCB @ 0x1403F45B0 (DxgkReserveGpuVirtualAddressRangeCB.c)
 *     DxgGetCaptureAddressCB @ 0x140422B30 (DxgGetCaptureAddressCB.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

DXGVALIDATIONPROCESSREATTACH *__fastcall DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH(
        DXGVALIDATIONPROCESSREATTACH *this)
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v5; // rbx
  struct _KPROCESS *ThreadProcess; // rax

  *(_BYTE *)this = 0;
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    if ( KeGetCurrentIrql() < 2u )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 417) )
      {
        Global = DXGGLOBAL::GetGlobal();
        SessionData = DXGGLOBAL::GetSessionData(Global);
        if ( SessionData )
        {
          v5 = *((_QWORD *)SessionData + 2341);
          if ( v5 == PsGetCurrentProcess() )
          {
            ThreadProcess = PsGetThreadProcess(KeGetCurrentThread());
            if ( ThreadProcess )
            {
              KeStackAttachProcess(ThreadProcess, (PRKAPC_STATE)((char *)this + 8));
              *(_BYTE *)this = 1;
            }
          }
        }
      }
    }
  }
  return this;
}
