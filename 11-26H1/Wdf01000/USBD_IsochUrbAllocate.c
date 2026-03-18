/*
 * XREFs of USBD_IsochUrbAllocate @ 0x1400017F0
 * Callers:
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x140001AE0 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

__int64 __fastcall USBD_IsochUrbAllocate(USBD_HANDLE__ *USBDHandle, __int64 NumberOfIsochPackets, _URB **Urb)
{
  char v3; // r15
  unsigned int v6; // edi
  USBD_HANDLE__ *v7; // rbp
  __int64 (__fastcall *v8)(_QWORD, __int64); // rax
  SIZE_T v9; // rdi
  _URB *PoolWithTag; // rax
  void (__fastcall *v11)(_QWORD, __int64); // rax

  v3 = 0;
  if ( !USBDHandle )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "USBDHandle cant be NULL\n");
    v6 = -1073741811;
    if ( !Urb )
      return v6;
LABEL_35:
    *Urb = 0LL;
    return v6;
  }
  if ( Urb )
  {
    if ( *((_BYTE *)USBDHandle + 225) )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete is set, UsbdHandleInfo 0x%p\n", USBDHandle);
      v7 = USBDHandle + 55;
    }
    else
    {
      v7 = USBDHandle + 55;
      if ( *((int *)USBDHandle + 55) >= 1 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v7);
        v8 = (__int64 (__fastcall *)(_QWORD, __int64))*((_QWORD *)USBDHandle + 16);
        v3 = 1;
        if ( v8 )
        {
          v6 = v8(*((_QWORD *)USBDHandle + 6), NumberOfIsochPackets);
        }
        else
        {
          v9 = (unsigned int)(12 * NumberOfIsochPackets + 152);
          PoolWithTag = (_URB *)ExAllocatePoolWithTag(g_NonPagedPoolType, v9, *((_DWORD *)USBDHandle + 16));
          *Urb = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, v9);
            v6 = 0;
          }
          else
          {
            if ( g_EnableDbgPrints )
              DbgPrintEx(0x4Du, 0, "Insufficient Memory to allocate Isoch URB\n");
            v6 = -1073741670;
          }
        }
        goto $__tryLabel;
      }
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->ReferenceCount must be 1 or higher 0x%p\n", USBDHandle);
    }
    v6 = -1073741436;
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "USBDInternal_ReferenceHandle failed %x\n", -1073741436);
$__tryLabel:
    if ( (v6 & 0x80000000) == 0 )
      return v6;
    if ( v3 && _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) <= 1 )
    {
      if ( *((_BYTE *)USBDHandle + 225) )
      {
        v11 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)USBDHandle + 14);
        if ( v11 )
          v11(*((_QWORD *)USBDHandle + 6), NumberOfIsochPackets);
        ExFreePoolWithTag(USBDHandle, *((_DWORD *)USBDHandle + 16));
      }
      else if ( g_EnableDbgPrints )
      {
        DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete should be set here UsbdHandleInfo 0x%p\n", USBDHandle);
      }
    }
    goto LABEL_35;
  }
  if ( g_EnableDbgPrints )
    DbgPrintEx(0x4Du, 0, "Urb cant be NULL\n");
  return (unsigned int)-1073741811;
}
