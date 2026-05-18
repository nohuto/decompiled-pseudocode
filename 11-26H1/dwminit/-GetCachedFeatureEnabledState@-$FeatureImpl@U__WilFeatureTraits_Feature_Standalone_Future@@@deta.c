/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800091B0
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18000D0F4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x1800089FC (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18000C00C (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_Future>::GetCachedFeatureEnabledState(
        wil::details *a1,
        _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebp
  __int64 (__fastcall *v5)(__int64, __int64, wil::details **); // rax
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  char v9; // dl
  int v10; // eax
  int v11; // ebx
  signed __int32 v12; // eax
  bool v13; // zf
  signed __int32 v14; // edx
  signed __int32 v15; // ecx
  int v16; // ecx
  wil::details *v18; // [rsp+40h] [rbp+8h] BYREF

  v18 = a1;
  *a2 = 0LL;
  v3 = *(_DWORD *)Feature_Standalone_Future__descriptor;
  *(_DWORD *)a2 = *(_DWORD *)Feature_Standalone_Future__descriptor;
  if ( (v3 & 6) == 6 )
    return a2;
  v4 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
  LODWORD(v18) = 0;
  v5 = (__int64 (__fastcall *)(__int64, __int64, wil::details **))g_wil_details_internalGetFeatureEnabledState;
  if ( g_wil_details_internalGetFeatureEnabledState
    || (v5 = (__int64 (__fastcall *)(__int64, __int64, wil::details **))g_wil_details_apiGetFeatureEnabledState) != 0LL )
  {
    v6 = v5(49453572LL, 3LL, &v18);
  }
  else
  {
    v6 = 0;
  }
  v7 = 0;
  if ( (v6 & 0xFFFFFF3F) == 2 )
    v7 = 64;
  v8 = v7 | (8 * (v6 & 0x80 | (4 * (v6 & 0x40 | (4 * (v6 & 3))))));
  v9 = 0;
  if ( (v8 & 0xC00) == 0xC00 )
  {
    v9 = 1;
  }
  else if ( (v8 & 0x40) != 0 )
  {
    goto LABEL_14;
  }
  if ( (v8 & 0x40) == 0 || !v9 )
  {
    v10 = 0;
    goto LABEL_15;
  }
LABEL_14:
  v10 = 1;
LABEL_15:
  v11 = v10 | v8;
  v12 = *(_DWORD *)a2;
  do
  {
    v13 = (_DWORD)v18 == 0;
    v14 = v12;
    *(_DWORD *)a2 = v12;
    v15 = v12;
    if ( !v13 && (v12 & 2) == 0 )
    {
      v16 = v12 ^ ((unsigned __int16)v12 ^ (unsigned __int16)v11) & 0x180 ^ (v11 ^ v12 ^ ((unsigned __int16)v12 ^ (unsigned __int16)v11) & 0x180) & 0x40;
      v15 = v16 ^ ((unsigned __int8)v11 ^ (unsigned __int8)v16) & 1 ^ ((unsigned __int16)v11 ^ (unsigned __int16)(v16 ^ ((unsigned __int8)v11 ^ (unsigned __int8)v16) & 1)) & 0x800 | 2;
      *(_DWORD *)a2 = v15;
    }
    if ( (v12 & 4) == 0 )
    {
      v15 = ((unsigned __int16)v15 ^ (unsigned __int16)v11) & 0x400 ^ v15 | 4;
      *(_DWORD *)a2 = v15;
    }
    v12 = _InterlockedCompareExchange((volatile signed __int32 *)Feature_Standalone_Future__descriptor, v15, v12);
  }
  while ( v14 != v12 );
  if ( (v14 & 4) == 0 )
    wil::details::SubscribeFeatureStateCacheToConfigurationChanges(Feature_Standalone_Future__descriptor, 3LL, v4);
  if ( (*(_BYTE *)a2 & 2) == 0 )
    *(_DWORD *)a2 ^= (*(_DWORD *)a2 ^ v11) & 0x180 ^ (v11 ^ *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v11) & 0x180) & 0x40 ^ ((unsigned __int8)v11 ^ *(_BYTE *)a2 ^ (*(_BYTE *)a2 ^ (unsigned __int8)v11) & 0x80 ^ ((unsigned __int8)v11 ^ *(_BYTE *)a2 ^ (*(_BYTE *)a2 ^ (unsigned __int8)v11) & 0x80) & 0x40) & 1 ^ ((unsigned __int16)v11 ^ *(_WORD *)a2 ^ (*(_WORD *)a2 ^ (unsigned __int16)v11) & 0x180 ^ ((unsigned __int16)v11 ^ *(_WORD *)a2 ^ (*(_WORD *)a2 ^ (unsigned __int16)v11) & 0x180) & 0x40 ^ ((unsigned __int8)v11 ^ *(_BYTE *)a2 ^ (*(_BYTE *)a2 ^ (unsigned __int8)v11) & 0x80 ^ ((unsigned __int8)v11 ^ *(_BYTE *)a2 ^ (*(_BYTE *)a2 ^ (unsigned __int8)v11) & 0x80) & 0x40) & 1) & 0x800;
  return a2;
}
