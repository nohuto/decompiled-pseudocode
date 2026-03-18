/*
 * XREFs of ?CreateScanout@CDDisplaySwapChain@@IEAAJIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1801B6AC0
 * Callers:
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180034920 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_.c)
 *     ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180034B8C (-FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAU.c)
 *     ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIW4ScanoutScaleMode@1@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180035C58 (-FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIW4Sc.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDisplayRotationFromDxgiRotation@CDDisplaySwapChain@@IEBA?AW4DisplayRotation@Core@Display@Devices@Windows@@W4DXGI_MODE_ROTATION@@@Z @ 0x1801B700C (-GetDisplayRotationFromDxgiRotation@CDDisplaySwapChain@@IEBA-AW4DisplayRotation@Core@Display@Dev.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::CreateScanout(
        CDDisplaySwapChain *this,
        unsigned int a2,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a3,
        __int64 a4,
        unsigned int a5,
        struct Windows::Devices::Display::Core::IDisplayScanout **a6)
{
  int v6; // esi
  unsigned int v7; // r14d
  const struct DWM_PRESENT_MULTIPLANE_OVERLAY *v8; // rdi
  __int64 v9; // rdx
  BOOL v10; // r12d
  bool v11; // zf
  __int64 *v12; // rcx
  BOOL v13; // r15d
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  int v18; // eax
  unsigned int v19; // ebx
  unsigned __int64 v20; // rax
  __m128i v21; // xmm3
  __int64 v22; // rcx
  __m128i v23; // xmm4
  __m128i v24; // xmm6
  __m128i v25; // xmm5
  __m128i v26; // xmm2
  __m128i v27; // xmm0
  __int32 v28; // r10d
  __int32 v29; // ebx
  __int32 v30; // r9d
  int v31; // r15d
  __int64 (__fastcall *v32)(__int64, unsigned __int64, _QWORD, __int64, int, int *, int *, _DWORD *, int, BOOL, _QWORD); // r13
  int v33; // edi
  unsigned __int32 v34; // r11d
  int v35; // eax
  __m128i v36; // xmm0
  unsigned __int32 v37; // xmm1_4
  int v38; // r8d
  unsigned __int64 v39; // xmm4_8
  int v40; // eax
  __int32 v41; // r10d
  unsigned int v42; // edi
  __m128i v43; // xmm5
  unsigned __int64 v44; // rdx
  __int32 v45; // eax
  __int32 v46; // eax
  char v47; // si
  int v48; // eax
  int v49; // eax
  int v50; // eax
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned int DisplayRotationFromDxgiRotation; // eax
  __int64 v54; // rcx
  __int64 (__fastcall *v55)(__int64, _QWORD, _QWORD); // r10
  int v56; // eax
  int v57; // eax
  struct Windows::Devices::Display::Core::IDisplayScanout *v58; // rax
  unsigned __int32 v59; // edx
  int v60; // r8d
  int v61; // r9d
  int v62; // eax
  unsigned __int32 v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // [rsp+48h] [rbp-C0h]
  int v68; // [rsp+68h] [rbp-A0h]
  __int64 v69; // [rsp+70h] [rbp-98h] BYREF
  int v70; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v71; // [rsp+7Ch] [rbp-8Ch]
  struct Windows::Devices::Display::Core::IDisplayScanout *v72; // [rsp+80h] [rbp-88h] BYREF
  __int64 v73; // [rsp+88h] [rbp-80h] BYREF
  int v74; // [rsp+98h] [rbp-70h] BYREF
  int v75; // [rsp+9Ch] [rbp-6Ch]
  __int32 v76; // [rsp+A0h] [rbp-68h]
  int v77; // [rsp+A4h] [rbp-64h]
  int v78; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int32 v79; // [rsp+ACh] [rbp-5Ch]
  int v80; // [rsp+B0h] [rbp-58h]
  unsigned __int32 v81; // [rsp+B4h] [rbp-54h]
  unsigned int v82; // [rsp+B8h] [rbp-50h]
  BOOL v83; // [rsp+BCh] [rbp-4Ch]
  __int64 v84; // [rsp+C0h] [rbp-48h]
  _DWORD v85[4]; // [rsp+C8h] [rbp-40h] BYREF
  const struct DWM_PRESENT_MULTIPLANE_OVERLAY *v86; // [rsp+D8h] [rbp-30h]
  struct Windows::Devices::Display::Core::IDisplayScanout **v87; // [rsp+E0h] [rbp-28h]
  __m128i v88; // [rsp+E8h] [rbp-20h]
  __m128i v89; // [rsp+F8h] [rbp-10h]
  __m128i v90; // [rsp+108h] [rbp+0h]
  __m128i v91; // [rsp+118h] [rbp+10h]
  __m128i v92; // [rsp+128h] [rbp+20h]
  __m128i v93; // [rsp+138h] [rbp+30h]
  __m128i v94; // [rsp+158h] [rbp+50h]
  __m128i v95; // [rsp+168h] [rbp+60h]
  __m128i v96; // [rsp+178h] [rbp+70h]

  v6 = 1;
  v7 = a2;
  v82 = a2;
  v8 = a3;
  v86 = a3;
  v87 = a6;
  v68 = 1;
  if ( a2 == 1 )
  {
    if ( (*((_BYTE *)a3 + 16) & 4) != 0 )
      v6 = 2;
    v68 = v6;
  }
  v9 = *((_QWORD *)this + 53);
  v10 = 0;
  v11 = *((_BYTE *)this + 277) == 0;
  v12 = (__int64 *)*((_QWORD *)this + 48);
  v69 = 0LL;
  v13 = !v11;
  v73 = 0LL;
  v83 = v13;
  v14 = *v12;
  v72 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, __int64, struct Windows::Devices::Display::Core::IDisplayScanout **))(v14 + 48))(
          v12,
          v9,
          &v72);
  v16 = v15;
  if ( v15 >= 0 )
  {
    v18 = (**(__int64 (__fastcall ***)(struct Windows::Devices::Display::Core::IDisplayScanout *, GUID *, __int64 *))v72)(
            v72,
            &GUID_2e5eba29_7eb8_5e77_a328_83a2ab9877d7,
            &v69);
    v16 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x5BDu, 0LL);
    }
    else
    {
      v19 = 0;
      while ( 1 )
      {
        v71 = v19;
        if ( v19 >= v7 )
          break;
        v20 = (unsigned __int64)v19 << 7;
        v70 = 0;
        v84 = 0LL;
        v21 = *(__m128i *)((char *)v8 + v20 + 16);
        v22 = *(_QWORD *)((char *)v8 + v20 + 8);
        v23 = *(__m128i *)((char *)v8 + v20 + 32);
        v94 = v21;
        v95 = v23;
        v24 = *(__m128i *)((char *)v8 + v20 + 48);
        v25 = *(__m128i *)((char *)v8 + v20);
        v96 = v24;
        v26 = *(__m128i *)((char *)v8 + v20 + 64);
        v27 = *(__m128i *)((char *)v8 + v20 + 80);
        v91 = v25;
        v88 = v21;
        v90 = v23;
        v92 = v24;
        v89 = v26;
        v93 = v27;
        if ( v22 )
        {
          v84 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 48LL))(v22, &v70);
          if ( !v84 )
          {
            v16 = -2147024809;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x5CBu, 0LL);
            goto LABEL_4;
          }
          v26 = v89;
          v21 = v88;
          v23 = v90;
          v25 = v91;
          v24 = v92;
        }
        v11 = v19 == 0;
        v28 = v96.m128i_i32[3];
        v29 = v23.m128i_i32[0];
        if ( v11 )
          v10 = v13;
        v30 = v26.m128i_i32[0];
        v31 = _mm_cvtsi128_si32(_mm_srli_si128(v21, 4));
        v32 = *(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64, int, int *, int *, _DWORD *, int, BOOL, _QWORD))(*(_QWORD *)v69 + 96LL);
        v33 = v31;
        v34 = _mm_srli_si128(v24, 8).m128i_u32[0];
        v35 = _mm_cvtsi128_si32(_mm_srli_si128(v24, 4));
        v36 = _mm_srli_si128(v23, 4);
        v37 = _mm_srli_si128(v21, 8).m128i_u32[0];
        v38 = v31;
        if ( v6 == 1 )
          v33 = v35;
        v39 = _mm_srli_si128(v23, 8).m128i_u64[0];
        v40 = _mm_cvtsi128_si32(v36);
        if ( v6 != 1 )
          v34 = v37;
        v85[0] = v33;
        v85[1] = v34;
        v78 = v31;
        if ( v68 != 1 )
          v28 = v94.m128i_i32[3];
        v41 = v28 - v33;
        v67 = _mm_cvtsi128_si32(_mm_srli_si128(v26, 8));
        v42 = _mm_cvtsi128_si32(v25);
        v43 = _mm_srli_si128(v25, 4);
        if ( v68 != 1 )
          v30 = v29;
        v85[2] = v41;
        v79 = v37;
        v85[3] = v30 - v34;
        v44 = v39;
        if ( v68 == 1 )
          v38 = v40;
        v45 = v95.m128i_i32[3];
        if ( v68 != 1 )
          v45 = v94.m128i_i32[3];
        v74 = v38;
        if ( v68 != 1 )
          v44 = v37;
        v76 = v45 - v38;
        v46 = v24.m128i_i32[0];
        if ( v68 != 1 )
          v46 = v29;
        v75 = v44;
        v77 = v46 - v44;
        v80 = v94.m128i_i32[3] - v31;
        v81 = v29 - v37;
        v47 = _mm_cvtsi128_si32(v43);
        LOBYTE(v44) = v47;
        v48 = v32(v69, v44, v42, v84, v70, &v78, &v74, v85, v67, v10, 0LL);
        v10 = 0;
        v16 = v48;
        if ( v48 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v48, 0x5DEu, 0LL);
          goto LABEL_4;
        }
        if ( v47 )
        {
          v49 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v69 + 56LL))(
                  v69,
                  v42,
                  1LL,
                  0xFFFFFFFFLL);
          v16 = v49;
          if ( v49 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v49, 0x5E5u, 0LL);
            goto LABEL_4;
          }
          v50 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v69 + 128LL))(
                  v69,
                  v42,
                  (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v93, 12)));
          v16 = v50;
          if ( v50 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v50, 0x5E9u, 0LL);
            goto LABEL_4;
          }
          v52 = 0LL;
          if ( (v88.m128i_i8[0] & 2) != 0 )
            v52 = 2LL;
          if ( (v88.m128i_i8[0] & 1) != 0 )
            v52 = (unsigned int)v52 | 1;
          DisplayRotationFromDxgiRotation = CDDisplaySwapChain::GetDisplayRotationFromDxgiRotation(
                                              v69,
                                              (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v89, 4)),
                                              v51,
                                              v52);
          v56 = v55(v54, v42, DisplayRotationFromDxgiRotation);
          v16 = v56;
          if ( v56 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v56, 0x5EEu, 0LL);
            goto LABEL_4;
          }
        }
        v8 = v86;
        v19 = v71 + 1;
        v6 = v68;
        v7 = v82;
        v13 = v83;
      }
      if ( v6 != 2 )
        goto LABEL_46;
      v59 = *((_DWORD *)v8 + 10);
      v60 = *((_DWORD *)v8 + 5);
      v61 = *((_DWORD *)v8 + 6);
      v62 = *((_DWORD *)v8 + 11) - *((_DWORD *)v8 + 9);
      v78 = *((_DWORD *)v8 + 9);
      v80 = v62;
      v63 = *((_DWORD *)v8 + 12) - v59;
      v79 = v59;
      v81 = v63;
      v64 = *((_DWORD *)v8 + 7) - v60;
      v74 = v60;
      v76 = v64;
      v65 = *((_DWORD *)v8 + 8) - v61;
      v75 = v61;
      v77 = v65;
      v66 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, int *, _DWORD))(*(_QWORD *)v69 + 64LL))(
              v69,
              0LL,
              &v74,
              &v78,
              0);
      v16 = v66;
      if ( v66 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v66, 0x5F9u, 0LL);
      }
      else
      {
LABEL_46:
        if ( v73 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
        (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v69)(
          v69,
          &GUID_489d4937_ac3c_47dd_8bcc_1e9449e841b2,
          &v73);
        v57 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v73 + 56LL))(v73);
        v16 = v57;
        if ( v57 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v57, 0x601u, 0LL);
        }
        else
        {
          v58 = v72;
          v72 = 0LL;
          *v87 = v58;
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x5BCu, 0LL);
  }
LABEL_4:
  if ( v73 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
  if ( v69 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
  if ( v72 )
    (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayScanout *))(*(_QWORD *)v72 + 16LL))(v72);
  return v16;
}
