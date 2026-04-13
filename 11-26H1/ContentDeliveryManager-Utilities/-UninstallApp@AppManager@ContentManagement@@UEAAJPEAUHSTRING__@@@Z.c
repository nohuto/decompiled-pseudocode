/*
 * XREFs of ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180077600
 * Callers:
 *     <none>
 * Callees:
 *     ??0_lambda_62158d46a05af21ae3d227fe228597be_@@QEAA@PEAVPinWebsiteToTaskbarService@Actions@CreativeFramework@@@Z @ 0x1800236BC (--0_lambda_62158d46a05af21ae3d227fe228597be_@@QEAA@PEAVPinWebsiteToTaskbarService@Actions@Creati.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x1800291B8 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1800397B8 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180039CF8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R_lambda_69f70f84236fb302921f03f01c6e57bb_@@QEBA@XZ @ 0x180074C44 (--R_lambda_69f70f84236fb302921f03f01c6e57bb_@@QEBA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::AppManager::UninstallApp(ContentManagement::AppManager *this, HSTRING a2)
{
  _lambda_62158d46a05af21ae3d227fe228597be_ *v2; // rbx
  bool v3; // dl
  int v4; // eax
  struct wil::ThreadErrorContext *v5; // r8
  int v6; // ebx
  int v8[2]; // [rsp+20h] [rbp-30h] BYREF
  int v9; // [rsp+2Ch] [rbp-24h]
  unsigned int v10[2]; // [rsp+30h] [rbp-20h] BYREF
  const char *v11; // [rsp+38h] [rbp-18h]
  __int64 v12; // [rsp+40h] [rbp-10h]
  __int16 v13; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  HSTRING v15; // [rsp+78h] [rbp+28h] BYREF
  char v16; // [rsp+80h] [rbp+30h] BYREF

  v15 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
    1u,
    3u);
  v2 = _lambda_62158d46a05af21ae3d227fe228597be_::_lambda_62158d46a05af21ae3d227fe228597be_(
         (_lambda_62158d46a05af21ae3d227fe228597be_ *)&v16,
         (struct CreativeFramework::Actions::PinWebsiteToTaskbarService *)&v15);
  *(_QWORD *)v10 = retaddr;
  v11 = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp";
  v12 = 0LL;
  v13 = 261;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
    1u,
    3u);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v8, v3);
  v4 = _lambda_69f70f84236fb302921f03f01c6e57bb_::operator()((_QWORD **)v2);
  v6 = v4;
  if ( v4 < 0 )
    wil::details::ReportFeatureError((wil::details *)(unsigned int)v4, (__int64)v8, v5, (__int64)v10);
  if ( *(_QWORD *)v8 )
    *(_DWORD *)(*(_QWORD *)v8 + 16LL) = v9;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x105,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
