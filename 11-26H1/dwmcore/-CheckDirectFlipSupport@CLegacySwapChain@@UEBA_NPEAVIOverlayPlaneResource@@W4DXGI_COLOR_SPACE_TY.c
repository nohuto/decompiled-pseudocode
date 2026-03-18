/*
 * XREFs of ?CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180128560
 * Callers:
 *     ?CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z @ 0x180036788 (-CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z @ 0x180127258 (-AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180128A30 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?DXGIPlaneFromDwmPlane@@YA?AUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@AEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@Z @ 0x180128A90 (-DXGIPlaneFromDwmPlane@@YA-AUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@AEBUDWM_CHECK_MULTI.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ??$iter_swap@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@@std@@V12@@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@@0@0@Z @ 0x18029603C (--$iter_swap@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$unique_ptr@VCCheckMPOCache@@.c)
 *     ?Matches@CCheckMPOCache@@QEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I@Z @ 0x180297BD0 (-Matches@CCheckMPOCache@@QEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CLegacySwapChain::CheckDirectFlipSupport(
        __int64 a1,
        __int64 a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        int *a4,
        _DWORD *a5)
{
  float v5; // xmm2_4
  char v6; // di
  int v10; // r15d
  char v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  bool v14; // cf
  __int64 v15; // rdi
  CCheckMPOCache **v16; // rbx
  _OWORD *v17; // rax
  int v18; // eax
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, _QWORD, __int64, int *); // rbx
  __int64 v22; // rax
  int v23; // eax
  bool v24; // bl
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  int v28; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+38h] [rbp-C8h] BYREF
  int v30; // [rsp+3Ch] [rbp-C4h]
  __int64 v31; // [rsp+40h] [rbp-C0h]
  _BYTE v32[152]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v33[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v34; // [rsp+E8h] [rbp-18h]
  int v35; // [rsp+F0h] [rbp-10h]
  int v36; // [rsp+F8h] [rbp-8h]
  int v37; // [rsp+FCh] [rbp-4h]
  int v38; // [rsp+100h] [rbp+0h]
  int v39; // [rsp+104h] [rbp+4h]
  int v40; // [rsp+108h] [rbp+8h]
  __int128 v41; // [rsp+10Ch] [rbp+Ch]
  __int128 v42; // [rsp+11Ch] [rbp+1Ch]
  __int64 v43; // [rsp+12Ch] [rbp+2Ch]
  int v44; // [rsp+134h] [rbp+34h]
  __int64 v45; // [rsp+138h] [rbp+38h]
  int v46; // [rsp+140h] [rbp+40h]
  enum DXGI_COLOR_SPACE_TYPE v47; // [rsp+144h] [rbp+44h]
  int v48; // [rsp+148h] [rbp+48h]
  int v49; // [rsp+158h] [rbp+58h]
  int v50; // [rsp+160h] [rbp+60h]
  _OWORD v51[9]; // [rsp+170h] [rbp+70h] BYREF

  v5 = *(float *)(a1 + 96);
  v6 = 0;
  v31 = a2;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v5 - 1.0) & _xmm) < 0.0000011920929 || IsDXGIColorSpaceHDR(a3) )
    v10 = 0;
  else
    v10 = (int)(float)(v5 * 80.0);
  if ( *(_DWORD *)(a1 + 64) == 2 || (v11 = 0, v10) )
    v11 = 1;
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 88LL))(v12, &v29);
  if ( *a4
    || a4[1]
    || a4[2] - *a4 != v29
    || a4[3] - a4[1] != v30
    || (v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1),
        (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 88LL))(v13, &v29),
        *a5)
    || a5[1]
    || a5[2] - *a5 != v29
    || a5[3] - a5[1] != v30 )
  {
    v6 = 1;
  }
  if ( !v11 && !v6 )
  {
    if ( (unsigned int)a3 <= DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
    {
      v20 = *(_QWORD *)(a1 + 264);
      v28 = 0;
      v21 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, int *))(*(_QWORD *)v20 + 144LL);
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 40LL))(v31, 0LL);
      v23 = v21(v20, 0LL, v22, &v28);
      if ( v23 >= 0 )
        return v28 != 0;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x186u, 0LL);
    }
    return 0;
  }
  if ( *(int *)(a1 + 64) < 1 )
    return 0;
  memset_0(v33, 0, 0x90uLL);
  v14 = v6 != 0;
  v15 = *(_QWORD *)(a1 + 40);
  v35 = *(_DWORD *)(a1 + 48);
  v34 = v31;
  v36 = v14 ? 4 : 0;
  v37 = *a4;
  v38 = a4[1];
  v39 = a4[2];
  v40 = a4[3];
  v41 = *(_OWORD *)a5;
  v43 = 1LL;
  v44 = 0;
  v42 = v41;
  v45 = 0LL;
  v46 = 0;
  v47 = a3;
  v48 = 0;
  v49 = 2;
  v50 = v10;
  if ( !*(_BYTE *)(v15 + 1493) )
  {
    ++*(_QWORD *)(v15 + 1448);
    *(_BYTE *)(v15 + 1493) = 1;
  }
  v16 = *(CCheckMPOCache ***)(v15 + 1432);
  while ( v16 != *(CCheckMPOCache ***)(v15 + 1424) )
  {
    if ( CCheckMPOCache::Matches(*--v16, (const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *)v33, 1u) )
    {
      *((_QWORD *)*v16 + 60) = *(_QWORD *)(v15 + 1448);
      v27 = *(_QWORD *)(v15 + 1432) - 8LL;
      LOBYTE(v26) = *((_BYTE *)*v16 + 488);
      if ( v16 != (CCheckMPOCache **)v27 )
        std::iter_swap<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<CCheckMPOCache>>>>,std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<CCheckMPOCache>>>>>(
          v16,
          v27,
          v25,
          v26);
      return v26;
    }
  }
  v28 = 0;
  v29 = 0;
  v17 = (_OWORD *)DXGIPlaneFromDwmPlane(v32, v33);
  v51[0] = *v17;
  v51[1] = v17[1];
  v51[2] = v17[2];
  v51[3] = v17[3];
  v51[4] = v17[4];
  v51[5] = v17[5];
  v51[6] = v17[6];
  v51[7] = v17[7];
  v51[8] = v17[8];
  v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, _OWORD *, int *, int *))(**(_QWORD **)(a1 + 264) + 176LL))(
          *(_QWORD *)(a1 + 264),
          1LL,
          v51,
          &v28,
          &v29);
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x16Eu, 0LL);
    return 0;
  }
  v24 = v28 == 1;
  if ( !v29 )
    CD3DDevice::AddCheckMPOCache(
      *(CD3DDevice **)(a1 + 40),
      (const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *)v33,
      1u,
      v28 == 1);
  return v24;
}
