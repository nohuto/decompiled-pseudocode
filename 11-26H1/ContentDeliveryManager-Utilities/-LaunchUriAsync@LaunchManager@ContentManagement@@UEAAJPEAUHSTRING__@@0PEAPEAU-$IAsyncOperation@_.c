/*
 * XREFs of ?LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x180034A10
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x1800291B8 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ??R_lambda_335ae85577de6131fccde93dfeb50d82_@@QEBA@XZ @ 0x18002B028 (--R_lambda_335ae85577de6131fccde93dfeb50d82_@@QEBA@XZ.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1800397B8 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180039CF8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 ContentManagement::LaunchManager::LaunchUriAsync(__int64 a1, ...)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 v4; // rdx
  bool v5; // dl
  int v6; // eax
  struct wil::ThreadErrorContext *v7; // r8
  int v8; // ebx
  int v10[2]; // [rsp+20h] [rbp-50h] BYREF
  int v11; // [rsp+2Ch] [rbp-44h]
  _QWORD v12[3]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v13[2]; // [rsp+48h] [rbp-28h] BYREF
  const char *v14; // [rsp+50h] [rbp-20h]
  __int64 v15; // [rsp+58h] [rbp-18h]
  __int16 v16; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 v18; // [rsp+98h] [rbp+28h] BYREF
  va_list va; // [rsp+98h] [rbp+28h]
  __int64 v20; // [rsp+A0h] [rbp+30h] BYREF
  va_list va1; // [rsp+A0h] [rbp+30h]
  _QWORD *v22; // [rsp+A8h] [rbp+38h] BYREF
  va_list va2; // [rsp+A8h] [rbp+38h]
  va_list va3; // [rsp+B0h] [rbp+40h] BYREF

  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v18 = va_arg(va1, _QWORD);
  v1 = v18;
  va_copy(va2, va1);
  v20 = va_arg(va2, _QWORD);
  v2 = v20;
  va_copy(va3, va2);
  v22 = va_arg(va3, _QWORD *);
  *v22 = 0LL;
  LOBYTE(v2) = 3;
  LOBYTE(v1) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
    v1,
    v2);
  va_copy((va_list)v12, va);
  va_copy((va_list)&v12[1], va1);
  va_copy((va_list)&v12[2], va2);
  *(_QWORD *)v13 = retaddr;
  v14 = "shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp";
  v15 = 0LL;
  v16 = 333;
  LOBYTE(v3) = 3;
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
    v4,
    v3);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v10, v5);
  v6 = _lambda_335ae85577de6131fccde93dfeb50d82_::operator()((__int64)v12);
  v8 = v6;
  if ( v6 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v6,
      (int)v10,
      v7,
      (unsigned int)v13,
      *(const struct DiagnosticsInfo **)v10);
  if ( *(_QWORD *)v10 )
    *(_DWORD *)(*(_QWORD *)v10 + 16LL) = v11;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14D,
    (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v8,
    v10[0]);
  return (unsigned int)v8;
}
