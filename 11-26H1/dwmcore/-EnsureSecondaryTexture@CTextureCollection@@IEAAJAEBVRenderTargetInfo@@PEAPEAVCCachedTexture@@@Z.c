/*
 * XREFs of ?EnsureSecondaryTexture@CTextureCollection@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCCachedTexture@@@Z @ 0x1802B1888
 * Callers:
 *     ?GetSecondaryD2DBitmap@CTextureCollection@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B19FC (-GetSecondaryD2DBitmap@CTextureCollection@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetSecondaryDeviceTexture@CTextureCollection@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802B1AEC (-GetSecondaryDeviceTexture@CTextureCollection@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801044B4 (--4-$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _CTextureCollection::EnsureSecondaryTexture_::_2_::_lambda_1_::operator()_wil::com_ptr_t_CCachedTexture_wil::err_returncode_policy___ @ 0x1802B1230 (_CTextureCollection--EnsureSecondaryTexture_--_2_--_lambda_1_--operator()_wil--com_ptr_t_CCached.c)
 *     ??$emplace_back@AEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@AEAV23@@Z @ 0x1802B13F4 (--$emplace_back@AEAV-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$.c)
 *     ?CreateSecondary@CCachedTexture@@KAJPEAV1@U_LUID@@PEAPEAV1@@Z @ 0x1802B17C4 (-CreateSecondary@CCachedTexture@@KAJPEAV1@U_LUID@@PEAPEAV1@@Z.c)
 *     ?UpdateCrossAdapterSource@CTextureCollection@@IEAAJXZ @ 0x1802B21B0 (-UpdateCrossAdapterSource@CTextureCollection@@IEAAJXZ.c)
 *     ?erase@?$vector@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@0@Z @ 0x1802B2354 (-erase@-$vector@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTextureCollection::EnsureSecondaryTexture(
        __int64 **this,
        struct _LUID *a2,
        struct CCachedTexture **a3)
{
  int updated; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 *v9; // rsi
  __int64 *i; // rbx
  __int64 *j; // rdi
  struct CCachedTexture **k; // rcx
  struct CCachedTexture *v13; // rbx
  struct _LUID v14; // rdx
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CCachedTexture *v18; // [rsp+68h] [rbp+20h] BYREF

  updated = CTextureCollection::UpdateCrossAdapterSource((CTextureCollection *)this);
  v8 = updated;
  if ( updated >= 0 )
  {
    v9 = this[22];
    for ( i = this[21];
          i != v9
       && !CTextureCollection::EnsureSecondaryTexture_::_2_::_lambda_1_::operator()_wil::com_ptr_t_CCachedTexture_wil::err_returncode_policy___(
             v7,
             i);
          ++i )
    {
      ;
    }
    if ( i != v9 )
    {
      for ( j = i + 1; j != v9; ++j )
      {
        if ( !CTextureCollection::EnsureSecondaryTexture_::_2_::_lambda_1_::operator()_wil::com_ptr_t_CCachedTexture_wil::err_returncode_policy___(
                v7,
                j) )
          wil::com_ptr_t<IBitmapLock,wil::err_returncode_policy>::operator=(i++, j);
      }
    }
    std::vector<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>::erase(this + 21, &v18, i, this[22]);
    for ( k = (struct CCachedTexture **)this[21]; k != (struct CCachedTexture **)this[22]; ++k )
    {
      v13 = *k;
      if ( *((_QWORD *)*k + 14) == *a2 )
      {
        if ( v13 )
        {
          (*(void (__fastcall **)(struct CCachedTexture *))(*(_QWORD *)v13 + 8LL))(*k);
          goto LABEL_22;
        }
        break;
      }
    }
    v14 = *a2;
    v18 = 0LL;
    v15 = CCachedTexture::CreateSecondary((struct CCachedTexture *)this, v14, &v18);
    v8 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12C,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\texturecollection.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_23;
    }
    std::vector<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy> &>(
      (__int64)(this + 21),
      (__int64 *)&v18);
    v13 = v18;
LABEL_22:
    *a3 = v13;
    v8 = 0;
    v18 = 0LL;
LABEL_23:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x110,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\texturecollection.cpp",
      (const char *)(unsigned int)updated);
  }
  return v8;
}
