/*
 * XREFs of ?GetTotalDuration@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEBAJPEAI@Z @ 0x1800B4270
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationsDuration@@YAJPEBUAnimationIdInfo@@_KPEAI@Z @ 0x180099C3C (-GetAnimationsDuration@@YAJPEBUAnimationIdInfo@@_KPEAI@Z.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::GetTotalDuration(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this,
        unsigned int *a2)
{
  int v3; // eax
  int v4; // eax
  int AnimationsDuration; // eax
  unsigned int v6; // edi
  _DWORD v8[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0;
  v3 = *((_DWORD *)this + 70);
  v8[0] = *((_DWORD *)this + 68);
  v8[1] = v3;
  v4 = *((_DWORD *)this + 69);
  v8[2] = v8[0];
  v8[3] = v4;
  AnimationsDuration = GetAnimationsDuration((const struct AnimationIdInfo *)v8, 2uLL, a2);
  v6 = AnimationsDuration;
  if ( AnimationsDuration >= 0 )
  {
    *a2 += 1500;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x174,
      (int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
      (const char *)(unsigned int)AnimationsDuration);
    return v6;
  }
}
