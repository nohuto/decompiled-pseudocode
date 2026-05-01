/*
 * XREFs of ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1800FC868
 * Callers:
 *     ?PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1800FBD9C (-PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z @ 0x1800FBDE0 (-OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z.c)
 *     ?PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1802C8AF4 (-PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x180366830 (-PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1803701F0 (-_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@.c)
 *     _lambda_055d3ca9173c3810bb1268cfe695d4b8_::_lambda_invoker_cdecl_ @ 0x180384F40 (_lambda_055d3ca9173c3810bb1268cfe695d4b8_--_lambda_invoker_cdecl_.c)
 *     ?_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18039C550 (-_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shel.c)
 *     _lambda_6699240da0a68d9d394aec2180beabac_::_lambda_invoker_cdecl_ @ 0x1803B7000 (_lambda_6699240da0a68d9d394aec2180beabac_--_lambda_invoker_cdecl_.c)
 *     _lambda_9b9d01ea892553566f338950cf385c5c_::_lambda_invoker_cdecl_ @ 0x180452B10 (_lambda_9b9d01ea892553566f338950cf385c5c_--_lambda_invoker_cdecl_.c)
 *     _lambda_a83783e59b865ed65da27ee19c57306c_::_lambda_invoker_cdecl_ @ 0x180452B80 (_lambda_a83783e59b865ed65da27ee19c57306c_--_lambda_invoker_cdecl_.c)
 *     _lambda_e062120ab52a9daecad7243d88267693_::_lambda_invoker_cdecl_ @ 0x180452C00 (_lambda_e062120ab52a9daecad7243d88267693_--_lambda_invoker_cdecl_.c)
 *     _lambda_e9910e39be40877a27e35d4105464f4d_::_lambda_invoker_cdecl_ @ 0x180452C40 (_lambda_e9910e39be40877a27e35d4105464f4d_--_lambda_invoker_cdecl_.c)
 *     _lambda_2cf12b60f4ea3f35d67055693220f124_::operator() @ 0x180453F30 (_lambda_2cf12b60f4ea3f35d67055693220f124_--operator().c)
 *     _lambda_ab40e8b3b3327d7f61694ede3d1edceb_::operator() @ 0x180454020 (_lambda_ab40e8b3b3327d7f61694ede3d1edceb_--operator().c)
 *     _lambda_c23ab6b36b36b14039e20549c439c5db_::operator() @ 0x1804540F0 (_lambda_c23ab6b36b36b14039e20549c439c5db_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1800FCAD4 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
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
