/*
 * XREFs of ??0CBitmapSource@@IEAA@PEAUIWICBitmapSource@@AEBUtagSIZE@@@Z @ 0x18009A66C
 * Callers:
 *     ?CreateFromWicBitmapSource@CBitmapSource@@CAJPEAUIWICBitmapSource@@PEAPEAV1@@Z @ 0x18009AB6C (-CreateFromWicBitmapSource@CBitmapSource@@CAJPEAUIWICBitmapSource@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
 *     ??0CGraphicsResourceOwner@@IEAA@XZ @ 0x180027888 (--0CGraphicsResourceOwner@@IEAA@XZ.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x180030030 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180030030.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
CBitmapSource *__fastcall CBitmapSource::CBitmapSource(
        CBitmapSource *this,
        struct IWICBitmapSource *a2,
        const struct tagSIZE *a3)
{
  __int64 v6; // rcx
  _QWORD *v7; // rax

  CBaseObject::CBaseObject(this);
  CGraphicsResourceOwner::CGraphicsResourceOwner((CGraphicsResourceOwner *)(v6 + 16));
  *(_QWORD *)this = &CBitmapSource::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CBitmapSource::`vftable'{for `CGraphicsResourceOwner'};
  *((_QWORD *)this + 5) = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IWICBitmapSource *))a2->lpVtbl->AddRef)(a2);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits>(0x20uLL);
  *v7 = v7;
  v7[1] = v7;
  *((_QWORD *)this + 9) = v7;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 7LL;
  *((_QWORD *)this + 15) = 8LL;
  *((_DWORD *)this + 16) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>>>>>::_Assign_grow(
    (__int64)this + 88,
    0x10uLL,
    *((_QWORD *)this + 9));
  *((struct tagSIZE *)this + 16) = *a3;
  return this;
}
