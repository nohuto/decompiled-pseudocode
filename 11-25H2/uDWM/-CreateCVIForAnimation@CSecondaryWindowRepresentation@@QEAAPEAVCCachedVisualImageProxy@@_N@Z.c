/*
 * XREFs of ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z @ 0x18001EBF0
 * Callers:
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x18006459C (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z @ 0x180018990 (-GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z.c)
 *     ?GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA?AUtagRECT@@XZ @ 0x1800189C4 (-GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA-AUtagRECT@@XZ.c)
 *     ?GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ @ 0x18001DFB8 (-GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x18001F43C (-Update@CCachedVisualImageProxy@@QEAAJAEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@PEBVCRectResourceProxy@@PE.c)
 *     ?CreateCachedVisualImageProxy@CCompositor@@QEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x18001F648 (-CreateCachedVisualImageProxy@CCompositor@@QEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18001F654 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?GetTLWRootVisualType@CSecondaryWindowRepresentation@@AEAA?AW4TLWRootVisualType@@XZ @ 0x18001F8BC (-GetTLWRootVisualType@CSecondaryWindowRepresentation@@AEAA-AW4TLWRootVisualType@@XZ.c)
 *     ?Freeze@CCachedVisualImageProxy@@QEAAJXZ @ 0x18002315C (-Freeze@CCachedVisualImageProxy@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

struct CCachedVisualImageProxy *__fastcall CSecondaryWindowRepresentation::CreateCVIForAnimation(
        CSecondaryWindowRepresentation *this,
        char a2)
{
  char v3; // bl
  int v5; // eax
  CBaseObject *v6; // rdi
  __int64 v7; // rax
  __int64 RootVisualNoAddRef; // rbp
  int TLWRootVisualType; // eax
  _QWORD *v10; // r8
  __int64 v11; // rax
  unsigned int v13; // r9d
  CBaseObject *v14; // [rsp+40h] [rbp-48h] BYREF
  struct tagRECT v15; // [rsp+48h] [rbp-40h] BYREF
  __int128 v16; // [rsp+58h] [rbp-30h] BYREF

  v3 = 0;
  v14 = 0LL;
  CSecondaryWindowRepresentation::GetRelativeWindowRect(this, &v15);
  v5 = CCompositor::CreateCachedVisualImageProxy(
         *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
         &v14);
  v6 = v14;
  if ( v5 < 0 )
  {
    v13 = 828;
  }
  else
  {
    v7 = 0LL;
    v16 = 0LL;
    do
    {
      *(float *)((char *)&v16 + v7) = (float)*(int *)((char *)&v15.left + v7);
      v7 += 4LL;
    }
    while ( v7 < 16 );
    CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
    RootVisualNoAddRef = *((_QWORD *)this + 6);
    if ( *((_QWORD *)CWindowRepresentation::GetRepresentationWindowData((CSecondaryWindowRepresentation *)((char *)this + 64))
         + 55) )
    {
      TLWRootVisualType = CSecondaryWindowRepresentation::GetTLWRootVisualType(this);
      RootVisualNoAddRef = CTopLevelWindow::GetRootVisualNoAddRef(v10, TLWRootVisualType);
    }
    if ( RootVisualNoAddRef )
      v11 = *(_QWORD *)(RootVisualNoAddRef + 16);
    else
      v11 = 0LL;
    v14 = 0LL;
    v5 = CCachedVisualImageProxy::Update(v6, &v16, &v14, 0LL, 0LL, v11, 0);
    if ( v5 >= 0 )
    {
      if ( a2 )
      {
        CCachedVisualImageProxy::Freeze(v6);
        v3 = 1;
      }
      *((_BYTE *)this + 417) = v3;
      return v6;
    }
    v13 = 851;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, v13, 0LL);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    return 0LL;
  }
  return v6;
}
