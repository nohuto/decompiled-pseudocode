/*
 * XREFs of ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x18000EE4C
 * Callers:
 *     ?UpdateGazeCursor@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@@Z @ 0x18000CB14 (-UpdateGazeCursor@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x18000CB74 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 * Callees:
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x18000ED1C (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x18000EDC4 (-GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@@Z @ 0x18000EDFC (-IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180010150 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@AEA_N@Z @ 0x180070AC4 (-ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@A.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCHolographicInputManager::ProcessCursorData(
        __int64 a1,
        struct IMPCInputProviderBase *a2,
        __int64 a3,
        const char *a4,
        __int64 a5)
{
  int v5; // r12d
  MPCHolographicInputManager *v9; // rcx
  char v10; // bl
  __int64 v11; // rax
  char v12; // al
  std::_Mutex_base *v13; // rbx
  int v14; // eax
  int v15; // xmm8_4
  int v16; // xmm7_4
  int v17; // xmm6_4
  __int64 v18; // rdx
  __int64 v19; // r8
  const char *v20; // r9
  struct IMPCInputPostProcessor *PostProcessor; // rdi
  int (__fastcall *v22)(struct IMPCInputPostProcessor *, _QWORD, __int64 *); // rbx
  unsigned int v23; // eax
  float *v24; // rax
  __int64 result; // rax
  int v26; // eax
  int v27; // [rsp+20h] [rbp-60h] BYREF
  std::_Mutex_base *v28; // [rsp+28h] [rbp-58h] BYREF
  __int64 v29; // [rsp+38h] [rbp-48h] BYREF
  int v30; // [rsp+40h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v5 = (int)a4;
  if ( !*(_BYTE *)(a1 + 3364) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x378,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
  *(_OWORD *)(a5 + 24) = *(_OWORD *)(a3 + 168);
  *(_OWORD *)(a5 + 40) = *(_OWORD *)(a3 + 184);
  *(_OWORD *)(a5 + 56) = *(_OWORD *)(a3 + 200);
  *(_OWORD *)(a5 + 72) = *(_OWORD *)(a3 + 120);
  *(_OWORD *)(a5 + 88) = *(_OWORD *)(a3 + 136);
  *(_OWORD *)(a5 + 104) = *(_OWORD *)(a3 + 152);
  *(_OWORD *)a5 = *(_OWORD *)(a3 + 256);
  *(_QWORD *)(a5 + 16) = *(_QWORD *)(a3 + 272);
  *(_BYTE *)(a5 + 136) = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 120LL))(a2);
  *(_DWORD *)(a5 + 152) = v5;
  *(_DWORD *)(a5 + 132) = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 112LL))(a2);
  *(_BYTE *)(a5 + 160) = 0;
  *(_QWORD *)(a5 + 120) = *(_QWORD *)(a3 + 52);
  *(_DWORD *)(a5 + 128) = *(_DWORD *)(a3 + 60);
  *(_BYTE *)(a5 + 161) = *(_BYTE *)a3;
  v10 = 1;
  if ( MPCHolographicInputManager::IsMultiplePrimariesWithGazeCommit(v9, a2) )
    LODWORD(v11) = 1;
  else
    v11 = (__int64)(*(_QWORD *)(a1 + 3608) - *(_QWORD *)(a1 + 3600)) >> 3;
  *(_DWORD *)(a5 + 164) = v11;
  *(_DWORD *)(a5 + 168) = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 312LL))(a2);
  *(_QWORD *)(a5 + 176) = *(_QWORD *)(a3 + 288);
  *(_QWORD *)(a5 + 184) = *(_QWORD *)(a3 + 296);
  *(_QWORD *)(a5 + 192) = *(_QWORD *)(a3 + 304);
  LOBYTE(v27) = 0;
  if ( *(_BYTE *)(a3 + 398) )
  {
    v12 = *(_BYTE *)(a3 + 72) == 0;
    LOBYTE(v27) = v12;
    goto LABEL_6;
  }
  if ( v5 == 1 )
  {
    v26 = MPCCursorManager::ProcessProviderHitTest(
            *(MPCCursorManager **)(a1 + 3384),
            a2,
            (const struct HitTestResult3D *)a3,
            (bool *)&v27);
    if ( v26 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x392,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v26,
        v27);
    v12 = v27;
LABEL_6:
    if ( v12 )
      goto LABEL_7;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 3600) + 80LL))(**(_QWORD **)(a1 + 3600)) )
    v10 = 0;
LABEL_7:
  *(_BYTE *)(a5 + 160) = v10;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 3600) + 80LL))(**(_QWORD **)(a1 + 3600)) && v5 )
  {
    *(_BYTE *)(a5 + 24) = 0;
    *(_BYTE *)(a5 + 72) = 0;
  }
  v13 = (std::_Mutex_base *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 3336) + 128LL))(*(_QWORD *)(a1 + 3336));
  v28 = v13;
  std::_Mutex_base::lock(v13);
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 3328) + 112LL))(*(_QWORD *)(a1 + 3328), a5);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3A1,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v14,
      v27);
  _Mtx_unlock(v13);
  v15 = *(_DWORD *)(a3 + 52);
  v16 = *(_DWORD *)(a3 + 56);
  v17 = *(_DWORD *)(a3 + 60);
  v29 = 0LL;
  v30 = 0;
  PostProcessor = MPCHolographicInputManager::GetPostProcessor((MPCHolographicInputManager *)a1, v18, v19, v20);
  v22 = *(int (__fastcall **)(struct IMPCInputPostProcessor *, _QWORD, __int64 *))(*(_QWORD *)PostProcessor + 120LL);
  v23 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 328LL))(a2);
  if ( v22(PostProcessor, v23, &v29) >= 0 )
  {
    v17 = v30;
    v16 = HIDWORD(v29);
    v15 = v29;
  }
  *(_DWORD *)(a1 + 240) = v15;
  *(_DWORD *)(a1 + 244) = v16;
  *(_DWORD *)(a1 + 248) = v17;
  v24 = Windows::Foundation::Numerics::transform((float *)&v28, (float *)(a1 + 240), (float *)(a1 + 16));
  *(_QWORD *)(a1 + 252) = *(_QWORD *)v24;
  *(float *)(a1 + 260) = v24[2];
  *(_OWORD *)(a1 + 3400) = *(_OWORD *)a5;
  *(_OWORD *)(a1 + 3416) = *(_OWORD *)(a5 + 16);
  *(_OWORD *)(a1 + 3432) = *(_OWORD *)(a5 + 32);
  *(_OWORD *)(a1 + 3448) = *(_OWORD *)(a5 + 48);
  *(_OWORD *)(a1 + 3464) = *(_OWORD *)(a5 + 64);
  *(_OWORD *)(a1 + 3480) = *(_OWORD *)(a5 + 80);
  *(_OWORD *)(a1 + 3496) = *(_OWORD *)(a5 + 96);
  *(_OWORD *)(a1 + 3512) = *(_OWORD *)(a5 + 112);
  *(_OWORD *)(a1 + 3528) = *(_OWORD *)(a5 + 128);
  *(_OWORD *)(a1 + 3544) = *(_OWORD *)(a5 + 144);
  *(_OWORD *)(a1 + 3560) = *(_OWORD *)(a5 + 160);
  *(_OWORD *)(a1 + 3576) = *(_OWORD *)(a5 + 176);
  result = *(_QWORD *)(a5 + 192);
  *(_QWORD *)(a1 + 3592) = result;
  return result;
}
