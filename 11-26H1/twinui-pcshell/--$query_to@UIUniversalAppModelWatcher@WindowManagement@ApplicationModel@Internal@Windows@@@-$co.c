/*
 * XREFs of ??$query_to@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1802BC53C
 * Callers:
 *     _lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator() @ 0x1800CA22C (_lambda_2a8f8fa06f2e0b1768a49123f6915af2_--operator().c)
 *     ?RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z @ 0x1800FA334 (-RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher,wil::err_exception_policy>::query_to<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(
             *a1,
             &GUID_05794c5e_e0da_40a2_b42f_c6b109da71c2,
             a2);
  if ( (int)result < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C89,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
      (const char *)(unsigned int)result,
      v3);
  return result;
}
