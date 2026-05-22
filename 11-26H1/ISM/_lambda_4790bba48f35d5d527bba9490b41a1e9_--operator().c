/*
 * XREFs of _lambda_4790bba48f35d5d527bba9490b41a1e9_::operator() @ 0x1801CF29C
 * Callers:
 *     std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_4790bba48f35d5d527bba9490b41a1e9___ @ 0x1801CE6D0 (std--find_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shared_ptr_HotKeyIn.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Emplace@AEBV?$shared_ptr@UHotKeyInfo@@@std@@@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@1@QEAU21@AEBV?$shared_ptr@UHotKeyInfo@@@1@@Z @ 0x1801CE030 (--$_Emplace@AEBV-$shared_ptr@UHotKeyInfo@@@std@@@-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allo.c)
 *     std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_95cbc6343829d1d7fba1c9bcd9d93478___ @ 0x1801CE7F0 (std--find_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shared_ea_1801CE7F0.c)
 *     _lambda_727d8a5b377b3c7833c145a14255ee7c_::operator() @ 0x1801CF438 (_lambda_727d8a5b377b3c7833c145a14255ee7c_--operator().c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_4790bba48f35d5d527bba9490b41a1e9_::operator()(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // r8
  __int64 *v5; // rdx
  _DWORD *v6; // rax
  char v7; // bl
  _QWORD *v8; // rcx
  int v9; // eax
  std::_Ref_count_base *v10; // rcx
  int *v12; // rax
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v19; // [rsp+68h] [rbp+20h]

  v2 = a2;
  v4 = *a2;
  v5 = (__int64 *)(a1 + 8);
  if ( (*(_WORD *)(v4 + 24) & 0x200) == 0 )
  {
LABEL_9:
    v8 = (_QWORD *)*v5;
    if ( *(_QWORD *)*v5 != *(_QWORD *)*v2 )
      goto LABEL_13;
    v9 = *(_DWORD *)(*v2 + 8LL);
    goto LABEL_11;
  }
  v6 = *(_DWORD **)a1;
  v19 = (__int64 *)(a1 + 8);
  if ( (*v6 & 0x200) == 0 )
  {
    std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_95cbc6343829d1d7fba1c9bcd9d93478___(
      &v18,
      **(_QWORD ***)(v4 + 40),
      *(_QWORD **)(v4 + 40),
      *v5);
    if ( v18 == *(_QWORD *)(*v2 + 40LL) )
    {
      lambda_727d8a5b377b3c7833c145a14255ee7c_::operator()(*(_QWORD *)(a1 + 32));
      try
      {
        std::list<std::shared_ptr<HotKeyInfo>>::_Emplace<std::shared_ptr<HotKeyInfo> const &>(
          *v2 + 40LL,
          *(_QWORD *)(*v2 + 40LL),
          *(_QWORD **)(a1 + 40));
      }
      catch ( std::bad_alloc )
      {
        **(_DWORD **)(a1 + 48) = -2147024882;
        v12 = *(int **)(a1 + 48);
        if ( *v12 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
            McTemplateU0sqq_EventWriteTransfer(
              (unsigned int)*v12,
              (__int64)&v13,
              "HotKeyProcessor::RegisterHotKey::<lambda_4790bba48f35d5d527bba9490b41a1e9>::operator ()",
              268LL,
              *v12);
          v5 = v19;
          v2 = a2;
          goto LABEL_9;
        }
        v2 = a2;
        goto LABEL_12;
      }
    }
    goto LABEL_12;
  }
  if ( (*(_WORD *)(v4 + 24) & 0x100) != 0 )
  {
    *(_WORD *)(v4 + 24) = *(_WORD *)v6 & 0x7AC0;
    *(_OWORD *)*v2 = *(_OWORD *)*v5;
    *(_DWORD *)(*v2 + 16LL) = **(_DWORD **)(a1 + 16);
    v7 = 1;
    **(_BYTE **)(a1 + 24) = 1;
    goto LABEL_14;
  }
  v8 = (_QWORD *)*v5;
  if ( *(_QWORD *)*v5 == *(_QWORD *)v4 )
  {
    v9 = *(_DWORD *)(v4 + 8);
LABEL_11:
    if ( *((_DWORD *)v8 + 2) == v9 )
    {
LABEL_12:
      v7 = 1;
      goto LABEL_14;
    }
  }
LABEL_13:
  v7 = 0;
LABEL_14:
  v10 = (std::_Ref_count_base *)v2[1];
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return v7;
}
