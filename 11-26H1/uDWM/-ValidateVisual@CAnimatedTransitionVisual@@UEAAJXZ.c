/*
 * XREFs of ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18000A220
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CRectangleVisual@@UEAAJXZ @ 0x18000A2F0 (-ValidateVisual@CRectangleVisual@@UEAAJXZ.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180082594 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180089284 (-_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180089430 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008A46C (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::ValidateVisual(CAnimatedTransitionVisual *this)
{
  CAnimatedTransitionVisual *v1; // rbx
  int v3; // eax
  unsigned int v4; // edi
  int v5; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (CAnimatedTransitionVisual *)((char *)this - 8);
  v3 = CAnimatedTransitionVisual::EnsureResources((CAnimatedTransitionVisual *)((char *)this - 8));
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v3,
      v8);
    return v4;
  }
  if ( *((_BYTE *)this + 912) )
  {
    v5 = CAnimatedTransitionVisual::Validate3DVisual(v1);
    if ( v5 >= 0 )
      goto LABEL_5;
    v7 = 864LL;
  }
  else if ( *((_BYTE *)v1 + 912) )
  {
    v5 = CAnimatedTransitionVisual::_ValidateDCompVisual(v1);
    if ( v5 >= 0 )
      goto LABEL_5;
    v7 = 868LL;
  }
  else
  {
    v5 = CAnimatedTransitionVisual::Validate2DVisual(v1);
    if ( v5 >= 0 )
    {
LABEL_5:
      v5 = CRectangleVisual::ValidateVisual(this);
      if ( v5 >= 0 )
        return 0LL;
      v7 = 875LL;
      goto LABEL_13;
    }
    v7 = 872LL;
  }
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
    (const char *)(unsigned int)v5,
    v8);
  return (unsigned int)v5;
}
