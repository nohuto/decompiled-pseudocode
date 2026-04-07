/*
 * XREFs of ?GetTotalDuration@CDisplayMixedModeAnimatedVisual@@EEBAJPEAI@Z @ 0x1800B2BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationsDuration@@YAJPEBUAnimationIdInfo@@_KPEAI@Z @ 0x1800A72C4 (-GetAnimationsDuration@@YAJPEBUAnimationIdInfo@@_KPEAI@Z.c)
 */

__int64 __fastcall CDisplayMixedModeAnimatedVisual::GetTotalDuration(
        CDisplayMixedModeAnimatedVisual *this,
        unsigned int *a2)
{
  int v3; // eax
  int v4; // eax
  int AnimationsDuration; // eax
  unsigned int v6; // edi
  _DWORD v8[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0;
  v3 = *((_DWORD *)this + 78);
  v8[0] = *((_DWORD *)this + 76);
  v8[1] = v3;
  v4 = *((_DWORD *)this + 77);
  v8[2] = v8[0];
  v8[3] = v4;
  AnimationsDuration = GetAnimationsDuration((const struct AnimationIdInfo *)v8, 2uLL, a2);
  v6 = AnimationsDuration;
  if ( AnimationsDuration >= 0 )
  {
    *a2 += 200;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14D,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
      (const char *)(unsigned int)AnimationsDuration);
    return v6;
  }
}
