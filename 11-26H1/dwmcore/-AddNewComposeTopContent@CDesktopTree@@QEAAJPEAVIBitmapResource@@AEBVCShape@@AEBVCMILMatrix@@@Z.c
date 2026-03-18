/*
 * XREFs of ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801580A0
 * Callers:
 *     ?CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800588A0 (-CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180158998 (-AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ??1?$unique_ptr@VCComposeTop@@U?$default_delete@VCComposeTop@@@std@@@std@@QEAA@XZ @ 0x180245DC4 (--1-$unique_ptr@VCComposeTop@@U-$default_delete@VCComposeTop@@@std@@@std@@QEAA@XZ.c)
 *     ??R?$default_delete@VCComposeTop@@@std@@QEBAXPEAVCComposeTop@@@Z @ 0x180246460 (--R-$default_delete@VCComposeTop@@@std@@QEBAXPEAVCComposeTop@@@Z.c)
 *     ??$make_unique@VCComposeTop@@$$V$0A@@std@@YA?AV?$unique_ptr@VCComposeTop@@U?$default_delete@VCComposeTop@@@std@@@0@XZ @ 0x18025FDB0 (--$make_unique@VCComposeTop@@$$V$0A@@std@@YA-AV-$unique_ptr@VCComposeTop@@U-$default_delete@VCCo.c)
 */

__int64 __fastcall CDesktopTree::AddNewComposeTopContent(
        CDesktopTree *this,
        struct IBitmapResource *a2,
        const struct CShape *a3,
        const struct CMILMatrix *a4)
{
  CComposeTop *v6; // rcx
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // ebx
  int v13; // eax
  char v15; // [rsp+40h] [rbp+8h] BYREF

  v6 = (CComposeTop *)*((_QWORD *)this + 506);
  if ( v6 )
    goto LABEL_6;
  v9 = (__int64 *)std::make_unique<CComposeTop,,0>(&v15);
  v10 = *v9;
  *v9 = 0LL;
  v11 = *((_QWORD *)this + 506);
  *((_QWORD *)this + 506) = v10;
  if ( v11 )
    std::default_delete<CComposeTop>::operator()();
  std::unique_ptr<CComposeTop>::~unique_ptr<CComposeTop>(&v15);
  v6 = (CComposeTop *)*((_QWORD *)this + 506);
  if ( v6 )
  {
LABEL_6:
    v13 = CComposeTop::AddNewContent(v6, a2, a3, a4);
    v12 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x39u, 0LL);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x34u, 0LL);
  }
  return v12;
}
