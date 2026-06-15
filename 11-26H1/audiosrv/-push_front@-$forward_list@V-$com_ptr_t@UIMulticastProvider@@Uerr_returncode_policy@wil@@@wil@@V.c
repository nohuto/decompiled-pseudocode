/*
 * XREFs of ?push_front@?$forward_list@V?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801085CC
 * Callers:
 *     ?RuntimeClassInitialize@CMulticastSessionManager@@QEAAJXZ @ 0x180108340 (-RuntimeClassInitialize@CMulticastSessionManager@@QEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800B0034 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCPBMStreamClassVolumeGainSta.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::forward_list<wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>>::push_front(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  v6 = a1;
  v7 = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits>(0x10uLL);
  v5 = *a2;
  *a2 = 0LL;
  v4[1] = v5;
  *v4 = *a1;
  v7 = 0LL;
  *a1 = v4;
  std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>((__int64)&v6);
}
