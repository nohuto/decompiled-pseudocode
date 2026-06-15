/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800B0034
 * Callers:
 *     ??$emplace_front@AEAPEAUISessionInternalEvents@@@?$forward_list@V?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@AEAPEAUISessionInternalEvents@@@Z @ 0x1800AAB68 (--$emplace_front@AEAPEAUISessionInternalEvents@@@-$forward_list@V-$com_ptr_t@UISessionInternalEv.c)
 *     ?AddDuckingManagerGainStage@CAudioSession@@UEAAJPEAVCPBMStreamClassVolumeGainStage@@@Z @ 0x1800CDA50 (-AddDuckingManagerGainStage@CAudioSession@@UEAAJPEAVCPBMStreamClassVolumeGainStage@@@Z.c)
 *     ??$emplace_front@AEAV?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@@?$forward_list@V?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@AEAV23@@Z @ 0x1800D18E8 (--$emplace_front@AEAV-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@@-$f.c)
 *     ??$emplace_front@AEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$forward_list@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@AEAV234@@Z @ 0x1800E00AC (--$emplace_front@AEAV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$forward_list@V-$ComPtr@UISt.c)
 *     ?TryGetResourceManagerService@CBluetoothAudioEndpointResourceManagerProvider@@UEAAJPEAVCEndpointCharacteristics@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F8090 (-TryGetResourceManagerService@CBluetoothAudioEndpointResourceManagerProvider@@UEAAJPEAVCEndpoint.c)
 *     ?push_front@?$forward_list@V?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801085CC (-push_front@-$forward_list@V-$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@V.c)
 *     _std::forward_list_wil::com_ptr_t_IMulticastProvider_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IMulticastProvider_wil::err_returncode_policy_____::push_front_::_1_::dtor$0 @ 0x180163654 (_std--forward_list_wil--com_ptr_t_IMulticastProvider_wil--err_returncode_policy__std--allocator_.c)
 *     _CEndpointStoreCache::GetEndpointStore_::_1_::dtor$15 @ 0x1801636D0 (_CEndpointStoreCache--GetEndpointStore_--_1_--dtor$15.c)
 *     _CBluetoothAudioEndpointResourceManagerProvider::TryGetResourceManagerService_::_1_::dtor$9 @ 0x180169D3F (_CBluetoothAudioEndpointResourceManagerProvider--TryGetResourceManagerService_--_1_--dtor$9.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16>(v1, (struct std::nothrow_t *)0x10);
}
