/*
 * XREFs of ?AddTightDirtyRect@CMonitorDirty@@MEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180253600
 * Callers:
 *     <none>
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800590B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x1800E9F54 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?GetClipBox@CMonitorTransform@@QEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18018C160 (-GetClipBox@CMonitorTransform@@QEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?SetFullTightDirtyRegion@CMonitorDirty@@QEAAXXZ @ 0x1801DC5F8 (-SetFullTightDirtyRegion@CMonitorDirty@@QEAAXXZ.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x180253558 (-AddRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMonitorDirty::AddTightDirtyRect(CMonitorDirty *this, const struct D2D_RECT_F *a2, double a3)
{
  _QWORD *v4; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  float v8; // xmm7_4
  float v9; // xmm6_4
  __int64 v10; // rax
  const struct tagRECT *v11; // rax
  struct D2D_RECT_F v12; // [rsp+20h] [rbp-50h] BYREF
  _DWORD v13[2]; // [rsp+30h] [rbp-40h] BYREF
  int v14[6]; // [rsp+38h] [rbp-38h] BYREF

  v4 = (_QWORD *)*((_QWORD *)this + 235);
  if ( a2 )
  {
    (*(void (__fastcall **)(_QWORD *, _DWORD *))(v4[1] + 40LL))(v4 + 1, v13);
    v8 = (float)v13[0];
    v9 = (float)v13[1];
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 56LL))(*((_QWORD *)this + 1));
    v12 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<1>(v10, a2, &v12.left);
    if ( v12.left < 0.0 )
      v12.left = 0.0;
    if ( v12.top < 0.0 )
      v12.top = 0.0;
    if ( v12.right > v8 )
      v12.right = v8;
    if ( v12.bottom > v9 )
      v12.bottom = v9;
    if ( !IsEmpty(&v12) )
    {
      v11 = (const struct tagRECT *)PixelAlign(v14, (unsigned int *)&v12, a3);
      CRegion::AddRectangle(*((CRegion **)this + 58), v11);
    }
  }
  else
  {
    v6 = (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v4 + 264LL))(v4);
    if ( (_BYTE)v6 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 235) + 256LL))(*((_QWORD *)this + 235));
      CMonitorTransform::GetClipBox(v7, (__int64)&v12, v6);
      CRegion::AddRectangle(*((FastRegion::CRegion ***)this + 58), (struct tagRECT *)&v12);
    }
    else
    {
      CMonitorDirty::SetFullTightDirtyRegion(this);
    }
  }
}
