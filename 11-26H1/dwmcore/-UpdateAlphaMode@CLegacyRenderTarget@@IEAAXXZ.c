/*
 * XREFs of ?UpdateAlphaMode@CLegacyRenderTarget@@IEAAXXZ @ 0x18014AE74
 * Callers:
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x18014ACF0 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyRenderTarget::UpdateAlphaMode(CLegacyRenderTarget *this)
{
  int v1; // edx

  v1 = 1;
  if ( *((_DWORD *)this + 54) <= 1u )
    v1 = 3;
  if ( *((_DWORD *)this + 33) != v1 )
  {
    *((_DWORD *)this + 33) = v1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 25) + 24LL) + 152LL))(*((_QWORD *)this + 25) + 24LL);
    CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30208);
  }
}
