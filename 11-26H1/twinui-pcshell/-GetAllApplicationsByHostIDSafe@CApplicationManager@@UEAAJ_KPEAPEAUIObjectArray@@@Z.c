/*
 * XREFs of ?GetAllApplicationsByHostIDSafe@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180159B00
 * Callers:
 *     ?GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180159830 (-GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180159E5C (-s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CApplicationManager::GetAllApplicationsByHostIDSafe(
        CApplicationManager *this,
        __int64 a2,
        struct IObjectArray **a3)
{
  const struct _GUID *v6; // rcx
  int Instance; // ebx
  void *v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 i; // rdi
  void *v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rdi
  int v14; // eax
  __int64 v15; // rcx
  __int64 (__fastcall ***v16)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v18; // rcx
  __int64 (__fastcall ***v19)(_QWORD, _QWORD, _QWORD); // rcx
  void *v20[2]; // [rsp+20h] [rbp-20h] BYREF
  void *v21; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  int v23; // [rsp+80h] [rbp+40h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp+50h] BYREF
  __int64 v25; // [rsp+98h] [rbp+58h] BYREF

  *a3 = 0LL;
  v24 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
  v24 = 0LL;
  v20[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v20);
  Instance = CImmersiveAppArray::s_CreateInstance(v6, v20);
  v23 = Instance;
  if ( Instance >= 0 )
  {
    v20[1] = &v23;
    v8 = v20[0];
    v21 = v20[0];
    if ( v20[0] )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v20[0] + 8LL))(v20[0]);
    v9 = *((_QWORD *)this + 48);
    for ( i = 0LL; i < v9; ++i )
    {
      v23 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v8 + 64LL))(
              v8,
              *(_QWORD *)(*((_QWORD *)this + 47) + 8 * i));
      if ( v23 < 0 )
        break;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
    Instance = v23;
    if ( v23 >= 0 )
    {
      Instance = (**(__int64 (__fastcall ***)(void *, GUID *, _QWORD))v20[0])(
                   v20[0],
                   &GUID_c6ed6dac_8fac_4598_a74c_69020137149c,
                   &v24);
      v23 = Instance;
    }
  }
  v11 = v20[0];
  if ( v20[0] )
  {
    v20[0] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1122,
      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)Instance);
LABEL_26:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
    return (unsigned int)Instance;
  }
  v25 = 0LL;
  v12 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v24;
  v13 = **v24;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
  v14 = v13(v12, &GUID_2e18eac3_3253_4bf0_be9f_38feb4360c34, &v25);
  Instance = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1124,
      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
    goto LABEL_26;
  }
  Instance = (*(__int64 (__fastcall **)(__int64, __int64, struct IObjectArray **))(*(_QWORD *)v25 + 40LL))(v25, a2, a3);
  if ( Instance < 0 )
  {
    v18 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v24;
    if ( v24 )
    {
      v24 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v19)[2])(v19);
    }
    return (unsigned int)Instance;
  }
  v15 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v24;
  if ( v24 )
  {
    v24 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v16)[2])(v16);
  }
  return 0LL;
}
