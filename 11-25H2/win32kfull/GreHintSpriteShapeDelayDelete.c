/*
 * XREFs of GreHintSpriteShapeDelayDelete @ 0x14032326C
 * Callers:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x14008B2C8 (-vClearRendering@DC@@QEAAXXZ.c)
 * Callees:
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     GreHintSpriteShape @ 0x1400922F0 (GreHintSpriteShape.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x14032A13C (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 */

int __fastcall GreHintSpriteShapeDelayDelete(Gre::Base *a1, HWND a2, HBITMAP a3, __int64 a4, int a5, int a6)
{
  if ( a6 && IsDwmActive(a1) )
    return GreHintSpriteShape((HDEV)a1, a2, a3, a4, a5, a6, 0);
  else
    return GdiHintSpriteShapeDelayDelete((HDEV)a1, a2, a3, a4);
}
