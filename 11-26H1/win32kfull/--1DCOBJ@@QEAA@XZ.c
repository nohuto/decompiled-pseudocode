/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x1400B5850
 * Callers:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     GreCreateDIBitmap @ 0x140015974 (GreCreateDIBitmap.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x140015AE0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     UpdateSprite @ 0x140015F78 (UpdateSprite.c)
 *     NtGdiStretchBlt @ 0x140016260 (NtGdiStretchBlt.c)
 *     GreUpdateSprite @ 0x140016514 (GreUpdateSprite.c)
 *     GreCreateCompatibleBitmapEx @ 0x1400171C0 (GreCreateCompatibleBitmapEx.c)
 *     NtGdiCreateCompatibleBitmap @ 0x1400172E0 (NtGdiCreateCompatibleBitmap.c)
 *     GreCreateReferencedDIBitmap @ 0x1400181E0 (GreCreateReferencedDIBitmap.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x14001C97C (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1400727E0 (-GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x1400771BC (-bSaveRegion@@YAHAEAVXDCOBJ@@J@Z.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x14007C6DC (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1400A211C (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z @ 0x1400A8B34 (-UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z.c)
 *     ?GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z @ 0x1400ABA6C (-GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z.c)
 *     NtGdiPatBlt @ 0x1400ACCD0 (NtGdiPatBlt.c)
 *     GrePatBlt @ 0x1400AD26C (GrePatBlt.c)
 *     GreAlphaBlend @ 0x1400B0E88 (GreAlphaBlend.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400B3E48 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1MAPIDCOBJ@@QEAA@XZ @ 0x1400B4334 (--1MAPIDCOBJ@@QEAA@XZ.c)
 *     NtGdiBitBlt @ 0x1400B5500 (NtGdiBitBlt.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x1400B5808 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1400BAF30 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z @ 0x1400BB534 (-GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x140169CC4 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     GreStretchBlt @ 0x14016B458 (GreStretchBlt.c)
 *     ?GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECORD@@PEAVSURFACE@@@Z @ 0x14016BC94 (-GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECOR.c)
 *     UntrapAppContainerRenderingWrap @ 0x140189A40 (UntrapAppContainerRenderingWrap.c)
 *     ?bEndXfer@XFERDCOBJ@@SA_NPEAUHDC__@@@Z @ 0x140197674 (-bEndXfer@XFERDCOBJ@@SA_NPEAUHDC__@@@Z.c)
 *     DxgkEngBltViaGDI @ 0x1401A9910 (DxgkEngBltViaGDI.c)
 *     GreGetDIBitsInternal @ 0x1401B5FB8 (GreGetDIBitsInternal.c)
 *     ?bEndDocInternal@@YAHAEAVAPIDCOBJ@@K@Z @ 0x140310FE0 (-bEndDocInternal@@YAHAEAVAPIDCOBJ@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  unsigned int CurrentProcessId; // eax
  __int64 v3; // rsi
  unsigned int v4; // edi
  __int64 v5; // rbp
  struct _DC_ATTR *UserAttr; // rax

  if ( *(_QWORD *)this )
  {
    if ( *((_DWORD *)this + 2) && (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
    {
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      v3 = *(_QWORD *)this;
      v4 = CurrentProcessId & 0xFFFFFFFC;
      if ( **(_QWORD **)this )
      {
        v5 = HmgPentryFromPobj(*((_QWORD *)this + 2), *(_QWORD *)this);
      }
      else
      {
        v5 = v3 + 2152;
        *(_OWORD *)(v3 + 2152) = 0LL;
        *(_QWORD *)(v3 + 2168) = 0LL;
        *(_DWORD *)(v3 + 2160) = -2147483630;
        *(_QWORD *)(v3 + 2168) = GreEncodeUserModePointer(0LL);
      }
      if ( v4 == (*(_DWORD *)(v5 + 8) & 0xFFFFFFFE) )
      {
        UserAttr = DCOBJ::GetUserAttr(this);
        if ( UserAttr )
          DC::RestoreAttributes(*(DC **)this, UserAttr);
      }
      *(_DWORD *)(*(_QWORD *)this + 44LL) &= ~2u;
      *((_DWORD *)this + 2) = 0;
    }
    _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)this + 12LL));
    *(_QWORD *)this = 0LL;
  }
  PopThreadGuardedObject((char *)this + 32);
}
