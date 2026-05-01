/*
 * XREFs of ?_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180114F88
 * Callers:
 *     ?OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180054E40 (-OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHAN.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1804EFEF0 (-ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDesktopPositioner::_OnSizeConstraintsChanged(CDesktopPositioner *this, struct IApplicationView *a2)
{
  __int64 (__fastcall *v4)(struct IApplicationView *, struct tagSIZE *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  bool v7; // bl
  struct tagSIZE v8; // rcx
  __int64 (__fastcall *v9)(struct IApplicationView *, __int64 *); // rbx
  int v10; // eax
  int v11; // eax
  __int64 (__fastcall *v12)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int v13; // eax
  int v14; // eax
  int v15; // edx
  LONG v16; // eax
  LONG v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct tagSIZE v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // [rsp+30h] [rbp-40h] BYREF
  struct tagSIZE v27; // [rsp+38h] [rbp-38h] BYREF
  __int64 v28; // [rsp+40h] [rbp-30h] BYREF
  __int64 v29; // [rsp+48h] [rbp-28h] BYREF
  __int64 v30; // [rsp+50h] [rbp-20h] BYREF
  __int128 v31; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v27 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct IApplicationView *, struct tagSIZE *))(*(_QWORD *)a2 + 264LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
  v5 = v4(a2, &v27);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8F0,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v5);
    v21 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(struct tagSIZE))(**(_QWORD **)&v21 + 16LL))(v21);
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x92D,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)v6);
    return v6;
  }
  v7 = (*(unsigned int (__fastcall **)(struct tagSIZE))(**(_QWORD **)&v27 + 24LL))(v27) == 0;
  v8 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(struct tagSIZE))(**(_QWORD **)&v8 + 16LL))(v8);
  }
  if ( !v7 )
    return 0LL;
  v26 = 0LL;
  v9 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
  v10 = v9(a2, &v26);
  v6 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x931,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v10);
    v24 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    return v6;
  }
  v29 = 0LL;
  v30 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64, __int64 *, __int64 *))(*(_QWORD *)a2 + 280LL))(
          a2,
          v26,
          &v29,
          &v30);
  v6 = v11;
  if ( v11 >= 0 )
  {
    v28 = 0LL;
    v12 = *(__int64 (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
    v13 = v12(a2, &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6, &v28);
    v6 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x938,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v13);
      v22 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      v23 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      return v6;
    }
    v31 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v28 + 24LL))(v28, &v31);
    v6 = v14;
    if ( v14 < 0 )
    {
      v25 = 2363LL;
LABEL_36:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
      goto LABEL_37;
    }
    v15 = HIDWORD(v31) - DWORD1(v31);
    v16 = DWORD2(v31) - v31;
    if ( (int)v29 > DWORD2(v31) - (int)v31 )
      v16 = v29;
    v27.cx = v16;
    v17 = HIDWORD(v31) - DWORD1(v31);
    if ( SHIDWORD(v29) > v15 )
      v17 = HIDWORD(v29);
    v27.cy = v17;
    if ( v16 != DWORD2(v31) - (_DWORD)v31 || v17 != v15 )
    {
      v14 = CDesktopPositioner::ResizeView((CDesktopPositioner *)((char *)this + 120), a2, v27, v27);
      v6 = v14;
      if ( v14 < 0 )
      {
        v25 = 2371LL;
        goto LABEL_36;
      }
    }
    v18 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x935,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v11);
LABEL_37:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
  return v6;
}
