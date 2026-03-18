/*
 * XREFs of ?Detach@DWMSPRITEREF@@QEAAPEAVDWMSPRITE@@XZ @ 0x1401AC0CC
 * Callers:
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400920B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x1403219F0 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@SAXPEAX@Z @ 0x140321E50 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@SAXPE.c)
 *     GreDeleteSpriteDelayDelete @ 0x140322BC0 (GreDeleteSpriteDelayDelete.c)
 * Callees:
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14008A7E0 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 */

struct DWMSPRITE *__fastcall DWMSPRITEREF::Detach(DWMSPRITEREF *this)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
    OBJECT::InterlockedDecrementExclusiveLockCount(*((OBJECT **)this + 4));
  *((_QWORD *)this + 4) = 0LL;
  return (struct DWMSPRITE *)v1;
}
