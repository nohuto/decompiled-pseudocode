/*
 * XREFs of ?ResultFromCaughtException@wil@@YAJXZ @ 0x18003A2B0
 * Callers:
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x180030CC8 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch$12 @ 0x1800BD813 (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--catch$12.c)
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch$13 @ 0x1800BD861 (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--catch$13.c)
 *     _Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::RuntimeClassInitialize_::_1_::catch$1 @ 0x1800BE8B9 (_Windows--Internal--Extensions--ApplicationModel--ContentDeliveryManagerAppInfo--RuntimeClassIni.c)
 *     _Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize_::_1_::catch$1 @ 0x1800BE969 (_Windows--Internal--Extensions--ApplicationModel--ContentDeliveryManagerAppDisplayInfo--RuntimeC.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::ResolveLayoutBindings_::_1_::catch$12 @ 0x1800BED9B (_CreativeFramework--TargetedContentLayoutHelpers--ResolveLayoutBindings_--_1_--catch$12.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003D9E8 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::ResultFromCaughtException(wil *this, void *a2, unsigned int a3)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-28h]
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  if ( !g_pfnResultFromCaughtExceptionInternal
    || (result = *(unsigned int *)g_pfnResultFromCaughtExceptionInternal(v5, 0LL, 0LL, &v7), (int)result >= 0) )
  {
    wil::details::in1diag3::_FailFast_Hr(retaddr, a2, a3, (const char *)0x8007023ELL, v4);
  }
  return result;
}
