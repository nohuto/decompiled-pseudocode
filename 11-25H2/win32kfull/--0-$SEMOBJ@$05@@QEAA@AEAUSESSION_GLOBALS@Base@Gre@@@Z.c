/*
 * XREFs of ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14008E720
 * Callers:
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x14008DF34 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     GreSfmCloseCompositorRef @ 0x140095930 (GreSfmCloseCompositorRef.c)
 *     GreTransferDwmStateToSpriteState @ 0x14012313C (GreTransferDwmStateToSpriteState.c)
 *     NtGdiExtFloodFill @ 0x14015F420 (NtGdiExtFloodFill.c)
 *     GreTransferSpriteStateToDwmState @ 0x140172718 (GreTransferSpriteStateToDwmState.c)
 *     GreDwmStartup @ 0x1401D500C (GreDwmStartup.c)
 *     GreDesktopSwitch @ 0x1401E887C (GreDesktopSwitch.c)
 *     GreDrvDisconnect @ 0x140265948 (GreDrvDisconnect.c)
 *     GreDwmShutdown @ 0x140267064 (GreDwmShutdown.c)
 *     bDrvReconnect @ 0x14026B88C (bDrvReconnect.c)
 *     bDrvShadowDisconnect @ 0x14026C690 (bDrvShadowDisconnect.c)
 *     ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140328140 (-iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 *     GreSaveScreenBits @ 0x140332A34 (GreSaveScreenBits.c)
 *     GreDrvReconnect @ 0x14033F2B8 (GreDrvReconnect.c)
 *     bDrvDisconnect @ 0x14033F76C (bDrvDisconnect.c)
 *     bDrvDisplayIOCtl @ 0x14033F9A0 (bDrvDisplayIOCtl.c)
 *     bDrvShadowConnect @ 0x14033FBC0 (bDrvShadowConnect.c)
 *     vDrvInvalidateRect @ 0x14033FE20 (vDrvInvalidateRect.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$05@@YAXXZ @ 0x14008E7A8 (--$GrepAcquireLockValidate@$05@@YAXXZ.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<6>::SEMOBJ<6>(HSEMAPHORE *a1, _QWORD *a2)
{
  HSEMAPHORE v3; // rcx

  v3 = (HSEMAPHORE)(*a2 + 1040LL);
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<6>();
  return a1;
}
