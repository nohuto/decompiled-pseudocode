/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1801FF5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z @ 0x180127258 (-AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z.c)
 *     ?GetDisplayRotationFromDxgiRotation@CDDisplaySwapChain@@IEBA?AW4DisplayRotation@Core@Display@Devices@Windows@@W4DXGI_MODE_ROTATION@@@Z @ 0x1801B700C (-GetDisplayRotationFromDxgiRotation@CDDisplaySwapChain@@IEBA-AW4DisplayRotation@Core@Display@Dev.c)
 *     ?CheckMPOCache@CD3DDevice@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18021713C (-CheckMPOCache@CD3DDevice@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo@@@details@wil@@QEAA_NXZ @ 0x18023E358 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo@@@details@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CDDisplaySwapChain::CheckMultiplaneOverlaySupport(
        CDDisplaySwapChain *this,
        const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  bool v4; // r13
  unsigned int v5; // r15d
  const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *v6; // rsi
  CDDisplaySwapChain *v7; // r12
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 v12; // rax
  unsigned int *v13; // rbx
  int v14; // r12d
  bool v15; // zf
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // r8d
  unsigned int v20; // r15d
  unsigned int v21; // eax
  _DWORD *v22; // rax
  int v23; // edx
  int v24; // r8d
  unsigned int v25; // r9d
  unsigned int v26; // r10d
  int v27; // eax
  unsigned int v28; // edx
  int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // r8
  __int64 v32; // rdx
  int v33; // eax
  unsigned int v34; // r8d
  unsigned int v35; // r9d
  unsigned int v36; // eax
  int v37; // ecx
  unsigned int v38; // eax
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rbx
  __int64 (__fastcall *v42)(__int64, __int64 *); // r14
  int v43; // eax
  int v44; // eax
  int v45; // eax
  bool v46; // al
  CD3DDevice *v47; // rcx
  int v48; // r14d
  bool *v49; // rax
  int v50; // eax
  int v51; // eax
  const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *v52; // rcx
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  unsigned int v61; // r11d
  int v62; // r9d
  unsigned int v63; // r10d
  int v64; // eax
  int v65; // r9d
  __int64 v66; // rdx
  unsigned int v67; // eax
  unsigned int v68; // r8d
  __int64 (__fastcall *v69)(__int64 *, __int64, _QWORD, bool *, int, unsigned int *, int *, unsigned int *, _DWORD, _DWORD, _QWORD); // r12
  int v70; // edx
  int v71; // eax
  unsigned int v72; // eax
  __int64 v73; // rdx
  int v74; // eax
  unsigned int v75; // esi
  int v76; // eax
  int v77; // eax
  unsigned int DisplayRotationFromDxgiRotation; // eax
  __int64 v79; // rcx
  __int64 (__fastcall *v80)(__int64, _QWORD, _QWORD); // r10
  int v81; // eax
  int v82; // eax
  unsigned int v83; // edx
  int v84; // r8d
  unsigned int v85; // r9d
  int v86; // eax
  unsigned int v87; // eax
  unsigned int v88; // eax
  unsigned int v89; // eax
  int v90; // eax
  int v91; // eax
  bool v92; // cl
  unsigned int v93[2]; // [rsp+20h] [rbp-E0h]
  unsigned int v94; // [rsp+50h] [rbp-B0h]
  unsigned int v95; // [rsp+58h] [rbp-A8h]
  bool v96; // [rsp+70h] [rbp-90h] BYREF
  __int64 v97; // [rsp+78h] [rbp-88h] BYREF
  char v98[4]; // [rsp+80h] [rbp-80h] BYREF
  int v99; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 *v100; // [rsp+88h] [rbp-78h] BYREF
  __int64 v101; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v102; // [rsp+98h] [rbp-68h]
  int v103; // [rsp+9Ch] [rbp-64h] BYREF
  __int64 v104[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v105; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v106; // [rsp+B4h] [rbp-4Ch]
  unsigned int v107; // [rsp+B8h] [rbp-48h]
  unsigned int v108; // [rsp+BCh] [rbp-44h]
  unsigned int v109; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v110; // [rsp+C4h] [rbp-3Ch]
  int v111; // [rsp+C8h] [rbp-38h]
  unsigned int v112; // [rsp+CCh] [rbp-34h]
  int v113; // [rsp+D0h] [rbp-30h]
  unsigned int v114; // [rsp+D4h] [rbp-2Ch]
  const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *v115; // [rsp+D8h] [rbp-28h]
  bool *v116; // [rsp+E0h] [rbp-20h]
  unsigned int v117; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v118; // [rsp+F4h] [rbp-Ch]
  int v119; // [rsp+F8h] [rbp-8h]
  unsigned int v120; // [rsp+FCh] [rbp-4h]
  unsigned int v121; // [rsp+100h] [rbp+0h]
  unsigned int v122; // [rsp+104h] [rbp+4h]
  unsigned int v123; // [rsp+108h] [rbp+8h]
  const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *v124; // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v125)(__int64, __int64, __int64, const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *, _QWORD, unsigned int *, _DWORD *, _DWORD *, _DWORD, int, unsigned int, unsigned int); // [rsp+118h] [rbp+18h]
  _DWORD *v126; // [rsp+120h] [rbp+20h]
  CDDisplaySwapChain *v127; // [rsp+128h] [rbp+28h]
  _DWORD v128[4]; // [rsp+130h] [rbp+30h] BYREF
  _DWORD v129[4]; // [rsp+140h] [rbp+40h] BYREF
  __int128 v130; // [rsp+150h] [rbp+50h]
  __int128 v131; // [rsp+160h] [rbp+60h]
  __int128 v132; // [rsp+170h] [rbp+70h]
  __int128 v133; // [rsp+180h] [rbp+80h]
  __int128 v134; // [rsp+190h] [rbp+90h]
  __int128 v135; // [rsp+1A0h] [rbp+A0h]
  __int128 v136; // [rsp+1B0h] [rbp+B0h]
  __int128 v137; // [rsp+1C0h] [rbp+C0h]
  __int128 v138; // [rsp+1D0h] [rbp+D0h]

  v4 = 0;
  v116 = a4;
  v96 = 0;
  v5 = a3;
  *a4 = 0;
  v6 = a2;
  v114 = a3;
  v7 = this;
  v124 = a2;
  v127 = this;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplay_AggCheckMpo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DDisplay_AggCheckMpo>::GetImpl'::`2'::impl) )
  {
    v47 = (CD3DDevice *)*((_QWORD *)v7 + 5);
    v97 = 0LL;
    v100 = 0LL;
    if ( CD3DDevice::CheckMPOCache(v47, v6, v5, &v96) )
    {
      v4 = v96;
LABEL_43:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v100);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v97);
      return v4;
    }
    v99 = 1;
    v48 = 1;
    if ( v5 == 1 )
    {
      if ( (*((_BYTE *)v6 + 24) & 4) != 0 )
        v48 = 2;
      v99 = v48;
    }
    v125 = (__int64 (__fastcall *)(__int64, __int64, __int64, const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *, _QWORD, unsigned int *, _DWORD *, _DWORD *, _DWORD, int, unsigned int, unsigned int))*((_QWORD *)v7 + 45);
    v49 = *(bool **)(*(_QWORD *)v125 + 48LL);
    v116 = v49;
    if ( v97 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v97 + 16LL))(v97);
      v49 = v116;
    }
    v50 = ((__int64 (__fastcall *)(__int64 (__fastcall *)(__int64, __int64, __int64, const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *, _QWORD, unsigned int *, _DWORD *, _DWORD *, _DWORD, int, unsigned int, unsigned int), _QWORD, __int64 *))v49)(
            v125,
            *((_QWORD *)v7 + 50),
            &v97);
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v50, 0x1ADu, 0LL);
    }
    else
    {
      if ( v100 )
        (*(void (__fastcall **)(__int64 *))(*v100 + 16))(v100);
      v51 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v97)(
              v97,
              &GUID_2e5eba29_7eb8_5e77_a328_83a2ab9877d7,
              (__int64 *)&v100);
      if ( v51 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v51, 0x1AFu, 0LL);
      }
      else
      {
        v102 = 0;
        if ( v5 )
        {
          v52 = v6;
          v115 = v6;
          while ( 1 )
          {
            v103 = 0;
            v53 = *((_OWORD *)v52 + 1);
            v130 = *(_OWORD *)v52;
            v54 = *((_OWORD *)v52 + 2);
            v131 = v53;
            v55 = *((_OWORD *)v52 + 3);
            v132 = v54;
            v56 = *((_OWORD *)v52 + 4);
            v133 = v55;
            v57 = *((_OWORD *)v52 + 5);
            v134 = v56;
            v58 = *((_OWORD *)v52 + 6);
            v135 = v57;
            v59 = *((_OWORD *)v52 + 7);
            v136 = v58;
            v60 = *((_OWORD *)v52 + 8);
            v137 = v59;
            v138 = v60;
            v116 = (bool *)(*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)&v130 + 1) + 48LL))(
                             *((_QWORD *)&v130 + 1),
                             &v103);
            if ( !v116 )
              goto LABEL_43;
            v61 = HIDWORD(v131);
            if ( v48 == 1 )
              v61 = HIDWORD(v133);
            v62 = DWORD1(v134);
            v63 = v134;
            if ( v99 != 1 )
            {
              v62 = DWORD1(v132);
              v63 = v132;
            }
            v64 = DWORD2(v134);
            v65 = v62 - v61;
            v66 = *v100;
            if ( v99 != 1 )
              v64 = DWORD2(v132);
            v67 = v64 - v63;
            v111 = v65;
            v68 = v133;
            v69 = *(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, bool *, int, unsigned int *, int *, unsigned int *, _DWORD, _DWORD, _QWORD))(v66 + 96);
            v70 = HIDWORD(v131);
            if ( v99 == 1 )
              v70 = HIDWORD(v132);
            v112 = v67;
            if ( v99 != 1 )
              v68 = v132;
            v71 = DWORD1(v133);
            if ( v99 != 1 )
              v71 = DWORD1(v132);
            v105 = v70;
            v72 = v71 - v70;
            v106 = v68;
            v73 = (unsigned int)v135;
            v107 = v72;
            v74 = DWORD2(v133);
            if ( v99 != 1 )
              v74 = DWORD2(v132);
            v109 = v61;
            v108 = v74 - v68;
            v119 = DWORD1(v132) - HIDWORD(v131);
            v75 = v130;
            v110 = v63;
            LOBYTE(v73) = 1;
            v117 = HIDWORD(v131);
            v118 = v132;
            v120 = DWORD2(v132) - v132;
            v76 = v69(v100, v73, (unsigned int)v130, v116, v103, &v117, &v105, &v109, v135, 0, 0LL);
            if ( v76 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v76, 0x1CAu, 0LL);
              goto LABEL_90;
            }
            v77 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v100 + 128))(v100, v75, DWORD1(v136));
            if ( v77 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v77, 0x1CEu, 0LL);
              goto LABEL_90;
            }
            DisplayRotationFromDxgiRotation = CDDisplaySwapChain::GetDisplayRotationFromDxgiRotation(
                                                (__int64)v100,
                                                SHIDWORD(v134));
            v81 = v80(v79, v75, DisplayRotationFromDxgiRotation);
            if ( v81 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v81, 0x1D3u, 0LL);
              goto LABEL_90;
            }
            v82 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v100 + 136))(v100, v75, (unsigned int)v138);
            if ( v82 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v82, 0x1D5u, 0LL);
              goto LABEL_90;
            }
            v5 = v114;
            v52 = (const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *)((char *)v115 + 144);
            v48 = v99;
            ++v102;
            v115 = (const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *)((char *)v115 + 144);
            if ( v102 >= v114 )
            {
              v6 = v124;
              v7 = v127;
              break;
            }
          }
        }
        if ( v48 != 2 )
          goto LABEL_84;
        v83 = *((_DWORD *)v6 + 12);
        v84 = *((_DWORD *)v6 + 7);
        v85 = *((_DWORD *)v6 + 8);
        v86 = *((_DWORD *)v6 + 13) - *((_DWORD *)v6 + 11);
        v109 = *((_DWORD *)v6 + 11);
        v111 = v86;
        v87 = *((_DWORD *)v6 + 14) - v83;
        v110 = v83;
        v112 = v87;
        v88 = *((_DWORD *)v6 + 9) - v84;
        v105 = v84;
        v107 = v88;
        v89 = *((_DWORD *)v6 + 10) - v85;
        v106 = v85;
        v108 = v89;
        v90 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, int *, unsigned int *, _DWORD))(*v100 + 64))(
                v100,
                0LL,
                &v105,
                &v109,
                0);
        if ( v90 >= 0 )
        {
LABEL_84:
          v91 = (*(__int64 (__fastcall **)(__int64 *))(*v100 + 72))(v100);
          v92 = v96;
          if ( v91 >= 0 )
            v92 = 1;
          v96 = v92;
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v100);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v97);
          goto LABEL_87;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v90, 0x1DFu, 0LL);
      }
    }
