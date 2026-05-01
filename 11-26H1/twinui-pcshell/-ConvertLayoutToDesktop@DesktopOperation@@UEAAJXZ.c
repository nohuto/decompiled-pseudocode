/*
 * XREFs of ?ConvertLayoutToDesktop@DesktopOperation@@UEAAJXZ @ 0x1805134E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180131238 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1806C56C8 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DesktopOperation::ConvertLayoutToDesktop(DesktopOperation *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, _QWORD, __int64, GUID *, int *); // rbx
  int v6; // eax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64, __int64, GUID *, __int64 *); // rbx
  int v9; // eax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64); // rbx
  int v12; // eax
  int v14[2]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v15; // [rsp+48h] [rbp-11h] BYREF
  __int64 v16; // [rsp+50h] [rbp-9h] BYREF
  signed __int64 v17; // [rsp+58h] [rbp-1h] BYREF
  int v18; // [rsp+60h] [rbp+7h]
  __int128 v19; // [rsp+68h] [rbp+Fh] BYREF
  __int128 v20; // [rsp+78h] [rbp+1Fh] BYREF
  __int128 v21; // [rsp+88h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v17 = ((unsigned __int64)this + 16) & -(__int64)(this != (DesktopOperation *)176);
  v18 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v17, 1);
  v2 = CAppLayoutOperation::_VerifyAndPrepareLayout((DesktopOperation *)((char *)this - 152), 0LL, 1);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this - 14) + 80LL))(
           *((_QWORD *)this - 14),
           2LL) )
    {
      *(_QWORD *)v14 = 0LL;
      v4 = *((_QWORD *)this - 14);
      v5 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v4 + 104LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v14);
      v6 = v5(v4, 0LL, 2LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v14);
      v3 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x39,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktopoperation.cpp",
          (const char *)(unsigned int)v6);
LABEL_6:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v14);
        goto LABEL_14;
      }
      v20 = 0LL;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)v14 + 56LL))(*(_QWORD *)v14, 0LL, &v20);
      v15 = 0LL;
      v7 = *((_QWORD *)this - 14);
      v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v7 + 120LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
      v9 = v8(v7, *(_QWORD *)v14, 0xFFFFFFFFLL, 5LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v15);
      v3 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3F,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktopoperation.cpp",
          (const char *)(unsigned int)v9);
LABEL_9:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
        goto LABEL_6;
      }
      v19 = 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v15 + 56LL))(v15, 0LL, &v19);
      DWORD2(v19) += (DWORD2(v20) - (int)v20) / 2;
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v15 + 104LL))(v15, 0LL, &v19);
      v16 = 0LL;
      v10 = *((_QWORD *)this - 14);
      v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v10 + 120LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
      v12 = v11(v10, *(_QWORD *)v14, 1LL);
      v3 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x47,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktopoperation.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
        goto LABEL_9;
      }
      v21 = 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v16 + 56LL))(v16, 0LL, &v21);
      LODWORD(v21) = DWORD2(v19);
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v16 + 104LL))(v16, 0LL, &v21);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this - 14) + 264LL))(*((_QWORD *)this - 14), 2LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v14);
    }
    *((_DWORD *)this - 18) = 33;
    v3 = 0;
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x30,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktopoperation.cpp",
    (const char *)(unsigned int)v2);
LABEL_14:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v17);
  return v3;
}
