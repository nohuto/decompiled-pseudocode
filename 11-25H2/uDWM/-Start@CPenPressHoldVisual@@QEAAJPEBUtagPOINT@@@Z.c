/*
 * XREFs of ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800BC49C
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18007EF64 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180006260 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18002D4AC (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18002D51C (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18002E30C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x1800490E4 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18004B474 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x180094340 (-SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180094424 (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180097EBC (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ?Stop@CPenPressHoldVisual@@UEAAXXZ @ 0x1800BC660 (-Stop@CPenPressHoldVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CPenPressHoldVisual::Start(CPenPressHoldVisual *this, const struct tagPOINT *a2)
{
  struct CBitmapSource ***v4; // r14
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // ebx
  struct tagSIZE *v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  LPVOID v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  unsigned int v18; // eax

  *((struct tagPOINT *)this + 32) = *a2;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    McTemplateU0q_EtwEventWriteTransfer((__int64)this, (__int64)&UdwmPenPressHoldVisual_Start, 0LL);
  v4 = (struct CBitmapSource ***)((char *)this + 288);
  Theme = (void *)CDesktopManager::GetTheme(2);
  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 Theme,
                                 2,
                                 0xCu,
                                 0LL,
                                 (struct CBitmapSource ***)this + 36);
  if ( BitmapsFromAtlasImageStrip < 0 )
  {
    v18 = 56;
    goto LABEL_16;
  }
  v7 = (struct tagSIZE *)((char *)this + 280);
  v8 = *((_QWORD *)**v4 + 3);
  *((_QWORD *)this + 35) = v8;
  v9 = v8;
  if ( (int)v8 < 1 )
  {
    v7->cx = 1;
    v9 = 1;
  }
  v10 = *((_DWORD *)this + 71);
  if ( v10 < 1 )
  {
    *((_DWORD *)this + 71) = 1;
    v10 = 1;
  }
  v11 = a2->x - (v9 >> 1);
  v12 = a2->y - ((unsigned int)v10 >> 1);
  CVisual::SetSize(*((CVisual **)this + 34), v7);
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 34), v11);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 34), v12);
  CImage::SetBitmapSource(*((CImage **)this + 34), **v4);
  CVisual::SetOpacity(this, 1.0);
  v13 = DefaultHeap::AllocClear(0x78uLL);
  if ( v13 )
    v17 = CTimeline<float>::CTimeline<float>((__int64)v13, v14, v15, v16, 0);
  else
    v17 = 0LL;
  *((_QWORD *)this + 33) = v17;
  if ( !v17 )
  {
    BitmapsFromAtlasImageStrip = -2147024882;
    v18 = 83;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapsFromAtlasImageStrip, v18, 0LL);
    CPenPressHoldVisual::Stop(this);
    return (unsigned int)BitmapsFromAtlasImageStrip;
  }
  BitmapsFromAtlasImageStrip = CTouchVisual::RegisterGlobalTimer(this);
  if ( BitmapsFromAtlasImageStrip < 0 )
  {
    v18 = 85;
    goto LABEL_16;
  }
  return (unsigned int)BitmapsFromAtlasImageStrip;
}
