/*
 * XREFs of ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@wil@@QEAAX_NW4Variant_AutoGamePowerProfile@@W4VariantReportingKind@3@_K@Z @ 0x1801C2910
 * Callers:
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@wil@@QEAA?AW4Variant_AutoGamePowerProfile@@W4VariantReportingKind@3@_N@Z @ 0x1801C28C8 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@w.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x1800EB4C0 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802BCEC4 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 (__fastcall *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGamePowerProfile>::ReportVariantUsage(
        unsigned int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        int a4,
        unsigned __int64 a5))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  int v5; // edi
  unsigned int v7; // r8d
  unsigned int v9; // ebp
  unsigned __int64 v10; // rax
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v12; // ebx
  unsigned int v13; // edx
  unsigned int v14; // edx
  __int64 v15; // [rsp+30h] [rbp-38h]
  int v16; // [rsp+30h] [rbp-38h]
  int v17; // [rsp+70h] [rbp+8h] BYREF
  __int16 v18; // [rsp+74h] [rbp+Ch]
  int v19; // [rsp+78h] [rbp+10h] BYREF

  v5 = a3;
  v7 = *a1;
  HIDWORD(a5) = a1[1];
  v9 = a2;
  LODWORD(a5) = v7;
  if ( (v7 & 4) != 0 )
  {
    v10 = a5;
  }
  else
  {
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGamePowerProfile>::GetCachedVariantState(
                       a1,
                       &a5);
    a5 = v10;
    v7 = v10;
  }
  if ( (_BYTE)v5 )
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))HIDWORD(v10);
  else
    result = 0LL;
  v17 = 0;
  v18 = 3;
  v19 = a4;
  if ( !a4 )
    return result;
  v12 = a4 - 1;
  if ( v12 )
  {
    if ( v12 != 1 )
    {
      v13 = 255;
      goto LABEL_14;
    }
    v14 = v9 + 4;
  }
  else
  {
    v14 = v9 + 6;
  }
  v13 = v5 + (v14 << 6);
LABEL_14:
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil::details::ReportUsageToServiceDirect(
                                                                                                     (__int64)(a1 + 2),
                                                                                                     0xDA0F72u,
                                                                                                     (v7 >> 10) & 1,
                                                                                                     (v7 >> 11) & 1,
                                                                                                     v13,
                                                                                                     (unsigned int)result,
                                                                                                     v15,
                                                                                                     3u);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      LOBYTE(v16) = v5;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(14290802LL, &v17, 0LL, v9, 0LL, &v19, v16, 1LL);
    }
  }
  return result;
}
