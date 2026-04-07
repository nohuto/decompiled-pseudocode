/*
 * XREFs of ?CommonAnimate@CLauncherLaunch@@AEAAJPEAVCWindowData@@PEAPEAVCAnimationComponent@@@Z @ 0x1800C0808
 * Callers:
 *     ?_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18002E220 (-_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x18002DBB4 (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800383E8 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_CreateAndAddAnimationComponentWithRect@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2HPEAPEAVCAnimationComponent@@@Z @ 0x18006B68C (-_CreateAndAddAnimationComponentWithRect@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2HPE.c)
 *     ?GetPVLTarget@CLauncherLaunch@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x18006F310 (-GetPVLTarget@CLauncherLaunch@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18008D6F4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800C361C (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 */

__int64 __fastcall CLauncherLaunch::CommonAnimate(
        CLauncherLaunch *this,
        struct CWindowData *a2,
        struct CAnimationComponent **a3)
{
  int v3; // ebx
  const struct tagRECT *v5; // rdx
  int PVLTarget; // ecx
  int v9; // eax
  int v10; // edi
  CBaseObject *v11; // rbx
  __int128 v12; // xmm0
  int v13; // eax
  CBaseObject *v15; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT *v16; // [rsp+48h] [rbp-38h] BYREF
  struct tagRECT v17; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v18; // [rsp+60h] [rbp-20h] BYREF

  v3 = *((_DWORD *)a2 + 32);
  v15 = 0LL;
  v5 = (const struct tagRECT *)((char *)this + 128);
  v16 = 0LL;
  v18 = 0LL;
  if ( v3 != 1 )
    v5 = 0LL;
  v17 = 0LL;
  CStoryboard::_GetIdealRects(a2, v5, &v18, &v16, &v17);
  PVLTarget = CLauncherLaunch::GetPVLTarget((__int64)this, *((_DWORD *)a2 + 186));
  if ( v3 == 1 )
  {
    v9 = CStoryboard::_CreateAndAddDesktopAnimationComponent(this, a2, PVLTarget, &v18, 0, &v15);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = v15;
      if ( *((_DWORD *)v15 + 17) != 2 )
      {
        v12 = *((_OWORD *)this + 8);
        *((_DWORD *)v15 + 17) = 2;
        *(_OWORD *)((char *)v11 + 104) = v12;
      }
      goto LABEL_10;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v9, 0xAE1u, 0LL);
  }
  else
  {
    v13 = CStoryboard::_CreateAndAddAnimationComponentWithRect(this, a2, 0, PVLTarget, v16, 0LL, 17, &v15);
    v10 = v13;
    if ( v13 >= 0 )
    {
      v11 = v15;
LABEL_10:
      CAnimatedTransitionVisual::SetBeginRect(*((CAnimatedTransitionVisual **)v11 + 5), &v18);
      CAnimatedTransitionVisual::SetEndRect(*((CAnimatedTransitionVisual **)v11 + 5), &v17);
      goto LABEL_13;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v13, 0xAEBu, 0LL);
  }
  v11 = v15;
LABEL_13:
  if ( a3 )
  {
    if ( v10 < 0 )
    {
      *a3 = 0LL;
    }
    else
    {
      *a3 = v11;
      if ( !v11 )
        return (unsigned int)v10;
      CBaseObject::AddRef(v11);
    }
  }
  if ( v11 )
    CBaseObject::Release(v11);
  return (unsigned int)v10;
}
