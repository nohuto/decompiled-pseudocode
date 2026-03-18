/*
 * XREFs of ?SetProperty@CAnimationController@@EEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180269A30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPlaybackRate@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJM@Z @ 0x18024C82C (-SetPlaybackRate@-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResourc.c)
 *     ?SetProgress@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJM@Z @ 0x18024C8E4 (-SetProgress@-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@.c)
 */

__int64 __fastcall CAnimationController::SetProperty(float *a1, int a2, int a3, float *a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 != 18 )
    return CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::SetProperty(
             (__int64)a1,
             a2,
             a3);
  if ( a2 == 1 )
  {
    v5 = CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::SetProgress(a1, *a4);
    if ( v5 < 0 )
    {
      v6 = 54LL;
      goto LABEL_9;
    }
  }
  else
  {
    if ( a2 != 2 )
      return CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::SetProperty(
               (__int64)a1,
               a2,
               a3);
    v5 = CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::SetPlaybackRate(a1, *a4);
    if ( v5 < 0 )
    {
      v6 = 60LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationcontroller.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  return 0LL;
}
