/*
 * XREFs of ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180018F10
 * Callers:
 *     ??$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V?$shared_ptr@UIDuckingDescriptor@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVCPBMStreamClassVolumeGainStage@@$$QEAPEBU_GUID@@$$QEAV?$shared_ptr@UIDuckingDescriptor@@@std@@@Z @ 0x18000BBC0 (--$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V-$shared_ptr@UIDuckingDescr.c)
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HPEAUIDuckingController@@PEAH@Z @ 0x18000D010 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV-$shared_ptr@VDuckingDescriptor.c)
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z @ 0x180017F08 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z.c)
 *     _lambda_bc5d681da67d9384ebd56f302790ab0c_::__lambda_bc5d681da67d9384ebd56f302790ab0c_ @ 0x180017FE8 (_lambda_bc5d681da67d9384ebd56f302790ab0c_--__lambda_bc5d681da67d9384ebd56f302790ab0c_.c)
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z @ 0x1800183E8 (-OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z.c)
 *     ?_Destroy@?$_Ref_count_obj2@VDeactivatableDuckingDescriptor@@@std@@EEAAXXZ @ 0x1800184C0 (-_Destroy@-$_Ref_count_obj2@VDeactivatableDuckingDescriptor@@@std@@EEAAXXZ.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180018508 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 *     std::_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_::_Delete_this @ 0x180018900 (std--_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_--_Delete_this.c)
 *     std::_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_::_Delete_this @ 0x180018950 (std--_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_--_Delete_this.c)
 *     ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x180018B40 (-SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z.c)
 *     ??_EDeactivatableDuckingDescriptor@@UEAAPEAXI@Z @ 0x180018EA0 (--_EDeactivatableDuckingDescriptor@@UEAAPEAXI@Z.c)
 *     PbmReportApplicationState @ 0x18002B400 (PbmReportApplicationState.c)
 *     ??$?4VDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@$0A@@?$shared_ptr@VDuckingDescriptor@@@std@@QEAAAEAV01@$$QEAV?$unique_ptr@VDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@@1@@Z @ 0x18003E758 (--$-4VDuckingDescriptor@@U-$default_delete@VDuckingDescriptor@@@std@@$0A@@-$shared_ptr@VDuckingD.c)
 *     _lambda_cc9b2092a4952ec42797be7e5e21ed8c_::operator() @ 0x18003F418 (_lambda_cc9b2092a4952ec42797be7e5e21ed8c_--operator().c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x18003F7F4 (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800403A4 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?RuntimeClassInitialize@CDuckingManager@@QEAAJXZ @ 0x180040520 (-RuntimeClassInitialize@CDuckingManager@@QEAAJXZ.c)
 *     PbmAllowMediaPlaybackForApp @ 0x1800419C0 (PbmAllowMediaPlaybackForApp.c)
 *     ??1DuckingDescriptorAndId@@QEAA@XZ @ 0x1800433D0 (--1DuckingDescriptorAndId@@QEAA@XZ.c)
 *     ??1CDuckingManager@@UEAA@XZ @ 0x180045F38 (--1CDuckingManager@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::_Ref_count_base::_Decref(std::_Ref_count_base *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(std::_Ref_count_base *))this)(this);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this + 8LL))(this);
  }
}
