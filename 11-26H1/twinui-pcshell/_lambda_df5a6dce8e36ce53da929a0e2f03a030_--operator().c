/*
 * XREFs of _lambda_df5a6dce8e36ce53da929a0e2f03a030_::operator() @ 0x180344AA4
 * Callers:
 *     ?QueryGameBarMajorMinorVersion@GamingOverlayExperienceManager@@AEAA?AU?$pair@GG@std@@XZ @ 0x1803511E4 (-QueryGameBarMajorMinorVersion@GamingOverlayExperienceManager@@AEAA-AU-$pair@GG@std@@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800A48F8 (--$GetActivationFactory@V-$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Micros.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_df5a6dce8e36ce53da929a0e2f03a030_::operator()(_WORD **a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, _QWORD, PVOID, __int64, int *); // rdi
  unsigned int v6; // r8d
  HSTRING_HEADER *v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64 *); // rdi
  int v13; // eax
  __int64 v14; // rdx
  __int16 v15; // rdx^4
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-50h] BYREF
  __int64 v18; // [rsp+48h] [rbp-38h]
  int v19[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v20; // [rsp+58h] [rbp-28h] BYREF
  int v21; // [rsp+60h] [rbp-20h] BYREF
  __int64 v22; // [rsp+68h] [rbp-18h] BYREF
  __int64 v23; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v22 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.StateRepository.Package",
    0x29u,
    0x28u);
  v2 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackageStatics>>(
         v18,
         &v22);
  v3 = v2;
  if ( v2 >= 0 )
  {
    *(_QWORD *)v19 = 0LL;
    v4 = v22;
    v5 = *(__int64 (__fastcall **)(__int64, _QWORD, PVOID, __int64, int *))(*(_QWORD *)v22 + 424LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v19);
    v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
           &hstringHeader,
           (const WCHAR **)&c_GamingOverlayPfn,
           v6);
    v8 = v5(v4, 0LL, v7[1].Reserved.Reserved1, 1LL, v19);
    v3 = v8;
    if ( v8 >= 0 )
    {
      v21 = 0;
      v8 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v19 + 56LL))(*(_QWORD *)v19, &v21);
      v3 = v8;
      if ( v8 >= 0 )
      {
        if ( v21 == 1 )
        {
          v20 = 0LL;
          v11 = *(_QWORD *)v19;
          v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(**(_QWORD **)v19 + 48LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
          v13 = v12(v11, 0LL, &v20);
          v3 = v13;
          if ( v13 >= 0 )
          {
            v23 = 0LL;
            v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 104LL))(v20, &v23);
            v3 = v13;
            if ( v13 >= 0 )
            {
              v15 = WORD2(v23);
              **a1 = HIWORD(v23);
              *a1[1] = v15;
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v19);
              v3 = 0;
              goto LABEL_18;
            }
            v14 = 1800LL;
          }
          else
          {
            v14 = 1797LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v14,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
            (const char *)(unsigned int)v13);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
          goto LABEL_7;
        }
        v3 = -2147418113;
        v10 = 2147549183LL;
        v9 = 1794LL;
LABEL_6:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)v10);
LABEL_7:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v19);
        goto LABEL_18;
      }
      v9 = 1793LL;
    }
    else
    {
      v9 = 1790LL;
    }
    v10 = (unsigned int)v8;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6F7,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)(unsigned int)v2);
LABEL_18:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  return v3;
}
