/*
 * XREFs of ?_EnsureDockedViewSizing@CAppLayoutOperation@@IEAAJXZ @ 0x18069C23C
 * Callers:
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18069CEEC (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??$As@UIAppLayoutItemBuilder@@@?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutItemBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x180503A30 (--$As@UIAppLayoutItemBuilder@@@-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180659804 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutOperation::_EnsureDockedViewSizing(CAppLayoutOperation *this)
{
  int v2; // esi
  int v3; // r15d
  int v4; // r12d
  int v5; // ebx
  int v6; // edi
  bool v7; // zf
  __int64 v8; // rcx
  int v9; // esi
  enum DEVICE_SCALE_FACTOR v10; // r8d
  int v11; // eax
  int v12; // ecx
  __int64 v13; // rdi
  unsigned int v14; // esi
  __int64 (__fastcall *v15)(__int64, _QWORD, __int64, GUID *, int *); // rbx
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // edi
  int v20; // eax
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(__int64, _QWORD, __int64); // rbx
  int v23; // eax
  int v24; // eax
  __int64 (__fastcall *v25)(_QWORD, GUID *, ImmersiveApplicationLayout **); // rbx
  int v26; // eax
  ImmersiveApplicationLayout *v28; // [rsp+30h] [rbp-79h] BYREF
  __int64 v29; // [rsp+38h] [rbp-71h] BYREF
  int v30[2]; // [rsp+40h] [rbp-69h] BYREF
  int v31[2]; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v32[8]; // [rsp+50h] [rbp-59h] BYREF
  int v33; // [rsp+90h] [rbp-19h] BYREF
  __int64 v34; // [rsp+94h] [rbp-15h]
  int v35; // [rsp+9Ch] [rbp-Dh]
  __int128 v36; // [rsp+A0h] [rbp-9h] BYREF
  struct tagSIZE v37[2]; // [rsp+B0h] [rbp+7h]
  __int64 v38; // [rsp+C0h] [rbp+17h]
  __int128 v39; // [rsp+C8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 88LL))(*((_QWORD *)this + 4), 2LL);
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 80LL))(*((_QWORD *)this + 4), 4LL);
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 80LL))(*((_QWORD *)this + 4), 1LL);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 88LL))(*((_QWORD *)this + 5), 2LL);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 80LL))(*((_QWORD *)this + 5), 5LL);
  if ( v2 )
  {
    if ( v2 != 1 || v3 || v4 != 1 || v5 != 1 )
      return 0LL;
    v7 = v6 == 2;
  }
  else
  {
    v7 = v5 == 1;
  }
  if ( v7 )
  {
    v8 = *((_QWORD *)this + 5);
    v38 = 0LL;
    v36 = 0LL;
    *(_OWORD *)&v37[0].cx = 0LL;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v8 + 24LL))(v8, &v36);
    v9 = DWORD2(v36);
    LODWORD(v28) = DWORD2(v36) - v36;
    HIDWORD(v28) = HIDWORD(v36) - DWORD1(v36);
    v11 = ImmersiveApplicationLayout::ComputeGutterWidth(v28, (struct tagSIZE)(unsigned int)v37[0].cx, v10);
    *(_QWORD *)v31 = 0LL;
    v12 = v6 - 1;
    v13 = *((_QWORD *)this + 5);
    v14 = v9 - v12 * v11 - v36;
    v15 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v13 + 112LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v31);
    v16 = v15(v13, 0LL, 2LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v31);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E7,
        (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
        (const char *)(unsigned int)v16);
LABEL_23:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v31);
      return v17;
    }
    v18 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD))(**(_QWORD **)v31 + 80LL))(*(_QWORD *)v31, &v36, v14);
    v29 = 0LL;
    v19 = v18;
    v20 = Microsoft::WRL::ComPtr<IAppLayoutItem>::As<IAppLayoutItemBuilder>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v31,
            &v29);
    v17 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1EC,
        (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
        (const char *)(unsigned int)v20);
LABEL_22:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
      goto LABEL_23;
    }
    v33 = DWORD2(v36) - v19;
    v34 = *(_QWORD *)((char *)&v36 + 4);
    v35 = HIDWORD(v36);
    (*(void (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v29 + 104LL))(v29, 0LL, &v33);
    (*(void (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v29 + 104LL))(v29, 1LL, &v33);
    v21 = *((_QWORD *)this + 5);
    *(_QWORD *)v30 = 0LL;
    v22 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v21 + 136LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)v30);
    v23 = v22(v21, 0LL, 1LL);
    v17 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F8,
        (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
        (const char *)(unsigned int)v23);
LABEL_21:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)v30);
      goto LABEL_22;
    }
    memset_0(v32, 0, sizeof(v32));
    while ( 1 )
    {
      v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(**(_QWORD **)v30 + 24LL))(*(_QWORD *)v30, 5LL, v32);
      if ( v24 < 0 )
        break;
      if ( ((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v32[0] + 32LL))(v32[0]) & 2) == 0 )
      {
        v28 = 0LL;
        v25 = **(__int64 (__fastcall ***)(_QWORD, GUID *, ImmersiveApplicationLayout **))v32[0];
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
        v26 = v25(v32[0], &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v28);
        v17 = v26;
        if ( v26 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x200,
            (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
            (const char *)(unsigned int)v26);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
          goto LABEL_21;
        }
        v39 = 0LL;
        (*(void (__fastcall **)(ImmersiveApplicationLayout *, _QWORD, __int128 *))(*(_QWORD *)v28 + 104LL))(
          v28,
          0LL,
          &v39);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
      }
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1FB,
      (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
      (const char *)(unsigned int)v24);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)v30);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v31);
  }
  return 0LL;
}
