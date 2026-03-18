/*
 * XREFs of ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18008C9A8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CLayerVisual@@QEAA@PEAVCComposition@@@Z @ 0x1801CDC50 (--0CLayerVisual@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSceneVisual@@QEAA@PEAVCComposition@@@Z @ 0x1801D4AB0 (--0CSceneVisual@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CCursorVisual@@IEAA@PEAVCComposition@@@Z @ 0x18021AF90 (--0CCursorVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CWindowNode@@IEAA@PEAVCComposition@@@Z @ 0x1802459C4 (--0CWindowNode@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CDesktopTree@@MEAAJXZ @ 0x180260050 (-Initialize@CDesktopTree@@MEAAJXZ.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??$destruct_range@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x18008CC18 (--$destruct_range@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@detail@.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x180260224 (--0CTreeData@@IEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CVisual *__fastcall CVisual::CVisual(CVisual *this, struct CComposition *a2)
{
  char *v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r14
  _QWORD *v7; // rbp
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // r9
  void *v11; // rcx
  _QWORD v13[7]; // [rsp+20h] [rbp-38h] BYREF

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 2LL;
  v3 = (char *)this + 320;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CVisual::`vftable';
  *((_QWORD *)this + 10) = 2LL;
  *((_QWORD *)this + 27) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
  *((_QWORD *)this + 28) = &CSparseAlignedStorage<8,8>::k_defaultEmptyAllocatedStorage;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *(_QWORD *)((char *)this + 148) = 0LL;
  *(_QWORD *)((char *)this + 156) = 0LL;
  *(_QWORD *)((char *)this + 164) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)((char *)this + 172) = 0LL;
  *(_QWORD *)((char *)this + 180) = 0LL;
  *(_QWORD *)((char *)this + 188) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  CTreeData::CTreeData((CVisual *)((char *)this + 320));
  *(_QWORD *)v3 = &CDesktopTreeData::`vftable';
  *((_BYTE *)this + 102) |= 0x20u;
  *((_QWORD *)v3 + 31) = this;
  *((_WORD *)v3 + 6) = 257;
  *((_QWORD *)v3 + 26) = 0LL;
  *((_QWORD *)v3 + 27) = 0LL;
  *((_QWORD *)v3 + 28) = 0LL;
  *((_QWORD *)v3 + 29) = 0LL;
  *((_QWORD *)v3 + 9) = 0LL;
  *((_QWORD *)v3 + 10) = 0LL;
  *((_QWORD *)v3 + 11) = 0LL;
  *((_QWORD *)v3 + 12) = 0LL;
  *((_QWORD *)v3 + 13) = 0LL;
  *((_QWORD *)v3 + 15) = 0LL;
  *((_DWORD *)v3 + 34) = 16843008;
  v4 = (_QWORD *)*((_QWORD *)v3 + 22);
  v5 = (__int64)(*((_QWORD *)v3 + 23) - (_QWORD)v4) >> 3;
  if ( v5 )
  {
    v6 = 8 * v5;
    v7 = &v4[v5];
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v13, *((_QWORD *)v3 + 22), v5);
    while ( v4 != v7 )
    {
      if ( *v4 )
        (**(void (__fastcall ***)(_QWORD, __int64))*v4)(*v4, 1LL);
      ++v4;
    }
    *((_QWORD *)v3 + 23) -= v6;
  }
  v8 = (__int64)(*((_QWORD *)v3 + 19) - *((_QWORD *)v3 + 18)) >> 3;
  if ( v8 )
  {
    v9 = 8 * v8;
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v13, *((_QWORD *)v3 + 18), v8);
    detail::destruct_range<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>>(v10, v9 + v10);
    *((_QWORD *)v3 + 19) -= v9;
  }
  v11 = (void *)*((_QWORD *)v3 + 34);
  *((_QWORD *)v3 + 34) = 0LL;
  if ( v11 )
    operator delete(v11, 0x10uLL);
  (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 32LL))(v3);
  return this;
}
