/*
 * XREFs of ?reset@?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180094174
 * Callers:
 *     ?OnInputSinkDataChanged@ShellGesturesClientProxy@@MEAAJXZ @ 0x18004C260 (-OnInputSinkDataChanged@ShellGesturesClientProxy@@MEAAJXZ.c)
 *     ?OnDisconnected@ShellGesturesClientProxy@@MEAAJXZ @ 0x18007E760 (-OnDisconnected@ShellGesturesClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18006B538 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@V12@@std@@YA?AV?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@0@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@Z @ 0x180094204 (--$make_shared@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtC.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::reset(
        _QWORD *a1,
        __int64 a2)
{
  __int64 *v3; // rax
  std::_Ref_count_base *v4; // rcx
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-10h]
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    *a1 = 0LL;
    v4 = (std::_Ref_count_base *)a1[1];
    a1[1] = 0LL;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  else
  {
    v7 = a2;
    v3 = (__int64 *)std::make_shared<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>(
                      v5,
                      &v7);
    std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
      a1,
      v3);
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
    if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      NtCloseCompositionInputSink(v7);
  }
}
