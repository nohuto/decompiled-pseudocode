/*
 * XREFs of McTemplateK0px_EtwWriteTransfer @ 0x140133A90
 * Callers:
 *     EtwBindSwapChain @ 0x1401338B0 (EtwBindSwapChain.c)
 *     EtwTraceTokenManagerDisableScanoutToken @ 0x1401338E0 (EtwTraceTokenManagerDisableScanoutToken.c)
 *     EtwDwmSpriteDestroyEvent @ 0x140133910 (EtwDwmSpriteDestroyEvent.c)
 *     EtwDwmSpriteCreateEvent @ 0x140133940 (EtwDwmSpriteCreateEvent.c)
 *     EtwLogicalSurfPhysSurfUnbindEvent @ 0x140133970 (EtwLogicalSurfPhysSurfUnbindEvent.c)
 *     EtwLogicalSurfEnableDirtyNotificationEvent @ 0x1401339A0 (EtwLogicalSurfEnableDirtyNotificationEvent.c)
 *     EtwLogicalSurfPhysSurfBindEvent @ 0x1401339D0 (EtwLogicalSurfPhysSurfBindEvent.c)
 *     EtwDwmSpriteLogicalSurfBindEvent @ 0x140133A00 (EtwDwmSpriteLogicalSurfBindEvent.c)
 *     EtwDwmSpriteLogicalSurfUnBindEvent @ 0x140133A30 (EtwDwmSpriteLogicalSurfUnBindEvent.c)
 *     EtwTraceDCompBeginFrameEvent @ 0x140133A60 (EtwTraceDCompBeginFrameEvent.c)
 *     EtwTraceTransformAgeDecay @ 0x14013FA90 (EtwTraceTransformAgeDecay.c)
 *     EtwTraceFlipManagerContentUnbind @ 0x14013FAC0 (EtwTraceFlipManagerContentUnbind.c)
 *     EtwTraceFlipManagerFlipAwayFenceCreate @ 0x1401DADE0 (EtwTraceFlipManagerFlipAwayFenceCreate.c)
 *     EtwTraceFlipManagerFlipAwayFenceDestroy @ 0x1401DAE10 (EtwTraceFlipManagerFlipAwayFenceDestroy.c)
 *     EtwBindLogicalSurfaceRHEvent @ 0x1401F9E00 (EtwBindLogicalSurfaceRHEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14001E680 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0px_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  va_list v5; // [rsp+40h] [rbp-38h]
  __int64 v6; // [rsp+48h] [rbp-30h]
  va_list v7; // [rsp+50h] [rbp-28h]
  __int64 v8; // [rsp+58h] [rbp-20h]
  __int64 v9; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v6 = 8LL;
  va_copy(v5, va);
  v8 = 8LL;
  va_copy(v7, va1);
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 3u, &v4);
}
