/*
 * XREFs of ?query_to@?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXAEBU_GUID@@PEAPEAX@Z @ 0x18021197C
 * Callers:
 *     ?GetSwitchItemForWindow@AppViewDataSourceAdapter@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800CE720 (-GetSwitchItemForWindow@AppViewDataSourceAdapter@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,wil::err_exception_policy>::query_to(
        _QWORD *a1)
{
  __int64 result; // rax
  int v2; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = (**(__int64 (__fastcall ***)(_QWORD))*a1)(*a1);
  if ( (int)result < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C89,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
      (const char *)(unsigned int)result,
      v2);
  return result;
}
