/*
 * XREFs of ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180018D34
 * Callers:
 *     ?Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180018E80 (-Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?SetMask@ShadowIntermediates@CDropShadow@@QEAAXPEAV2@PEAVCBrush@@@Z @ 0x1800172E8 (-SetMask@ShadowIntermediates@CDropShadow@@QEAAXPEAV2@PEAVCBrush@@@Z.c)
 *     ?GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z @ 0x180017360 (-GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z.c)
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$V@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@_N@1@AEBQEAVCVisual@@@Z @ 0x1800173C0 (--$_Try_emplace@AEBQEAVCVisual@@$$V@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CD.c)
 *     ?GetRadius@CDropShadow@@QEBAMXZ @ 0x1800176A4 (-GetRadius@CDropShadow@@QEBAMXZ.c)
 *     ?CanUseFastShadow@ShadowIntermediates@CDropShadow@@QEBA_NAEBUD2D_SIZE_F@@M@Z @ 0x1800176D0 (-CanUseFastShadow@ShadowIntermediates@CDropShadow@@QEBA_NAEBUD2D_SIZE_F@@M@Z.c)
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18001771C (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x1801ACD00 (-IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ.c)
 */

__int64 __fastcall CDropShadow::UpdateShadowIntermediates(
        CDropShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  char v3; // di
  CDropShadow::ShadowIntermediates *v7; // rsi
  CComposition *v8; // rcx
  __int64 v9; // rax
  float v10; // xmm0_4
  int updated; // eax
  unsigned int v12; // ebx
  float Radius; // xmm0_4
  _BYTE v15[40]; // [rsp+30h] [rbp-28h] BYREF
  struct CBrush *v16; // [rsp+60h] [rbp+8h] BYREF
  CVisual *CurrentVisual; // [rsp+78h] [rbp+20h] BYREF

  v3 = 1;
  if ( *((_DWORD *)this + 31) == 1 )
  {
    CurrentVisual = CDrawingContext::GetCurrentVisual(a2);
    v16 = 0LL;
    CVisual::GetContentAsBrushNoRef(CurrentVisual, &v16);
    v7 = (CDropShadow::ShadowIntermediates *)(*(_QWORD *)std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Try_emplace<CVisual * const &,>(
                                                           (float *)this + 50,
                                                           (__int64)v15,
                                                           (unsigned __int8 *)&CurrentVisual)
                                            + 24LL);
    CDropShadow::ShadowIntermediates::SetMask(v7, this, v16);
  }
  else
  {
    v7 = (CDropShadow *)((char *)this + 128);
  }
  v8 = (CComposition *)*((_QWORD *)this + 3);
  if ( !*((_DWORD *)v8 + 1568)
    || !CComposition::IsOverdrawHeatMapEnabled(v8)
    || (Radius = CDropShadow::GetRadius(this), CDropShadow::ShadowIntermediates::CanUseFastShadow(v7, a3, Radius)) )
  {
    v3 = 0;
  }
  v9 = *((_QWORD *)this + 3);
  *((_BYTE *)this + 264) = v3;
  if ( *(_DWORD *)(v9 + 6272) )
    return 0;
  v10 = CDropShadow::GetRadius(this);
  updated = CDropShadow::ShadowIntermediates::UpdateIntermediates(v7, a2, a3, v10);
  v12 = updated;
  if ( updated >= 0 )
    return 0;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x23Eu, 0LL);
  return v12;
}
