/*
 * XREFs of ?GetAnimationsDuration@@YAJPEBUAnimationIdInfo@@_KPEAI@Z @ 0x1800A72C4
 * Callers:
 *     ?GetTotalDuration@CDisplayDuplicateAnimatedVisual@@EEBAJPEAI@Z @ 0x1800B0470 (-GetTotalDuration@CDisplayDuplicateAnimatedVisual@@EEBAJPEAI@Z.c)
 *     ?GetTotalDuration@CDisplayDuplicateToExtendAnimatedVisual@@EEBAJPEAI@Z @ 0x1800B0BF0 (-GetTotalDuration@CDisplayDuplicateToExtendAnimatedVisual@@EEBAJPEAI@Z.c)
 *     ?GetTotalDuration@CDisplayExtendAnimatedVisual@@EEBAJPEAI@Z @ 0x1800B1980 (-GetTotalDuration@CDisplayExtendAnimatedVisual@@EEBAJPEAI@Z.c)
 *     ?GetTotalDuration@CDisplayExtendToDuplicateAnimatedVisual@@EEBAJPEAI@Z @ 0x1800B1F90 (-GetTotalDuration@CDisplayExtendToDuplicateAnimatedVisual@@EEBAJPEAI@Z.c)
 *     ?GetTotalDuration@CDisplayMixedModeAnimatedVisual@@EEBAJPEAI@Z @ 0x1800B2BF0 (-GetTotalDuration@CDisplayMixedModeAnimatedVisual@@EEBAJPEAI@Z.c)
 *     ?GetTotalDuration@CDisplaySecondaryOnlyAnimatedVisual@@EEBAJPEAI@Z @ 0x1800B3CF0 (-GetTotalDuration@CDisplaySecondaryOnlyAnimatedVisual@@EEBAJPEAI@Z.c)
 *     ?GetTotalDuration@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEBAJPEAI@Z @ 0x1800B4100 (-GetTotalDuration@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEBAJPEAI@Z.c)
 *     ?GetTotalDuration@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEBAJPEAI@Z @ 0x1800B4760 (-GetTotalDuration@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEBAJPEAI@Z.c)
 * Callees:
 *     ?GetAnimationDuration@@YAJHHPEAK@Z @ 0x1800501E4 (-GetAnimationDuration@@YAJHHPEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GetAnimationsDuration(const struct AnimationIdInfo *a1, unsigned __int64 a2, unsigned int *a3)
{
  unsigned __int64 i; // rbx
  unsigned int v7; // edx
  unsigned int v8; // ecx
  int AnimationDuration; // eax
  unsigned int v10; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v13; // [rsp+48h] [rbp+10h] BYREF

  *a3 = 0;
  for ( i = 0LL; i < a2; ++i )
  {
    v7 = *((_DWORD *)a1 + 2 * i + 1);
    v8 = *((_DWORD *)a1 + 2 * i);
    v13 = 0;
    AnimationDuration = GetAnimationDuration(v8, v7, &v13);
    v10 = AnimationDuration;
    if ( AnimationDuration < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4F,
        (__int64)"clientcore\\windows\\dwm\\udwm\\animationhelpers.cpp",
        (const char *)(unsigned int)AnimationDuration);
      return v10;
    }
    *a3 += v13;
  }
  return 0LL;
}
