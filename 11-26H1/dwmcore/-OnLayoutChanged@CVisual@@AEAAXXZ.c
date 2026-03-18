/*
 * XREFs of ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18001E9C8
 * Callers:
 *     ?EnsureLayoutSize@CVisual@@QEAAXXZ @ 0x18008E040 (-EnsureLayoutSize@CVisual@@QEAAXXZ.c)
 *     ?UpdateLayoutSize@CVisual@@IEAAXXZ @ 0x1801D2AA4 (-UpdateLayoutSize@CVisual@@IEAAXXZ.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18001EC50 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001ECD0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x18014E22C (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x180190798 (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x18021DFE8 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 */

void __fastcall CVisual::OnLayoutChanged(CVisual *this)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 v4; // r8
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rax
  _BYTE *v9; // r8
  __int64 v10; // rcx
  _QWORD ***v11; // r14
  _QWORD **v12; // r14
  _DWORD *v13; // rdx
  _QWORD *i; // rbx
  __int64 v15; // rax
  _BYTE *v16; // r8
  __int64 v17; // rcx
  CProjectedShadowReceiver ***v18; // rax
  CProjectedShadowReceiver **v19; // rdi
  CProjectedShadowReceiver **k; // rbx
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v22; // rbp
  CProjectedShadowCaster **j; // rbx
  _QWORD v24[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 42);
  v2 = 0LL;
  v4 = (*((_QWORD *)this + 43) - v1) >> 4;
  if ( v4 )
  {
    v5 = 16 * v4;
    v6 = 16 * v4 + v1;
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v24, v1, v4);
    while ( v1 != v6 )
    {
      wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(v1 + 8);
      v1 += 16LL;
    }
    *((_QWORD *)this + 43) -= v5;
  }
  v7 = *((_QWORD *)this + 28);
  if ( *(int *)v7 < 0 )
  {
    v8 = *(unsigned int *)(v7 + 4);
    v9 = (_BYTE *)(v7 + 8);
    v10 = 0LL;
    if ( (_DWORD)v8 )
    {
      while ( *v9 != 1 )
      {
        v10 = (unsigned int)(v10 + 1);
        ++v9;
        if ( (unsigned int)v10 >= (unsigned int)v8 )
          goto LABEL_24;
      }
    }
    else
    {
LABEL_24:
      if ( (unsigned int)v10 >= (unsigned int)v8 )
      {
        v11 = 0LL;
LABEL_10:
        v12 = *v11;
        if ( v12 )
        {
          for ( i = *v12; i != v12; i = (_QWORD *)*i )
            detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear(i - 42);
        }
        goto LABEL_11;
      }
    }
    v11 = (_QWORD ***)(v7 + ((v8 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v10);
    goto LABEL_10;
  }
LABEL_11:
  if ( (**((_DWORD **)this + 28) & 0x100000) != 0 )
  {
    ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(this);
    v22 = *(CProjectedShadowCaster ***)(ProjectedShadowCasters + 8);
    for ( j = *(CProjectedShadowCaster ***)ProjectedShadowCasters; j != v22; ++j )
      CProjectedShadowCaster::InvalidateMaskContent(*j);
  }
  v13 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v13 & 0x80000) != 0 )
  {
    v15 = (unsigned int)v13[1];
    v16 = v13 + 2;
    v17 = 0LL;
    if ( (_DWORD)v15 )
    {
      while ( *v16 != 13 )
      {
        v17 = (unsigned int)(v17 + 1);
        ++v16;
        if ( (unsigned int)v17 >= (unsigned int)v15 )
          goto LABEL_27;
      }
    }
    else
    {
LABEL_27:
      if ( (unsigned int)v17 >= (unsigned int)v15 )
      {
LABEL_20:
        v18 = *(CProjectedShadowReceiver ****)v2;
        v19 = *(CProjectedShadowReceiver ***)(*(_QWORD *)v2 + 8LL);
        for ( k = *v18; k != v19; ++k )
          CProjectedShadowReceiver::InvalidateMaskContent(*k);
        return;
      }
    }
    v2 = (unsigned __int64)&v13[2 * v17] + ((v15 + 15) & 0xFFFFFFFFFFFFFFF8uLL);
    goto LABEL_20;
  }
}
