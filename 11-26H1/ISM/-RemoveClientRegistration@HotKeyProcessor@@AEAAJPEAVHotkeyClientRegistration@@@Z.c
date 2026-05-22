/*
 * XREFs of ?RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z @ 0x1801D14C0
 * Callers:
 *     ?OnDisconnected@HotKeyProcessor@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801D0B10 (-OnDisconnected@HotKeyProcessor@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?UnregisterHotKeyClient@HotKeyProcessor@@UEAAJUMessageObjectID@@@Z @ 0x1801D1C80 (-UnregisterHotKeyClient@HotKeyProcessor@@UEAAJUMessageObjectID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180057428 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     _lambda_c6db7401cba5f9fe705df5cb0dba3b7a_::_lambda_c6db7401cba5f9fe705df5cb0dba3b7a_ @ 0x18019B64C (_lambda_c6db7401cba5f9fe705df5cb0dba3b7a_--_lambda_c6db7401cba5f9fe705df5cb0dba3b7a_.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801A3104 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ??$As@UIMessageProxy@@@?$ComPtr@UIRemoteHotKeyCallBack@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801CD8F0 (--$As@UIMessageProxy@@@-$ComPtr@UIRemoteHotKeyCallBack@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@@std@@@?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@@1@PEAU01@@Z @ 0x1801CE374 (--$_Freenode@V-$allocator@U-$_List_node@V-$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEA.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801CE3A0 (--$_Freenode@V-$allocator@U-$_List_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@-$_Lis.c)
 *     ??$erase@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@@std@@$0A@@?$_Tree@V?$_Tmap_traits@KV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@@1@V21@@Z @ 0x1801CE684 (--$erase@V-$_Tree_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$list@V-$shared_ptr.c)
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_Microsoft::WRL::ComPtr_HotkeyClientRegistration_________lambda_c6db7401cba5f9fe705df5cb0dba3b7a___ @ 0x1801CE884 (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_Microsoft--WRL--ComPtr.c)
 *     ??0?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x1801CEA5C (--0-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_ptr@UHotKeyInfo@@_ea_1801CEA5C.c)
 *     ?CleanupClientHotKeys@HotKeyProcessor@@AEAAXPEAVHotkeyClientRegistration@@AEAV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAH@Z @ 0x1801CF724 (-CleanupClientHotKeys@HotKeyProcessor@@AEAAXPEAVHotkeyClientRegistration@@AEAV-$list@V-$shared_p.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HotKeyProcessor::RemoveClientRegistration(
        HotKeyProcessor *this,
        struct HotkeyClientRegistration *a2)
{
  __int64 v4; // rsi
  __int64 *v5; // r15
  __int128 v6; // xmm0
  __int64 v7; // r8
  _QWORD *v8; // r8
  _QWORD *v9; // rdx
  __int64 *v10; // rdx
  __int64 v11; // rcx
  __int64 **v12; // rax
  __int64 v13; // rbx
  int v14; // eax
  ULONG_PTR v15; // r8
  int v17; // eax
  _QWORD *v18; // r15
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdx
  char **v22; // rcx
  char *v23; // rdx
  char *v24; // rdi
  _QWORD v25[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v26; // [rsp+30h] [rbp-10h] BYREF
  ULONG_PTR retaddr; // [rsp+68h] [rbp+28h]
  struct HotkeyClientRegistration *v28; // [rsp+78h] [rbp+38h] BYREF
  __int64 v29; // [rsp+80h] [rbp+40h] BYREF
  __int64 v30; // [rsp+88h] [rbp+48h] BYREF

  v28 = a2;
  v4 = 0LL;
  v30 = 0LL;
  if ( a2 )
  {
    v5 = (__int64 *)*((_QWORD *)this + 3);
    v6 = *(_OWORD *)lambda_c6db7401cba5f9fe705df5cb0dba3b7a_::_lambda_c6db7401cba5f9fe705df5cb0dba3b7a_(
                      v25,
                      &v28,
                      (__int64)this);
    v8 = *(_QWORD **)(v7 + 24);
    v9 = (_QWORD *)*v8;
    v26 = v6;
    v10 = (__int64 *)*std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_Microsoft::WRL::ComPtr_HotkeyClientRegistration_________lambda_c6db7401cba5f9fe705df5cb0dba3b7a___(
                        &v28,
                        v9,
                        v8,
                        (__int64)&v26);
    if ( v10 != v5 )
    {
      v12 = (__int64 **)v10[1];
      *v12 = v5;
      v5[1] = (__int64)v12;
      do
      {
        v13 = *v10;
        std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>::_Freenode<std::allocator<std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>>>(
          v11,
          v10);
        v10 = (__int64 *)v13;
        ++v4;
      }
      while ( (__int64 *)v13 != v5 );
      *((_QWORD *)this + 4) -= v4;
    }
    v14 = Microsoft::WRL::ComPtr<IRemoteHotKeyCallBack>::As<IMessageProxy>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 13,
            &v30);
    LODWORD(v4) = v14;
    if ( v14 < 0 )
    {
      if ( v14 == -2147024882 )
        TerminateProcessOnMemoryExhaustion(0LL);
      v15 = 1108LL;
LABEL_10:
      FailFastWithHR(v4, retaddr, v15);
      goto LABEL_11;
    }
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v30 + 64LL))(
            v30,
            ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    LODWORD(v4) = v17;
    if ( v17 < 0 )
    {
      if ( v17 == -2147024882 )
        TerminateProcessOnMemoryExhaustion(0LL);
      v15 = 1109LL;
      goto LABEL_10;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a2 + 13);
    v18 = (_QWORD *)((char *)this + 40);
    v19 = **((_QWORD **)this + 5);
    v29 = v19;
    while ( v19 != *v18 )
    {
      LODWORD(v28) = 0;
      std::list<std::shared_ptr<HotKeyInfo>>::list<std::shared_ptr<HotKeyInfo>>(&v26, (_QWORD ***)(v19 + 40));
      HotKeyProcessor::CleanupClientHotKeys(v20, (__int64)a2, (_QWORD **)&v26, &v28);
      if ( *((_QWORD *)&v26 + 1) )
      {
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
          &v29,
          v21);
        v19 = v29;
      }
      else
      {
        v19 = *std::_Tree<std::_Tmap_traits<unsigned long,std::list<std::shared_ptr<HotKeyInfo>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>,0>>::erase<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>>>,0>(
                 (__int64)v18,
                 v25,
                 v19);
        v29 = v19;
      }
      v22 = (char **)v26;
      **(_QWORD **)(v26 + 8) = 0LL;
      v23 = *v22;
      if ( *v22 )
      {
        do
        {
          v24 = *(char **)v23;
          std::_List_node<std::shared_ptr<HotKeyInfo>,void *>::_Freenode<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>(
            (__int64)v22,
            v23);
          v23 = v24;
        }
        while ( v24 );
      }
      std::_Deallocate<16>((void *)v26, (struct std::nothrow_t *)0x20);
    }
  }
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
  return (unsigned int)v4;
}
