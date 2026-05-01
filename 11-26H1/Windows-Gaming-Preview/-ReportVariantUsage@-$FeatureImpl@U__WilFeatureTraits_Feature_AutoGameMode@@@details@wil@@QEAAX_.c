/*
 * XREFs of ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4Variant_AutoGameMode@@W4VariantReportingKind@3@_K@Z @ 0x180037210
 * Callers:
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA?AW4Variant_AutoGameMode@@W4VariantReportingKind@3@_N@Z @ 0x180038C1C (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x18000EEB0 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180036CB4 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::ReportVariantUsage(
        int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        int a4,
        __int64 a5)
{
  int v5; // ebp
  unsigned int v7; // r8d
  __int64 result; // rax
  int v10; // esi
  int v11; // ebx
  unsigned int v12; // edx
  int v13; // edx
  __int64 v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+30h] [rbp-38h]
  int v16; // [rsp+70h] [rbp+8h] BYREF
  __int16 v17; // [rsp+74h] [rbp+Ch]
  int v18; // [rsp+78h] [rbp+10h]

  v5 = a3;
  v7 = *a1;
  result = (unsigned int)a1[1];
  v10 = a2;
  if ( (*a1 & 4) == 0 )
  {
    result = wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedVariantState(
               (wil::details *)a1,
               (__int64)&a5);
    a5 = *(_QWORD *)result;
    v7 = a5;
  }
  v17 = 3;
  v16 = 0;
  v18 = a4;
  if ( a4 )
  {
    v11 = a4 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
      {
        v12 = 255;
        goto LABEL_10;
      }
      v13 = v10 + 4;
    }
    else
    {
      v13 = v10 + 6;
    }
    v12 = v5 + (v13 << 6);
LABEL_10:
    result = wil::details::ReportUsageToServiceDirect(
               a1 + 2,
               0xA8161Eu,
               (v7 >> 10) & 1,
               (v7 >> 11) & 1,
               v12,
               v14,
               v15,
               3);
    if ( (_DWORD)result )
    {
      result = (__int64)g_wil_details_pfnFeatureLoggingHook;
      if ( g_wil_details_pfnFeatureLoggingHook )
        return g_wil_details_pfnFeatureLoggingHook(11015710LL, &v16, 0LL);
    }
  }
  return result;
}