LABEL_90:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v100);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v97);
    return v96;
  }
  v8 = (__int64 *)*((_QWORD *)v7 + 46);
  v101 = 0LL;
  v104[0] = 0LL;
  v9 = *v8;
  v97 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v9 + 48))(v8, &v97);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x14Fu, 0LL);
  }
  else
  {
    if ( CD3DDevice::CheckMPOCache(*((CD3DDevice **)v7 + 5), v6, v5, &v96) )
    {
      v4 = v96;
LABEL_5:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v101);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v104);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v97);
      return v4;
    }
    v12 = 0LL;
    v102 = 0;
    if ( v5 )
    {
      while ( 1 )
      {
        v99 = 0;
        v13 = (unsigned int *)((char *)v6 + 144 * v12);
        v124 = (const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *)(*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v13 + 1) + 48LL))(
                                                                                 *((_QWORD *)v13 + 1),
                                                                                 &v99);
        if ( !v124 )
          goto LABEL_5;
        v14 = 1;
        if ( !*v13 && (v13[6] & 4) != 0 )
          v14 = 2;
        v15 = (v13[6] & 2) == 0;
        v125 = *(__int64 (__fastcall **)(__int64, __int64, __int64, const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *, _QWORD, unsigned int *, _DWORD *, _DWORD *, _DWORD, int, unsigned int, unsigned int))(*(_QWORD *)v97 + 48LL);
        v16 = 0;
        if ( !v15 )
          v16 = 2;
        v113 = v16;
        if ( (v13[6] & 1) != 0 )
          v113 = v16 | 1;
        LODWORD(v100) = CDDisplaySwapChain::GetDisplayRotationFromDxgiRotation(v97, v13[19]);
        v18 = 15LL;
        if ( v14 != 1 )
          v18 = 7LL;
        v19 = v13[v18 + 1];
        v20 = v13[v18];
        v122 = v13[v18 + 2] - v20;
        v21 = v13[v18 + 3] - v19;
        v121 = v19;
        v123 = v21;
        if ( v14 == 1 )
        {
          v22 = v13 + 11;
          v115 = (const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *)(v13 + 11);
        }
        else
        {
          v115 = (const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *)(v13 + 11);
          v22 = v13 + 7;
        }
        v23 = *v22;
        v24 = v22[1];
        v25 = v13[7];
        v26 = v13[8];
        v126 = v22;
        v27 = v22[2] - v23;
        v129[0] = v23;
        v28 = v13[25];
        v129[2] = v27;
        v128[0] = v20;
        v128[1] = v121;
        v129[3] = v126[3] - v24;
        v29 = v13[9] - v25;
        v128[2] = v122;
        v119 = v29;
        v30 = v13[10] - v26;
        v129[1] = v24;
        v31 = *v13;
        v120 = v30;
        v95 = v13[20];
        v94 = v28;
        v32 = *((_QWORD *)v13 + 17);
        v117 = v25;
        v128[3] = v123;
        v118 = v26;
        v93[0] = v99;
        v33 = v125(v17, v32, v31, v124, *(_QWORD *)v93, &v117, v129, v128, (_DWORD)v100, v113, v94, v95);
        v5 = v114;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, 0x177u, 0LL);
          goto LABEL_40;
        }
        if ( v14 == 2 )
        {
          v34 = v13[7];
          v35 = v13[8];
          v36 = v13[13];
          v106 = v13[12];
          v109 = v34;
          v110 = v35;
          v37 = *(_DWORD *)v115;
          v107 = v36 - *(_DWORD *)v115;
          v38 = v13[14] - v106;
          v105 = v37;
          v108 = v38;
          v111 = v13[9] - v34;
          v39 = *((_QWORD *)v13 + 17);
          v112 = v13[10] - v35;
          v40 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *, int *, _DWORD))(*(_QWORD *)v97 + 56LL))(
                  v97,
                  v39,
                  0LL,
                  &v109,
                  &v105,
                  0);
          if ( v40 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v40, 0x184u, 0LL);
            goto LABEL_40;
          }
        }
        v12 = v102 + 1;
        v102 = v12;
        if ( (unsigned int)v12 >= v5 )
        {
          v7 = v127;
          break;
        }
      }
    }
    v41 = v97;
    v42 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v97 + 64LL);
    if ( v101 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v101 + 16LL))(v101);
    v43 = v42(v41, &v101);
    if ( v43 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v43, 0x189u, 0LL);
    }
    else
    {
      v98[0] = 0;
      v44 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v101 + 64LL))(v101, v98);
      if ( v44 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v44, 0x18Du, 0LL);
      }
      else
      {
        v103 = 0;
        *v116 = v98[0] != 0;
        v45 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v101 + 48LL))(v101, &v103);
        if ( v45 >= 0 )
        {
          v46 = v96;
          if ( v103 == 1 )
            v46 = 1;
          v96 = v46;
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v101);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v104);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v97);
LABEL_87:
          CD3DDevice::AddCheckMPOCache(*((CD3DDevice **)v7 + 5), v6, v5, v96);
          return v96;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v45, 0x192u, 0LL);
      }
    }
  }
LABEL_40:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v101);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v104);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v97);
  return v96;
}
