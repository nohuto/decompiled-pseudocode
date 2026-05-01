/*
 * XREFs of _lambda_c7b169fba69fd79fe9f607e958de189f_::operator() @ 0x180075408
 * Callers:
 *     ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___ @ 0x1800746CC (ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___.c)
 * Callees:
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003A59C (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_c7b169fba69fd79fe9f607e958de189f_::operator()(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int *v8; // rbp
  const WCHAR *v9; // rsi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned int v12; // eax
  UINT32 v13; // edx
  HRESULT v14; // eax
  int v15; // edx
  unsigned int v16; // r8d
  HSTRING v17; // rsi
  const WCHAR *v18; // rbx
  unsigned int v19; // eax
  UINT32 v20; // edx
  HRESULT v21; // eax
  int v22; // edx
  unsigned int v23; // r8d
  int v25; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+48h] [rbp-A0h]
  __int64 (__fastcall *v27)(__int64, HSTRING, __int64, HSTRING, __int64, int, int *); // [rsp+50h] [rbp-98h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-90h] BYREF
  HSTRING string; // [rsp+70h] [rbp-78h] BYREF
  HSTRING_HEADER v30; // [rsp+78h] [rbp-70h] BYREF
  HSTRING v31; // [rsp+90h] [rbp-58h] BYREF

  v25 = 0;
  v27 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, HSTRING, __int64, int, int *))(*(_QWORD *)a2 + 24LL);
  v8 = &v25;
  if ( *(_QWORD *)(a1 + 24) )
    v8 = *(int **)(a1 + 24);
  v26 = *(_QWORD *)(a1 + 16);
  string = 0LL;
  v9 = *(const WCHAR **)(a1 + 8);
  v10 = -1LL;
  v11 = -1LL;
  do
    ++v11;
  while ( v9[v11] );
  if ( v11 > 0xFFFFFFFF )
  {
LABEL_17:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, a2, a3);
    __debugbreak();
  }
  v12 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v11, a2, a3);
  v13 = v12 - 1;
  if ( (unsigned int)v11 < v12 )
    v13 = v11;
  v14 = WindowsCreateStringReference(v9, v13, &hstringHeader, &string);
  if ( v14 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14, v15, v16);
    goto LABEL_19;
  }
  v17 = string;
  v31 = 0LL;
  v18 = *(const WCHAR **)a1;
  do
    ++v10;
  while ( v18[v10] );
  if ( v10 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v15, v16);
    goto LABEL_17;
  }
  v19 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v10, v15, v16);
  v20 = v19 - 1;
  if ( (unsigned int)v10 < v19 )
    v20 = v10;
  v21 = WindowsCreateStringReference(v18, v20, &v30, &v31);
  if ( v21 < 0 )
  {
LABEL_19:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21, v22, v23);
    JUMPOUT(0x18007558CLL);
  }
  return v27(a2, v31, a3, v17, v26, a4, v8);
}
