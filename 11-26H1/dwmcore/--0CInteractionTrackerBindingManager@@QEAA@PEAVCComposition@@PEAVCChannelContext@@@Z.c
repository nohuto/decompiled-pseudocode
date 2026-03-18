/*
 * XREFs of ??0CInteractionTrackerBindingManager@@QEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x180201018
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180152644 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_v_ea_180152644.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801D0720 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??4?$ComPtr@VCInteractionTrackerBindingManager@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrackerBindingManager@@@Z @ 0x1801DB8A8 (--4-$ComPtr@VCInteractionTrackerBindingManager@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrac.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

CInteractionTrackerBindingManager *__fastcall CInteractionTrackerBindingManager::CInteractionTrackerBindingManager(
        CInteractionTrackerBindingManager *this,
        struct CComposition *a2,
        struct CChannelContext *a3)
{
  _QWORD *v5; // rax
  const char *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CInteractionTrackerBindingManager *v11; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 2LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CInteractionTrackerBindingManager::`vftable';
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits>(0x58uLL, (__int64)a2);
  *v5 = v5;
  v5[1] = v5;
  *((_QWORD *)this + 11) = v5;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 7LL;
  *((_QWORD *)this + 17) = 8LL;
  *((_DWORD *)this + 20) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<CBaseExpression *>>,std::_Iterator_base0>>>::_Assign_grow(
    (__int64)this + 104,
    0x10uLL,
    *((_QWORD *)this + 11));
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  if ( (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 2LL) )
  {
    v11 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      v7,
      byte_1803B4C7D,
      v8,
      (__int64)v6,
      (__int64)&v11);
  }
  if ( *((_QWORD *)a3 + 13) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1EE,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\channelcontext.cpp",
      v6);
  Microsoft::WRL::ComPtr<CInteractionTrackerBindingManager>::operator=((__int64 *)a3 + 13, (__int64)this);
  return this;
}
