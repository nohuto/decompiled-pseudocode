/*
 * XREFs of ?erase@?$vector@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@0@Z @ 0x1802B2354
 * Callers:
 *     ?EnsureSecondaryTexture@CTextureCollection@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCCachedTexture@@@Z @ 0x1802B1888 (-EnsureSecondaryTexture@CTextureCollection@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCCachedTexture@@@Z.c)
 *     ?NotifyInvalidResource@CTextureCollection@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802B1E80 (-NotifyInvalidResource@CTextureCollection@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??4?$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801044B4 (--4-$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 **__fastcall std::vector<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>::erase(
        __int64 a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v4; // rsi
  __int64 *v8; // r15
  __int64 *v9; // rdi
  __int64 **result; // rax

  v4 = a4;
  if ( a3 != a4 )
  {
    v8 = *(__int64 **)(a1 + 8);
    v9 = a3;
    if ( a4 != v8 )
    {
      do
        wil::com_ptr_t<IBitmapLock,wil::err_returncode_policy>::operator=(v9++, v4++);
      while ( v4 != v8 );
    }
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(
      v9,
      *(__int64 **)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v9;
  }
  result = a2;
  *a2 = a3;
  return result;
}
