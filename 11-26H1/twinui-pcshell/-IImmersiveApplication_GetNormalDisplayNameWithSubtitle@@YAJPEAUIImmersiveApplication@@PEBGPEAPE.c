/*
 * XREFs of ?IImmersiveApplication_GetNormalDisplayNameWithSubtitle@@YAJPEAUIImmersiveApplication@@PEBGPEAPEAG@Z @ 0x18005FA24
 * Callers:
 *     _lambda_e7bc64b627cbb54866febc88068197a7_::operator() @ 0x180304CD0 (_lambda_e7bc64b627cbb54866febc88068197a7_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005FE30 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180070A64 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     Mirror_IsThreadRTL @ 0x1800822EC (Mirror_IsThreadRTL.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IImmersiveApplication_GetNormalDisplayNameWithSubtitle(
        struct IImmersiveApplication *a1,
        const unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  __int64 v4; // rax
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rax
  unsigned __int16 *v9; // rax
  void *v10; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  LPVOID v14; // rbx
  int IsThreadRTL; // eax
  const wchar_t *v16; // rdx
  int v17; // eax
  LPVOID v18; // [rsp+20h] [rbp-30h] BYREF
  __int64 v19; // [rsp+28h] [rbp-28h]
  __int64 v20; // [rsp+30h] [rbp-20h]
  LPVOID pv[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  *a3 = 0LL;
  v4 = *(_QWORD *)a1;
  v19 = -1LL;
  v20 = -1LL;
  v18 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, LPVOID *))(v4 + 376))(a1, &v18);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( !a2 )
      goto LABEL_6;
    v8 = -1LL;
    do
      ++v8;
    while ( a2[v8] );
    if ( !v8 )
    {
LABEL_6:
      v9 = (unsigned __int16 *)v18;
      v10 = 0LL;
      v18 = 0LL;
      v20 = 0LL;
      v19 = 0LL;
LABEL_7:
      *a3 = v9;
      if ( v10 )
        CoTaskMemFree(v10);
      return 0LL;
    }
    memset(pv, 0, sizeof(pv));
    v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(pv, a2, -1LL);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (int)"shell\\lib\\immersiveapphelpers\\displaynamehelpers.cpp",
        (const char *)(unsigned int)v12);
      if ( pv[0] )
        CoTaskMemFree(pv[0]);
      if ( v18 )
        CoTaskMemFree(v18);
    }
    else
    {
      v14 = v18;
      IsThreadRTL = Mirror_IsThreadRTL();
      v16 = asc_18077D200;
      if ( !IsThreadRTL )
        v16 = asc_18077D1F0;
      v17 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
              pv,
              v16,
              v14);
      v13 = v17;
      if ( v17 >= 0 )
      {
        v9 = (unsigned __int16 *)pv[0];
        v10 = v18;
        goto LABEL_7;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x54,
        (int)"shell\\lib\\immersiveapphelpers\\displaynamehelpers.cpp",
        (const char *)(unsigned int)v17);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(pv);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v18);
    }
    return v13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4E,
    (int)"shell\\lib\\immersiveapphelpers\\displaynamehelpers.cpp",
    (const char *)(unsigned int)v6);
  if ( v18 )
    CoTaskMemFree(v18);
  return v7;
}
