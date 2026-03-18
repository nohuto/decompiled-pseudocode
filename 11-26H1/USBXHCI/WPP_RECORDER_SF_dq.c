/*
 * XREFs of WPP_RECORDER_SF_dq @ 0x14002510C
 * Callers:
 *     UsbDevice_UcxEvtDisable @ 0x14001C480 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_DisableCompletion @ 0x14001CA4C (UsbDevice_DisableCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x14001DBB4 (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_UcxEvtReset @ 0x1400244A0 (UsbDevice_UcxEvtReset.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x140025248 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_UcxEvtAddress @ 0x1400253C0 (UsbDevice_UcxEvtAddress.c)
 *     UsbDevice_EnableCompletion @ 0x140025600 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x140026300 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_DeviceResetCompletion @ 0x140026930 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x14002EDB0 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x14003B660 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_UpdateCompletion @ 0x14003C610 (UsbDevice_UpdateCompletion.c)
 *     UsbDevice_ConfigureEndpointCompletion @ 0x14004E080 (UsbDevice_ConfigureEndpointCompletion.c)
 *     UsbDevice_DropEndpointsCompletion @ 0x14004E310 (UsbDevice_DropEndpointsCompletion.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_dq(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  v7 = (unsigned __int64)a3 >> 16;
  v8 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      8LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v8, a3, a5, v12, (__int64 *)va, 4LL, va1, 8LL, 0LL);
}
