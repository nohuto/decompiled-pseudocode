/*
 * XREFs of ??$emplace_front@AEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAAAEAUDisplacedStreamGroup@@AEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@1@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@1@@Z @ 0x1800E0124
 * Callers:
 *     ?FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@PEA_N@Z @ 0x1800E2278 (-FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManagerBase@@IEAA.c)
 *     ?ReleaseSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@AEAV?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@@Z @ 0x1800E5F00 (-ReleaseSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@AEAV-$forward_list@UDisp.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800E65D8 (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800D3144 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$construct@UDisplacedStreamGroup@@AEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@6@@?$_Default_allocator_traits@V?$allocator@U?$_Flist_node@UDisplacedStreamGroup@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_Flist_node@UDisplacedStreamGroup@@PEAX@std@@@1@QEAUDisplacedStreamGroup@@AEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@1@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@1@@Z @ 0x1800DFFFC (--$construct@UDisplacedStreamGroup@@AEAVWeakRef@WRL@Microsoft@@AEAV-$unique_ptr@USaDeviceParams@.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800E02C4 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U-$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@P.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::forward_list<DisplacedStreamGroup>::emplace_front<Microsoft::WRL::WeakRef &,std::unique_ptr<SaDeviceParams> &,std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>> &>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  unsigned __int64 size_of; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v12; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h]

  v12 = a1;
  v13 = 0LL;
  size_of = std::_Get_size_of_n<48>(1uLL);
  v9 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  std::_Default_allocator_traits<std::allocator<std::_Flist_node<DisplacedStreamGroup,void *>>>::construct<DisplacedStreamGroup,Microsoft::WRL::WeakRef &,std::unique_ptr<SaDeviceParams> &,std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>> &>(
    v10,
    v9 + 1,
    a2,
    a3,
    a4);
  *v9 = *a1;
  v13 = 0LL;
  *a1 = v9;
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *>>>(&v12);
  return *a1 + 8LL;
}
