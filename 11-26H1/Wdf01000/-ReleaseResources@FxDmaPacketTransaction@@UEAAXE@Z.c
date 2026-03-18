/*
 * XREFs of ?ReleaseResources@FxDmaPacketTransaction@@UEAAXE@Z @ 0x140076AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x14001FA78 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?ClearMapRegisterBase@FxDmaPacketTransaction@@IEAAXXZ @ 0x140087624 (-ClearMapRegisterBase@FxDmaPacketTransaction@@IEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxDmaPacketTransaction::ReleaseResources(FxDmaPacketTransaction *this, __int64 ForceRelease)
{
  _FxDmaDescription *v3; // rdx
  __int64 v4; // rcx

  if ( this->m_MapRegisterBaseSet && (!this->m_MapRegistersReserved || (_BYTE)ForceRelease) )
  {
    ((void (__fastcall *)(FxDmaPacketTransaction *, __int64))this->FreeMapRegistersAndAdapter)(this, ForceRelease);
    FxDmaPacketTransaction::ClearMapRegisterBase(this);
    if ( FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v4 + 96) + 192LL), 0);
    this->m_AdapterInfo = v3;
    this->m_MapRegistersReserved = (unsigned int)v3;
  }
}
