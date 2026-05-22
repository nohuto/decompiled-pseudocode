/*
 * XREFs of ??1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ @ 0x180098274
 * Callers:
 *     ??_GSpatialRimDeviceCollectionCallbacks@@UEAAPEAXI@Z @ 0x1800D4C80 (--_GSpatialRimDeviceCollectionCallbacks@@UEAAPEAXI@Z.c)
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x1800D53CC (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 *     ?OnCallbackOnInputThreadStatic@SpatialRimDeviceCollection@@CAJPEAXK0@Z @ 0x1800D6900 (-OnCallbackOnInputThreadStatic@SpatialRimDeviceCollection@@CAJPEAXK0@Z.c)
 *     ?OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z @ 0x1800D6970 (-OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z.c)
 *     ?OnDeviceRemoval@SpatialRimDeviceCollection@@MEAAJK@Z @ 0x1800D70F0 (-OnDeviceRemoval@SpatialRimDeviceCollection@@MEAAJK@Z.c)
 *     ?OnHeadUpdateEvent@SpatialRimDeviceCollection@@QEAAJAEBUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@1@Z @ 0x1800D72D0 (-OnHeadUpdateEvent@SpatialRimDeviceCollection@@QEAAJAEBUMPCMatrix4x4@@PEAUIPerceptionTimestamp@P.c)
 *     ?OnTrackingRequestedHeartbeat@SpatialRimDeviceCollection@@QEAAJK@Z @ 0x1800D7384 (-OnTrackingRequestedHeartbeat@SpatialRimDeviceCollection@@QEAAJK@Z.c)
 *     ?SetInputDeviceHapticsFeedback@SpatialRimDeviceCollection@@QEAAJKEEG@Z @ 0x1800D7D5C (-SetInputDeviceHapticsFeedback@SpatialRimDeviceCollection@@QEAAJKEEG@Z.c)
 *     _SpatialRimDeviceCollection::OnInputReport_::_1_::dtor$0 @ 0x1801D6866 (_SpatialRimDeviceCollection--OnInputReport_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollection::DoDeviceAttach_::_1_::dtor$3 @ 0x1801D99AA (_SpatialRimDeviceCollection--DoDeviceAttach_--_1_--dtor$3.c)
 *     _SpatialRimDeviceCollection::OnTrackingRequestedHeartbeat_::_1_::dtor$0 @ 0x1801D9A22 (_SpatialRimDeviceCollection--OnTrackingRequestedHeartbeat_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollection::SetInputDeviceHapticsFeedback_::_1_::dtor$0 @ 0x1801D9AC7 (_SpatialRimDeviceCollection--SetInputDeviceHapticsFeedback_--_1_--dtor$0.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall SpatialRimDeviceCollectionCallbacks::~SpatialRimDeviceCollectionCallbacks(
        SpatialRimDeviceCollectionCallbacks *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  bool v4; // zf
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_DWORD *)this + 6) == 0;
  *(_QWORD *)this = &SpatialRimDeviceCollectionCallbacks::`vftable';
  if ( !v4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x45,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      a4);
  *((_DWORD *)this + 3) = -1073741823;
}
