/*
 * XREFs of ?Initialize@CAcrylicSheet@@EEAAJXZ @ 0x18006FB90
 * Callers:
 *     ?Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z @ 0x18006FA80 (-Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x180021BA0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18005E6A8 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAcrylicSheet::Initialize(CAcrylicSheet *this)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 v5; // r8
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = CContainerVisual::Initialize((struct CContainerVisualProxy **)this);
  if ( v2 < 0 )
  {
    v3 = 55LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      (const char *)(unsigned int)v2,
      v6);
    return (unsigned int)v2;
  }
  v2 = CAcrylicSheet::EnsureBackgroundEffects(this);
  if ( v2 < 0 )
  {
    v3 = 56LL;
    goto LABEL_3;
  }
  v8 = (struct tagPOINT)*((_QWORD *)this + 23);
  CVisual::SetOffset((struct tagPOINT *)this, &v8, v5);
  return 0LL;
}
