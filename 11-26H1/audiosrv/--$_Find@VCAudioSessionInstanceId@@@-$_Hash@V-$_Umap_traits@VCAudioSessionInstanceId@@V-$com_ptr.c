/*
 * XREFs of ??$_Find@VCAudioSessionInstanceId@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@AEBVCAudioSessionInstanceId@@_K@Z @ 0x18005686C
 * Callers:
 *     ?find@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBVCAudioSessionInstanceId@@@Z @ 0x1800D2D10 (-find@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_return.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Find<CAudioSessionInstanceId>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdx
  __int64 v6; // rbx
  __int64 v7; // rbp
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  __int64 result; // rax

  v4 = a1[3];
  v6 = *(_QWORD *)(v4 + 16 * (a3 & a1[6]) + 8);
  if ( v6 == a1[1] )
  {
LABEL_12:
    v6 = 0LL;
  }
  else
  {
    v7 = *(_QWORD *)(v4 + 16 * (a3 & a1[6]));
    while ( 1 )
    {
      if ( !(unsigned int)_o__wcsicmp(*(_QWORD *)a2, *(_QWORD *)(v6 + 16)) )
      {
        v8 = *(_DWORD *)(a2 + 64);
        if ( v8 == *(_DWORD *)(v6 + 80) && (v8 || *(_DWORD *)(a2 + 56) == *(_DWORD *)(v6 + 72)) )
        {
          v9 = *(_DWORD *)(a2 + 48);
          if ( v9 == *(_DWORD *)(v6 + 64)
            && (v9 || !(unsigned int)_o__wcsicmp(*(_QWORD *)(a2 + 8), *(_QWORD *)(v6 + 24))) )
          {
            v10 = *(_QWORD *)(a2 + 24) - *(_QWORD *)(v6 + 40);
            if ( !v10 )
              v10 = *(_QWORD *)(a2 + 32) - *(_QWORD *)(v6 + 48);
            if ( !v10 )
              break;
          }
        }
      }
      if ( v6 == v7 )
        goto LABEL_12;
      v6 = *(_QWORD *)(v6 + 8);
    }
  }
  result = v6;
  if ( !v6 )
    return a1[1];
  return result;
}
