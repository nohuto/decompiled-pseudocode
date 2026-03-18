/*
 * XREFs of imp_WdfUsbTargetDeviceFormatRequestForUrb @ 0x140001FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x140001F78 (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     ?ValidateMemoryOffsets@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@@Z @ 0x140002234 (-ValidateMemoryOffsets@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1400036F4 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qqq @ 0x140039C38 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_qid @ 0x1400565E4 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqqd @ 0x14006A614 (WPP_IFR_SF_qqqd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

int __fastcall imp_WdfUsbTargetDeviceFormatRequestForUrb(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *UrbMemory,
        _WDFMEMORY_OFFSET *UrbOffsets)
{
  _FX_DRIVER_GLOBALS *v8; // rbx
  _WDFMEMORY_OFFSET *v9; // rsi
  int result; // eax
  unsigned __int64 v11; // rax
  int _a4; // eax
  int v13; // esi
  FxRequestContext *m_RequestContext; // r8
  __int64 v15; // rax
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp-30h] BYREF
  FxUsbDevice *pUsbDevice; // [rsp+58h] [rbp-28h] BYREF
  FxRequestBuffer buf; // [rsp+60h] [rbp-20h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+28h]
  IFxMemory *pMemory; // [rsp+B0h] [rbp+30h] BYREF
  FxRequest *pRequest; // [rsp+C8h] [rbp+48h] BYREF

  pFxDriverGlobals = 0LL;
  pRequest = 0LL;
  pMemory = 0LL;
  pUsbDevice = 0LL;
  buf.DataType = FxRequestBufferUnspecified;
  memset(&buf.u, 0, sizeof(buf.u));
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    UsbDevice,
    0x1202u,
    (void **)&pUsbDevice,
    &pFxDriverGlobals);
  v8 = pFxDriverGlobals;
  if ( pFxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_qqq(pFxDriverGlobals, 5u, 0xEu, 0xEu, WPP_FxUsbDeviceApiKm_cpp_Traceguids, UsbDevice, Request, UrbMemory);
  if ( !UrbMemory )
    FxVerifierNullBugCheck(v8, retaddr);
  FxObjectHandleGetPtr(v8, UrbMemory, 0x100Au, (void **)&pMemory);
  FxObjectHandleGetPtr(v8, Request, 0x1008u, (void **)&pRequest);
  v9 = UrbOffsets;
  result = IFxMemory::ValidateMemoryOffsets(pMemory, UrbOffsets);
  if ( result >= 0 )
  {
    v11 = pMemory->GetBufferSize(pMemory);
    if ( v9 && v9->BufferOffset )
      v11 -= v9->BufferOffset;
    if ( v11 < 0x18 )
    {
      v15 = pMemory->GetBufferSize(pMemory);
      v13 = -1073741811;
      WPP_IFR_SF_qid(v8, 2u, 0xEu, 0xFu, WPP_FxUsbDeviceApiKm_cpp_Traceguids, UrbMemory, v15, -1073741811);
    }
    else
    {
      FxRequestBuffer::SetMemory(&buf, pMemory, v9);
      _a4 = FxFormatUrbRequest(v8, pUsbDevice, pRequest, &buf, pUsbDevice->m_UrbType, pUsbDevice->m_USBDHandle);
      v13 = _a4;
      if ( _a4 >= 0 )
      {
        m_RequestContext = pRequest->m_RequestContext;
        m_RequestContext->m_CompletionParams.Type = WdfRequestTypeUsb;
        m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&m_RequestContext[1];
        HIDWORD(m_RequestContext[1].__vftable) = 4;
        *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = UrbMemory;
      }
      if ( v8->FxVerboseOn )
        WPP_IFR_SF_qqqd(v8, 5u, 0xEu, 0x10u, WPP_FxUsbDeviceApiKm_cpp_Traceguids, UsbDevice, Request, UrbMemory, _a4);
    }
    return v13;
  }
  return result;
}
