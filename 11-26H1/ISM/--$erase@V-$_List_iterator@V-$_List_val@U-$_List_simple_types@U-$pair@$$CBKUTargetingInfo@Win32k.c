/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@1@V21@@Z @ 0x180031230
 * Callers:
 *     ?ProcessInputStreamEndedMessage@Win32kInterop@@AEAAXPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@Z @ 0x180030080 (-ProcessInputStreamEndedMessage@Win32kInterop@@AEAAXPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@Z.c)
 * Callees:
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>>>,0>(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v5; // rax
  _QWORD *v6; // r11
  __int64 **v7; // r9
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rcx

  v5 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)a3 + 16);
  v7 = (__int64 **)(16 * (v6[6] & v5) + v6[3]);
  v8 = *v7;
  if ( v7[1] == a3 )
  {
    if ( v8 == a3 )
    {
      v9 = (__int64 *)v6[1];
      *v7 = v9;
    }
    else
    {
      v9 = (__int64 *)a3[1];
    }
    v7[1] = v9;
  }
  else if ( v8 == a3 )
  {
    *v7 = (__int64 *)*a3;
  }
  v10 = *a3;
  --v6[2];
  *(_QWORD *)a3[1] = v10;
  *(_QWORD *)(v10 + 8) = a3[1];
  v11 = a3[4];
  if ( v11 )
  {
    a3[4] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = a3[3];
  if ( v12 )
  {
    a3[3] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  std::_Deallocate<16>(a3, 40LL);
  *a2 = v10;
  return a2;
}
