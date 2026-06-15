/*
 * XREFs of ??$_Append_range_unchecked@V?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@PEAUIAudioSessionInfo@@@std@@@std@@U_Iterator_base0@2@@std@@U_Default_sentinel@2@@?$_Flist_insert_after_op2@V?$allocator@U?$_Flist_node@PEAUIAudioSessionInfo@@PEAX@std@@@std@@@std@@QEAAXV?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@PEAUIAudioSessionInfo@@@std@@@std@@U_Iterator_base0@2@@1@U_Default_sentinel@1@@Z @ 0x18003E7D8
 * Callers:
 *     ??$_Assign_unchecked@V?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@PEAUIAudioSessionInfo@@@std@@@std@@U_Iterator_base0@2@@std@@U_Default_sentinel@2@@?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@AEAAXV?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@PEAUIAudioSessionInfo@@@std@@@std@@U_Iterator_base0@2@@1@U_Default_sentinel@1@@Z @ 0x18003E970 (--$_Assign_unchecked@V-$_Flist_unchecked_const_iterator@V-$_Flist_val@U-$_Flist_simple_types@PEA.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000E6B0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18002A144 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCPBMStreamClassVolumeGainSta.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Flist_insert_after_op2<std::allocator<std::_Flist_node<IAudioSessionInfo *,void *>>>::_Append_range_unchecked<std::_Flist_unchecked_const_iterator<std::_Flist_val<std::_Flist_simple_types<IAudioSessionInfo *>>,std::_Iterator_base0>,std::_Default_sentinel>(
        __int64 *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  if ( a2 )
  {
    v2 = a2;
    v5 = *a1;
    v6 = 0LL;
    if ( a1[1] )
      goto LABEL_5;
    v6 = 0LL;
    v4 = std::_Allocate<16,std::_Default_allocate_traits>(0x10uLL);
    v4[1] = v2[1];
    a1[2] = (__int64)v4;
    while ( 1 )
    {
      a1[1] = (__int64)v4;
      v2 = (_QWORD *)*v2;
      v6 = 0LL;
LABEL_5:
      if ( !v2 )
        break;
      v6 = 0LL;
      v4 = std::_Allocate<16,std::_Default_allocate_traits>(0x10uLL);
      v4[1] = v2[1];
      *(_QWORD *)a1[1] = v4;
    }
    std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>((__int64)&v5);
  }
}
