/*
 * XREFs of ?QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ @ 0x1400645D0
 * Callers:
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x14001B4B0 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x140064A50 (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ??1FxAutoIrp@@QEAA@XZ @ 0x140069E88 (--1FxAutoIrp@@QEAA@XZ.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

void __fastcall FxPkgPnp::QueryForD3ColdInterface(FxPkgPnp *this)
{
  _IRP *v1; // rbx
  _D3COLD_SUPPORT_INTERFACE *p_m_D3ColdInterface; // r15
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *_a1; // rsi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  _IRP *v7; // rbp
  _DEVICE_OBJECT *v8; // r14
  PIRP v9; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxAutoIrp irp; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0LL;
  p_m_D3ColdInterface = &this->m_D3ColdInterface;
  irp.m_Irp = 0LL;
  if ( !this->m_D3ColdInterface.InterfaceDereference
    && !this->m_D3ColdInterface.GetIdleWakeInfo
    && !this->m_D3ColdInterface.SetD3ColdSupport )
  {
    m_DeviceBase = this->m_DeviceBase;
    _a1 = m_DeviceBase->m_PhysicalDevice.m_DeviceObject;
    if ( _a1 )
    {
      AttachedDeviceReference = IoGetAttachedDeviceReference(m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
      v7 = 0LL;
      v8 = AttachedDeviceReference;
      if ( AttachedDeviceReference )
      {
        v9 = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
        irp.m_Irp = v9;
        v1 = v9;
        if ( v9 )
        {
          v9->IoStatus.Status = -1073741637;
          memset(&v9->Tail.Overlay.CurrentStackLocation[-1], 0, sizeof(v9->Tail.Overlay.CurrentStackLocation[-1]));
          v1->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 27;
          v1->Tail.Overlay.CurrentStackLocation[-1].MinorFunction = 8;
          v1->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_D3COLD_SUPPORT_INTERFACE;
          v1->Tail.Overlay.CurrentStackLocation[-1].Parameters.QueryInterface.Version = 1;
          v1->Tail.Overlay.CurrentStackLocation[-1].Parameters.QueryInterface.Size = 72;
          v1->Tail.Overlay.CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
          v7 = v1;
          v1->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)p_m_D3ColdInterface;
          if ( FxIrp::SendIrpSynchronously(&irp, v8) < 0 )
          {
            m_Globals = this->m_Globals;
            if ( m_Globals->FxVerboseOn )
              WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0xFu, WPP_FxPkgPnpKM_cpp_Traceguids, _a1);
            memset(p_m_D3ColdInterface, 0, sizeof(_D3COLD_SUPPORT_INTERFACE));
          }
        }
        else
        {
          WPP_IFR_SF_q(this->m_Globals, 2u, 0xCu, 0xEu, WPP_FxPkgPnpKM_cpp_Traceguids, _a1);
        }
      }
      ObfDereferenceObject(v8);
      if ( v7 )
        IoFreeIrp(v1);
    }
    else
    {
      FxAutoIrp::~FxAutoIrp(&irp);
    }
  }
}
