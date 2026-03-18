/*
 * XREFs of ?NotifyInvalidResource@CTextureCollection@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802B1E80
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801044B4 (--4-$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?erase@?$vector@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@0@Z @ 0x1802B2354 (-erase@-$vector@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTextureCollection::NotifyInvalidResource(CTextureCollection *this, const struct IDeviceResource *a2)
{
  unsigned int v3; // ebx
  __int64 *v4; // rbp
  __int64 *v5; // rdi
  __int64 *i; // rsi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  (*(void (__fastcall **)(const struct IDeviceResource *, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, &v7);
  v3 = v7;
  v4 = (__int64 *)*((_QWORD *)this + 20);
  v5 = (__int64 *)*((_QWORD *)this + 19);
  v8 = v7;
  while ( v5 != v4 && *(_QWORD *)(*v5 + 112) != v7 )
    ++v5;
  if ( v5 != v4 )
  {
    for ( i = v5 + 1; i != v4; ++i )
    {
      if ( *(_QWORD *)(*i + 112) != __PAIR64__(HIDWORD(v8), v3) )
        wil::com_ptr_t<IBitmapLock,wil::err_returncode_policy>::operator=(v5++, i);
    }
  }
  std::vector<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>::erase(
    (char *)this + 152,
    &v8,
    v5,
    *((_QWORD *)this + 20));
}
