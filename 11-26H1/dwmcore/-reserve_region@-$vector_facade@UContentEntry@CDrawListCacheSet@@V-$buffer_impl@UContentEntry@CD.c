/*
 * XREFs of ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x18001E494
 * Callers:
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18001CF50 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?GetDrawListCache@CVisual@@QEBAJIIPEBVCVisualTree@@PEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18007A150 (-GetDrawListCache@CVisual@@QEBAJIIPEBVCVisualTree@@PEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ??$emplace@IIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UContentEntry@CDrawListCacheSet@@@1@V?$basic_iterator@$$CBUContentEntry@CDrawListCacheSet@@@1@IIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18007A668 (--$emplace@IIV-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@-$vector_facade@UC.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18007A6F0 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@Z @ 0x18000A724 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSet@@0@Z @ 0x18001E458 (--$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSe.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001ECD0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ @ 0x180142FD8 (--C-$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@PEAUContentEntry@CDrawListCacheSet@@@std@@YAPEAUContentEntry@CDrawListCacheSet@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@V30@PEAU12@@Z @ 0x18025AD90 (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@PEAU.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 *v8; // r12
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rsi
  _QWORD *v12; // r15
  _QWORD *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r13
  __int64 v17; // rbx
  __int64 v18; // rdi
  unsigned __int64 v20; // r15
  __int64 v21; // rbx
  _QWORD *v22; // r14
  _QWORD *v23; // rcx
  unsigned __int64 v24; // r14
  void *v25; // rsi
  __int64 v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rax
  void *v29; // rcx
  bool v30; // zf
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // [rsp+20h] [rbp-50h]
  __int128 v34; // [rsp+30h] [rbp-40h] BYREF
  __int64 v35; // [rsp+40h] [rbp-30h]
  __int128 v36; // [rsp+50h] [rbp-20h] BYREF
  __int64 v37; // [rsp+60h] [rbp-10h]
  __int64 v39; // [rsp+C0h] [rbp+50h]
  unsigned __int64 v40; // [rsp+C8h] [rbp+58h]

  v6 = a1[1];
  v8 = a1;
  if ( !((a1[2] - v6) >> 4) )
  {
    v20 = (v6 - *a1) >> 4;
    if ( v20 + 1 < v20 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      goto LABEL_17;
    }
    v24 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)a1, (a1[2] - *a1) >> 4, v20 + 1);
    v25 = operator new[](saturated_mul(v24, 0x10uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v36, (__int64)v25, v20);
    v26 = v8[1];
    v27 = *v8;
    v34 = v36;
    v35 = v37;
    v28 = std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(&v34);
    std::_Uninitialized_move_unchecked<std::move_iterator<CDrawListCacheSet::ContentEntry *>,CDrawListCacheSet::ContentEntry *>(
      v27,
      v26,
      v28);
    detail::destruct_range<CDrawListCacheSet::ContentEntry>(*v8, v8[1]);
    v29 = (void *)*v8;
    v30 = *v8 == (_QWORD)(v8 + 3);
    *v8 = (__int64)v25;
    if ( v30 )
      v29 = 0LL;
    operator delete(v29);
    v6 = *v8 + 16 * v20;
    v8[2] = *v8 + 16 * v24;
    v8[1] = v6;
  }
  v5 = *v8;
  v33 = *v8;
  v2 = (v6 - *v8) >> 4;
  v39 = v2;
  v3 = 16 * v2;
  v40 = v2 - a2;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v36, 16 * v2 + *v8, 1LL);
  v34 = v36;
  v35 = v37;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v34, v9);
  v10 = v2 - a2;
  v36 = v34;
  if ( (unsigned __int64)(v2 - a2) > 1 )
    v10 = 1LL;
  v37 = v35;
  v11 = v6 - 16 * v10;
  if ( v6 != v11 )
  {
    v12 = (_QWORD *)(v6 + 8);
    do
    {
      v13 = v12;
      v12 -= 2;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v36);
      v14 = stdext::checked_array_iterator<D2D_RECT_F *>::operator->(&v36);
      *(_DWORD *)v14 = *((_DWORD *)v12 - 2);
      *(_DWORD *)(v14 + 4) = *((_DWORD *)v12 - 1);
      v15 = *v12;
      *v12 = 0LL;
      *(_QWORD *)(v14 + 8) = v15;
    }
    while ( v13 - 3 != (_QWORD *)v11 );
    v2 = v39;
  }
  v4 = 16 * a2 + v5;
  if ( v40 <= 1 )
  {
    v16 = 16 * a2;
    goto LABEL_10;
  }
LABEL_17:
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v36, v5, v2);
  v34 = v36;
  v35 = v37;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v34, v2);
  v21 = v3 + v5 - 16;
  v36 = v34;
  v37 = v35;
  v22 = (_QWORD *)(std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(&v36)
                 + 8);
  while ( 1 )
  {
    v23 = v22;
    if ( v4 == v21 )
      break;
    v21 -= 16LL;
    v22 -= 2;
    *((_DWORD *)v23 - 6) = *(_DWORD *)v21;
    *((_DWORD *)v22 - 1) = *(_DWORD *)(v21 + 4);
    v31 = *(_QWORD *)(v21 + 8);
    *(_QWORD *)(v21 + 8) = 0LL;
    v32 = *v22;
    *v22 = v31;
    if ( v32 )
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release();
  }
  v8 = a1;
  v5 = v33;
  v16 = 16 * a2;
LABEL_10:
  v17 = v4;
  if ( v3 + v5 >= (unsigned __int64)(v16 + 16 + v5) )
    v3 = v16 + 16;
  v18 = v5 + v3;
  if ( v4 != v18 )
  {
    do
    {
      wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(v17 + 8);
      v17 += 16LL;
    }
    while ( v17 != v18 );
  }
  v8[1] += 16LL;
  return v4;
}
