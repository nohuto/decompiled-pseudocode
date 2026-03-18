/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x140083168
 * Callers:
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x140080C30 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     GreFillRgn @ 0x140081834 (GreFillRgn.c)
 *     GreGetRandomRgn @ 0x14012C450 (GreGetRandomRgn.c)
 *     ?GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x14023DAF4 (-GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z.c)
 *     GreScaleRgnToDestLogPixel @ 0x140295600 (GreScaleRgnToDestLogPixel.c)
 *     ?GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x1403131B4 (-GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x14031912C (-vForceClientRgnUpdate@@YAXXZ.c)
 *     GreSetClientRgn @ 0x14031A314 (GreSetClientRgn.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x140348168 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 12) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)this + 12LL));
  PopThreadGuardedObject((char *)this + 8);
}
