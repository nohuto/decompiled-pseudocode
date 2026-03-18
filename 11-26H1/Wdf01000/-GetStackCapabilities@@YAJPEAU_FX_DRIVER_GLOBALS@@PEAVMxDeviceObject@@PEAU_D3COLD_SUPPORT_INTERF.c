/*
 * XREFs of ?GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERFACE@@PEAU_STACK_DEVICE_CAPABILITIES@@@Z @ 0x140008098
 * Callers:
 *     ?PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x140007E78 (-PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x14004C474 (-QueryForCapabilities@FxPkgPnp@@IEAAJXZ.c)
 *     ?_QueryCapsWorkItem@FxPkgPdo@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1400A3750 (-_QueryCapsWorkItem@FxPkgPdo@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x140007B28 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14004BEC0 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

__int64 __fastcall GetStackCapabilities(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        MxDeviceObject *DeviceInStack,
        _D3COLD_SUPPORT_INTERFACE *D3ColdInterface,
        _STACK_DEVICE_CAPABILITIES *Capabilities)
{
  PIRP Irp; // rbx
  NTSTATUS _a2; // edi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v12; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rdi
  _IO_STACK_LOCATION *v14; // rax
  unsigned int v15; // edx
  __m128i si128; // xmm0
  unsigned int i; // edi
  FxCREvent Event; // [rsp+40h] [rbp-48h] BYREF
  _DEVICE_WAKE_DEPTH deepestWakeableDstate; // [rsp+98h] [rbp+10h] BYREF

  Irp = 0LL;
  _a2 = -1073741670;
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceInStack->m_DeviceObject);
  DeviceInStack->m_DeviceObject = AttachedDeviceReference;
  if ( AttachedDeviceReference )
  {
    Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
    if ( Irp )
    {
      memset(Capabilities, 0, sizeof(_STACK_DEVICE_CAPABILITIES));
      *(_DWORD *)&Capabilities->DeviceCaps.Size = 65600;
      Capabilities->DeviceCaps.Address = -1;
      Capabilities->DeviceCaps.UINumber = -1;
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      Irp->IoStatus.Status = -1073741637;
      memset(&CurrentStackLocation[-1], 0, sizeof(_IO_STACK_LOCATION));
      v12 = Irp->Tail.Overlay.CurrentStackLocation;
      Event.m_Event.m_DbgFlagIsInitialized = 0;
      v12[-1].MajorFunction = 27;
      Irp->Tail.Overlay.CurrentStackLocation[-1].MinorFunction = 9;
      Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Capabilities;
      m_DeviceObject = DeviceInStack->m_DeviceObject;
      KeInitializeEvent(&Event.m_Event.m_Event, SynchronizationEvent, 0);
      v14 = Irp->Tail.Overlay.CurrentStackLocation;
      Event.m_Event.m_DbgFlagIsInitialized = 1;
      v14[-1].CompletionRoutine = FxIrp::_IrpSynchronousCompletion;
      v14[-1].Context = &Event;
      v14[-1].Control = -32;
      _a2 = IofCallDriver(m_DeviceObject, Irp);
      if ( _a2 == 259 )
      {
        FxCREvent::EnterCRAndWaitAndLeave(&Event);
        _a2 = Irp->IoStatus.Status;
      }
      if ( _a2 < 0 )
      {
        WPP_IFR_SF_qd(DriverGlobals, 2u, 0xCu, 0xAu, WPP_supportKM_cpp_Traceguids, DeviceInStack->m_DeviceObject, _a2);
      }
      else
      {
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        *(__m128i *)Capabilities->DeepestWakeableDstate = si128;
        *(_QWORD *)&Capabilities->DeepestWakeableDstate[4] = si128.m128i_i64[0];
        if ( D3ColdInterface
          && D3ColdInterface->GetIdleWakeInfo
          && _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(DriverGlobals, v15, 0xBu) )
        {
          deepestWakeableDstate = DeviceWakeDepthNotWakeable;
          for ( i = 1; i <= 5; ++i )
          {
            if ( D3ColdInterface->GetIdleWakeInfo(
                   D3ColdInterface->Context,
                   (_SYSTEM_POWER_STATE)i,
                   &deepestWakeableDstate) >= 0 )
              Capabilities->DeepestWakeableDstate[i] = deepestWakeableDstate;
          }
        }
        _a2 = 0;
      }
    }
  }
  if ( DeviceInStack->m_DeviceObject )
    ObfDereferenceObject(DeviceInStack->m_DeviceObject);
  if ( Irp )
    IoFreeIrp(Irp);
  return (unsigned int)_a2;
}
