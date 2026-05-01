/*
 * XREFs of ?GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YAJPEBGPEAPEAG1@Z @ 0x18068F108
 * Callers:
 *     ?GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z @ 0x180691A7C (-GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180692D40 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005FE30 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18006002C (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
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
  unsigned __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rdx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rbx
  unsigned __int16 *v23; // rdi
  __int64 v25; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-28h]
  __int64 v27; // [rsp+30h] [rbp-20h]
  void *v28; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-10h]
  __int64 v30; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

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
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (__int64)&v25,
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
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&v25);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&v25);
  v15 = v26;
  if ( v13 >= v26 )
  {
    v10 = -2147467259;
    v12 = 46LL;
    v11 = 2147500037LL;
    goto LABEL_22;
  }
  v16 = v25;
  v17 = v26 - v13;
  if ( v14 < v26 - v13 )
    v17 = v14;
  if ( v17 )
  {
    v15 = v26 - v17;
    memmove_0((void *)(v25 + 2 * v13), (const void *)(v25 + 2 * (v13 + v17)), 2 * (v26 - v17 - v13));
    v26 = v15;
  }
  *(_WORD *)(v16 + 2 * v15) = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v18 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
          (__int64)&v28,
          (__int64)Str,
          0xFFFFFFFFFFFFFFFFuLL);
  v10 = v18;
  if ( v18 >= 0 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&v28);
    v22 = v29;
    if ( v29 )
    {
      v23 = (unsigned __int16 *)v28;
      if ( v21 >= v29 )
        v21 = v29;
      if ( v21 )
      {
        v22 = v29 - v21;
        memmove_0(v28, (char *)v28 + 2 * v21, 2 * (v29 - v21));
      }
      v23[v22] = 0;
      *(_QWORD *)a2 = v16;
      *a3 = v23;
      v25 = 0LL;
      v27 = 0LL;
      v26 = 0LL;
      v28 = 0LL;
      v30 = 0LL;
      v29 = 0LL;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v28);
      v10 = 0;
      goto LABEL_23;
    }
    v10 = -2147467259;
    v20 = 50LL;
    v19 = 2147500037LL;
  }
  else
  {
    v19 = (unsigned int)v18;
    v20 = 49LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (int)"Desktop\\Internal\\Shell\\Inc\\private\\SecondaryTileIdentifierHelpers.h",
    (const char *)v19);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v28);
LABEL_23:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v25);
  return v10;
}
