/*
 * XREFs of ?GetScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z5@Z @ 0x1400887A4
 * Callers:
 *     ?StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x14005BAE0 (-StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ.c)
 * Callees:
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x14001FA78 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::GetScatterGatherList(
        FxDmaScatterGatherTransaction *this,
        _MDL *Mdl,
        unsigned __int64 CurrentOffset,
        unsigned int Length,
        void (__fastcall *Context)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *),
        void *Mdl_0)
{
  KIRQL v10; // di
  bool v11; // zf
  void (__fastcall *v12)(_DMA_ADAPTER *, _DEVICE_OBJECT *, void *, DMA_COMPLETION_STATUS); // rdx
  __int64 v13; // r10
  _DMA_ADAPTER *AdapterObject; // rcx
  _DMA_OPERATIONS *DmaOperations; // rax
  int v16; // eax
  unsigned int v17; // ebx
  unsigned __int8 v19; // [rsp+38h] [rbp-40h]
  unsigned __int8 m_DmaDirection; // [rsp+48h] [rbp-30h]

  v10 = KfRaiseIrql(2u);
  v11 = FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3;
  AdapterObject = this->m_AdapterInfo->AdapterObject;
  DmaOperations = AdapterObject->DmaOperations;
  if ( v11 )
  {
    m_DmaDirection = this->m_DmaDirection;
    v16 = DmaOperations->GetScatterGatherListEx(
            AdapterObject,
            *(_DEVICE_OBJECT **)(v13 + 168),
            this->m_TransferContext,
            Mdl,
            CurrentOffset,
            Length,
            this->m_Flags,
            (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))FxDmaScatterGatherTransaction::_AdapterListControl,
            Mdl_0,
            m_DmaDirection,
            v12,
            v12,
            (_SCATTER_GATHER_LIST **)v12);
  }
  else
  {
    v19 = this->m_DmaDirection;
    v16 = DmaOperations->GetScatterGatherList(
            AdapterObject,
            *(_DEVICE_OBJECT **)(v13 + 168),
            Mdl,
            (char *)Mdl->StartVa + Mdl->ByteOffset + CurrentOffset,
            Length,
            (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))FxDmaScatterGatherTransaction::_AdapterListControl,
            Mdl_0,
            v19);
  }
  v17 = v16;
  KeLowerIrql(v10);
  return v17;
}
