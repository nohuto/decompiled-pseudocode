/*
 * XREFs of ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x180150030
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x180060090 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180060660 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     wil_QueryFeatureState @ 0x18028DC7C (wil_QueryFeatureState.c)
 *     ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x18028DDB8 (-wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::WilApiImpl_GetFeatureEnabledState(wil::details *this, int a2, _DWORD *a3, int *a4)
{
  unsigned int v4; // r12d
  volatile __int32 *v5; // rdi
  bool v7; // r14
  unsigned int v8; // ebx
  wil::details *v9; // rcx
  BOOL v10; // edi
  __int64 (*NtDllProcedureAddress)(void); // rax
  int v12; // eax
  int v13; // ecx
  int v15; // r15d
  int v16; // r9d
  int FeatureState; // esi
  char v18; // dl
  __int64 v19; // [rsp+30h] [rbp-40h] BYREF
  __int128 v20; // [rsp+38h] [rbp-38h] BYREF
  __int64 v21; // [rsp+48h] [rbp-28h]
  __int64 v22; // [rsp+50h] [rbp-20h] BYREF
  int v23; // [rsp+58h] [rbp-18h]

  v4 = (unsigned int)this;
  v5 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::machineStoreProbe;
  v20 = 0LL;
  v7 = (a2 & 0xFFFFFF7F) - 2 <= 1;
  v21 = 0LL;
  v8 = 0;
  if ( (a2 & 0x80) != 0 )
    v5 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::userStoreProbe;
  v9 = (wil::details *)*(unsigned int *)v5;
  if ( (*v5 & 3) == 2 )
    goto LABEL_10;
  if ( ((unsigned __int8)v9 & 2) == 0 )
  {
    LODWORD(v19) = 1;
    v15 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(v9);
    FeatureState = wil_QueryFeatureState((unsigned int)&v20, v4, v7, v16, (__int64)&v19, (__int64)a3);
    v18 = _InterlockedExchange(v5, ((_DWORD)v19 != 0) + 6);
    if ( !(_DWORD)v19 && (v18 & 4) == 0 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges(v5, 0, v15);
    if ( FeatureState )
      v8 = v20;
LABEL_10:
    v13 = v21;
    goto LABEL_11;
  }
  v19 = 0LL;
  v22 = 0LL;
  v10 = (a2 & 0xFFFFFF7F) - 2 > 1;
  v23 = 0;
  NtDllProcedureAddress = (__int64 (*)(void))g_wil_details_pfnRtlQueryFeatureConfiguration;
  *a3 = 1;
  if ( !NtDllProcedureAddress )
  {
    NtDllProcedureAddress = wil_details_GetNtDllProcedureAddress("RtlQueryFeatureConfiguration");
    g_wil_details_pfnRtlQueryFeatureConfiguration = (__int64)NtDllProcedureAddress;
    if ( !NtDllProcedureAddress )
      goto LABEL_10;
  }
  v12 = ((__int64 (__fastcall *)(_QWORD, BOOL, __int64 *, __int64 *))NtDllProcedureAddress)(v4, v10, &v19, &v22);
  if ( !v12 )
  {
    v8 = (HIDWORD(v22) >> 4) & 3;
    HIDWORD(v21) = (HIDWORD(v22) >> 6) & 1;
    v13 = (HIDWORD(v22) >> 7) & 1;
    goto LABEL_11;
  }
  if ( v12 != 279 )
    goto LABEL_10;
  v8 = v20;
  v13 = (HIDWORD(v22) >> 7) & 1;
LABEL_11:
  if ( v13 )
    v8 |= 0x80u;
  if ( HIDWORD(v21) )
    v8 |= 0x40u;
  return v8;
}
