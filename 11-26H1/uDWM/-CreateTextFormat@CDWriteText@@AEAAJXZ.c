/*
 * XREFs of ?CreateTextFormat@CDWriteText@@AEAAJXZ @ 0x18000C5B4
 * Callers:
 *     ?CreateTextLayout@CDWriteText@@AEAAJXZ @ 0x18000BE00 (-CreateTextLayout@CDWriteText@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C124 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18000C160 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x18000CE30 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Reallocate_grow_by@V_lambda_1_@?1??append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV34@_KG@Z@_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_1_@?1??append@01@QEAAAEAV01@0G@Z@_KG@Z @ 0x18000CF40 (--$_Reallocate_grow_by@V_lambda_1_@-1--append@-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 *     ?assign@?$_WChar_traits@G@std@@SAPEAGQEAG_KG@Z @ 0x18007539C (-assign@-$_WChar_traits@G@std@@SAPEAGQEAG_KG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CDWriteText::CreateTextFormat(CDWriteText *this)
{
  int v2; // r12d
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  int UserDefaultLocaleName; // esi
  __int64 v8; // rdx
  unsigned int v9; // r14d
  __int64 v10; // rbx
  int (__fastcall *v11)(__int64, char *, __int64 *); // rdi
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64 *); // rdi
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64 *); // rdi
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  __int64 v22; // r8
  __int128 *v23; // r8
  __int64 v24; // rsi
  __int64 (__fastcall *v25)(__int64, __int128 *, _QWORD, _QWORD); // rdi
  __int128 *v26; // rdx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rdx
  int v51; // [rsp+28h] [rbp-E0h]
  __int64 v52; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v53; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v55; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v56; // [rsp+78h] [rbp-90h] BYREF
  int v57; // [rsp+7Ch] [rbp-8Ch] BYREF
  char v58; // [rsp+80h] [rbp-88h]
  unsigned int v59; // [rsp+84h] [rbp-84h] BYREF
  __int64 v60; // [rsp+88h] [rbp-80h] BYREF
  __int128 v61; // [rsp+90h] [rbp-78h] BYREF
  __m128i si128; // [rsp+A0h] [rbp-68h]
  __int128 v63; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v65; // [rsp+C8h] [rbp-40h]
  __int128 v66; // [rsp+D0h] [rbp-38h] BYREF
  int v67; // [rsp+E0h] [rbp-28h]
  WCHAR LocaleName[88]; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v2 = 0;
  v54 = 0LL;
  v3 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31);
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 136LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
  v5 = v4(v3, &v54);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFD,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v5,
      v51);
    v33 = v54;
    if ( v54 )
    {
      v54 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    }
    return v6;
  }
  v52 = 0LL;
  v55 = 0LL;
  v53 = 0LL;
  UserDefaultLocaleName = GetUserDefaultLocaleName(LocaleName, 85);
  v61 = 0LL;
  si128 = 0LL;
  std::wstring::_Construct<1,unsigned short const *>(&v61, v8, 8LL);
  v9 = 400;
  v10 = v54;
  v11 = *(int (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v54 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
  if ( v11(v10, (char *)this + 264, &v52) >= 0 )
  {
    v12 = v52;
    v13 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v52 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
    v14 = v13(v12, &v55);
    v6 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x111,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
        (const char *)(unsigned int)v14,
        v51);
      if ( si128.m128i_i64[1] > 7uLL )
        std::_Deallocate<16>(v61, 2 * si128.m128i_i64[1] + 2);
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOWORD(v61) = 0;
      v46 = v53;
      if ( v53 )
      {
        v53 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
      }
      v47 = v55;
      if ( v55 )
      {
        v55 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
      }
      v48 = v52;
      if ( v52 )
      {
        v52 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
      }
      v49 = v54;
      if ( v54 )
      {
        v54 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
      }
      return v6;
    }
    v15 = v55;
    v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v55 + 48LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
    v17 = v16(v15, &v53);
    v6 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x112,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
        (const char *)(unsigned int)v17,
        v51);
      if ( si128.m128i_i64[1] > 7uLL )
        std::_Deallocate<16>(v61, 2 * si128.m128i_i64[1] + 2);
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOWORD(v61) = 0;
      v42 = v53;
      if ( v53 )
      {
        v53 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      }
      v43 = v55;
      if ( v55 )
      {
        v55 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
      }
      v44 = v52;
      if ( v52 )
      {
        v52 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
      }
      v45 = v54;
      if ( v54 )
      {
        v54 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
      }
      return v6;
    }
    v56 = 0;
    v57 = 0;
    if ( UserDefaultLocaleName )
    {
      v20 = (*(__int64 (__fastcall **)(__int64, WCHAR *, unsigned int *, int *))(*(_QWORD *)v53 + 32LL))(
              v53,
              LocaleName,
              &v56,
              &v57);
      v6 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x11A,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
          (const char *)(unsigned int)v20,
          v51);
LABEL_89:
        std::wstring::~wstring(&v61);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
        return v6;
      }
      if ( v57 )
        goto LABEL_11;
    }
    v18 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, unsigned int *, int *))(*(_QWORD *)v53 + 32LL))(
            v53,
            L"en-us",
            &v56,
            &v57);
    v6 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11E,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
        (const char *)(unsigned int)v18,
        v51);
      if ( si128.m128i_i64[1] > 7uLL )
        std::_Deallocate<16>(v61, 2 * si128.m128i_i64[1] + 2);
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOWORD(v61) = 0;
      v38 = v53;
      if ( v53 )
      {
        v53 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      }
      v39 = v55;
      if ( v55 )
      {
        v55 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
      }
      v40 = v52;
      if ( v52 )
      {
        v52 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
      }
      v41 = v54;
      if ( v54 )
      {
        v54 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
      }
      return v6;
    }
    if ( v57 )
    {
LABEL_11:
      v19 = v56;
    }
    else
    {
      v19 = 0LL;
      v56 = 0;
    }
    v59 = 0;
    v21 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v53 + 56LL))(v53, v19, &v59);
    v6 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x129,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
        (const char *)(unsigned int)v21,
        v51);
      if ( si128.m128i_i64[1] > 7uLL )
        std::_Deallocate<16>(v61, 2 * si128.m128i_i64[1] + 2);
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOWORD(v61) = 0;
      v34 = v53;
      if ( v53 )
      {
        v53 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
      }
      v35 = v55;
      if ( v55 )
      {
        v55 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      }
      v36 = v52;
      if ( v52 )
      {
        v52 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      }
      v37 = v54;
      if ( v54 )
      {
        v54 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      }
      return v6;
    }
    v63 = 0LL;
    v64 = 0LL;
    v65 = 7LL;
    LOWORD(v63) = 0;
    if ( v59 )
    {
      if ( v59 <= 7uLL )
      {
        v64 = v59;
        std::_WChar_traits<unsigned short>::assign(&v63);
        *((_WORD *)&v63 + v50) = 0;
      }
      else
      {
        LOBYTE(v22) = v58;
        ____Reallocate_grow_by_V_lambda_1___1__append___basic_string_GU__char_traits_G_std__V__allocator_G_2__std__QEAAAEAV34__KG_Z__KG___basic_string_GU__char_traits_G_std__V__allocator_G_2__std__AEAAAEAV01__KV_lambda_1___1__append_01_QEAAAEAV01_0G_Z__KG_Z(
          &v63,
          v59,
          v22,
          v59);
      }
      v23 = &v63;
      if ( v65 > 7 )
        v23 = (__int128 *)v63;
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *, _QWORD))(*(_QWORD *)v53 + 64LL))(v53, v56, v23, v59 + 1);
    }
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 32LL))(v52);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 40LL))(v52);
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 48LL))(v52);
    if ( *((_DWORD *)this + 66) && (float)*((int *)this + 66) >= 0.0 )
    {
      v66 = 0LL;
      v67 = 0;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v52 + 88LL))(v52, &v66);
    }
    if ( v65 > 7 )
      std::_Deallocate<16>(v63, 2 * v65 + 2);
    v64 = 0LL;
    v65 = 7LL;
    LOWORD(v63) = 0;
  }
  v60 = 0LL;
  v24 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31);
  v25 = *(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD))(*(_QWORD *)v24 + 120LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 27);
  v26 = &v61;
  if ( si128.m128i_i64[1] > 7uLL )
    v26 = (__int128 *)v61;
  v27 = v25(v24, v26, 0LL, v9);
  v6 = v27;
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x158,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v27,
      v2);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v60);
    goto LABEL_89;
  }
  if ( si128.m128i_i64[1] > 7uLL )
    std::_Deallocate<16>(v61, 2 * si128.m128i_i64[1] + 2);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v61) = 0;
  v28 = v53;
  if ( v53 )
  {
    v53 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  v29 = v55;
  if ( v55 )
  {
    v55 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  v30 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v31 = v54;
  if ( v54 )
  {
    v54 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  return 0LL;
}
