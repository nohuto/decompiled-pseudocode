/*
 * XREFs of ?GetTotalDuration@CDisplaySecondaryOnlyAnimatedVisual@@EEBAJPEAI@Z @ 0x1800B37E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationsDuration@@YAJPEBUAnimationIdInfo@@_KPEAI@Z @ 0x180099C3C (-GetAnimationsDuration@@YAJPEBUAnimationIdInfo@@_KPEAI@Z.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyAnimatedVisual::GetTotalDuration(
        CDisplaySecondaryOnlyAnimatedVisual *this,
        unsigned int *a2)
{
  int AnimationsDuration; // eax
  unsigned int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  *a2 = 0;
  v7 = *((_DWORD *)this + 68);
  v8 = *((_DWORD *)this + 69);
  AnimationsDuration = GetAnimationsDuration((const struct AnimationIdInfo *)&v7, 1uLL, a2);
  v4 = AnimationsDuration;
  if ( AnimationsDuration >= 0 )
  {
    *a2 += 2000;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10D,
      (int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlyanimatedvisual.cpp",
      (const char *)(unsigned int)AnimationsDuration);
    return v4;
  }
}
