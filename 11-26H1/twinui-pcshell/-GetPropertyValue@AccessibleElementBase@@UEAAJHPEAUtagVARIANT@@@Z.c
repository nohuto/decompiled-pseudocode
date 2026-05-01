/*
 * XREFs of ?GetPropertyValue@AccessibleElementBase@@UEAAJHPEAUtagVARIANT@@@Z @ 0x1804D10E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z @ 0x1804D1760 (-InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z @ 0x1804D2038 (-_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AccessibleElementBase::GetPropertyValue(AccessibleElementBase *this, int a2, struct tagVARIANT *a3)
{
  __int16 v5; // r14
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  HRESULT inited; // ebx
  struct IMultitaskingViewElement *v13; // rbx
  int (__fastcall *v14)(struct IMultitaskingViewElement *, unsigned __int16 **); // rdi
  const unsigned __int16 *v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // ebx
  struct IMultitaskingViewElement *v19; // rbx
  void (__fastcall *v20)(struct IMultitaskingViewElement *, unsigned __int16 **); // rdi
  const unsigned __int16 *v21; // rcx
  int v22; // eax
  LONG v24; // eax
  __int64 v25; // rdx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  struct IMultitaskingViewElement *v32; // [rsp+20h] [rbp-60h] BYREF
  __int64 v33; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int16 *v34[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v35; // [rsp+40h] [rbp-40h]
  DOUBLE prgn[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v37; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  HIBYTE(v5) = 0;
  a3->vt = 0;
  if ( a2 > 30016 )
  {
    v26 = a2 - 30017;
    if ( v26 )
    {
      v27 = v26 - 14;
      if ( v27 )
      {
        v28 = v27 - 3;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( v29 )
          {
            v30 = v29 - 1;
            if ( v30 )
            {
              v31 = v30 - 1;
              if ( v31 )
              {
                if ( v31 != 7 )
                  return 0LL;
                LOBYTE(v5) = *((_DWORD *)this + 31) != 50032;
                a3->iVal = v5 - 1;
LABEL_58:
                a3->vt = 11;
                return 0LL;
              }
              v17 = *((_DWORD *)this + 30) & 0x20;
            }
            else
            {
              v17 = *((_DWORD *)this + 30) & 0x10;
            }
          }
          else
          {
            v17 = *((_DWORD *)this + 30) & 0x40;
          }
        }
        else
        {
          v17 = *((_DWORD *)this + 30) & 0x80;
        }
      }
      else
      {
        v17 = *((_DWORD *)this + 30) & 1;
      }
    }
    else
    {
      v17 = *((_DWORD *)this + 30) & 4;
    }
LABEL_57:
    a3->iVal = -(v17 != 0);
    goto LABEL_58;
  }
  if ( a2 == 30016 )
  {
    v17 = *((_DWORD *)this + 30) & 8;
    goto LABEL_57;
  }
  v6 = a2 - 30001;
  if ( !v6 )
  {
    *(_OWORD *)v34 = 0LL;
    v35 = 0LL;
    inited = (*(__int64 (__fastcall **)(char *, unsigned __int16 **))(*((_QWORD *)this + 1) + 40LL))(
               (char *)this + 8,
               v34);
    if ( inited >= 0 )
    {
      *(_OWORD *)prgn = *(_OWORD *)v34;
      v37 = v35;
      inited = InitVariantFromDoubleArray(prgn, 4u, a3);
      if ( inited >= 0 )
        return (unsigned int)inited;
      v25 = 87LL;
    }
    else
    {
      v25 = 84LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
      (const char *)(unsigned int)inited);
    return (unsigned int)inited;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    v24 = *((_DWORD *)this + 31);
    a3->vt = 3;
    a3->lVal = v24;
    return 0LL;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    v32 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
    inited = AccessibleElementBase::_GetElement(this, &v32);
    if ( inited >= 0 )
    {
      v34[0] = 0LL;
      v34[1] = 0LL;
      *(_QWORD *)&v35 = 0LL;
      v19 = v32;
      v20 = *(void (__fastcall **)(struct IMultitaskingViewElement *, unsigned __int16 **))(*(_QWORD *)v32 + 360LL);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v34);
      v34[1] = (unsigned __int16 *)-1LL;
      *(_QWORD *)&v35 = -1LL;
      v20(v19, v34);
      v21 = &pvData;
      if ( v34[0] )
        v21 = v34[0];
      v22 = InitVariantFromString(v21, a3);
      inited = v22;
      if ( v22 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x40,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
          (const char *)(unsigned int)v22);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v34);
    }
    goto LABEL_34;
  }
  v9 = v8 - 3;
  if ( !v9 )
  {
    v32 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
    inited = AccessibleElementBase::_GetElement(this, &v32);
    if ( inited >= 0 )
    {
      v18 = 0;
      (*(void (__fastcall **)(struct IMultitaskingViewElement *, __int64 *))(*(_QWORD *)v32 + 280LL))(v32, &v33);
      if ( (*(unsigned __int8 (__fastcall **)(struct IMultitaskingViewElement *))(*(_QWORD *)v32 + 304LL))(v32)
        && (!v33 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v33 + 168LL))(v33)) )
      {
        v18 = 1;
      }
      a3->vt = 11;
      a3->iVal = -(v18 != 0);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
      inited = 0;
    }
    goto LABEL_34;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v17 = *((_DWORD *)this + 30) & 2;
    goto LABEL_57;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    a3->iVal = -1;
    goto LABEL_58;
  }
  if ( v11 == 1 )
  {
    v32 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
    inited = AccessibleElementBase::_GetElement(this, &v32);
    if ( inited < 0 )
    {
LABEL_34:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
      return (unsigned int)inited;
    }
    v34[0] = 0LL;
    v34[1] = 0LL;
    *(_QWORD *)&v35 = 0LL;
    v13 = v32;
    v14 = *(int (__fastcall **)(struct IMultitaskingViewElement *, unsigned __int16 **))(*(_QWORD *)v32 + 368LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v34);
    v34[1] = (unsigned __int16 *)-1LL;
    *(_QWORD *)&v35 = -1LL;
    if ( v14(v13, v34) >= 0 )
    {
      v15 = &pvData;
      if ( v34[0] )
        v15 = v34[0];
      v16 = InitVariantFromString(v15, a3);
      inited = v16;
      if ( v16 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4C,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
          (const char *)(unsigned int)v16);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v34);
      goto LABEL_34;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v34);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
  }
  return 0LL;
}
