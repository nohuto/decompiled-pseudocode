/*
 * XREFs of ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180089798
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180062F20 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180063098 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z @ 0x18009444C (-InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x1800211D0 (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180022CA0 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Create@CPrimitiveGroupVisual@@SAJPEAPEAV1@@Z @ 0x180027730 (-Create@CPrimitiveGroupVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetHitTestVisibility@CVisual@@QEAAJ_N@Z @ 0x180063EAC (-SetHitTestVisibility@CVisual@@QEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAccent::_EnsureBorderShadowAtlas(CAccent *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rax
  int inserted; // eax
  __int64 v5; // rdx
  bool v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rdx
  struct _MARGINS v10; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  CBaseObject *v12; // [rsp+40h] [rbp+10h] BYREF
  CBaseObject *v13; // [rsp+48h] [rbp+18h] BYREF

  v2 = 0LL;
  v12 = 0LL;
  v3 = 0LL;
  v13 = 0LL;
  if ( !*((_QWORD *)this + 36) )
  {
    Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v13);
    inserted = CPrimitiveGroupVisual::Create(&v13);
    v7 = inserted;
    if ( inserted < 0 )
    {
      v8 = 839LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)inserted);
      Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v13);
      Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v12);
      return v7;
    }
    inserted = CVisual::SetHitTestVisibility(v13, v5, v6);
    v7 = inserted;
    if ( inserted < 0 )
    {
      v8 = 840LL;
      goto LABEL_12;
    }
    Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v12);
    inserted = CCanvasVisual::Create(&v12);
    v7 = inserted;
    if ( inserted < 0 )
    {
      v8 = 842LL;
      goto LABEL_12;
    }
    inserted = CContainerVisual::AddChild(v12, v13);
    v7 = inserted;
    if ( inserted < 0 )
    {
      v8 = 843LL;
      goto LABEL_12;
    }
    v10 = 0LL;
    CVisual::SetInsetFromParent(v13, &v10);
    inserted = CContainerVisual::InsertChildAfter(this, v12, 0LL);
    v7 = inserted;
    if ( inserted < 0 )
    {
      v8 = 847LL;
      goto LABEL_12;
    }
    v2 = v12;
    *((_QWORD *)this + 37) = v12;
    if ( v2 )
    {
      CBaseObject::AddRef(v2);
      v2 = v12;
    }
    v3 = v13;
    *((_QWORD *)this + 36) = v13;
    if ( v3 )
    {
      CBaseObject::AddRef(v3);
      v2 = v12;
      v3 = v13;
    }
  }
  if ( v3 )
  {
    v13 = 0LL;
    CBaseObject::Release(v3);
    v2 = v12;
  }
  if ( v2 )
  {
    v12 = 0LL;
    CBaseObject::Release(v2);
  }
  return 0LL;
}
