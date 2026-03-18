/*
 * XREFs of ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14008A2D8
 * Callers:
 *     GreAlphaBlend @ 0x140073C58 (GreAlphaBlend.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x14007695C (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x14007C874 (-GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@.c)
 *     ?GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z @ 0x14007D1C4 (-GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z.c)
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14008952C (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140098880 (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400A15A8 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1400DD258 (-bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTIO.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1400DE37C (-bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE.c)
 *     GreTransferDwmStateToSpriteState @ 0x14012313C (GreTransferDwmStateToSpriteState.c)
 *     ?GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECORD@@PEAVSURFACE@@@Z @ 0x140188250 (-GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECOR.c)
 *     NtGdiTransparentBlt @ 0x1401B4C50 (NtGdiTransparentBlt.c)
 *     ?GrepSetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@Z @ 0x1401C44D8 (-GrepSetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@.c)
 *     NtGdiPlgBlt @ 0x140306FF0 (NtGdiPlgBlt.c)
 * Callees:
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14008A700 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14008A7E0 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x14008A810 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x14008AFD0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall OPTAPIDCOBJ::bValid(HDC *this)
{
  __int64 v2; // rdx
  DC *v3; // rcx
  __int64 v4; // r8
  struct _DC_ATTR *UserAttr; // rax
  HDC v6; // rax

  if ( *this )
    return 1;
  if ( *((_BYTE *)this + 113) != 1 )
  {
    XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)this, this[13]);
    if ( !*this )
      goto LABEL_9;
    if ( ((_DWORD)(*this)[11] & 2) == 0 )
    {
      if ( ((_DWORD)this[4] & 2) == 0 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)this);
        if ( UserAttr )
        {
          if ( !DC::SaveAttributes((DC *)*this, UserAttr) )
          {
            OBJECT::InterlockedDecrementExclusiveLockCount((OBJECT *)*this);
            *this = 0LL;
            goto LABEL_9;
          }
        }
      }
      *((_DWORD *)*this + 11) |= 2u;
      *((_DWORD *)this + 2) = 1;
    }
    v3 = (DC *)*this;
    if ( ((_DWORD)(*this)[130] & 4) != 0 )
      DC::vMarkTransformDirty(v3);
LABEL_9:
    v6 = *this;
    *((_BYTE *)this + 113) = 1;
    if ( v6 )
    {
      if ( *((_WORD *)v6 + 6) != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
      if ( *((_WORD *)*this + 6) == 1 )
        return 1;
      if ( *this )
        XDCOBJ::vUnlockFast((XDCOBJ *)this);
      *this = 0LL;
    }
  }
  return 0;
}
