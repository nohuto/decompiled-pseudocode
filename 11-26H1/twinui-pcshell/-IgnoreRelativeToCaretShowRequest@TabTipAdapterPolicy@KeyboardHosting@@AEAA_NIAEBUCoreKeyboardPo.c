/*
 * XREFs of ?IgnoreRelativeToCaretShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x18013E198
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x18024EFF0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x18013E2C4 (-IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 *     ?find@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180485A78 (-find@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@@U-$.c)
 */

bool __fastcall KeyboardHosting::TabTipAdapterPolicy::IgnoreRelativeToCaretShowRequest(
        RTL_SRWLOCK *this,
        int a2,
        const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *a3)
{
  RTL_SRWLOCK *v3; // rbx
  __m128i v6; // xmm2
  bool v8; // di
  __int64 v9; // [rsp+80h] [rbp+8h] BYREF
  int v10; // [rsp+88h] [rbp+10h] BYREF

  v10 = a2;
  v3 = this + 100;
  AcquireSRWLockShared(this + 100);
  std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::find(
    &this[92],
    &v9,
    &v10);
  if ( (PVOID)v9 != this[93].Ptr
    && (v6 = *(__m128i *)(v9 + 20), (unsigned __int8)_mm_cvtsi128_si32(v6))
    && *(_DWORD *)a3 == 2
    && *(_QWORD *)((char *)a3 + 4) == _mm_srli_si128(v6, 8).m128i_u64[0]
    && *((float *)a3 + 16) == (float)(int)COERCE_FLOAT(HIDWORD(*(_QWORD *)(v9 + 84)))
    && *((float *)a3 + 17) == (float)(int)*(float *)(v9 + 92) )
  {
    v8 = !KeyboardHosting::TabTipAdapterPolicy::IsCursorPositionValid((KeyboardHosting::TabTipAdapterPolicy *)this);
    if ( v3 )
      ReleaseSRWLockShared(v3);
    return v8;
  }
  else
  {
    if ( v3 )
      ReleaseSRWLockShared(v3);
    return 0;
  }
}
