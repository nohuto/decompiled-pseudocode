/*
 * XREFs of _lambda_203a32cbd1766f67226f85b07542c037_::operator() @ 0x1803198A4
 * Callers:
 *     wil::details::functor_wrapper_other__lambda_203a32cbd1766f67226f85b07542c037__&_int_::Run @ 0x18031B500 (wil--details--functor_wrapper_other__lambda_203a32cbd1766f67226f85b07542c037__-_int_--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetMDMStartLayoutPolicy@TaskbarLayoutPolicyManager@@AEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x180158B7C (-GetMDMStartLayoutPolicy@TaskbarLayoutPolicyManager@@AEAAJAEAV-$NativeString@V-$CoTaskMemPolicy@.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180190638 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x18031B9D8 (-wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z.c)
 */

__int64 __fastcall lambda_203a32cbd1766f67226f85b07542c037_::operator()(__int64 a1)
{
  unsigned int v1; // ebx
  int MDMStartLayoutPolicy; // eax
  struct wil::WNF_CHANGE_STAMP_STRUCT *v3; // r9
  int v4; // eax
  LSTATUS DWORD; // eax
  unsigned int v6; // edi
  _QWORD v8[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct _WNF_STATE_NAME v10; // [rsp+60h] [rbp+20h] BYREF
  int v11; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+30h] BYREF

  v10 = (struct _WNF_STATE_NAME)a1;
  v1 = 0;
  memset(v8, 0, 24);
  MDMStartLayoutPolicy = TaskbarLayoutPolicyManager::GetMDMStartLayoutPolicy(a1, v8);
  if ( MDMStartLayoutPolicy < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x127,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)MDMStartLayoutPolicy);
  if ( v8[0] && *(_WORD *)v8[0] )
  {
    v11 = 0;
    LOBYTE(v10.Data[0]) = 0;
    v4 = wil::wnf_query_nothrow((wil *)&WNF_SHEL_ENTERPRISE_START_LAYOUT_POLICY_VALUE_CHANGED, &v10, (bool *)&v11, v3);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x132,
        (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v4);
    v12 = 0;
    DWORD = SHRegGetDWORD(
              HKEY_CURRENT_USER,
              L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
              L"MDMLayoutXMLLastModified",
              &v12);
    v6 = DWORD;
    if ( DWORD != -2147024894 && DWORD < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x283,
        (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)DWORD);
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x138,
        (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)v6);
    }
    LOBYTE(v1) = v12 != v11;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v8);
  return v1;
}
