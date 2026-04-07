/*
 * XREFs of ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NAEBUD2D_POINTANDSIZE_L@@PEAVCVisualBrush@@@Z @ 0x1800BF694
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800261CC (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x180033580 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?FreezeImpl@CVisualBrush@@AEAAJW4VisualSurfaceFreezeBehavior@Internal@Composition@UI@Windows@@@Z @ 0x18009B51C (-FreezeImpl@CVisualBrush@@AEAAJW4VisualSurfaceFreezeBehavior@Internal@Composition@UI@Windows@@@Z.c)
 *     ?GetVisualBrush@CWindowSnapshot@@QEAAJAEBUtagRECT@@PEAVCVisualBrush@@PEAM@Z @ 0x1800E5148 (-GetVisualBrush@CWindowSnapshot@@QEAAJAEBUtagRECT@@PEAVCVisualBrush@@PEAM@Z.c)
 *     ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NAEBUtagRECT@@@Z @ 0x1800E51A0 (-HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NAEBUtagRECT@@@Z.c)
 */

void __fastcall CSecondaryWindowRepresentation::MakeStatic(
        CSecondaryWindowRepresentation *this,
        char a2,
        LONG *a3,
        struct CVisualBrush *a4)
{
  __int64 v4; // rdi
  CWindowSnapshot *v8; // r11
  LONG v9; // ecx
  LONG v10; // r8d
  LONG v11; // edx
  CWindowSnapshot *v12; // r11
  struct tagRECT v13; // [rsp+20h] [rbp-18h] BYREF

  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    if ( !a2 )
      goto LABEL_7;
    v8 = *(CWindowSnapshot **)(v4 + 480);
    if ( !v8 )
      goto LABEL_7;
    v9 = *a3;
    v10 = a3[1];
    v13.right = *a3 + a3[2];
    v11 = a3[3];
    v13.left = v9;
    v13.bottom = v10 + v11;
    v13.top = v10;
    if ( CWindowSnapshot::HasCVIOfCompatibleSize(v8, &v13)
      && CWindowSnapshot::GetVisualBrush(v12, (const struct tagRECT *)(v4 + 48), a4, (float *)this + 50) >= 0 )
    {
      CVisualBrush::FreezeImpl((__int64)a4, 1u);
      CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
      *((_BYTE *)this + 161) = 1;
    }
    else
    {
LABEL_7:
      *((_DWORD *)this + 10) |= 0x200u;
    }
  }
}
