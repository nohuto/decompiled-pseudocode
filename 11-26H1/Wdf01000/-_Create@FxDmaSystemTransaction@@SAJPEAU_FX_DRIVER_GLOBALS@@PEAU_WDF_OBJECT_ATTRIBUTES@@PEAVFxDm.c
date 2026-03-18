/*
 * XREFs of ?_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1400889F8
 * Callers:
 *     imp_WdfDmaTransactionCreate @ 0x14001DA30 (imp_WdfDmaTransactionCreate.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140012780 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x14001FA78 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1400269B4 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ??0FxDmaPacketTransaction@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z @ 0x140087594 (--0FxDmaPacketTransaction@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z.c)
 */

__int64 __fastcall FxDmaSystemTransaction::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDmaEnabler *DmaEnabler,
        WDFDMATRANSACTION__ **Transaction)
{
  $E4A3ECB67F2D0678F53DA0B3123C8A42 *DmaDescription; // rax
  unsigned __int64 v9; // rdx
  unsigned int v10; // r9d
  unsigned __int16 v11; // r10
  FxDmaPacketTransaction *v12; // rbx
  $E4A3ECB67F2D0678F53DA0B3123C8A42 *v13; // rax
  unsigned __int16 v14; // r9
  int v15; // edi
  void *hTransaction; // [rsp+40h] [rbp-28h] BYREF

  hTransaction = 0LL;
  DmaDescription = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
  v11 = 0;
  if ( DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    v11 = 128;
  v12 = (FxDmaPacketTransaction *)FxObjectHandleAlloc2(
                                    FxDriverGlobals,
                                    v9,
                                    0x158uLL,
                                    v10,
                                    Attributes,
                                    v11,
                                    FxObjectTypeExternal);
  if ( v12 )
  {
    v13 = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
    v14 = 0;
    if ( v13->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
      v14 = 128;
    FxDmaPacketTransaction::FxDmaPacketTransaction(v12, FxDriverGlobals, 0x158u, v14, DmaEnabler);
    v12->__vftable = (FxDmaPacketTransaction_vtbl *)FxDmaSystemTransaction::`vftable';
    v12[1].__vftable = 0LL;
    v12[1].m_Globals = 0LL;
    v15 = FxObject::Commit(v12, Attributes, &hTransaction, DmaEnabler, 1u);
    if ( v15 < 0 )
      FxObject::DeleteFromFailedCreate(v12);
    else
      *Transaction = (WDFDMATRANSACTION__ *)hTransaction;
    return (unsigned int)v15;
  }
  else
  {
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xFu, 0xAu, WPP_FxDmaTransactionSystem_cpp_Traceguids, 0xC000009A);
    return 3221225626LL;
  }
}
