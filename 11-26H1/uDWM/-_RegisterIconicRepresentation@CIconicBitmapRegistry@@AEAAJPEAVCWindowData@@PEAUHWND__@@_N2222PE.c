/*
 * XREFs of ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x180038B84
 * Callers:
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x180038A3C (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 * Callees:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800194C0 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x18002CA8C (-RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180038CD8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180038D60 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x18008A828 (McTemplateU0qp_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CIconicBitmapRegistry::_RegisterIconicRepresentation(
        CIconicBitmapRegistry *this,
        HWND *a2,
        HWND a3,
        char a4,
        bool a5,
        bool a6,
        bool a7,
        bool a8,
        enum IconicRepresentationType *a9)
{
  unsigned int v9; // edi
  struct CWindowData *v10; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // eax

  v9 = 0;
  v10 = (struct CWindowData *)a2;
  if ( a6 )
  {
    *(_DWORD *)a9 = 2;
  }
  else if ( !a4 || a5 )
  {
    *(_DWORD *)a9 = 0;
  }
  else
  {
    *(_DWORD *)a9 = 1;
    if ( !a7 )
    {
      v15 = CIconicBitmapRegistry::RequestBitmap(this, a2, 1);
      v9 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0xBCu, 0LL);
        return v9;
      }
      goto LABEL_4;
    }
  }
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::GetImpl'::`2'::impl,
    a2);
LABEL_4:
  if ( (unsigned __int64)v10 <= 0xFFFFFFFFFFFFFFFDuLL && a8 != (*(_DWORD *)a9 == 2) )
    CIconicBitmapRegistry::RegisterBitmapInUse(this, v10);
  v12 = *(unsigned int *)a9;
  if ( !(_DWORD)v12 )
    goto LABEL_20;
  v12 = (unsigned int)(v12 - 1);
  if ( !(_DWORD)v12 )
  {
    v13 = 5LL;
    goto LABEL_9;
  }
  if ( (_DWORD)v12 == 1 )
    v13 = 6LL;
  else
LABEL_20:
    v13 = 4LL;
LABEL_9:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer(v12, &UdwmSelectIconicRepresentation_Info, v13);
  if ( IsWindowTab(v10) && !a6 && *(_DWORD *)a9 == 1 )
    *(_DWORD *)a9 = 0;
  return v9;
}
