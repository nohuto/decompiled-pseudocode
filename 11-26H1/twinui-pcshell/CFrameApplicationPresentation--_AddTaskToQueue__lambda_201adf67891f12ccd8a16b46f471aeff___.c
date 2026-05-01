/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_201adf67891f12ccd8a16b46f471aeff___ @ 0x1800B077C
 * Callers:
 *     ?UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ @ 0x1801F1890 (-UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_201adf67891f12ccd8a16b46f471aeff_::__lambda_201adf67891f12ccd8a16b46f471aeff_ @ 0x1800B0878 (_lambda_201adf67891f12ccd8a16b46f471aeff_--__lambda_201adf67891f12ccd8a16b46f471aeff_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_76ebab358cbfe9072c97f7416da7a23a___ @ 0x1800B08A0 (Windows--Internal--ComTaskPool--QueueTask__lambda_76ebab358cbfe9072c97f7416da7a23a___.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _lambda_76ebab358cbfe9072c97f7416da7a23a_::_lambda_76ebab358cbfe9072c97f7416da7a23a_ @ 0x18030437C (_lambda_76ebab358cbfe9072c97f7416da7a23a_--_lambda_76ebab358cbfe9072c97f7416da7a23a_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_201adf67891f12ccd8a16b46f471aeff___(
        unsigned int *a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // edi
  unsigned int *v9; // [rsp+20h] [rbp-198h] BYREF
  __int64 v10[2]; // [rsp+30h] [rbp-188h] BYREF
  _BYTE v11[352]; // [rsp+40h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  if ( a1[14] == 2 )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x820,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    v9 = a1;
    if ( a1 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 8LL))(a1);
    v4 = ((__int64 (__fastcall *)(__int64 *, unsigned int **, unsigned int *, __int64))lambda_76ebab358cbfe9072c97f7416da7a23a_::_lambda_76ebab358cbfe9072c97f7416da7a23a_)(
           v10,
           &v9,
           a1,
           a2);
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_76ebab358cbfe9072c97f7416da7a23a___(v6, v5, a1[12], v4, v9);
    lambda_201adf67891f12ccd8a16b46f471aeff_::__lambda_201adf67891f12ccd8a16b46f471aeff_(v11);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v10);
    if ( v7 >= 0 )
      ++a1[52];
    if ( a1 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 16LL))(a1);
  }
  lambda_201adf67891f12ccd8a16b46f471aeff_::__lambda_201adf67891f12ccd8a16b46f471aeff_(a2);
  return (unsigned int)v7;
}
