/*
 * XREFs of ?SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x18031EE64
 * Callers:
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18031EA3C (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1802C8390 (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 *     ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x18031F2A8 (-wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z.c)
 */

__int64 __fastcall TaskbarLayoutPolicyManager::SetMDMPolicyLayoutTimestampToCurrent(
        TaskbarLayoutPolicyManager *this,
        __int64 a2,
        __int64 a3,
        struct wil::WNF_CHANGE_STAMP_STRUCT *a4)
{
  int nothrow; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  TaskbarLayoutPolicyManager *v8; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+38h] [rbp+10h] BYREF

  v8 = this;
  v9 = 0;
  LOBYTE(v8) = 0;
  nothrow = wil::wnf_query_nothrow(
              (wil *)&WNF_SHEL_ENTERPRISE_START_LAYOUT_POLICY_VALUE_CHANGED,
              (const struct _WNF_STATE_NAME *)&v8,
              (bool *)&v9,
              a4);
  if ( nothrow < 0 )
  {
    v5 = 651LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)nothrow);
    return (unsigned int)nothrow;
  }
  if ( !(_BYTE)v8 )
  {
    nothrow = -2147418113;
    v5 = 654LL;
    goto LABEL_3;
  }
  nothrow = SHRegSetDWORD(
              HKEY_CURRENT_USER,
              L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
              L"MDMLayoutXMLLastModified",
              v9);
  if ( nothrow < 0 )
  {
    v5 = 656LL;
    goto LABEL_3;
  }
  return 0LL;
}
