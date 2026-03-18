/*
 * XREFs of ?SetProperty@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802192E4
 * Callers:
 *     ?SetProperty@CAnimationController@@EEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180269A30 (-SetProperty@CAnimationController@@EEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPlaybackRate@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJM@Z @ 0x18024C82C (-SetPlaybackRate@-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResourc.c)
 *     ?SetProgress@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJM@Z @ 0x18024C8E4 (-SetProgress@-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@.c)
 */

__int64 __fastcall CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::SetProperty(
        __int64 a1,
        int a2,
        int a3)
{
  int v3; // edx
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a2 - 1;
  if ( v3 )
  {
    if ( v3 != 1 )
      return 2147942487LL;
    if ( a3 != 18 )
    {
      v4 = 5016LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    v5 = CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::SetPlaybackRate();
    if ( v5 < 0 )
    {
      v6 = 5017LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  else
  {
    if ( a3 != 18 )
    {
      v4 = 5011LL;
      goto LABEL_9;
    }
    v5 = CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::SetProgress();
    if ( v5 < 0 )
    {
      v6 = 5012LL;
      goto LABEL_13;
    }
  }
  return 0LL;
}
