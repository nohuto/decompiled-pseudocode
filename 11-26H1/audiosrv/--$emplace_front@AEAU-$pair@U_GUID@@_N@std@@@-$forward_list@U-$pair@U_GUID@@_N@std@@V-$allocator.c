/*
 * XREFs of ??$emplace_front@AEAU?$pair@U_GUID@@_N@std@@@?$forward_list@U?$pair@U_GUID@@_N@std@@V?$allocator@U?$pair@U_GUID@@_N@std@@@2@@std@@QEAAAEAU?$pair@U_GUID@@_N@1@AEAU21@@Z @ 0x18013473C
 * Callers:
 *     ?CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002EC70 (-CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpo.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@U?$pair@U_GUID@@_N@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800B0E44 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Flist_node@U-$pair@U_GUID@@_N@std@@PEAX@std@@@std@@@s.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::forward_list<std::pair<_GUID,bool>>::emplace_front<std::pair<_GUID,bool> &>(
        _QWORD *a1,
        __int64 a2)
{
  char *v4; // rax
  _QWORD *v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  v6 = a1;
  v7 = 0LL;
  v4 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(0x20uLL);
  *(_OWORD *)(v4 + 8) = *(_OWORD *)a2;
  *((_DWORD *)v4 + 6) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)v4 = *a1;
  v7 = 0LL;
  *a1 = v4;
  std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<std::pair<_GUID,bool>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<std::pair<_GUID,bool>,void *>>>((__int64)&v6);
  return *a1 + 8LL;
}
