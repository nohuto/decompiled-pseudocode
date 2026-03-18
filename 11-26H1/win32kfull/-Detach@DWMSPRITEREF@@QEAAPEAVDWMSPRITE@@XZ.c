/*
 * XREFs of ?Detach@DWMSPRITEREF@@QEAAPEAVDWMSPRITE@@XZ @ 0x1401E7860
 * Callers:
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1401E783C (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@SAXPEAX@Z @ 0x140344170 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@SAXPE.c)
 *     GreDeleteSpriteDelayDelete @ 0x140344DC0 (GreDeleteSpriteDelayDelete.c)
 * Callees:
 *     <none>
 */

struct DWMSPRITE *__fastcall DWMSPRITEREF::Detach(DWMSPRITEREF *this)
{
  struct DWMSPRITE *result; // rax

  result = (struct DWMSPRITE *)*((_QWORD *)this + 4);
  if ( result )
    _InterlockedDecrement16((volatile signed __int16 *)result + 6);
  *((_QWORD *)this + 4) = 0LL;
  return result;
}
