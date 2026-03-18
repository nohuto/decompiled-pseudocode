/*
 * XREFs of ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x14005E824
 * Callers:
 *     FxUsbTargetDeviceCreate @ 0x14005E6BC (FxUsbTargetDeviceCreate.c)
 * Callees:
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x140013DB0 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1400177F0 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x14002A290 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x14002AE00 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x14002E440 (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     WPP_IFR_SF_dd @ 0x140055174 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_DDd @ 0x140055DDC (WPP_IFR_SF_DDd.c)
 *     ?VerifierSetFormatted@FxRequestBase@@QEAAXXZ @ 0x14005F260 (-VerifierSetFormatted@FxRequestBase@@QEAAXXZ.c)
 *     USBD_CreateHandle @ 0x140075B94 (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x140080178 (USBD_QueryUsbCapability.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

__int64 __fastcall FxUsbDevice::InitDevice(FxUsbDevice *this, unsigned int USBDClientContractVersionForWdfClient)
{
  signed int _a1; // eax
  int v5; // edi
  unsigned __int16 v6; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  USBD_HANDLE__ *m_USBDHandle; // rcx
  FxRequestBase *m_TrueRequest; // rdx
  _IO_STACK_LOCATION *v10; // rcx
  FxRequestBase *v11; // rcx
  FxRequestBase *v12; // rdx
  _IO_STACK_LOCATION *v13; // rcx
  unsigned __int8 v14; // dl
  unsigned int wTotalLength; // esi
  ULONG Tag; // r8d
  void *v17; // rax
  FX_POOL **v18; // rax
  FxRequestBase *v19; // rdx
  _IO_STACK_LOCATION *v20; // rcx
  unsigned __int8 v21; // dl
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rcx
  unsigned int _a3; // eax
  FxRequestBase *v24; // rdx
  _IO_STACK_LOCATION *v25; // rcx
  _IRP *m_Irp; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *v28; // rcx
  _IO_STACK_LOCATION *v29; // rax
  void *BusContext; // rcx
  void (__fastcall *GetUSBDIVersion)(void *, _USBD_VERSION_INFORMATION *, unsigned int *); // rax
  unsigned __int16 deviceStatus; // [rsp+40h] [rbp-C0h] BYREF
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+48h] [rbp-B8h] BYREF
  __m128i v35; // [rsp+60h] [rbp-A0h] BYREF
  _URB urb; // [rsp+70h] [rbp-90h] BYREF
  _USB_BUS_INTERFACE_USBDI_V1 busIf; // [rsp+110h] [rbp+10h] BYREF
  FxSyncRequest request; // [rsp+160h] [rbp+60h] BYREF
  _USB_CONFIGURATION_DESCRIPTOR config; // [rsp+290h] [rbp+190h] BYREF
  void *retaddr; // [rsp+2E8h] [rbp+1E8h]

  FxSyncRequest::FxSyncRequest(&request, this->m_Globals, 0LL, 0LL);
  memset(&urb, 0, sizeof(urb));
  if ( USBDClientContractVersionForWdfClient != -1 )
  {
    _a1 = USBD_CreateHandle(
            this->m_InStackDevice,
            this->m_TargetDevice,
            USBDClientContractVersionForWdfClient,
            this->m_Globals->Tag,
            &this->m_USBDHandle);
    v5 = _a1;
    if ( _a1 < 0 )
    {
      v6 = 10;
LABEL_4:
      m_Globals = this->m_Globals;
LABEL_5:
      WPP_IFR_SF_D(m_Globals, 2u, 0xEu, v6, WPP_FxusbDeviceKm_cpp_Traceguids, _a1);
      goto $Done_27;
    }
    m_USBDHandle = this->m_USBDHandle;
    this->m_UrbType = FxUrbTypeUsbdAllocated;
    this->m_SspIsochPipeFlags = USBD_QueryUsbCapability(
                                  m_USBDHandle,
                                  &GUID_USB_CAPABILITY_SSP_ISOCH_PIPE_FLAGS,
                                  0,
                                  0LL,
                                  0LL) >= 0;
  }
  v5 = FxRequestBase::ValidateTarget(request.m_TrueRequest, (unsigned __int64)this);
  if ( v5 < 0 )
    goto $Done_27;
  m_TrueRequest = request.m_TrueRequest;
  *(_OWORD *)(&urb.UrbGetIsochPipeTransferPathDelays + 1) = (unsigned __int64)&this->m_DeviceDescriptor;
  *(_DWORD *)&urb.UrbHeader.Length = 721032;
  urb.UrbControlTransfer.TransferBufferLength = 18;
  *(_DWORD *)((char *)&urb.UrbGetIsochPipeTransferPathDelays + 130) = 256;
  urb.UrbControlTransfer.UrbLink = 0LL;
  v10 = request.m_TrueRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation - 1;
  *(_OWORD *)&v10->MajorFunction = 0LL;
  *(_OWORD *)&v10->Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
  *(_OWORD *)(&v10->Parameters.SetQuota + 6) = 0LL;
  v10->FileObject = 0LL;
  m_TrueRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
  m_TrueRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
  m_TrueRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&urb;
  FxRequestBase::VerifierSetFormatted(m_TrueRequest);
  options.Size = 16;
  options.Flags = 1;
  options.Timeout = -50000000LL;
  _a1 = FxIoTarget::SubmitSync(this, request.m_TrueRequest, &options, 0LL);
  v5 = _a1;
  if ( _a1 < 0 )
  {
    v6 = 11;
    goto LABEL_4;
  }
  v11 = request.m_TrueRequest;
  this->m_ControlPipe = urb.UrbSelectInterface.ConfigurationHandle;
  *(_QWORD *)&config.bLength = 0LL;
  config.MaxPower = 0;
  *(_DWORD *)&urb.UrbHeader.Length = 721032;
  *((_OWORD *)&urb.UrbGetIsochPipeTransferPathDelays + 3) = 0uLL;
  urb.UrbControlTransfer.TransferBufferLength = 9;
  urb.UrbSelectInterface.Interface.InterfaceHandle = &config;
  *(_DWORD *)((char *)&urb.UrbGetIsochPipeTransferPathDelays + 130) = 512;
  IoReuseIrp(v11->m_Irp.m_Irp, 0);
  FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest);
  v12 = request.m_TrueRequest;
  v13 = request.m_TrueRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation - 1;
  *(_OWORD *)&v13->MajorFunction = 0LL;
  *(_OWORD *)&v13->Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
  *(_OWORD *)(&v13->Parameters.SetQuota + 6) = 0LL;
  v13->FileObject = 0LL;
  v12->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
  v12->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
  v12->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&urb;
  FxRequestBase::VerifierSetFormatted(v12);
  _a1 = FxIoTarget::SubmitSync(this, request.m_TrueRequest, &options, 0LL);
  m_Globals = this->m_Globals;
  v5 = _a1;
  if ( _a1 < 0 )
  {
    v6 = 12;
    goto LABEL_5;
  }
  if ( !urb.UrbControlTransfer.TransferBufferLength )
  {
    _a1 = -1073741823;
    v5 = -1073741823;
    v6 = 13;
    goto LABEL_5;
  }
  wTotalLength = config.wTotalLength;
  if ( config.wTotalLength < 9u )
  {
    v5 = -1073741823;
    WPP_IFR_SF_DDd(m_Globals, v14, 0xEu, 0xEu, WPP_FxusbDeviceKm_cpp_Traceguids, config.wTotalLength, 9u, -1073741823);
    goto $Done_27;
  }
  Tag = m_Globals->Tag;
  v17 = retaddr;
  v35.m128i_i64[0] = 0LL;
  v35.m128i_i64[1] = 64LL;
  if ( !m_Globals->FxPoolTrackingOn )
    v17 = 0LL;
  v18 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v35, (unsigned int)config.wTotalLength + 18, Tag, v17);
  this->m_ConfigDescriptor = (_USB_CONFIGURATION_DESCRIPTOR *)v18;
  if ( !v18 )
  {
    v5 = -1073741670;
    WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0xFu, WPP_FxusbDeviceKm_cpp_Traceguids, wTotalLength + 18, -1073741670);
    goto $Done_27;
  }
  *(_DWORD *)&urb.UrbHeader.Length = 721032;
  urb.UrbControlTransfer.TransferBufferLength = wTotalLength;
  *(_OWORD *)(&urb.UrbGetIsochPipeTransferPathDelays + 1) = (unsigned __int64)v18;
  *(_DWORD *)((char *)&urb.UrbGetIsochPipeTransferPathDelays + 130) = 512;
  urb.UrbControlTransfer.UrbLink = 0LL;
  IoReuseIrp(request.m_TrueRequest->m_Irp.m_Irp, 0);
  FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest);
  v19 = request.m_TrueRequest;
  v20 = request.m_TrueRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation - 1;
  *(_OWORD *)&v20->MajorFunction = 0LL;
  *(_OWORD *)&v20->Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
  *(_OWORD *)(&v20->Parameters.SetQuota + 6) = 0LL;
  v20->FileObject = 0LL;
  v19->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
  v19->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
  v19->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&urb;
  FxRequestBase::VerifierSetFormatted(v19);
  _a1 = FxIoTarget::SubmitSync(this, request.m_TrueRequest, &options, 0LL);
  v5 = _a1;
  if ( _a1 < 0 )
  {
    v6 = 16;
    goto LABEL_4;
  }
  m_ConfigDescriptor = this->m_ConfigDescriptor;
  _a3 = m_ConfigDescriptor->wTotalLength;
  if ( _a3 != wTotalLength )
  {
    v5 = -1073741668;
    WPP_IFR_SF_DDd(this->m_Globals, v21, 0xEu, 0x11u, WPP_FxusbDeviceKm_cpp_Traceguids, wTotalLength, _a3, -1073741668);
    goto $Done_27;
  }
  if ( (m_ConfigDescriptor->bmAttributes & 0x20) != 0 )
    this->m_Traits |= 2u;
  deviceStatus = 0;
  *(_DWORD *)&urb.UrbHeader.Length = 1245320;
  urb.UrbControlTransfer.TransferBufferLength = 2;
  *((_OWORD *)&urb.UrbGetIsochPipeTransferPathDelays + 3) = 0uLL;
  urb.UrbSelectInterface.Interface.InterfaceHandle = &deviceStatus;
  urb.UrbControlDescriptorRequest.LanguageId = 0;
  IoReuseIrp(request.m_TrueRequest->m_Irp.m_Irp, 0);
  FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest);
  v24 = request.m_TrueRequest;
  v25 = request.m_TrueRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation - 1;
  *(_OWORD *)&v25->MajorFunction = 0LL;
  *(_OWORD *)&v25->Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
  *(_OWORD *)(&v25->Parameters.SetQuota + 6) = 0LL;
  v25->FileObject = 0LL;
  v24->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
  v24->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
  v24->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&urb;
  FxRequestBase::VerifierSetFormatted(v24);
  if ( (int)FxIoTarget::SubmitSync(this, request.m_TrueRequest, &options, 0LL) >= 0 && (deviceStatus & 1) != 0 )
    this->m_Traits |= 1u;
  memset(&busIf, 0, sizeof(busIf));
  IoReuseIrp(request.m_TrueRequest->m_Irp.m_Irp, -1073741637);
  FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest);
  m_Irp = request.m_TrueRequest->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  m_Irp->IoStatus.Status = -1073741637;
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)&busIf;
  CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
  CurrentStackLocation[-1].Parameters.Create.Options = 65608;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&USB_BUS_INTERFACE_USBDI_GUID;
  FxRequestBase::VerifierSetFormatted(request.m_TrueRequest);
  v5 = FxIoTarget::SubmitSync(this, request.m_TrueRequest, 0LL, 0LL);
  if ( v5 < 0 )
  {
    memset(&busIf, 0, sizeof(busIf));
    IoReuseIrp(request.m_TrueRequest->m_Irp.m_Irp, -1073741637);
    FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest);
    v28 = request.m_TrueRequest->m_Irp.m_Irp;
    v29 = v28->Tail.Overlay.CurrentStackLocation;
    v28->IoStatus.Status = -1073741637;
    *(_WORD *)&v29[-1].MajorFunction = 2075;
    v29[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)&busIf;
    v29[-1].Parameters.CreatePipe.Parameters = 0LL;
    v29[-1].Parameters.Create.Options = 64;
    v29[-1].Parameters.WMI.ProviderId = (unsigned __int64)&USB_BUS_INTERFACE_USBDI_GUID;
    FxRequestBase::VerifierSetFormatted(request.m_TrueRequest);
    _a1 = FxIoTarget::SubmitSync(this, request.m_TrueRequest, 0LL, 0LL);
    v5 = _a1;
    if ( _a1 < 0 )
    {
      if ( _a1 == -1073741637 )
      {
        this->m_OnUSBD = 1;
        v5 = 0;
        goto $Done_27;
      }
      v6 = 18;
      goto LABEL_4;
    }
  }
  if ( busIf.IsDeviceHighSpeed && busIf.IsDeviceHighSpeed(busIf.BusContext) )
    this->m_Traits |= 4u;
  BusContext = busIf.BusContext;
  this->m_QueryBusTime = busIf.QueryBusTime;
  this->m_BusInterfaceDereference = busIf.InterfaceDereference;
  GetUSBDIVersion = busIf.GetUSBDIVersion;
  this->m_BusInterfaceContext = BusContext;
  GetUSBDIVersion(BusContext, &this->m_UsbdVersionInformation, &this->m_HcdPortCapabilities);
$Done_27:
  FxSyncRequest::~FxSyncRequest(&request);
  return (unsigned int)v5;
}
