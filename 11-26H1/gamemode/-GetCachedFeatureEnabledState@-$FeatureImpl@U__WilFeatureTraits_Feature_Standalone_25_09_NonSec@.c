/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_09_NonSec@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000A720
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18000AB30 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x1800099A4 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18000D370 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180011010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_25_09_NonSec>::GetCachedFeatureEnabledState(
        wil::details *a1,
        _QWORD *a2)
{
  int v2; // eax
  unsigned int v5; // ebp
  __int64 (__fastcall *v6)(__int64, __int64, int *); // rax
  int v7; // ecx
  int v8; // ebx
  int v9; // ebx
  int v10; // eax
  signed __int32 v11; // eax
  bool v12; // zf
  signed __int32 v13; // r8d
  signed __int32 v14; // edx
  int v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)a1;
  *a2 = 0LL;
  *(_DWORD *)a2 = v2;
  if ( (v2 & 6) != 6 )
  {
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v16 = 0;
    v6 = (__int64 (__fastcall *)(__int64, __int64, int *))g_wil_details_internalGetFeatureEnabledState;
    if ( g_wil_details_internalGetFeatureEnabledState
      || (v6 = (__int64 (__fastcall *)(__int64, __int64, int *))g_wil_details_apiGetFeatureEnabledState) != 0LL )
    {
      v7 = v6(45036790LL, 3LL, &v16);
    }
    else
    {
      v7 = 0;
    }
    v8 = 8 * (v7 & 0x80 | (4 * (v7 & 0x40 | (4 * (v7 & 3)))));
    if ( (v7 & 0xFFFFFF3F) != 0 )
    {
      v10 = 0;
      if ( (v7 & 0xFFFFFF3F) == 2 )
        v10 = 64;
      v9 = v10 | v8;
    }
    else
    {
      v9 = v8 | 0x40;
    }
    v11 = *(_DWORD *)a2;
    do
    {
      v12 = v16 == 0;
      v13 = v11;
      *(_DWORD *)a2 = v11;
      v14 = v11;
      if ( !v12 && (v11 & 2) == 0 )
      {
        v14 = (v11 ^ ((unsigned __int16)v9 ^ (unsigned __int16)v11) & 0x180 ^ (v9 ^ v11 ^ ((unsigned __int16)v9 ^ (unsigned __int16)v11) & 0x180) & 0x40 | 1) ^ ((unsigned __int16)v9 ^ ((unsigned __int16)(v11 ^ (v9 ^ v11) & 0x180 ^ (v9 ^ v11 ^ (v9 ^ v11) & 0x180) & 0x40) | 1)) & 0x800 | 2;
        *(_DWORD *)a2 = v14;
      }
      if ( (v11 & 4) == 0 )
      {
        v14 = ((unsigned __int16)v9 ^ (unsigned __int16)v14) & 0x400 ^ v14 | 4;
        *(_DWORD *)a2 = v14;
      }
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v14, v11);
    }
    while ( v13 != v11 );
    if ( (v13 & 4) == 0 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges(a1, 3LL, v5);
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *(_DWORD *)a2 = (*(_DWORD *)a2 ^ ((unsigned __int16)v9 ^ (unsigned __int16)*(_DWORD *)a2) & 0x180 ^ (v9 ^ *(_DWORD *)a2 ^ ((unsigned __int16)v9 ^ (unsigned __int16)*(_DWORD *)a2) & 0x180) & 0x40 | 1) ^ ((unsigned __int16)v9 ^ (*(_WORD *)a2 ^ ((unsigned __int16)v9 ^ (unsigned __int16)*(_DWORD *)a2) & 0x180 ^ ((unsigned __int16)v9 ^ *(_WORD *)a2 ^ ((unsigned __int16)v9 ^ (unsigned __int16)*(_DWORD *)a2) & 0x180) & 0x40 | 1)) & 0x800;
  }
  return a2;
}
