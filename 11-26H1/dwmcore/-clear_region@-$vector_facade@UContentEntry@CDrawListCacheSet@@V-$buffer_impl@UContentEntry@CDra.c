/*
 * XREFs of ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18001E878
 * Callers:
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18001CF50 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?GetDrawListCache@CVisual@@QEBAJIIPEBVCVisualTree@@PEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18007A150 (-GetDrawListCache@CVisual@@QEBAJIIPEBVCVisualTree@@PEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18007A6F0 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001ECD0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 */

_QWORD *__fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v6; // r8
  __int64 v7; // r15
  _QWORD *v8; // rdi
  _QWORD *result; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r15
  _QWORD *v13; // rbx
  __int64 v14; // r15
  __int64 v15; // rsi
  _QWORD *i; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int128 v19; // [rsp+20h] [rbp-40h] BYREF
  __int64 v20; // [rsp+30h] [rbp-30h]
  __int128 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h]

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 4;
  v7 = a2 + a3;
  if ( a2 + a3 > v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    JUMPOUT(0x18001E9C1LL);
  }
  v8 = (_QWORD *)(v3 + 16 * v6);
  result = stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v21, v3, v6);
  if ( v7 != v11 )
  {
    v19 = v21;
    v20 = v22;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v19, v10);
    v12 = v3 + 16 * v7;
    v21 = v19;
    v22 = v20;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v21, ((__int64)v8 - v12) >> 4);
    v13 = (_QWORD *)(16 * v20 + v19 + 8);
    v14 = v12 - 16 * v20 - v19;
    while ( 1 )
    {
      result = (_QWORD *)((char *)v13 + v14 - 8);
      if ( result == v8 )
        break;
      *((_DWORD *)v13 - 2) = *(_DWORD *)result;
      *((_DWORD *)v13 - 1) = *(_DWORD *)((char *)v13 + v14 - 4);
      v17 = *(_QWORD *)((char *)v13 + v14);
      *(_QWORD *)((char *)v13 + v14) = 0LL;
      v18 = *v13;
      *v13 = v17;
      if ( v18 )
        CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release();
      v13 += 2;
    }
  }
  v15 = 16 * a3;
  for ( i = &v8[v15 / 0xFFFFFFFFFFFFFFF8uLL]; i != v8; i += 2 )
    result = (_QWORD *)wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(i + 1);
  a1[1] -= v15;
  return result;
}
