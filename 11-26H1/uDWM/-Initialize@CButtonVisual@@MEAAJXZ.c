/*
 * XREFs of ?Initialize@CButtonVisual@@MEAAJXZ @ 0x180037D10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180022CA0 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Initialize@CSpriteVisual@@UEAAJXZ @ 0x180037E50 (-Initialize@CSpriteVisual@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CButtonVisual::Initialize(CButtonVisual *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CSpriteVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19F,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
      (const char *)(unsigned int)v2,
      v5);
    return v3;
  }
  else
  {
    CVisual::SetInsetFromParent(this, &stru_1800F5518);
    result = 0LL;
    *((_DWORD *)this + 30) = -1;
  }
  return result;
}
