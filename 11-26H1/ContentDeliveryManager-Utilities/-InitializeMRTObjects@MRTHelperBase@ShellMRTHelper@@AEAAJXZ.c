/*
 * XREFs of ?InitializeMRTObjects@MRTHelperBase@ShellMRTHelper@@AEAAJXZ @ 0x1800ABCF8
 * Callers:
 *     ?Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x1800AC1AC (-Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18002EC54 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003D99C (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800ABC80 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScaleFactorToResourceScale@Common@ShellMRTHelper@@YA?AW4RESOURCE_SCALE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1800AC550 (-ScaleFactorToResourceScale@Common@ShellMRTHelper@@YA-AW4RESOURCE_SCALE@@W4DEVICE_SCALE_FACTOR@@.c)
 *     ?_Free@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800AC7C4 (-_Free@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellMRTHelper::MRTHelperBase::InitializeMRTObjects(
        ShellMRTHelper::MRTHelperBase *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 *v5; // r15
  char v6; // al
  HRESULT Instance; // ebx
  __int64 v8; // rdx
  __int64 result; // rax
  PCWSTR *v10; // rbx
  unsigned __int64 v11; // rcx
  HRESULT v12; // eax
  int v13; // eax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, GUID *, char *); // rbx
  __int64 **v16; // r14
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, GUID *, __int64 *); // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // eax
  __int64 v23; // r9
  __int64 v24; // r8
  int v25; // ecx
  int v26; // ecx
  const wchar_t *v27; // r8
  int v28; // ecx
  int v29; // ecx
  const wchar_t *v30; // rdx
  int ppv; // [rsp+20h] [rbp-40h]
  PWSTR ppszPathOut; // [rsp+30h] [rbp-30h] BYREF
  __int64 v33; // [rsp+38h] [rbp-28h]
  __int64 v34; // [rsp+40h] [rbp-20h]
  WCHAR String2[8]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v5 = (__int64 *)((char *)this + 8);
  if ( *((_QWORD *)this + 1) )
    return 0LL;
  if ( *((_BYTE *)this + 45) || (v6 = 1, *((_BYTE *)this + 46)) )
    v6 = 0;
  if ( v6 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      142LL,
      (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.h",
      a4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this);
  Instance = CoCreateInstance(
               &GUID_dbce7e40_7345_439d_b12c_114a11819a09,
               0LL,
               1u,
               &GUID_130a2f65_2be7_4309_9a58_a9052ff2b61c,
               (LPVOID *)this);
  if ( Instance < 0 )
  {
    v8 = 144LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.h",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  if ( *((_BYTE *)this + 45) )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 40LL))(
               *(_QWORD *)this,
               *((_QWORD *)this + 6));
  }
  else
  {
    wcscpy(String2, L".pri");
    v10 = (PCWSTR *)((char *)this + 72);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount((_QWORD *)this + 9);
    v11 = *((_QWORD *)this + 10);
    if ( v11 <= 4 || CompareStringOrdinal(&(*v10)[v11 - 4], 4, String2, 4, 1) != 2 )
    {
      ppszPathOut = 0LL;
      v33 = 0LL;
      v34 = 0LL;
      Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free(&ppszPathOut);
      v33 = -1LL;
      v34 = -1LL;
      v12 = PathAllocCombine(*v10, L"resources.pri", 0, &ppszPathOut);
      Instance = v12;
      if ( v12 >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, PWSTR))(**(_QWORD **)this + 48LL))(*(_QWORD *)this, ppszPathOut);
        if ( v13 >= 0 )
        {
          Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free(&ppszPathOut);
          goto LABEL_24;
        }
        Instance = v13;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA5,
          (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.h",
          (const char *)(unsigned int)v12);
      }
      Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free(&ppszPathOut);
      return (unsigned int)Instance;
    }
    result = (*(__int64 (__fastcall **)(_QWORD, PCWSTR))(**(_QWORD **)this + 48LL))(*(_QWORD *)this, *v10);
  }
  if ( (int)result >= 0 )
  {
LABEL_24:
    v14 = *(_QWORD *)this;
    v15 = *(__int64 (__fastcall **)(__int64, GUID *, char *))(**(_QWORD **)this + 72LL);
    v16 = (__int64 **)((char *)this + 16);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
    Instance = v15(v14, &GUID_e3c22b30_8502_4b2f_9133_559674587e51, (char *)this + 16);
    if ( Instance < 0 )
    {
      v8 = 169LL;
      goto LABEL_9;
    }
    v17 = *(_QWORD *)this;
    v18 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(**(_QWORD **)this + 56LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v5);
    Instance = v18(v17, &GUID_6e21e72b_b9b0_42ae_a686_983cf784edcd, v5);
    if ( Instance < 0 )
    {
      v8 = 170LL;
      goto LABEL_9;
    }
    if ( *((_WORD *)this + 21) )
    {
      v21 = **v16;
      if ( *((_BYTE *)this + 43) )
      {
        Instance = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v21 + 112))(*v16, *((unsigned __int16 *)this + 20));
        if ( Instance < 0 )
        {
          v8 = 176LL;
          goto LABEL_9;
        }
      }
      else
      {
        v22 = ShellMRTHelper::Common::ScaleFactorToResourceScale(*((unsigned int *)this + 6), v19, *v16, v21);
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(v23 + 120))(v24, v22);
        if ( Instance < 0 )
        {
          v8 = 180LL;
          goto LABEL_9;
        }
      }
    }
    if ( *((_BYTE *)this + 44) )
    {
      Instance = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(**v16 + 128))(*v16, *((unsigned int *)this + 7));
      if ( Instance < 0 )
      {
        v8 = 186LL;
        goto LABEL_9;
      }
    }
    v25 = *((_DWORD *)this + 8);
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( v26 )
      {
        if ( v26 != 1 )
          wil::details::in1diag3::FailFast_Hr(retaddr, 202LL, v20, (const char *)0x8000FFFFLL, ppv);
        v27 = L"light";
      }
      else
      {
        v27 = L"dark";
      }
      Instance = (*(__int64 (__fastcall **)(__int64 *, const wchar_t *, const wchar_t *))(**v16 + 144))(
                   *v16,
                   L"Theme",
                   v27);
      if ( Instance < 0 )
      {
        v8 = 207LL;
        goto LABEL_9;
      }
    }
    v28 = *((_DWORD *)this + 9);
    if ( v28 )
    {
      v29 = v28 - 1;
      if ( v29 )
      {
        if ( v29 != 1 )
          wil::details::in1diag3::FailFast_Hr(retaddr, 224LL, v20, (const char *)0x8000FFFFLL, ppv);
        v30 = L"lightunplated";
      }
      else
      {
        v30 = L"unplated";
      }
      Instance = (*(__int64 (__fastcall **)(__int64 *, const wchar_t *))(**v16 + 136))(*v16, v30);
      if ( Instance < 0 )
      {
        v8 = 229LL;
        goto LABEL_9;
      }
    }
    return 0LL;
  }
  return result;
}
