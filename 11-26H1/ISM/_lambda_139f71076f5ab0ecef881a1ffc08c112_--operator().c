/*
 * XREFs of _lambda_139f71076f5ab0ecef881a1ffc08c112_::operator() @ 0x1801CF0E4
 * Callers:
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_139f71076f5ab0ecef881a1ffc08c112___ @ 0x1801CE96C (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shared_ptr_HotKey.c)
 * Callees:
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18006B538 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _lambda_31ada6ebdd22db73722d2ce1394329de_::operator() @ 0x1801CF250 (_lambda_31ada6ebdd22db73722d2ce1394329de_--operator().c)
 *     ?_Unchecked_erase@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAAPEAU?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1801D1D40 (-_Unchecked_erase@-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_ptr@UHotKeyInfo.c)
 */

char __fastcall lambda_139f71076f5ab0ecef881a1ffc08c112_::operator()(__int64 **a1, _QWORD *a2)
{
  _OWORD *v3; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rax
  __int128 v7; // xmm0
  char *v8; // r12
  _QWORD *v9; // rsi
  _QWORD *v10; // rbx
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  __int64 *v13; // rcx
  std::_Ref_count_base *v14; // rcx
  char v16; // al
  std::_Ref_count_base *v17; // rcx
  char v18; // bl
  _OWORD v19[3]; // [rsp+20h] [rbp-38h] BYREF

  v3 = (_OWORD *)*a2;
  if ( (*((_WORD *)v3 + 12) & 0x200) == 0 )
  {
    v13 = a1[2];
    goto LABEL_21;
  }
  v5 = **a1;
  if ( *(_QWORD *)(v5 + 24) == *(_QWORD *)v3 && *(_DWORD *)(v5 + 32) == *((_DWORD *)v3 + 2) )
  {
    v6 = a1[1];
    *(_QWORD *)&v19[0] = 0LL;
    DWORD2(v19[0]) = 0;
    v7 = v19[0];
    ++*(_DWORD *)v6;
    *(_OWORD *)*a2 = v7;
    *(_DWORD *)(*a2 + 16LL) = 0;
    *(_WORD *)(*a2 + 24LL) |= 0x100u;
  }
  else
  {
    v8 = (char *)v3 + 40;
    v9 = (_QWORD *)*((_QWORD *)v3 + 5);
    v10 = (_QWORD *)*v9;
    v19[0] = *(_OWORD *)a1[2];
    while ( v10 != v9 && !(unsigned __int8)lambda_31ada6ebdd22db73722d2ce1394329de_::operator()(v19, v10 + 2) )
      v10 = (_QWORD *)*v10;
    v11 = v10;
    if ( v10 != v9 )
    {
      while ( 1 )
      {
        v12 = (_QWORD *)*v10;
        v10 = v12;
        if ( v12 == v9 )
          break;
        if ( !(unsigned __int8)lambda_31ada6ebdd22db73722d2ce1394329de_::operator()(v19, v12 + 2) )
        {
          std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
            v11 + 2,
            v10 + 2);
          v11 = (_QWORD *)*v11;
        }
      }
    }
    std::list<std::shared_ptr<HotKeyInfo>>::_Unchecked_erase(v8, v11, v9);
  }
  if ( (*(_WORD *)(*a2 + 24LL) & 0x100) != 0 && !*(_QWORD *)(*a2 + 48LL) )
  {
    v13 = a1[2];
LABEL_21:
    v16 = lambda_31ada6ebdd22db73722d2ce1394329de_::operator()(v13, a2);
    v17 = (std::_Ref_count_base *)a2[1];
    v18 = v16;
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
    return v18;
  }
  v14 = (std::_Ref_count_base *)a2[1];
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  return 0;
}
