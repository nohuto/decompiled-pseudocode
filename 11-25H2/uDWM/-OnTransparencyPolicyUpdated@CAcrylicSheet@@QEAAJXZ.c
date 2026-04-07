/*
 * XREFs of ?OnTransparencyPolicyUpdated@CAcrylicSheet@@QEAAJXZ @ 0x1800A1328
 * Callers:
 *     ?OnTransparencyPolicyChanged@CWindowList@@AEAAJ_N@Z @ 0x1800843C0 (-OnTransparencyPolicyChanged@CWindowList@@AEAAJ_N@Z.c)
 * Callees:
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x1800161B0 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001C060 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAcrylicSheet::OnTransparencyPolicyUpdated(CAcrylicSheet *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CVisual::SetDirtyFlags(this, 0x4000);
  *((_OWORD *)this + 15) = 0LL;
  v4 = CContainerVisual::RenderRecursive(this, v2, v3);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x143,
    (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
