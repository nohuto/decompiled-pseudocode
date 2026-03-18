/*
 * XREFs of McTemplateU0qx_EventWriteTransfer @ 0x1802534E0
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800EDCF8 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800F0A20 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

ULONG McTemplateU0qx_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  int *v5; // [rsp+40h] [rbp-38h]
  __int64 v6; // [rsp+48h] [rbp-30h]
  va_list v7; // [rsp+50h] [rbp-28h]
  __int64 v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+90h] [rbp+18h] BYREF
  va_list va; // [rsp+98h] [rbp+20h] BYREF

  va_start(va, a3);
  v9 = a3;
  v6 = 4LL;
  v5 = &v9;
  v8 = 8LL;
  va_copy(v7, va);
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_DEBUG_FRAME_COUNTER_EVENT,
           a3,
           3u,
           &v4);
}
