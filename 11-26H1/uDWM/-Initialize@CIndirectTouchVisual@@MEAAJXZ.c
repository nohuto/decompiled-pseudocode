/*
 * XREFs of ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800B8250
 * Callers:
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x180088DF8 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z.c)
 * Callees:
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180004A98 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180005198 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z @ 0x180014250 (-SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18002748C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@CTouchVisual@@MEAAJXZ @ 0x180083310 (-Initialize@CTouchVisual@@MEAAJXZ.c)
 *     ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x1800B8A98 (-UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CIndirectTouchVisual::Initialize(CIndirectTouchVisual *this)
{
  int v2; // eax
  unsigned int v3; // edi
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // eax
  struct CVisual **v6; // rsi
  int v7; // eax
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9

  v2 = CTouchVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x24u, 0LL);
  }
  else
  {
    Theme = (void *)CDesktopManager::GetTheme(1);
    BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                   Theme,
                                   8,
                                   0xFu,
                                   0LL,
                                   (__int64)this + 312);
    v3 = BitmapsFromAtlasImageStrip;
    if ( BitmapsFromAtlasImageStrip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapsFromAtlasImageStrip, 0x27u, 0LL);
    }
    else
    {
      v6 = (struct CVisual **)((char *)this + 304);
      *(_QWORD *)((char *)this + 236) = *(_QWORD *)(**((_QWORD **)this + 39) + 128LL);
      *((_DWORD *)this + 62) = 1041865114;
      *((_DWORD *)this + 64) = 1041865114;
      *((_DWORD *)this + 86) = -1;
      *((_DWORD *)this + 56) = 0;
      *((_DWORD *)this + 63) = 1036831949;
      *((_DWORD *)this + 65) = 1051372202;
      *((_DWORD *)this + 66) = 1059760810;
      v7 = CImage::Create((struct CImage **)this + 38);
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x35u, 0LL);
      }
      else
      {
        v8 = CContainerVisual::AddChild(this, *v6);
        v3 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x36u, 0LL);
        }
        else
        {
          CVisual::SetSize(*v6, (const struct tagSIZE *)((char *)this + 236), v9, v10);
          *((_QWORD *)this + 35) = 0LL;
          *((_QWORD *)this + 36) = 0LL;
          *((_QWORD *)this + 37) = 0LL;
          *(_QWORD *)((char *)this + 268) = 0LL;
          CIndirectTouchVisual::UpdateOpacityAndSource(this);
        }
      }
    }
  }
  return v3;
}
