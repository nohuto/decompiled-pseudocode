/*
 * XREFs of ?NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z @ 0x18001DE6C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_6f73e997589bdd5d65b7fde1db8b242b__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x18007CC20 (std--_Func_impl_no_alloc__lambda_6f73e997589bdd5d65b7fde1db8b242b__long_wil--com_ptr_t_CEndpoint.c)
 * Callees:
 *     ??$?RVCAudioSessionInstanceId@@@?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@QEBA_KAEBVCAudioSessionInstanceId@@@Z @ 0x180017D00 (--$-RVCAudioSessionInstanceId@@@-$_Uhash_compare@VCAudioSessionInstanceId@@U-$hash@VCAudioSessio.c)
 *     ??$_Find_last@VCAudioSessionInstanceId@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBVCAudioSessionInstanceId@@_K@Z @ 0x18001E100 (--$_Find_last@VCAudioSessionInstanceId@@@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$co.c)
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ?_Check_rehash_required_1@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEBA_NXZ @ 0x18001E244 (-_Check_rehash_required_1@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudio.c)
 *     ??0?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA@AEBU01@@Z @ 0x18001E2AC (--0-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x18003ED00 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??1?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x1800440F0 (--1-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_returncod.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x1800D2B10 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Ue.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAudioSessionManager::NotifySessionAudioProtocol(
        CAudioSessionManager *this,
        unsigned int a2,
        int a3)
{
  struct _RTL_CRITICAL_SECTION *v7; // r12
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // r8
  _QWORD **v11; // rdi
  _QWORD *i; // rbx
  __int64 v13; // r15
  _QWORD *v14; // rsi
  _QWORD *v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // r9
  _QWORD *v18; // rdi
  _QWORD *j; // rbx
  _DWORD *v20; // rcx
  __int128 v21; // [rsp+28h] [rbp-39h] BYREF
  _QWORD **v22; // [rsp+38h] [rbp-29h]
  _QWORD *v23; // [rsp+40h] [rbp-21h]
  char v24[16]; // [rsp+48h] [rbp-19h] BYREF
  int v25; // [rsp+58h] [rbp-9h] BYREF
  _QWORD *v26; // [rsp+60h] [rbp-1h] BYREF
  __int64 v27; // [rsp+68h] [rbp+7h]
  __int64 v28; // [rsp+70h] [rbp+Fh] BYREF
  __int128 v29; // [rsp+78h] [rbp+17h]
  __int64 v30; // [rsp+88h] [rbp+27h]
  __int64 v31; // [rsp+90h] [rbp+2Fh]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 36LL, &WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids, a2, v21);
  }
  if ( *((_DWORD *)this + 68) != a3 )
  {
    v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
    v25 = *((_DWORD *)this + 12);
    v27 = 0LL;
    v8 = operator new(0x68uLL);
    *v8 = v8;
    v8[1] = v8;
    v26 = v8;
    v28 = 0LL;
    v29 = 0LL;
    v30 = *((_QWORD *)this + 12);
    v31 = *((_QWORD *)this + 13);
    std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>>>>>::_Assign_grow(
      &v28,
      (__int64)(*((_QWORD *)this + 10) - *((_QWORD *)this + 9)) >> 3,
      v8);
    v11 = (_QWORD **)*((_QWORD *)this + 7);
    for ( i = *v11; ; i = (_QWORD *)*i )
    {
      if ( i == v11 )
      {
        v18 = v26;
        for ( j = (_QWORD *)*v26; j != v18; j = (_QWORD *)*j )
        {
          v20 = (_DWORD *)j[12];
          if ( v20[161] == a2 )
          {
            LOBYTE(v10) = 1;
            (*(void (__fastcall **)(_DWORD *, __int64, _QWORD *))(*(_QWORD *)v20 + 72LL))(v20, 4LL, v10);
          }
        }
        std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::~_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>(&v25);
        if ( v7 )
          LeaveCriticalSection(v7);
        return 0LL;
      }
      v13 = std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>::operator()<CAudioSessionInstanceId>(
              v9,
              (__int64)(i + 2));
      std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Find_last<CAudioSessionInstanceId>(
        &v25,
        &v21,
        i + 2,
        v13);
      if ( !*((_QWORD *)&v21 + 1) )
      {
        if ( v27 == 0x276276276276276LL )
          std::_Xlength_error("unordered_map/set too long");
        v22 = &v26;
        v14 = operator new(0x68uLL);
        v23 = v14;
        std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>(
          v14 + 2,
          i + 2);
        if ( (unsigned __int8)std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Check_rehash_required_1(&v25) )
        {
          std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Rehash_for_1(&v25);
          v21 = *(_OWORD *)std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Find_last<CAudioSessionInstanceId>(
                             &v25,
                             v24,
                             v14 + 2,
                             v13);
        }
        v23 = 0LL;
        v15 = (_QWORD *)v21;
        v10 = *(_QWORD **)(v21 + 8);
        ++v27;
        *v14 = v21;
        v14[1] = v10;
        *v10 = v14;
        v15[1] = v14;
        v16 = 2 * (v13 & v30);
        v9 = v28;
        v17 = *(_QWORD **)(v28 + 16 * (v13 & v30));
        if ( v17 == v26 )
        {
          *(_QWORD *)(v28 + 16 * (v13 & v30)) = v14;
LABEL_22:
          *(_QWORD *)(v9 + 8 * v16 + 8) = v14;
          continue;
        }
        if ( v17 != v15 )
        {
          if ( *(_QWORD **)(v28 + 16 * (v13 & v30) + 8) != v10 )
            continue;
          goto LABEL_22;
        }
        *(_QWORD *)(v28 + 16 * (v13 & v30)) = v14;
      }
    }
  }
  return 0LL;
}
