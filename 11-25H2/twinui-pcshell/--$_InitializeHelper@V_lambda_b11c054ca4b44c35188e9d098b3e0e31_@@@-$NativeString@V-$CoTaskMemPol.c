/*
 * XREFs of ??$_InitializeHelper@V_lambda_b11c054ca4b44c35188e9d098b3e0e31_@@@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_WPEADAEBV_lambda_b11c054ca4b44c35188e9d098b3e0e31_@@@Z @ 0x18068ACE0
 * Callers:
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18068EFEC (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@Q.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?StringCchVPrintfW@@YAJPEA_W_KPEB_WPEAD@Z @ 0x180447DFC (-StringCchVPrintfW@@YAJPEA_W_KPEB_WPEAD@Z.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x1806902FC (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJ.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::_InitializeHelper<_lambda_b11c054ca4b44c35188e9d098b3e0e31_>(
        wchar_t **a1,
        wchar_t *a2,
        va_list a3,
        ...)
{
  __int64 v5; // rcx
  HRESULT v7; // ebx
  size_t v8; // rbx
  wchar_t *v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, _QWORD);
  v5 = 32LL;
  while ( 1 )
  {
    v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::_EnsureCapacity(a1, v5);
    if ( v7 < 0 )
      goto LABEL_7;
    v8 = (size_t)a1[2];
    v9 = *a1;
    _o__set_errno(0LL);
    v7 = StringCchVPrintfW(v9, v8, a2, a3);
    if ( v7 != -2147024774 )
      goto LABEL_10;
    LODWORD(v12) = 0;
    _o__get_errno((__int64 *)va);
    if ( (_DWORD)v12 == 22 )
      break;
    v10 = (unsigned __int64)a1[2];
    v5 = v10 + 32;
    if ( v10 + 32 < v10 )
    {
      v7 = -2147024362;
      goto LABEL_7;
    }
  }
  v7 = -2147024809;
LABEL_10:
  if ( v7 < 0 )
  {
LABEL_7:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)a1);
    return (unsigned int)v7;
  }
  a1[1] = (wchar_t *)-1LL;
  return (unsigned int)v7;
}
