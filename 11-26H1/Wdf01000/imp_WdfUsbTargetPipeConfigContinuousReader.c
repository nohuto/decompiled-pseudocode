/*
 * XREFs of imp_WdfUsbTargetPipeConfigContinuousReader @ 0x14009C760
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDd @ 0x140017BE4 (WPP_IFR_SF_qDd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?GetMaxPacketSize@FxUsbPipe@@QEAAKXZ @ 0x140065C20 (-GetMaxPacketSize@FxUsbPipe@@QEAAKXZ.c)
 *     ?IsType@FxUsbPipe@@QEAAEW4_WDF_USB_PIPE_TYPE@@@Z @ 0x1400665F4 (-IsType@FxUsbPipe@@QEAAEW4_WDF_USB_PIPE_TYPE@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qddd @ 0x140086668 (WPP_IFR_SF_qddd.c)
 *     ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x14009E6BC (-InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 */

int __fastcall imp_WdfUsbTargetPipeConfigContinuousReader(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        _WDF_USB_CONTINUOUS_READER_CONFIG *Config)
{
  unsigned int _a3; // ebx
  unsigned __int8 v6; // dl
  unsigned int v7; // ebx
  unsigned __int16 v8; // r9
  unsigned __int64 TransferLength; // rcx
  unsigned __int64 HeaderLength; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r14
  int result; // eax
  __int64 v14; // r9
  unsigned int v15; // edx
  __int64 v16; // rax
  unsigned int MaxPacketSize; // eax
  FxUsbPipe *v18; // rcx
  unsigned __int64 v19; // r10
  unsigned int v20; // eax
  unsigned __int8 v21; // dl
  const void *v22; // r10
  unsigned __int64 retaddr; // [rsp+68h] [rbp+18h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+70h] [rbp+20h] BYREF
  FxUsbPipe *pUsbPipe; // [rsp+80h] [rbp+30h] BYREF

  _a3 = 0;
  pFxDriverGlobals = 0LL;
  pUsbPipe = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Pipe,
    0x1203u,
    (void **)&pUsbPipe,
    &pFxDriverGlobals);
  if ( !Config )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( Config->Size != 72 )
  {
    v7 = -1073741820;
    WPP_IFR_SF_qddd(
      pFxDriverGlobals,
      v6,
      0xEu,
      0xFu,
      WPP_FxUsbPipeAPI_cpp_Traceguids,
      Config,
      Config->Size,
      72,
      -1073741820);
    return v7;
  }
  if ( !Config->EvtUsbTargetPipeReadComplete )
  {
    v7 = -1073741811;
    v8 = 16;
LABEL_27:
    WPP_IFR_SF_D(pFxDriverGlobals, 2u, 0xEu, v8, WPP_FxUsbPipeAPI_cpp_Traceguids, v7);
    return v7;
  }
  TransferLength = Config->TransferLength;
  if ( !TransferLength )
  {
    v7 = -1073741811;
    v8 = 17;
    goto LABEL_27;
  }
  HeaderLength = Config->HeaderLength;
  v11 = HeaderLength + TransferLength;
  if ( v11 < HeaderLength )
  {
    v8 = 18;
    goto LABEL_26;
  }
  v12 = v11 + Config->TrailerLength;
  if ( v12 < v11 )
  {
    v8 = 19;
LABEL_26:
    v7 = -1073741675;
    goto LABEL_27;
  }
  result = FxValidateObjectAttributes(pFxDriverGlobals, Config->BufferAttributes, 1);
  if ( result < 0 )
    return result;
  if ( !FxUsbPipe::IsType(pUsbPipe, WdfUsbPipeTypeBulk) && !FxUsbPipe::IsType((FxUsbPipe *)v14, WdfUsbPipeTypeInterrupt) )
  {
    v16 = *(int *)(v14 + 388);
    if ( (unsigned int)v16 < v15 )
      _a3 = `FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[v16];
    WPP_IFR_SF_qDd(pFxDriverGlobals, v15, 0xEu, 0x14u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, _a3, 0xC0000010);
    return -1073741808;
  }
  if ( *(char *)(v14 + 386) >= 0 )
  {
    WPP_IFR_SF_qd(pFxDriverGlobals, 2u, 0xEu, 0x15u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, -1073741808);
    return -1073741808;
  }
  if ( !*(_BYTE *)(v14 + 409) )
    return FxUsbPipe::InitContinuousReader((FxUsbPipe *)v14, Config, v12);
  MaxPacketSize = FxUsbPipe::GetMaxPacketSize((FxUsbPipe *)v14);
  if ( !(v19 % MaxPacketSize) )
    return FxUsbPipe::InitContinuousReader((FxUsbPipe *)v14, Config, v12);
  v20 = FxUsbPipe::GetMaxPacketSize(v18);
  v7 = -1073741306;
  WPP_IFR_SF_qDd(pFxDriverGlobals, v21, 0xEu, 0x16u, WPP_FxUsbPipeAPI_cpp_Traceguids, v22, v20, 0xC0000206);
  return v7;
}
