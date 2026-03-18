/*
 * XREFs of ?AddRetryDeviceBitmap@CLegacySurfaceManager@@QEAAXPEAVCGdiSpriteBitmap@@@Z @ 0x1802086AC
 * Callers:
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x18004AD90 (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 * Callees:
 *     ?GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z @ 0x18013EF70 (-GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z.c)
 *     ??$emplace_back@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@$$QEAV23@@Z @ 0x180208720 (--$emplace_back@V-$com_ptr_t@V-$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacySurfaceManager::AddRetryDeviceBitmap(CLegacySurfaceManager *this, struct CGdiSpriteBitmap *a2)
{
  int WeakReference; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknownWeakRef *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  WeakReference = CResource::GetWeakReference(a2, &v5);
  if ( WeakReference < 0 )
    ModuleFailFastForHRESULT(WeakReference, retaddr);
  std::vector<wil::com_ptr_t<CWeakReference<CGdiSpriteBitmap>,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<CWeakReference<CGdiSpriteBitmap>,wil::err_returncode_policy>>(
    (char *)this + 232,
    &v5);
  if ( v5 )
    (*(void (__fastcall **)(struct IUnknownWeakRef *))(*(_QWORD *)v5 + 16LL))(v5);
}
