/*
 * XREFs of ?GetOcclusionKind@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@@Z @ 0x1801909F0
 * Callers:
 *     <none>
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180485A78 (-find@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@@U-$.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetOcclusionKind(
        RTL_SRWLOCK *this,
        int a2,
        enum Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind *a3)
{
  RTL_SRWLOCK *v3; // rdi
  int v7; // ebx
  __m128i v8; // xmm3
  int v9; // eax
  __int64 v11; // [rsp+90h] [rbp+8h] BYREF
  int v12; // [rsp+98h] [rbp+10h] BYREF

  v12 = a2;
  v3 = this + 98;
  v7 = 2;
  AcquireSRWLockExclusive(this + 98);
  std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::find(
    &this[90],
    &v11,
    &v12);
  if ( (PVOID)v11 != this[91].Ptr )
  {
    v8 = *(__m128i *)(v11 + 56);
    v9 = *(_DWORD *)(v11 + 24);
    if ( v9 == 1 || a2 == LODWORD(this[113].Ptr) )
    {
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v8, 12))
        || (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v8, 13))
        || (_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v11 + 40), 8)) & 2) == 0 )
      {
        goto LABEL_9;
      }
      v7 = 0;
    }
    else if ( v9 == 5
           && (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v8, 12))
           && (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v8, 13)) )
    {
LABEL_9:
      v7 = 1;
    }
  }
  *(_DWORD *)a3 = v7;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  return 0LL;
}
