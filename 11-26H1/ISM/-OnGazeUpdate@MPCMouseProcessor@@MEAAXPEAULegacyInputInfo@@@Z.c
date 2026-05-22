/*
 * XREFs of ?OnGazeUpdate@MPCMouseProcessor@@MEAAXPEAULegacyInputInfo@@@Z @ 0x1801C7020
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18000DD50 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x18000EB10 (-TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z.c)
 *     ?GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x18000EDC4 (-GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180024560 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCMouseProcessor::OnGazeUpdate(MPCMouseProcessor *this, struct LegacyInputInfo *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  MPCHolographicInputManager *Instance; // rax
  MPCHolographicInputManager *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  const char *v17; // r9
  struct IMPCInputPostProcessor *PostProcessor; // rax
  int v19; // eax
  _OWORD v20[2]; // [rsp+20h] [rbp-B8h] BYREF
  __m256i v21; // [rsp+40h] [rbp-98h] BYREF
  __int128 v22; // [rsp+60h] [rbp-78h]
  __int128 v23; // [rsp+70h] [rbp-68h]
  __int128 v24; // [rsp+80h] [rbp-58h]
  __int128 v25; // [rsp+90h] [rbp-48h]
  __int128 v26; // [rsp+A0h] [rbp-38h]
  __int128 v27; // [rsp+B0h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  *((_BYTE *)this + 5353) = 0;
  if ( MPCInputProviderBase::IsPrimary((unsigned __int64)this) )
  {
    *((_QWORD *)this + 678) = *((_QWORD *)a2 + 2);
    v4 = *((_OWORD *)this + 344);
    v20[0] = *((_OWORD *)this + 343);
    v5 = *((_OWORD *)this + 345);
    v20[1] = v4;
    v6 = *((_OWORD *)this + 346);
    *(_OWORD *)v21.m256i_i8 = v5;
    v7 = *((_OWORD *)this + 347);
    *(_OWORD *)&v21.m256i_u64[2] = v6;
    v8 = *((_OWORD *)this + 348);
    v22 = v7;
    v9 = *((_OWORD *)this + 349);
    v23 = v8;
    v10 = *((_OWORD *)this + 351);
    v24 = v9;
    v25 = *((_OWORD *)this + 350);
    v11 = *((_OWORD *)this + 352);
    v26 = v10;
    v12 = *(_OWORD *)((char *)this + 5528);
    v27 = v11;
    LODWORD(v11) = *((_DWORD *)this + 1387);
    *(_OWORD *)&v21.m256i_u64[1] = v12;
    v21.m256i_i32[6] = *((_DWORD *)this + 1386);
    v21.m256i_i32[7] = v11;
    Instance = MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::TransformRayToHeadFromWorld(Instance, (struct TargetingRay *)&v21.m256i_u64[1]);
    v14 = MPCHolographicInputManager::GetInstance();
    PostProcessor = MPCHolographicInputManager::GetPostProcessor(v14, v15, v16, v17);
    v19 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, _OWORD *, char *))(*(_QWORD *)PostProcessor + 40LL))(
            PostProcessor,
            v20,
            (char *)this + 5648);
    if ( v19 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3E3,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v19,
        v20[0]);
  }
}
