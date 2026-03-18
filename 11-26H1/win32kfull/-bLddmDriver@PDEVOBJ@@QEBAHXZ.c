/*
 * XREFs of ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x14023AA54
 * Callers:
 *     ?MulIcmSetDeviceGammaRamp@@YAKPEAUDHPDEV__@@KPEAX@Z @ 0x1403288B0 (-MulIcmSetDeviceGammaRamp@@YAKPEAUDHPDEV__@@KPEAX@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x1403442D4 (-SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x140347B8C (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x140347F18 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     GreDxDwmShutdown @ 0x140348AA0 (GreDxDwmShutdown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::bLddmDriver(PDEVOBJ *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(*(_QWORD *)this + 2568LL);
  if ( !v1 || v1 == -4 )
    return 0LL;
  else
    return (*(_DWORD *)(v1 + 160) >> 23) & 1;
}
