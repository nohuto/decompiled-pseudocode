/*
 * XREFs of _lambda_3a2de4e4b80ecd8274c796c02122adf2_::operator() @ 0x180498634
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2___::RunTask @ 0x1804987F0 (CMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2___--RunTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_3a2de4e4b80ecd8274c796c02122adf2_::operator()(_QWORD *a1, __int64 a2)
{
  int (__fastcall *v4)(__int64, __int64, GUID *, __int64 *); // rbx
  unsigned int v5; // ebx
  __int64 (__fastcall *v7)(__int64, __int64, GUID *, __int64 *); // rbx
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  v4 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  if ( v4(a2, 8LL, &GUID_0cbeff0b_7751_4b77_8907_debf5cc3df7a, &v11) < 0 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    v8 = v7(a2, 8LL, &GUID_0cbeff0b_7751_4b77_8907_debf5cc3df7a, &v11);
    v5 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x46,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewservice.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_4;
    }
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 48LL))(v11, *a1);
    if ( v9 < 0 )
    {
      v5 = v9;
      goto LABEL_4;
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11);
  }
  v5 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  return v5;
}
