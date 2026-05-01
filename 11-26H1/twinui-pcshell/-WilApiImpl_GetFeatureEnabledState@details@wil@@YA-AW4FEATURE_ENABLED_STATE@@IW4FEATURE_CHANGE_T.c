/*
 * XREFs of ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x180142CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x1800B97B8 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x1801253E8 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     wil_QueryFeatureState @ 0x18028707C (wil_QueryFeatureState.c)
 *     ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x1802871C0 (-wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::WilApiImpl_GetFeatureEnabledState(wil::details *this, int a2, _DWORD *a3, int *a4)
{
  int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // r12d
  bool v8; // si
  volatile __int32 *v9; // rdi
  unsigned int v10; // ebx
  wil::details *v11; // rcx
  __int64 (*NtDllProcedureAddress)(void); // rax
  int v13; // eax
  int v14; // ecx
  int v16; // r15d
  int v17; // r9d
  int FeatureState; // eax
  int v19; // edx
  int v20; // esi
  char v21; // cl
  __int64 v22; // [rsp+30h] [rbp-40h] BYREF
  __int128 v23; // [rsp+38h] [rbp-38h] BYREF
  __int64 v24; // [rsp+48h] [rbp-28h]
  __int64 v25; // [rsp+50h] [rbp-20h] BYREF
  int v26; // [rsp+58h] [rbp-18h]

  v5 = a2 & 0x80;
  v6 = a2 & 0xFFFFFF7F;
  v7 = (unsigned int)this;
  v8 = v6 == 3 || v6 == 2;
  v9 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::machineStoreProbe;
  v10 = 0;
  v24 = 0LL;
  if ( v5 )
    v9 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::userStoreProbe;
  v23 = 0LL;
  v11 = (wil::details *)*(unsigned int *)v9;
  if ( (*v9 & 3) == 2 )
    goto LABEL_13;
  if ( ((unsigned __int8)v11 & 2) == 0 )
  {
    LODWORD(v22) = 1;
    v16 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(v11);
    FeatureState = wil_QueryFeatureState((unsigned int)&v23, v7, v8, v17, (__int64)&v22, (__int64)a3);
    v19 = v22;
    v20 = FeatureState;
    v21 = _InterlockedExchange(v9, ((_DWORD)v22 != 0) + 6);
    if ( !v19 && (v21 & 4) == 0 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges(v9, 0, v16);
    if ( v20 )
      v10 = v23;
    goto LABEL_13;
  }
  v25 = 0LL;
  v26 = 0;
  NtDllProcedureAddress = (__int64 (*)(void))g_wil_details_pfnRtlQueryFeatureConfiguration;
  *a3 = 1;
  v22 = 0LL;
  if ( !NtDllProcedureAddress )
  {
    NtDllProcedureAddress = wil_details_GetNtDllProcedureAddress("RtlQueryFeatureConfiguration");
    g_wil_details_pfnRtlQueryFeatureConfiguration = (__int64)NtDllProcedureAddress;
    if ( !NtDllProcedureAddress )
    {
LABEL_13:
      v14 = v24;
      goto LABEL_14;
    }
  }
  v13 = ((__int64 (__fastcall *)(_QWORD, bool, __int64 *, __int64 *))NtDllProcedureAddress)(v7, !v8, &v22, &v25);
  if ( v13 )
  {
    if ( v13 == 279 )
    {
      v10 = v23;
      v14 = (HIDWORD(v25) >> 7) & 1;
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v10 = (HIDWORD(v25) >> 4) & 3;
  HIDWORD(v24) = (HIDWORD(v25) >> 6) & 1;
  v14 = (HIDWORD(v25) >> 7) & 1;
LABEL_14:
  if ( v14 )
    v10 |= 0x80u;
  if ( HIDWORD(v24) )
    v10 |= 0x40u;
  return v10;
}
