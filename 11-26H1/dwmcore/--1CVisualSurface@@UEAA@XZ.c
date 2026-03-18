/*
 * XREFs of ??1CVisualSurface@@UEAA@XZ @ 0x18009B33C
 * Callers:
 *     ??_GCVisualSurface@@UEAAPEAXI@Z @ 0x18009B2F0 (--_GCVisualSurface@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18009B3E0 (--1-$vector_facade@USourceCVI@CVisualSurface@@V-$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vl.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18009C550 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_LUID@@V-$com_ptr_t@UIDisplayDevice@Cor.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180217110 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@QEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProje.c)
 */

void __fastcall CVisualSurface::~CVisualSurface(CVisualSurface *this)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 i; // rcx
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx

  *(_QWORD *)this = &CVisualSurface::`vftable';
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 9));
  *((_QWORD *)this + 9) = 0LL;
  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 672LL);
  v3 = *(_QWORD *)(v2 + 64);
  v4 = v3;
  for ( i = *(_QWORD *)(v3 + 8); !*(_BYTE *)(i + 25); i = *v6 )
  {
    v6 = (__int64 *)(i + 16);
    if ( *(_QWORD *)(i + 32) >= (unsigned __int64)this )
    {
      v6 = (__int64 *)i;
      v4 = i;
    }
  }
  if ( v4 != v3 && !*(_BYTE *)(v4 + 25) && (unsigned __int64)this >= *(_QWORD *)(v4 + 32) )
  {
    v7 = std::_Tree_val<std::_Tree_simple_types<std::pair<_LUID const,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>>>::_Extract(v2 + 64);
    std::_Tree_node<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>,void *>>>(
      v8,
      v7);
  }
  detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>((char *)this + 88);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 10);
  CResource::~CResource(this);
}
