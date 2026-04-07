/*
 * XREFs of ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800BBD38
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18005F274 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180003248 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180004A98 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180005198 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800057B4 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180008D8C (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180013488 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x1800135C4 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z @ 0x180014250 (-SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2?$CTimeline@M@@SAPEAX_K@Z @ 0x180085C18 (--2-$CTimeline@M@@SAPEAX_K@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x18008B5D4 (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ?Stop@CPenPressHoldVisual@@UEAAXXZ @ 0x1800BBEF0 (-Stop@CPenPressHoldVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CPenPressHoldVisual::Start(CPenPressHoldVisual *this, const struct tagPOINT *a2)
{
  struct CBitmapSource ***v4; // r14
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // ebx
  __int64 v7; // r9
  struct tagSIZE *v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  void *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  unsigned int v22; // eax

  *((struct tagPOINT *)this + 28) = *a2;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    McTemplateU0q_EtwEventWriteTransfer((__int64)this, (int)&UdwmPenPressHoldVisual_Start, 0);
  v4 = (struct CBitmapSource ***)((char *)this + 256);
  Theme = (void *)CDesktopManager::GetTheme(2);
  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 Theme,
                                 2,
                                 0xCu,
                                 0LL,
                                 (__int64)this + 256);
  if ( BitmapsFromAtlasImageStrip < 0 )
  {
    v22 = 56;
    goto LABEL_16;
  }
  v8 = (struct tagSIZE *)((char *)this + 248);
  v9 = *((_QWORD *)**v4 + 16);
  *((_QWORD *)this + 31) = v9;
  v10 = v9;
  if ( (int)v9 < 1 )
  {
    v8->cx = 1;
    v10 = 1;
  }
  v11 = *((_DWORD *)this + 63);
  if ( v11 < 1 )
  {
    *((_DWORD *)this + 63) = 1;
    v11 = 1;
  }
  v12 = a2->x - (v10 >> 1);
  v13 = a2->y - ((unsigned int)v11 >> 1);
  CVisual::SetSize(*((CVisual **)this + 30), v8, 1LL, v7);
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 30), v12, v14);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 30), v13, v15);
  CImage::SetBitmapSource(*((CImage **)this + 30), **v4);
  CVisual::SetOpacity(this, 1.0, v16);
  v17 = CTimeline<float>::operator new();
  if ( v17 )
    v21 = CTimeline<float>::CTimeline<float>((__int64)v17, v18, v19, v20, 0);
  else
    v21 = 0LL;
  *((_QWORD *)this + 29) = v21;
  if ( !v21 )
  {
    BitmapsFromAtlasImageStrip = -2147024882;
    v22 = 83;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapsFromAtlasImageStrip, v22, 0LL);
    CPenPressHoldVisual::Stop(this);
    return (unsigned int)BitmapsFromAtlasImageStrip;
  }
  BitmapsFromAtlasImageStrip = CTouchVisual::RegisterGlobalTimer(this);
  if ( BitmapsFromAtlasImageStrip < 0 )
  {
    v22 = 85;
    goto LABEL_16;
  }
  return (unsigned int)BitmapsFromAtlasImageStrip;
}
