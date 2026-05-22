/*
 * XREFs of _lambda_727d8a5b377b3c7833c145a14255ee7c_::operator() @ 0x1801CF438
 * Callers:
 *     _lambda_4790bba48f35d5d527bba9490b41a1e9_::operator() @ 0x1801CF29C (_lambda_4790bba48f35d5d527bba9490b41a1e9_--operator().c)
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z @ 0x1801D0CC0 (-RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z.c)
 * Callees:
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18006B538 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ??0?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAA@XZ @ 0x18018BF9C (--0-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_ptr@UHotKeyInfo@@@std@@@2@@std.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall lambda_727d8a5b377b3c7833c145a14255ee7c_::operator()(_QWORD **a1)
{
  _BYTE *result; // rax
  _DWORD *v3; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v4; // [rsp+28h] [rbp-10h]
  _DWORD *v5; // [rsp+40h] [rbp+8h]

  v5 = operator new(0x48uLL);
  *(_OWORD *)v5 = 0LL;
  v5[2] = 1;
  v5[3] = 1;
  *(_QWORD *)v5 = &std::_Ref_count_obj2<HotKeyInfo>::`vftable';
  *((_OWORD *)v5 + 1) = 0LL;
  *((_OWORD *)v5 + 2) = 0LL;
  *((_OWORD *)v5 + 3) = 0LL;
  *((_QWORD *)v5 + 8) = 0LL;
  std::list<std::shared_ptr<HotKeyInfo>>::list<std::shared_ptr<HotKeyInfo>>((_QWORD *)v5 + 7);
  v3 = v5 + 4;
  v4 = (std::_Ref_count_base *)v5;
  std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
    *a1,
    (__int64 *)&v3);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  *(_OWORD *)**a1 = *(_OWORD *)a1[1];
  *(_DWORD *)(**a1 + 16LL) = *(_DWORD *)a1[2];
  *(_DWORD *)(**a1 + 28LL) = *(_DWORD *)a1[3];
  *(_DWORD *)(**a1 + 20LL) = *(_DWORD *)a1[4] & 0xF;
  *(_WORD *)(**a1 + 24LL) = *(_WORD *)a1[4] & 0x7AC0;
  *(_BYTE *)(**a1 + 32LL) = *(_BYTE *)a1[5];
  result = a1[6];
  *result = 1;
  return result;
}
