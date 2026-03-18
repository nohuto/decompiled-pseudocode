/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x14001D260
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x14001BBB0 (GreUpdateSpriteVisRgn.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x140031C80 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     GreUpdateSpriteClipRgn @ 0x14005D774 (GreUpdateSpriteClipRgn.c)
 *     ?GrepExtSelectClipRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@HH@Z @ 0x140080068 (-GrepExtSelectClipRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@HH@Z.c)
 *     NtGdiExtSelectClipRgn @ 0x14009B380 (NtGdiExtSelectClipRgn.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1400DAB80 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400DCB5C (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     GreFillRgn @ 0x1400E2308 (GreFillRgn.c)
 *     GreFrameRgn @ 0x1400E295C (GreFrameRgn.c)
 *     GreGetRandomRgn @ 0x140158D50 (GreGetRandomRgn.c)
 *     ?GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x140209018 (-GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z.c)
 *     ?GrepScaleRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x1402163FC (-GrepScaleRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z.c)
 *     GreScaleRgnToDestLogPixel @ 0x14026DF64 (GreScaleRgnToDestLogPixel.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x140301A98 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     GreSetClientRgn @ 0x140302BC8 (GreSetClientRgn.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x140325E04 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 *     ?GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x14032A0A0 (-GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14008A7E0 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 12) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    OBJECT::InterlockedDecrementExclusiveLockCount(*(OBJECT **)this);
  PopThreadGuardedObject((char *)this + 8);
}
