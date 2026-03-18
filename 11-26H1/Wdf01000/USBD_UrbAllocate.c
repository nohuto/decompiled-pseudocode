/*
 * XREFs of USBD_UrbAllocate @ 0x1400031CC
 * Callers:
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x140002450 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x140002E6C (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1400137E8 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1400289A0 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?AllocateUrb@FxUsbPipeRequestContext@@QEAAJPEAUUSBD_HANDLE__@@@Z @ 0x14009E398 (-AllocateUrb@FxUsbPipeRequestContext@@QEAAJPEAUUSBD_HANDLE__@@@Z.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1400A04FC (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

__int64 __fastcall USBD_UrbAllocate(USBD_HANDLE__ *USBDHandle, _URB **Urb)
{
  char v2; // r15
  USBD_HANDLE__ *v5; // rbp
  __int64 (__fastcall *v6)(_QWORD); // rax
  unsigned int v7; // edi
  _URB *PoolWithTag; // rax
  void (__fastcall *v10)(_QWORD); // rax

  v2 = 0;
  if ( USBDHandle )
  {
    if ( Urb )
    {
      if ( *((_BYTE *)USBDHandle + 225) )
      {
        if ( g_EnableDbgPrints )
          DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete is set, UsbdHandleInfo 0x%p\n", USBDHandle);
        v5 = USBDHandle + 55;
      }
      else
      {
        v5 = USBDHandle + 55;
        if ( *((int *)USBDHandle + 55) >= 1 )
        {
          _InterlockedIncrement((volatile signed __int32 *)v5);
          v6 = (__int64 (__fastcall *)(_QWORD))*((_QWORD *)USBDHandle + 15);
          v2 = 1;
          if ( v6 )
          {
            v7 = v6(*((_QWORD *)USBDHandle + 6));
          }
          else
          {
            PoolWithTag = (_URB *)ExAllocatePoolWithTag(g_NonPagedPoolType, 0x98uLL, *((_DWORD *)USBDHandle + 16));
            *Urb = PoolWithTag;
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, sizeof(_URB));
              v7 = 0;
            }
            else
            {
              if ( g_EnableDbgPrints )
                DbgPrintEx(0x4Du, 0, "Insufficient Memory to allocate URB\n");
              v7 = -1073741670;
            }
          }
$__tryLabel_0:
          if ( (v7 & 0x80000000) == 0 )
            return v7;
          if ( v2 && _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) <= 1 )
          {
            if ( *((_BYTE *)USBDHandle + 225) )
            {
              v10 = (void (__fastcall *)(_QWORD))*((_QWORD *)USBDHandle + 14);
              if ( v10 )
                v10(*((_QWORD *)USBDHandle + 6));
              ExFreePoolWithTag(USBDHandle, *((_DWORD *)USBDHandle + 16));
            }
            else if ( g_EnableDbgPrints )
            {
              DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete should be set here UsbdHandleInfo 0x%p\n", USBDHandle);
            }
          }
LABEL_36:
          *Urb = 0LL;
          return v7;
        }
        if ( g_EnableDbgPrints )
          DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->ReferenceCount must be 1 or higher 0x%p\n", USBDHandle);
      }
      v7 = -1073741436;
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "USBDInternal_ReferenceHandle failed %x\n", -1073741436);
      goto $__tryLabel_0;
    }
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "Urb cant be NULL\n");
    return (unsigned int)-1073741811;
  }
  else
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "USBDHandle cant be NULL\n");
    v7 = -1073741811;
    if ( Urb )
      goto LABEL_36;
  }
  return v7;
}
