/*
 * XREFs of ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x180197CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x1800445D8 (-GetInstance@InputConfigContextProvider@@SAPEAV1@XZ.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x180076500 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?4VInputConfigContextProvider@@@?$ComPtr@UISystemContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputConfigContextProvider@@@Z @ 0x18009604C (--$-4VInputConfigContextProvider@@@-$ComPtr@UISystemContextProvider@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800F9B48 (-find@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash_compare@_KU-$hash@.c)
 *     ??$emplace@AEBQEAUIHeatSystemContextClient@@@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@_N@1@AEBQEAUIHeatSystemContextClient@@@Z @ 0x180196B8C (--$emplace@AEBQEAUIHeatSystemContextClient@@@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClien.c)
 *     ?BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@PEAUIHeatSystemContextClient@@@Z @ 0x180197658 (-BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x1801A58E8 (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 *     ?GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ @ 0x1801A6460 (-GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ISMHeatFrameworkHost::RegisterForSystemContext(
        _QWORD *a1,
        int a2,
        void (__fastcall ***a3)(_QWORD, __int128 *),
        const char *a4)
{
  int v5; // edx
  int v6; // edx
  float *v7; // rbx
  const char *v8; // r9
  struct VirtualTouchpadContextProvider *Instance; // rbx
  int v10; // ebx
  __int64 v11; // rdx
  const char *v12; // r9
  int v13; // eax
  float *v14; // rbx
  const char *v15; // r9
  struct DisplayOcclusionContextProvider *v16; // rbx
  const char *v17; // r9
  int v18; // eax
  const char *v19; // r9
  _QWORD *v20; // rbx
  struct InputConfigContextProvider *v21; // rax
  int v22; // eax
  unsigned int v23; // esi
  const char *v25; // r9
  int v26; // eax
  _BYTE v27[16]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v28[6]; // [rsp+30h] [rbp-20h] BYREF
  char v29; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  void (__fastcall ***v31)(_QWORD, __int128 *); // [rsp+80h] [rbp+30h] BYREF
  struct VirtualTouchpadContextProvider *v32; // [rsp+88h] [rbp+38h] BYREF

  v31 = a3;
  v5 = a2 - 1;
  if ( v5 )
  {
    v6 = v5 - 3;
    if ( v6 )
    {
      if ( v6 != 1 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xE8,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          a4);
      v7 = (float *)(a1 + 28);
      if ( *std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::find(
              a1 + 28,
              &v32,
              (const unsigned __int8 *)&v31) != a1[29] )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xD3,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          v8);
      std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::emplace<IHeatSystemContextClient * const &>(
        v7,
        (__int64)v27,
        (unsigned __int8 *)&v31);
      if ( !a1[27] )
      {
        Instance = VirtualTouchpadContextProvider::GetInstance();
        v32 = Instance;
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v32);
        v32 = (struct VirtualTouchpadContextProvider *)a1[27];
        a1[27] = Instance;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
        v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[27] + 24LL))(
                a1[27],
                (unsigned __int64)(a1 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64));
        if ( v10 < 0 )
        {
          v11 = 218LL;
LABEL_19:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v11,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
            (const char *)(unsigned int)v10);
          return (unsigned int)v10;
        }
      }
      v29 = 0;
      if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)a1[27] + 40LL))(a1[27], v28) >= 0 )
      {
        v13 = ISMHeatFrameworkHost::BroadcastContextMessage(a1, v28, v31, v12);
        v10 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xE1,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
            (const char *)(unsigned int)v13);
LABEL_32:
          std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy((__int64)v28);
          return (unsigned int)v10;
        }
      }
    }
    else
    {
      v14 = (float *)(a1 + 16);
      if ( *std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::find(
              a1 + 16,
              &v32,
              (const unsigned __int8 *)&v31) != a1[17] )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xBE,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          v15);
      std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::emplace<IHeatSystemContextClient * const &>(
        v14,
        (__int64)v27,
        (unsigned __int8 *)&v31);
      if ( !a1[15] )
      {
        v16 = DisplayOcclusionContextProvider::GetInstance();
        v32 = v16;
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v32);
        v32 = (struct VirtualTouchpadContextProvider *)a1[15];
        a1[15] = v16;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
        v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[15] + 24LL))(
                a1[15],
                (unsigned __int64)(a1 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64));
        if ( v10 < 0 )
        {
          v11 = 197LL;
          goto LABEL_19;
        }
      }
      v29 = 0;
      if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)a1[15] + 40LL))(a1[15], v28) >= 0 )
      {
        v18 = ISMHeatFrameworkHost::BroadcastContextMessage(a1, v28, v31, v17);
        v10 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xCC,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
            (const char *)(unsigned int)v18);
          goto LABEL_32;
        }
      }
    }
  }
  else
  {
    if ( *std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::find(
            a1 + 7,
            &v32,
            (const unsigned __int8 *)&v31) != a1[8] )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xA4,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
        v19);
    std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::emplace<IHeatSystemContextClient * const &>(
      (float *)a1 + 14,
      (__int64)v27,
      (unsigned __int8 *)&v31);
    v20 = a1 + 6;
    if ( !a1[6] )
    {
      v21 = InputConfigContextProvider::GetInstance();
      Microsoft::WRL::ComPtr<ISystemContextProvider>::operator=<InputConfigContextProvider>(a1 + 6, (__int64)v21);
      v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v20 + 24LL))(
              *v20,
              (unsigned __int64)(a1 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64));
      v23 = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAE,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          (const char *)(unsigned int)v22);
        return v23;
      }
    }
    v29 = 0;
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v20 + 40LL))(*v20, v28) >= 0 )
    {
      v26 = ISMHeatFrameworkHost::BroadcastContextMessage(a1, v28, v31, v25);
      v10 = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB6,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          (const char *)(unsigned int)v26);
        goto LABEL_32;
      }
    }
  }
  std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy((__int64)v28);
  return 0LL;
}
