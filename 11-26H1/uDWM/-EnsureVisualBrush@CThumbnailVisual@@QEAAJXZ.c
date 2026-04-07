/*
 * XREFs of ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x1800C9A60
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800261CC (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x1800CA860 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z @ 0x180013CDC (-SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0M@$00@@YA?AVDirtyFlags@@XZ @ 0x180015E00 (--$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0M@$00@@YA-AVDirtyFlags@.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0BB@$00@@YA?AVDirtyFlags@@XZ @ 0x180015E64 (--$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0BB@$00@@YA-AVDirtyFlags.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x18001B49C (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800289EC (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z @ 0x18004FE5C (-Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@MEAAXVDirtyFlags@@@Z @ 0x180059550 (-SetDirtyFlags@CThumbnailVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18005CF70 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x180065C98 (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAllPrimitives@CPrimitiveGroupVisual@@QEAAXXZ @ 0x1800881CC (-RemoveAllPrimitives@CPrimitiveGroupVisual@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?GetSharedVisualBrush@CSecondaryWindowRepresentation@@QEAAJPEAVCVisualBrush@@@Z @ 0x1800BF560 (-GetSharedVisualBrush@CSecondaryWindowRepresentation@@QEAAJPEAVCVisualBrush@@@Z.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureVisualBrush(CBaseObject **this)
{
  int SharedVisualBrush; // edi
  __int64 v3; // r8
  __int64 v4; // rdx
  CSecondaryWindowRepresentation *v6; // rcx
  int *v7; // rax
  int *v8; // rax
  int *v9; // rax
  struct CVisual **v10; // rdi
  int v11; // eax
  unsigned int v12; // esi
  CBaseObject *v13; // rax
  CThumbnailVisual *v14; // rcx
  CBaseObject *v15; // rcx
  int v16; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_BYTE *)this + 416) )
  {
    SharedVisualBrush = CThumbnailVisual::EnsureSecondaryWindowRepresentation((CThumbnailVisual *)this, 0LL);
    if ( SharedVisualBrush < 0 )
    {
      v4 = 559LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"clientcore\\windows\\dwm\\udwm\\thumbnailvisual.cpp",
        (const char *)(unsigned int)SharedVisualBrush);
      return (unsigned int)SharedVisualBrush;
    }
    if ( !this[46] )
    {
      v6 = this[45];
      *((_BYTE *)this + 418) = 0;
      SharedVisualBrush = CSecondaryWindowRepresentation::GetSharedVisualBrush(v6, (struct CVisualBrush *)(this + 46));
      if ( SharedVisualBrush < 0 )
      {
        v4 = 565LL;
        goto LABEL_4;
      }
      v7 = ___ConvertDirtyEnumToFlag__MW4ToplevelWindowDirtyFlags_CTopLevelWindow__0M__00__YA_AVDirtyFlags__XZ(&v16);
      CThumbnailVisual::SetDirtyFlags((CVisual *)this, *v7);
      v8 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v16);
      CThumbnailVisual::SetDirtyFlags((CVisual *)this, *v8);
      v9 = ___ConvertDirtyEnumToFlag__MW4ToplevelWindowDirtyFlags_CTopLevelWindow__0BB__00__YA_AVDirtyFlags__XZ(&v16);
      CThumbnailVisual::SetDirtyFlags((CVisual *)this, *v9);
    }
    v10 = this + 48;
    if ( !this[48] )
    {
      wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(this + 48);
      v11 = CSolidRectangleVisual::Create(this + 48);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x240,
          (int)"clientcore\\windows\\dwm\\udwm\\thumbnailvisual.cpp",
          (const char *)(unsigned int)v11);
        return v12;
      }
    }
    if ( *((CBaseObject ***)*v10 + 3) != this )
    {
      SharedVisualBrush = CContainerVisual::AddChild((CContainerVisual *)this, *v10);
      if ( SharedVisualBrush < 0 )
      {
        v4 = 581LL;
        goto LABEL_4;
      }
    }
    v13 = this[44];
    *((_DWORD *)this + 123) = 0;
    if ( v13 && (*((_DWORD *)v13 + 9) & 0x4000000) != 0 )
    {
      CVisual::SetBorderMode((__int64)this, 0LL, v3);
      if ( CThumbnailVisual::_IsImmersiveIconic((CThumbnailVisual *)this) )
        *((_OWORD *)this + 30) = *((_OWORD *)this + 31);
    }
    else if ( CThumbnailVisual::_HasBorder((CThumbnailVisual *)this) || CThumbnailVisual::_IsImmersiveIconic(v14) )
    {
      this[60] = 0LL;
      *((_DWORD *)this + 122) = 0;
      *((_DWORD *)this + 123) = 1065353216;
    }
  }
  else
  {
    CPrimitiveGroupVisual::RemoveAllPrimitives((CPrimitiveGroupVisual *)this);
    CContainerVisual::RemoveAllChildren((CContainerVisual *)this);
    v15 = this[45];
    if ( v15 )
    {
      CBaseObject::Release(v15);
      this[45] = 0LL;
    }
  }
  return 0LL;
}
