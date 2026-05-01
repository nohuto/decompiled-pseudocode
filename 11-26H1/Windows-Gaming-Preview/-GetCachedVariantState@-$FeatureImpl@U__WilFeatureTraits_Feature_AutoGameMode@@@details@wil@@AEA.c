/*
 * XREFs of ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180036CB4
 * Callers:
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4Variant_AutoGameMode@@W4VariantReportingKind@3@_K@Z @ 0x180037210 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_.c)
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800376F0 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA?AW4Variant_AutoGameMode@@W4VariantReportingKind@3@_N@Z @ 0x180038C1C (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x180005B18 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x1800098C4 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedVariantState(
        wil::details *a1,
        __int64 a2)
{
  __int64 v2; // rax
  int v5; // esi
  __int64 (__fastcall *v6)(__int64, _QWORD, int *, int *, int *); // rax
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // edx
  int v11; // r10d
  signed __int64 v12; // rax
  int v13; // edx
  int v14; // ecx
  unsigned int v15; // r8d
  signed __int64 v16; // rtt
  int v18; // [rsp+50h] [rbp+20h] BYREF
  int v19; // [rsp+58h] [rbp+28h] BYREF
  int v20; // [rsp+60h] [rbp+30h] BYREF

  v2 = *(_QWORD *)a1;
  *(_QWORD *)a2 = *(_QWORD *)a1;
  if ( (v2 & 0xC) != 0xC )
  {
    v18 = 0;
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v19 = 0;
    v6 = (__int64 (__fastcall *)(__int64, _QWORD, int *, int *, int *))g_wil_details_internalGetFeatureVariant;
    v7 = 0;
    v20 = 0;
    if ( g_wil_details_internalGetFeatureVariant
      || (v6 = (__int64 (__fastcall *)(__int64, _QWORD, int *, int *, int *))g_wil_details_apiGetFeatureVariant) != 0LL )
    {
      v7 = v6(11015710LL, 0LL, &v20, &v19, &v18);
    }
    v8 = v7 & 0x100;
    v9 = (v19 != 0 ? 0x400 : 0) | (16 * (v7 & 0x80));
    v10 = v7 & 0xFFFFFE7F;
    if ( v10 && (v9 ^= (v10 & 0x3F) << 12, v8) )
      v11 = v20;
    else
      v11 = 0;
    if ( !v5 )
      v18 = 0;
    v12 = *(_QWORD *)a2;
    do
    {
      v13 = v12;
      *(_QWORD *)a2 = v12;
      if ( (v12 & 8) == 0 )
      {
        v14 = v18;
        *(_DWORD *)(a2 + 4) = v11;
        v13 = ((v14 != 0 ? 8 : 0) | (v12 ^ (v9 ^ v12) & 0x3F000) & 0xFFFFFFF7) ^ ((unsigned __int16)v9 ^ ((v14 != 0 ? 8 : 0) | ((unsigned __int16)v12 ^ ((unsigned __int16)v9 ^ (unsigned __int16)v12) & 0xF000) & 0xFFF7)) & 0x800;
        *(_DWORD *)a2 = v13;
      }
      v15 = ((unsigned int)v12 >> 2) & 1;
      if ( !v15 )
        *(_DWORD *)a2 = v13 ^ (v13 ^ v9) & 0x400 | 4;
      v16 = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, *(_QWORD *)a2, v12);
    }
    while ( v16 != v12 );
    if ( !v15 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges((volatile signed __int32 *)a1, 0, v5);
  }
  return a2;
}
