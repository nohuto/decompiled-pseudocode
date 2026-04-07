/*
 * XREFs of ?Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z @ 0x18006FA80
 * Callers:
 *     ?EnsureAcrylicSheet@CWindowList@@AEAAJXZ @ 0x18006F9CC (-EnsureAcrylicSheet@CWindowList@@AEAAJXZ.c)
 *     ??0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z @ 0x1800DD118 (--0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z.c)
 * Callees:
 *     ?GetMarginAdjustedWindowRect@CAcrylicSheet@@CA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x18000F7E8 (-GetMarginAdjustedWindowRect@CAcrylicSheet@@CA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CAcrylicSheet@@EEAAJXZ @ 0x18006FB90 (-Initialize@CAcrylicSheet@@EEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 *     ??0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z @ 0x18008AD68 (--0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z.c)
 *     ?GetSnapThumbnailLocation@CTopLevelWindow3D@@QEAA?AUtagRECT@@XZ @ 0x18008AF40 (-GetSnapThumbnailLocation@CTopLevelWindow3D@@QEAA-AUtagRECT@@XZ.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180095CD4 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAcrylicSheet::Create(struct CWindowData *a1, bool a2, struct CAcrylicSheet **a3)
{
  CAcrylicSheet *v6; // rax
  CAcrylicSheet *v7; // rax
  const char *v8; // r9
  struct CAcrylicSheet *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  struct tagRECT v13; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((char *)a1 + 741) < 0 )
    v13 = *CTopLevelWindow3D::GetSnapThumbnailLocation(*((CTopLevelWindow3D **)a1 + 56), &v13);
  else
    v13 = *CAcrylicSheet::GetMarginAdjustedWindowRect(&v13, a1);
  v6 = (CAcrylicSheet *)DefaultHeap::AllocClear(0x1D0uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v7 = CAcrylicSheet::CAcrylicSheet(v6, &v13, *((_DWORD *)a1 + 87), a2);
  v9 = v7;
  if ( !v7 )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x22,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      v8);
  v10 = CAcrylicSheet::Initialize(v7);
  v11 = v10;
  if ( v10 >= 0 )
  {
    *a3 = v9;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      (const char *)(unsigned int)v10,
      v13.left);
    CBaseObject::Release(v9);
    return v11;
  }
}
