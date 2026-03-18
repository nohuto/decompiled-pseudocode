/*
 * XREFs of ?InterlockedIncrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x140321E10
 * Callers:
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1401735A8 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall OBJECT::InterlockedIncrementExclusiveLockCount(OBJECT *this)
{
  if ( *((_WORD *)this + 6) == 0xFFFF )
    OBJECT::ReportOverflow(this, 2u);
  _InterlockedIncrement((volatile signed __int32 *)this + 3);
}
