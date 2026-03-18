/*
 * XREFs of ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x14005EFE8
 * Callers:
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x14009D560 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 *     imp_WdfUsbTargetDeviceQueryString @ 0x14009DAC0 (imp_WdfUsbTargetDeviceQueryString.c)
 * Callees:
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x140013DB0 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1400177F0 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x14002A290 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x14002AE00 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?VerifierSetFormatted@FxRequestBase@@QEAAXXZ @ 0x14005F260 (-VerifierSetFormatted@FxRequestBase@@QEAAXXZ.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 *     memmove @ 0x1400AD500 (memmove.c)
 */

__int64 __fastcall FxUsbDevice::GetString(
        FxUsbDevice *this,
        unsigned __int16 *String,
        unsigned __int16 *NumCharacters,
        unsigned __int8 StringIndex,
        unsigned __int16 LangID,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *Options)
{
  _WDF_REQUEST_SEND_OPTIONS *p_options; // r12
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FX_POOL **v12; // rdi
  int v13; // ebx
  int v14; // eax
  _FX_DRIVER_GLOBALS *v15; // rcx
  unsigned int v16; // ebx
  void *v17; // rax
  FX_POOL **v18; // rax
  _USB_COMMON_DESCRIPTOR *p_common; // rsi
  FxRequestBase *m_TrueRequest; // r9
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 bLength; // rax
  unsigned __int64 v23; // rdx
  unsigned __int16 v24; // ax
  _USB_COMMON_DESCRIPTOR common; // [rsp+34h] [rbp-CCh] BYREF
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+38h] [rbp-C8h] BYREF
  __m128i v29; // [rsp+50h] [rbp-B0h] BYREF
  _URB_CONTROL_DESCRIPTOR_REQUEST urb; // [rsp+60h] [rbp-A0h] BYREF
  FxSyncRequest request; // [rsp+F0h] [rbp-10h] BYREF
  void *retaddr; // [rsp+258h] [rbp+158h]

  p_options = Options;
  memset(&urb, 0, sizeof(urb));
  m_Globals = this->m_Globals;
  common = 0;
  options = 0LL;
  FxSyncRequest::FxSyncRequest(&request, m_Globals, 0LL, (unsigned __int64)Request);
  v12 = 0LL;
  v13 = FxRequestBase::ValidateTarget(request.m_TrueRequest, (unsigned __int64)this);
  if ( v13 >= 0 )
  {
    if ( String )
    {
      v14 = *NumCharacters;
      v15 = this->m_Globals;
      v29.m128i_i64[0] = 0LL;
      v29.m128i_i64[1] = 64LL;
      v16 = 2 * v14 + 2;
      v17 = retaddr;
      if ( !v15->FxPoolTrackingOn )
        v17 = 0LL;
      v18 = FxPoolAllocator(v15, &v15->FxPoolFrameworks, &v29, v16, v15->Tag, v17);
      v12 = v18;
      if ( !v18 )
      {
        v13 = -1073741670;
        goto $Done_28;
      }
      p_common = (_USB_COMMON_DESCRIPTOR *)v18;
    }
    else
    {
      v16 = 2;
      p_common = &common;
    }
    urb.Index = StringIndex;
    urb.LanguageId = LangID;
    *(_DWORD *)&urb.Hdr.Length = 721032;
    urb.TransferBufferLength = v16;
    urb.TransferBufferMDL = 0LL;
    urb.TransferBuffer = p_common;
    urb.DescriptorType = 3;
    urb.UrbLink = 0LL;
    if ( !Options )
    {
      options.Size = 16;
      p_options = &options;
      options.Flags = 1;
      options.Timeout = -20000000LL;
    }
    m_TrueRequest = request.m_TrueRequest;
    CurrentStackLocation = request.m_TrueRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
    CurrentStackLocation[-1].FileObject = 0LL;
    m_TrueRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
    m_TrueRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
    m_TrueRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&urb;
    FxRequestBase::VerifierSetFormatted(m_TrueRequest);
    v13 = FxIoTarget::SubmitSync(this, request.m_TrueRequest, p_options, 0LL);
    if ( v13 >= 0 )
    {
      bLength = p_common->bLength;
      if ( (bLength & 1) != 0 || (unsigned __int8)bLength < 2u )
      {
        v13 = -1073741668;
      }
      else
      {
        v23 = (unsigned __int64)(bLength - 2) >> 1;
        if ( String )
        {
          v24 = *NumCharacters;
          *NumCharacters = v23;
          if ( v24 < (unsigned __int16)v23 )
          {
            LOWORD(v23) = v24;
            v13 = -2147483643;
          }
          memmove(String, &p_common[1], 2LL * (unsigned __int16)v23);
        }
        else
        {
          *NumCharacters = v23;
        }
      }
    }
    if ( v12 )
      FxPoolFree(v12);
  }
$Done_28:
  FxSyncRequest::~FxSyncRequest(&request);
  return (unsigned int)v13;
}
