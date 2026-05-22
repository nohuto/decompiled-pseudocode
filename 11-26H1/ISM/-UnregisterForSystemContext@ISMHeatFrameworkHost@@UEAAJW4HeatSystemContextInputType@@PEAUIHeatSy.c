/*
 * XREFs of ?UnregisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x180198080
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800F9B48 (-find@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash_compare@_KU-$hash@.c)
 *     ??$_Erase@PEAUISystemContextObserver@@@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@AEAA_KAEBQEAUISystemContextObserver@@@Z @ 0x18010C738 (--$_Erase@PEAUISystemContextObserver@@@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_U.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ISMHeatFrameworkHost::UnregisterForSystemContext(__int64 *a1, int a2, __int64 a3, const char *a4)
{
  int v5; // edx
  int v6; // edx
  __int64 *v7; // rdi
  const char *v8; // r9
  int v9; // ebx
  __int64 v10; // rdx
  const char *v11; // r9
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+18h] BYREF
  __int64 v16; // [rsp+48h] [rbp+20h] BYREF

  v15 = a3;
  v5 = a2 - 1;
  if ( v5 )
  {
    v6 = v5 - 3;
    if ( v6 )
    {
      if ( v6 != 1 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x128,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          a4);
      v7 = a1 + 27;
      if ( !a1[27] )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x118,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          a4);
      if ( *std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::find(
              a1 + 28,
              &v16,
              (const unsigned __int8 *)&v15) == a1[29] )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x11A,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          v8);
      std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::_Erase<ISystemContextObserver *>(
        a1 + 28,
        (unsigned __int8 *)&v15);
      if ( a1[30] )
        return 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)*v7 + 32LL))(
             *v7,
             (unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL));
      if ( v9 < 0 )
      {
        v10 = 288LL;
LABEL_26:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          (const char *)(unsigned int)v9);
        return (unsigned int)v9;
      }
    }
    else
    {
      v7 = a1 + 15;
      if ( !a1[15] )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x108,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          a4);
      if ( *std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::find(
              a1 + 16,
              &v16,
              (const unsigned __int8 *)&v15) == a1[17] )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x10A,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          v11);
      std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::_Erase<ISystemContextObserver *>(
        a1 + 16,
        (unsigned __int8 *)&v15);
      if ( a1[18] )
        return 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)*v7 + 32LL))(
             *v7,
             (unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL));
      if ( v9 < 0 )
      {
        v10 = 272LL;
        goto LABEL_26;
      }
    }
  }
  else
  {
    v7 = a1 + 6;
    if ( !a1[6] )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xF8,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
        a4);
    if ( *std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::find(
            a1 + 7,
            &v16,
            (const unsigned __int8 *)&v15) == a1[8] )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xFA,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
        v12);
    std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::_Erase<ISystemContextObserver *>(
      a1 + 7,
      (unsigned __int8 *)&v15);
    if ( a1[9] )
      return 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)*v7 + 32LL))(
           *v7,
           (unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL));
    if ( v9 < 0 )
    {
      v10 = 256LL;
      goto LABEL_26;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v7);
  return 0LL;
}
