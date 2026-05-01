/*
 * XREFs of ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1800B6514
 * Callers:
 *     ?OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z @ 0x1800B64B0 (-OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z.c)
 *     ?PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1800B6D68 (-PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1802C036C (-PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x18036DA00 (-PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x180377A70 (-_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@.c)
 *     _lambda_055d3ca9173c3810bb1268cfe695d4b8_::_lambda_invoker_cdecl_ @ 0x18038BDC0 (_lambda_055d3ca9173c3810bb1268cfe695d4b8_--_lambda_invoker_cdecl_.c)
 *     ?_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1803A4C70 (-_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shel.c)
 *     _lambda_6699240da0a68d9d394aec2180beabac_::_lambda_invoker_cdecl_ @ 0x1803C08E0 (_lambda_6699240da0a68d9d394aec2180beabac_--_lambda_invoker_cdecl_.c)
 *     _lambda_3ce309c2898001e1825685631cfe3bc0_::_lambda_invoker_cdecl_ @ 0x18045F1E0 (_lambda_3ce309c2898001e1825685631cfe3bc0_--_lambda_invoker_cdecl_.c)
 *     _lambda_3e61de4f9643ee4788377b17e3289925_::_lambda_invoker_cdecl_ @ 0x18045F220 (_lambda_3e61de4f9643ee4788377b17e3289925_--_lambda_invoker_cdecl_.c)
 *     _lambda_e71bfef6371fb90ba2cfa7f4102823cf_::_lambda_invoker_cdecl_ @ 0x18045F300 (_lambda_e71bfef6371fb90ba2cfa7f4102823cf_--_lambda_invoker_cdecl_.c)
 *     _lambda_f75ea7beecdeb4c92e8e5d8d785aecd6_::_lambda_invoker_cdecl_ @ 0x18045F360 (_lambda_f75ea7beecdeb4c92e8e5d8d785aecd6_--_lambda_invoker_cdecl_.c)
 *     _lambda_223dfeebefa722d7a45e6ff6a39f8354_::operator() @ 0x180460C90 (_lambda_223dfeebefa722d7a45e6ff6a39f8354_--operator().c)
 *     _lambda_473f979552c25d31c844dd80bfa0522e_::operator() @ 0x180460D54 (_lambda_473f979552c25d31c844dd80bfa0522e_--operator().c)
 *     _lambda_a77a588917195b195108349f999e57c5_::operator() @ 0x180460EC8 (_lambda_a77a588917195b195108349f999e57c5_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1800B678C (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 */

__int64 __fastcall ExperienceManagerUtils::PostToUIThread(ExperienceManagerUtils *this, struct IUnknown *a2, void *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ExperienceManagerUtils::PostToUIThread(this, a2, 0LL, (unsigned int)a3, v6);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEC,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
