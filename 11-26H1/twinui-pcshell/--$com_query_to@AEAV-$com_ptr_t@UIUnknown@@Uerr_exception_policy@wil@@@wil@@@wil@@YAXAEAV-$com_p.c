/*
 * XREFs of ??$com_query_to@AEAV?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@@wil@@YAXAEAV?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@0@AEBU_GUID@@PEAPEAX@Z @ 0x18020F9A8
 * Callers:
 *     ?GetTaskGroupsDataModel@AppViewDataSourceAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806C2580 (-GetTaskGroupsDataModel@AppViewDataSourceAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetTaskGroupsDataSourceAdapter@AppViewDataSourceAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806C2640 (-GetTaskGroupsDataSourceAdapter@AppViewDataSourceAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_query_to<wil::com_ptr_t<IUnknown,wil::err_exception_policy> &>(_QWORD *a1)
{
  __int64 result; // rax
  int v2; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = (**(__int64 (__fastcall ***)(_QWORD))*a1)(*a1);
  if ( (int)result < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x57B,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)result,
      v2);
  return result;
}
