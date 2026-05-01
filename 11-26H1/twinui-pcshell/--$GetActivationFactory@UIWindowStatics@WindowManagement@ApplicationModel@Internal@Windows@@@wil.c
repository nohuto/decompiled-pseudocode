/*
 * XREFs of ??$GetActivationFactory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800CA6EC
 * Callers:
 *     _lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator() @ 0x1800CA22C (_lambda_2a8f8fa06f2e0b1768a49123f6915af2_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall wil::GetActivationFactory<Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>(
        _QWORD *a1)
{
  __int64 v2; // rax
  int ActivationFactory; // eax
  _QWORD v5[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v6; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v5[2] = a1;
  v5[0] = L"Windows.Internal.ApplicationModel.WindowManagement.WindowInProc";
  *a1 = 0LL;
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v6, v5);
  ActivationFactory = RoGetActivationFactory(*(_QWORD *)(v2 + 24), &GUID_5e75aba7_c424_4076_9d47_409a1eda087f, a1);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x744,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)ActivationFactory,
      1);
  return a1;
}
