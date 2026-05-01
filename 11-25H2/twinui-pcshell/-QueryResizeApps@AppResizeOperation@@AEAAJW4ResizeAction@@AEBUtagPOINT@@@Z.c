/*
 * XREFs of ?QueryResizeApps@AppResizeOperation@@AEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x180502C90
 * Callers:
 *     ?ResizeApps@AppResizeOperation@@UEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x180503480 (-ResizeApps@AppResizeOperation@@UEAAJW4ResizeAction@@AEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180659804 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?_EvictItem@CAppLayoutOperation@@IEAAJIW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x18069CD50 (-_EvictItem@CAppLayoutOperation@@IEAAJIW4APP_LAYOUT_ANIMATION_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AppResizeOperation::QueryResizeApps(__int64 a1, int a2, __int64 a3)
{
  unsigned int v5; // edi
  unsigned int v6; // r15d
  unsigned int v7; // r13d
  int v8; // r12d
  enum DEVICE_SCALE_FACTOR v9; // r8d
  int v10; // r14d
  unsigned int v11; // r12d
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rbx
  int (__fastcall *v22)(__int64, GUID *, __int64 *); // rdi
  __int64 *v23; // rax
  __int64 v24; // rdi
  __int64 (__fastcall *v25)(__int64, __int64, GUID *, __int64 *); // rbx
  __int64 *v26; // rcx
  __int64 v28; // rbx
  int (__fastcall *v29)(__int64, GUID *, __int64 *); // rdi
  __int64 *v30; // rax
  __int64 v31; // rdi
  __int64 (__fastcall *v32)(__int64, _QWORD, GUID *, ImmersiveApplicationLayout **); // rbx
  int v33; // eax
  __int128 v34; // xmm6
  __int64 v35; // rdi
  __int64 (__fastcall *v36)(__int64, __int64, GUID *, __int64 *); // rbx
  int v37; // eax
  __int64 *v38; // rcx
  __int64 v39; // rdi
  __int64 (__fastcall *v40)(__int64, __int64, GUID *, __int64 *); // rbx
  int v41; // eax
  int v42; // eax
  int v43; // edx
  __int64 v44; // rdi
  __int64 (__fastcall *v45)(__int64, _QWORD, GUID *, ImmersiveApplicationLayout **); // rbx
  int v46; // eax
  __int64 v47; // rdi
  __int64 (__fastcall *v48)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v49; // eax
  int v50; // eax
  int v51; // edx
  __int64 v52; // rdi
  __int64 (__fastcall *v53)(__int64, __int64, GUID *, ImmersiveApplicationLayout **); // rbx
  int v54; // eax
  __int64 v55; // rdi
  __int64 (__fastcall *v56)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v57; // eax
  __int64 v58; // rdi
  __int64 (__fastcall *v59)(__int64, __int64, GUID *, ImmersiveApplicationLayout **); // rbx
  int v60; // eax
  __int64 v61; // [rsp+38h] [rbp-69h] BYREF
  ImmersiveApplicationLayout *v62; // [rsp+40h] [rbp-61h] BYREF
  __int128 v63; // [rsp+48h] [rbp-59h] BYREF
  __int128 v64; // [rsp+58h] [rbp-49h] BYREF
  __int128 v65; // [rsp+68h] [rbp-39h] BYREF
  struct tagSIZE v66[2]; // [rsp+78h] [rbp-29h]
  __int64 v67; // [rsp+88h] [rbp-19h]
  __int128 v68; // [rsp+98h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  *(_QWORD *)&v64 = a3;
  v65 = 0LL;
  *(_OWORD *)&v66[0].cx = 0LL;
  v67 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 64) + 24LL))(*(_QWORD *)(a1 + 64), &v65);
  v5 = HIDWORD(v65);
  v6 = DWORD2(v65);
  v7 = v65;
  v8 = DWORD2(v65) - v65;
  LODWORD(v62) = DWORD2(v65) - v65;
  HIDWORD(v62) = HIDWORD(v65) - DWORD1(v65);
  v10 = ImmersiveApplicationLayout::ComputeGutterWidth(v62, (struct tagSIZE)(unsigned int)v66[0].cx, v9);
  v11 = v8 - v10;
  if ( !a2 )
  {
    v61 = 0LL;
    v55 = *(_QWORD *)(a1 + 64);
    v56 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v55 + 96LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v61);
    v57 = v56(v55, 0LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v61);
    v19 = v57;
    if ( v57 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7B,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v57);
      goto LABEL_19;
    }
    *(_QWORD *)&v63 = v65;
    HIDWORD(v63) = HIDWORD(v65);
    DWORD2(v63) = *(_DWORD *)v64 - v10 / 2;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v61 + 104LL))(v61, 0LL, &v63);
    v62 = 0LL;
    v58 = *(_QWORD *)(a1 + 64);
    v59 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, ImmersiveApplicationLayout **))(*(_QWORD *)v58 + 96LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v62);
    v60 = v59(v58, 1LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v62);
    v19 = v60;
    if ( v60 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x81,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v60);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v62);
      goto LABEL_19;
    }
    *(_QWORD *)((char *)&v68 + 4) = *(_QWORD *)((char *)&v65 + 4);
    HIDWORD(v68) = HIDWORD(v65);
    LODWORD(v68) = v10 + DWORD2(v63);
    (*(void (__fastcall **)(ImmersiveApplicationLayout *, _QWORD, __int128 *))(*(_QWORD *)v62 + 104LL))(v62, 0LL, &v68);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v62);
LABEL_49:
    v38 = &v61;
    goto LABEL_50;
  }
  v12 = a2 - 1;
  if ( !v12 )
  {
    v61 = 0LL;
    v47 = *(_QWORD *)(a1 + 64);
    v48 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v47 + 96LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v61);
    v49 = v48(v47, 0LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v61);
    v19 = v49;
    if ( v49 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8C,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v49);
      goto LABEL_19;
    }
    v50 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)v61 + 72LL))(v61, &v65, v11);
    v51 = 2 * (int)(float)((float)v66[0].cx / 100.0) - (int)(float)((float)(320 * v66[0].cx) / -100.0);
    if ( v50 > v51 )
      v51 = v50;
    *(_QWORD *)&v64 = v65;
    HIDWORD(v64) = HIDWORD(v65);
    DWORD2(v64) = v51 + v65;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v61 + 104LL))(v61, 0LL, &v64);
    v62 = 0LL;
    v52 = *(_QWORD *)(a1 + 64);
    v53 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, ImmersiveApplicationLayout **))(*(_QWORD *)v52 + 96LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v62);
    v54 = v53(v52, 1LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v62);
    v19 = v54;
    if ( v54 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x96,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v54);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v62);
      goto LABEL_19;
    }
    *(_QWORD *)((char *)&v63 + 4) = *(_QWORD *)((char *)&v65 + 4);
    HIDWORD(v63) = HIDWORD(v65);
    LODWORD(v63) = v10 + DWORD2(v64);
    (*(void (__fastcall **)(ImmersiveApplicationLayout *, _QWORD, __int128 *))(*(_QWORD *)v62 + 104LL))(v62, 0LL, &v63);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v62);
    goto LABEL_49;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v61 = 0LL;
    v39 = *(_QWORD *)(a1 + 64);
    v40 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v39 + 96LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v61);
    v41 = v40(v39, 1LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v61);
    v19 = v41;
    if ( v41 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA1,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v41);
      goto LABEL_19;
    }
    v42 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)v61 + 72LL))(v61, &v65, v11);
    v43 = 2 * (int)(float)((float)v66[0].cx / 100.0) - (int)(float)((float)(320 * v66[0].cx) / -100.0);
    if ( v42 > v43 )
      v43 = v42;
    *(_QWORD *)((char *)&v64 + 4) = *(_QWORD *)((char *)&v65 + 4);
    HIDWORD(v64) = HIDWORD(v65);
    LODWORD(v64) = DWORD2(v65) - v43;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v61 + 104LL))(v61, 0LL, &v64);
    v62 = 0LL;
    v44 = *(_QWORD *)(a1 + 64);
    v45 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, ImmersiveApplicationLayout **))(*(_QWORD *)v44 + 96LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v62);
    v46 = v45(v44, 0LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v62);
    v19 = v46;
    if ( v46 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAB,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v46);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v62);
      goto LABEL_19;
    }
    *(_QWORD *)&v63 = v65;
    HIDWORD(v63) = HIDWORD(v65);
    DWORD2(v63) = v64 - v10;
    (*(void (__fastcall **)(ImmersiveApplicationLayout *, _QWORD, __int128 *))(*(_QWORD *)v62 + 104LL))(v62, 0LL, &v63);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v62);
    goto LABEL_49;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    *(_QWORD *)&v63 = __PAIR64__(DWORD1(v65), v7);
    *((_QWORD *)&v63 + 1) = __PAIR64__(v5, v6);
    v62 = 0LL;
    v31 = *(_QWORD *)(a1 + 64);
    v32 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, ImmersiveApplicationLayout **))(*(_QWORD *)v31 + 96LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v62);
    v33 = v32(v31, 0LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v62);
    v19 = v33;
    if ( v33 >= 0 )
    {
      v34 = v63;
      v68 = v63;
      DWORD2(v68) = (int)(v6 - v7 - v10) / 2 + v7;
      (*(void (__fastcall **)(ImmersiveApplicationLayout *, _QWORD, __int128 *))(*(_QWORD *)v62 + 104LL))(
        v62,
        0LL,
        &v68);
      v61 = 0LL;
      v35 = *(_QWORD *)(a1 + 64);
      v36 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v35 + 96LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v61);
      v37 = v36(v35, 1LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v61);
      v19 = v37;
      if ( v37 >= 0 )
      {
        v64 = v34;
        LODWORD(v64) = v10 + DWORD2(v68);
        (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v61 + 104LL))(v61, 0LL, &v64);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v61);
        v38 = (__int64 *)&v62;
LABEL_50:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v38);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBF,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v37);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v61);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB8,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v33);
    }
    v26 = (__int64 *)&v62;
    goto LABEL_20;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v61 = 0LL;
    v24 = *(_QWORD *)(a1 + 64);
    v25 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v24 + 96LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v61);
    v18 = v25(v24, 1LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v61);
    v19 = v18;
    if ( v18 < 0 )
    {
      v20 = 87LL;
      goto LABEL_18;
    }
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v61 + 104LL))(v61, 0LL, &v65);
    v18 = CAppLayoutOperation::_EvictItem(a1 + 24, 0LL, 3LL);
    v19 = v18;
    if ( v18 < 0 )
    {
      v20 = 91LL;
      goto LABEL_18;
    }
    v28 = v61;
    v29 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v61 + 48LL);
    v30 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)(a1 + 88));
    if ( v29(v28, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v30) >= 0 )
      *(_DWORD *)(a1 + 104) |= 2u;
    goto LABEL_49;
  }
  if ( v15 == 1 )
  {
    v61 = 0LL;
    v16 = *(_QWORD *)(a1 + 64);
    v17 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v16 + 96LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v61);
    v18 = v17(v16, 0LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v61);
    v19 = v18;
    if ( v18 < 0 )
    {
      v20 = 105LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v18);
LABEL_19:
      v26 = &v61;
LABEL_20:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v26);
      return v19;
    }
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v61 + 104LL))(v61, 0LL, &v65);
    v18 = CAppLayoutOperation::_EvictItem(a1 + 24, 1LL, 4LL);
    v19 = v18;
    if ( v18 < 0 )
    {
      v20 = 109LL;
      goto LABEL_18;
    }
    v21 = v61;
    v22 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v61 + 48LL);
    v23 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)(a1 + 88));
    if ( v22(v21, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v23) >= 0 )
      *(_DWORD *)(a1 + 104) |= 2u;
    goto LABEL_49;
  }
  return 0LL;
}
