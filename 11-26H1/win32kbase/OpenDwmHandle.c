/*
 * XREFs of OpenDwmHandle @ 0x1400B2D14
 * Callers:
 *     NtDCompositionSyncWait @ 0x1400B1B60 (NtDCompositionSyncWait.c)
 *     ?OpenDwmHandle@CompositionInputObject@@QEBAJPEAPEAX@Z @ 0x1400B2B20 (-OpenDwmHandle@CompositionInputObject@@QEBAJPEAPEAX@Z.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1400B2B80 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     NtDCompositionRegisterThumbnailVisual @ 0x1400B3450 (NtDCompositionRegisterThumbnailVisual.c)
 *     ?OpenChannel@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1400B4CB8 (-OpenChannel@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?EmitCreate@CDDisplayRenderTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401720C4 (-EmitCreate@CDDisplayRenderTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x14017C690 (-EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtag.c)
 *     ?EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140182C40 (-EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x14018AED0 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x140228E30 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDCompositionSetChildRootVisual @ 0x140229800 (NtDCompositionSetChildRootVisual.c)
 *     ?DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x140229FC0 (-DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 *     ?VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z @ 0x14022AF74 (-VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z.c)
 * Callees:
 *     ReferenceDwmProcess @ 0x1400B2E10 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x1400B2E60 (CheckOrAcquireDwmStateLock.c)
 *     GreUnlockDwmState @ 0x1400B3070 (GreUnlockDwmState.c)
 *     UserDereferenceDwmProcess @ 0x1400B3390 (UserDereferenceDwmProcess.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall OpenDwmHandle(
        PVOID Object,
        POBJECT_TYPE ObjectType,
        ACCESS_MASK DesiredAccess,
        __int64 a4,
        int a5,
        PHANDLE Handle)
{
  char v9; // di
  struct _KPROCESS *v10; // rax
  struct _KPROCESS *v11; // rsi
  unsigned int v12; // ebx
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v9 = CheckOrAcquireDwmStateLock();
  *Handle = (void *)-1LL;
  v10 = (struct _KPROCESS *)ReferenceDwmProcess();
  v11 = v10;
  if ( v10 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v10, &ApcState);
    v12 = ObOpenObjectByPointer(Object, 0x40u, 0LL, DesiredAccess, ObjectType, 0, Handle);
    KeUnstackDetachProcess(&ApcState);
    UserDereferenceDwmProcess(v11);
  }
  else
  {
    v12 = -1073741823;
  }
  if ( v9 )
    GreUnlockDwmState();
  return v12;
}
