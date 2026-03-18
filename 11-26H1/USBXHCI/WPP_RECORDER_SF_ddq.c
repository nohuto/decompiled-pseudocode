/*
 * XREFs of WPP_RECORDER_SF_ddq @ 0x140006C78
 * Callers:
 *     Endpoint_UcxEvtEndpointAbort @ 0x140004C00 (Endpoint_UcxEvtEndpointAbort.c)
 *     Endpoint_UcxEvtEndpointPurge @ 0x140005360 (Endpoint_UcxEvtEndpointPurge.c)
 *     Endpoint_SendClearStallTransfer @ 0x140006734 (Endpoint_SendClearStallTransfer.c)
 *     Endpoint_WdfEvtAbortComplete @ 0x140006BA0 (Endpoint_WdfEvtAbortComplete.c)
 *     Endpoint_Enable @ 0x14001F2E0 (Endpoint_Enable.c)
 *     UsbDevice_TransferEventHandler @ 0x140024920 (UsbDevice_TransferEventHandler.c)
 *     Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x140030E1C (Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted.c)
 *     Endpoint_WdfEvtPurgeComplete @ 0x140032080 (Endpoint_WdfEvtPurgeComplete.c)
 *     Endpoint_Create @ 0x1400806CC (Endpoint_Create.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_ddq(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  __int64 v15; // [rsp+B0h] [rbp+38h] BYREF
  va_list va1; // [rsp+B0h] [rbp+38h]
  va_list va2; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  v7 = (unsigned __int64)a3 >> 16;
  v8 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      va2,
      8LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v8, a3, a5, v12, (__int64 *)va, 4LL, (__int64 *)va1, 4LL, va2);
}
