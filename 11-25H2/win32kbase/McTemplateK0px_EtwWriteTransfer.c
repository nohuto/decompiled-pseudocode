/*
 * XREFs of McTemplateK0px_EtwWriteTransfer @ 0x1400ED250
 * Callers:
 *     EtwDwmSpriteDestroyEvent @ 0x1400ED0D0 (EtwDwmSpriteDestroyEvent.c)
 *     EtwLogicalSurfPhysSurfUnbindEvent @ 0x1400ED100 (EtwLogicalSurfPhysSurfUnbindEvent.c)
 *     EtwDwmSpriteCreateEvent @ 0x1400ED130 (EtwDwmSpriteCreateEvent.c)
 *     EtwLogicalSurfEnableDirtyNotificationEvent @ 0x1400ED160 (EtwLogicalSurfEnableDirtyNotificationEvent.c)
 *     EtwLogicalSurfPhysSurfBindEvent @ 0x1400ED190 (EtwLogicalSurfPhysSurfBindEvent.c)
 *     EtwDwmSpriteLogicalSurfBindEvent @ 0x1400ED1C0 (EtwDwmSpriteLogicalSurfBindEvent.c)
 *     EtwDwmSpriteLogicalSurfUnBindEvent @ 0x1400ED1F0 (EtwDwmSpriteLogicalSurfUnBindEvent.c)
 *     EtwTraceDCompBeginFrameEvent @ 0x1400ED220 (EtwTraceDCompBeginFrameEvent.c)
 *     EtwTraceTransformAgeDecay @ 0x1400FEF90 (EtwTraceTransformAgeDecay.c)
 *     EtwBindSwapChain @ 0x14014C7A0 (EtwBindSwapChain.c)
 *     EtwTraceFlipManagerContentUnbind @ 0x1401B7DC0 (EtwTraceFlipManagerContentUnbind.c)
 *     EtwTraceFlipManagerFlipAwayFenceCreate @ 0x1401B7E20 (EtwTraceFlipManagerFlipAwayFenceCreate.c)
 *     EtwTraceFlipManagerFlipAwayFenceDestroy @ 0x1401B7E50 (EtwTraceFlipManagerFlipAwayFenceDestroy.c)
 *     EtwTraceTokenManagerDisableScanoutToken @ 0x1401B8610 (EtwTraceTokenManagerDisableScanoutToken.c)
 *     EtwBindLogicalSurfaceRHEvent @ 0x1401D0C40 (EtwBindLogicalSurfaceRHEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14003E650 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0px_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  va_list v5; // [rsp+40h] [rbp-38h]
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  va_list v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  va_copy(v8, va1);
  v10 = 0;
  v9 = 8;
  return McGenEventWrite_EtwWriteTransfer(8LL, a2, &W32kControlGuid, 3u, &v4);
}
