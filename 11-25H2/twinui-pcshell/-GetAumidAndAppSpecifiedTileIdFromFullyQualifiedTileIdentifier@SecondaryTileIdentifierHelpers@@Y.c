/*
 * XREFs of ?GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YAJPEBGPEAPEAG1@Z @ 0x1806689E8
 * Callers:
 *     ?GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z @ 0x18066B1B8 (-GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x18066C480 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180086830 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180086A3C (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

__int64 __fastcall SecondaryTileIdentifierHelpers::GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier(
        wchar_t *Str,
        unsigned __int16 *a2,
        unsigned __int16 **a3,
        unsigned __int16 **a4)
{
  wchar_t *v7; // rbx
  wchar_t *v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rbx
  __int64 v16; // r14
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rbx
  unsigned __int16 *v22; // rdi
  __int64 v24; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-38h]
  __int64 v26; // [rsp+30h] [rbp-30h]
  void *v27; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v28; // [rsp+40h] [rbp-20h]
  __int64 v29; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  *(_QWORD *)a2 = 0LL;
  *a3 = 0LL;
  v7 = wcschr(Str, 0x21u);
  v8 = wcschr(Str, 0x3Au);
  if ( !v7 || !v8 || v7 > v8 )
  {
    v10 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\SecondaryTileIdentifierHelpers.h",
      (const char *)0x80070057LL);
    return v10;
  }
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (__int64)&v24,
         (__int64)Str,
         0xFFFFFFFFFFFFFFFFuLL);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = (unsigned int)v9;
    v12 = 45LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\SecondaryTileIdentifierHelpers.h",
      (const char *)v11);
    goto LABEL_23;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&v24);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&v24);
  v15 = v25;
  if ( v14 >= v25 )
  {
    v10 = -2147467259;
    v12 = 46LL;
    v11 = 2147500037LL;
    goto LABEL_22;
  }
  v16 = v24;
  if ( v13 >= v25 - v14 )
    v13 = v25 - v14;
  if ( v13 )
  {
    v15 = v25 - v13;
    memmove_0((void *)(v24 + 2 * v14), (const void *)(v24 + 2 * (v13 + v14)), 2 * (v25 - v13 - v14));
    v25 = v15;
  }
  *(_WORD *)(v16 + 2 * v15) = 0;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v17 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
          (__int64)&v27,
          (__int64)Str,
          0xFFFFFFFFFFFFFFFFuLL);
  v10 = v17;
  if ( v17 >= 0 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&v27);
    v21 = v28;
    if ( v28 )
    {
      v22 = (unsigned __int16 *)v27;
      if ( v20 >= v28 )
        v20 = v28;
      if ( v20 )
      {
        v21 = v28 - v20;
        memmove_0(v27, (char *)v27 + 2 * v20, 2 * (v28 - v20));
      }
      v22[v21] = 0;
      *(_QWORD *)a2 = v16;
      *a3 = v22;
      v24 = 0LL;
      v26 = 0LL;
      v25 = 0LL;
      v27 = 0LL;
      v29 = 0LL;
      v28 = 0LL;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v27);
      v10 = 0;
      goto LABEL_23;
    }
    v10 = -2147467259;
    v19 = 50LL;
    v18 = 2147500037LL;
  }
  else
  {
    v18 = (unsigned int)v17;
    v19 = 49LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (int)"Desktop\\Internal\\Shell\\Inc\\private\\SecondaryTileIdentifierHelpers.h",
    (const char *)v18);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v27);
LABEL_23:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
  return v10;
}
