/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@SAXPEAX@Z @ 0x140344170
 * Callers:
 *     <none>
 * Callees:
 *     ?Detach@DWMSPRITEREF@@QEAAPEAVDWMSPRITE@@XZ @ 0x1401E7860 (-Detach@DWMSPRITEREF@@QEAAPEAVDWMSPRITE@@XZ.c)
 */

struct DWMSPRITE *__fastcall UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic(
        DWMSPRITEREF *a1)
{
  return DWMSPRITEREF::Detach(a1);
}
