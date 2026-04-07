/*
 * XREFs of ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x18004EED0
 * Callers:
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18008B110 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z @ 0x1800CAEE0 (-CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?SetSize@CVisualProxy@@QEAAJNN@Z @ 0x18000A660 (-SetSize@CVisualProxy@@QEAAJNN@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18000D27C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001066C (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x180029CF4 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateWindowTarget(CTopLevelWindow *this)
{
  __int64 v2; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  LONG left; // ecx
  LONG v7; // edx
  LONG v8; // eax
  int v9; // eax
  _DWORD *v10; // rax
  int v11; // ebx
  int v12; // edi
  int v13; // eax
  int v14; // eax
  CBaseObject *v15; // rbx
  CBaseObject *v16; // rcx
  struct tagRECT v17; // [rsp+20h] [rbp-20h] BYREF
  struct _MARGINS v18; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  CBaseObject *v20; // [rsp+50h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 93);
  if ( !v2 )
    return 0LL;
  v4 = CVisualProxy::SetSize(
         *(CVisualProxy **)(v2 + 16),
         (double)(*(_DWORD *)(*((_QWORD *)this + 87) + 56LL) - *(_DWORD *)(*((_QWORD *)this + 87) + 48LL)),
         (double)(*(_DWORD *)(*((_QWORD *)this + 87) + 60LL) - *(_DWORD *)(*((_QWORD *)this + 87) + 52LL)));
  if ( v4 >= 0 )
  {
    if ( (*((_BYTE *)this + 184) & 4) != 0 )
    {
      v7 = *((_DWORD *)this + 157);
      v8 = *((_DWORD *)this + 16) - *((_DWORD *)this + 156);
      v17.left = *((_DWORD *)this + 155);
      left = v17.left;
      v17.top = v7;
      if ( v17.left <= v8 )
        left = v8;
      v9 = *((_DWORD *)this + 17) - *((_DWORD *)this + 158);
      v17.right = left;
      if ( v7 <= v9 )
        v7 = v9;
      v17.bottom = v7;
    }
    else
    {
      v10 = (_DWORD *)*((_QWORD *)this + 87);
      v18 = 0LL;
      v11 = v10[14] - v10[12];
      v12 = v10[15] - v10[13];
      CTopLevelWindow::GetFrameMargins(this, &v18);
      v17.left = v18.cxLeftWidth;
      v17.top = v18.cyTopHeight;
      v13 = 0;
      if ( v11 >= 0 )
        v13 = v11;
      v17.right = v13 - v18.cxRightWidth;
      v14 = 0;
      if ( v12 >= 0 )
        v14 = v12;
      v17.bottom = v14 - v18.cyBottomHeight;
    }
    v20 = 0LL;
    v4 = ResourceHelper::CreateRectangleGeometry(&v17, &v20);
    if ( v4 >= 0 )
    {
      v15 = v20;
      CVisualProxy::SetClip(*(CVisualProxy **)(*((_QWORD *)this + 93) + 16LL), v20);
      v16 = (CBaseObject *)*((_QWORD *)this + 94);
      if ( v16 )
        CBaseObject::Release(v16);
      *((_QWORD *)this + 94) = v15;
      if ( v15 )
        CBaseObject::AddRef(v15);
      return 0LL;
    }
    v5 = 6188LL;
  }
  else
  {
    v5 = 6156LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)v4,
    v17.left);
  return (unsigned int)v4;
}
