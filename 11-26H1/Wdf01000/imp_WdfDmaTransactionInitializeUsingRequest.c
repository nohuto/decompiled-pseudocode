/*
 * XREFs of imp_WdfDmaTransactionInitializeUsingRequest @ 0x140086F40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x140008F68 (-GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x140009D80 (-GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1400617E8 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 *     ?SupportsChainedMdls@FxDmaEnabler@@QEAAEXZ @ 0x140068B54 (-SupportsChainedMdls@FxDmaEnabler@@QEAAEXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_LqqLd @ 0x140086408 (WPP_IFR_SF_LqqLd.c)
 *     WPP_IFR_SF_Lqqd @ 0x140086548 (WPP_IFR_SF_Lqqd.c)
 *     WPP_IFR_SF_qddd @ 0x140086668 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qqdd @ 0x140086A1C (WPP_IFR_SF_qqdd.c)
 */

__int64 __fastcall imp_WdfDmaTransactionInitializeUsingRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        WDFREQUEST__ *Request,
        unsigned __int8 (__fastcall *EvtProgramDmaFunction)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *),
        unsigned int DmaDirection)
{
  _WDF_DMA_DIRECTION v8; // edi
  unsigned int _a3; // ebx
  _FX_DRIVER_GLOBALS *v11; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // r12
  unsigned __int8 MajorFunction; // dl
  unsigned __int16 v14; // r9
  unsigned int Length; // r12d
  int DeviceControlOutputMdl; // eax
  _IO_STACK_LOCATION *p_Parameters; // rax
  unsigned __int16 v18; // r9
  unsigned __int8 v19; // dl
  FxDmaTransactionBase *v20; // r10
  unsigned int ByteCount; // eax
  int v22; // eax
  _FX_DRIVER_GLOBALS **ObjectGlobals; // [rsp+20h] [rbp-50h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp-20h] BYREF
  FxDmaTransactionBase *pDmaTrans; // [rsp+58h] [rbp-18h] BYREF
  FxRequest *pReqObj; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 retaddr; // [rsp+A8h] [rbp+38h]
  _MDL *mdl; // [rsp+B0h] [rbp+40h] BYREF
  unsigned __int8 (__fastcall *ProgramDmaFunction)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *); // [rsp+C8h] [rbp+58h]

  ProgramDmaFunction = EvtProgramDmaFunction;
  pDmaTrans = 0LL;
  pReqObj = 0LL;
  mdl = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans,
    &pFxDriverGlobals);
  if ( !EvtProgramDmaFunction )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  v8 = DmaDirection;
  if ( DmaDirection > 1 )
  {
    _a3 = -1073741811;
    WPP_IFR_SF_qqdd(
      pFxDriverGlobals,
      2u,
      0xFu,
      0xAu,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      DmaTransaction,
      Request,
      DmaDirection,
      -1073741811);
    return _a3;
  }
  v11 = pFxDriverGlobals;
  FxObjectHandleGetPtr(pFxDriverGlobals, (unsigned __int64)Request, 0x1008u, (void **)&pReqObj);
  CurrentStackLocation = pReqObj->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction == 3 )
  {
    if ( v8 )
    {
      v18 = 11;
      goto LABEL_27;
    }
LABEL_29:
    Length = CurrentStackLocation->Parameters.Read.Length;
LABEL_30:
    DeviceControlOutputMdl = FxRequest::GetMdl(pReqObj, &mdl, (unsigned __int8)pReqObj);
    goto LABEL_31;
  }
  if ( CurrentStackLocation->MajorFunction == 4 )
  {
    if ( v8 != WdfDmaDirectionWriteToDevice )
    {
      v18 = 12;
LABEL_27:
      WPP_IFR_SF_LqqLd(
        v11,
        MajorFunction,
        (unsigned int)pReqObj,
        v18,
        (const _GUID *)ObjectGlobals,
        v8,
        DmaTransaction,
        Request,
        CurrentStackLocation->MajorFunction);
      return 3221225488LL;
    }
    goto LABEL_29;
  }
  if ( (unsigned int)CurrentStackLocation->MajorFunction - 14 >= 2 )
  {
    _a3 = -1073741808;
LABEL_32:
    WPP_IFR_SF_qqd(v11, 2u, 0xFu, 0x10u, WPP_FxDmaTransactionAPI_cpp_Traceguids, Request, DmaTransaction, _a3);
    return _a3;
  }
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3 )
  {
    case 0u:
      p_Parameters = (_IO_STACK_LOCATION *)&CurrentStackLocation->Parameters;
      if ( v8 != WdfDmaDirectionWriteToDevice )
        p_Parameters = pReqObj->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
      Length = p_Parameters->Parameters.Read.Length;
      goto LABEL_30;
    case 1u:
      if ( v8 != WdfDmaDirectionWriteToDevice )
      {
        v14 = 13;
        goto LABEL_19;
      }
      break;
    case 2u:
      if ( v8 )
      {
        v14 = 14;
LABEL_19:
        WPP_IFR_SF_Lqqd(
          v11,
          MajorFunction,
          (unsigned int)pReqObj,
          v14,
          (const _GUID *)ObjectGlobals,
          v8,
          DmaTransaction,
          Request);
        return 3221225488LL;
      }
      break;
    default:
      _a3 = -1073741808;
      WPP_IFR_SF_qd(v11, 2u, 0xFu, 0xFu, WPP_FxDmaTransactionAPI_cpp_Traceguids, Request, -1073741808);
      FxVerifierDbgBreakPoint(v11);
      goto LABEL_32;
  }
  Length = CurrentStackLocation->Parameters.Read.Length;
  DeviceControlOutputMdl = FxRequest::GetDeviceControlOutputMdl(pReqObj, &mdl, (unsigned __int8)pReqObj);
LABEL_31:
  _a3 = DeviceControlOutputMdl;
  if ( DeviceControlOutputMdl < 0 )
    goto LABEL_32;
  if ( !Length )
  {
    _a3 = -1073741808;
    WPP_IFR_SF_D(v11, 2u, 0xFu, 0x11u, WPP_FxDmaTransactionAPI_cpp_Traceguids, 0xC0000010);
    return _a3;
  }
  if ( !FxDmaEnabler::SupportsChainedMdls(pDmaTrans->m_DmaEnabler) )
  {
    ByteCount = mdl->ByteCount;
    if ( Length > ByteCount )
    {
      _a3 = -1073741811;
      WPP_IFR_SF_qddd(
        v11,
        v19,
        0xFu,
        0x12u,
        WPP_FxDmaTransactionAPI_cpp_Traceguids,
        Request,
        Length,
        ByteCount,
        -1073741811);
      return _a3;
    }
  }
  v22 = FxDmaTransactionBase::Initialize(v20, ProgramDmaFunction, v8, mdl, 0LL, Length);
  _a3 = v22;
  if ( v22 < 0 )
  {
    WPP_IFR_SF_qd(v11, 2u, 0xFu, 0x13u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, v22);
    return _a3;
  }
  pDmaTrans->m_EncodedRequest = pReqObj;
  return 0LL;
}
