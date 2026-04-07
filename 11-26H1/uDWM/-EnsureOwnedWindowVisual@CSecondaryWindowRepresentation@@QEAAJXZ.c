/*
 * XREFs of ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18008B908
 * Callers:
 *     ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x180028C4C (-Initialize@CSecondaryWindowRepresentation@@IEAAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUIS.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002AD28 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?CreateVisualBrushForAnimation@CSecondaryWindowRepresentation@@QEAA?AVCVisualBrush@@_N@Z @ 0x1800BF440 (-CreateVisualBrushForAnimation@CSecondaryWindowRepresentation@@QEAA-AVCVisualBrush@@_N@Z.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800C9698 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@00$00@@YA?AVDirtyFlags@@XZ @ 0x180016454 (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@00$00@@YA-AVDirtyFla.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@01$00@@YA?AVDirtyFlags@@XZ @ 0x180016468 (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@01$00@@YA-AVDirtyFla.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXVDirtyFlags@@@Z @ 0x180029674 (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXVDirtyFlags@@@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x1800380C0 (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z @ 0x18004FE5C (-Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z.c)
 *     ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x1800640B4 (-OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(CSecondaryWindowRepresentation *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  CBaseObject *v5; // rdi
  CBaseObject *v6; // rbx
  int v7; // eax
  int v8; // r14d
  unsigned int *v10; // rax
  unsigned int *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  int v13; // [rsp+50h] [rbp+30h] BYREF
  CBaseObject *v14; // [rsp+58h] [rbp+38h] BYREF
  CBaseObject *v15; // [rsp+60h] [rbp+40h] BYREF

  if ( !*((_QWORD *)this + 6) )
  {
    v15 = 0LL;
    v14 = 0LL;
    wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(&v15);
    v2 = CContainerVisual::Create(&v15);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 168LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"clientcore\\windows\\dwm\\udwm\\secondarywindowrepresentation.cpp",
        (const char *)(unsigned int)v2);
LABEL_9:
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v14);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v15);
      return v3;
    }
    wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(&v14);
    v2 = CSolidRectangleVisual::Create(&v14);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 169LL;
      goto LABEL_6;
    }
    v5 = v14;
    v6 = v15;
    v7 = CContainerVisual::AddChild(v15, v14);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAA,
        (int)"clientcore\\windows\\dwm\\udwm\\secondarywindowrepresentation.cpp",
        (const char *)(unsigned int)v7);
      v3 = v8;
      goto LABEL_9;
    }
    *((_QWORD *)this + 7) = v5;
    if ( v5 )
      CBaseObject::AddRef(v5);
    *((_QWORD *)this + 6) = v6;
    if ( v6 )
      CBaseObject::AddRef(v6);
    v10 = ___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__01_00__YA_AVDirtyFlags__XZ(&v13);
    CSecondaryWindowRepresentation::SetDirtyFlags((__int64)this, *v10);
    v11 = ___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__00_00__YA_AVDirtyFlags__XZ(&v13);
    CSecondaryWindowRepresentation::SetDirtyFlags((__int64)this, *v11);
    CSecondaryWindowRepresentation::OnWindowOffsetUpdated(this);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v14);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v15);
  }
  return 0LL;
}
