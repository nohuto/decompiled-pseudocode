/*
 * XREFs of ?IsUsableOnTargetWithHDRBoost@CBlurredBackdropCache@@CA_NAEBVCDrawListBitmap@@AEBVRenderTargetInfo@@_N@Z @ 0x1801AC36C
 * Callers:
 *     ?LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@PEAUEffectInput@@@Z @ 0x1801AC2D4 (-LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@P.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CanRenderFromSourceToTarget@@YA_NAEBVRenderTargetInfo@@0@Z @ 0x1801779E0 (-CanRenderFromSourceToTarget@@YA_NAEBVRenderTargetInfo@@0@Z.c)
 *     ?IsScreenReadBackCompatible@@YA_N_NPEAVIDeviceTextureTarget@@@Z @ 0x180184E00 (-IsScreenReadBackCompatible@@YA_N_NPEAVIDeviceTextureTarget@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CBlurredBackdropCache::IsUsableOnTargetWithHDRBoost(
        const struct CDrawListBitmap *a1,
        const struct RenderTargetInfo *a2,
        char a3)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  bool v4; // si
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  struct IDeviceTextureTarget *v9; // rax
  _BYTE v11[16]; // [rsp+20h] [rbp-38h] BYREF
  float v12; // [rsp+30h] [rbp-28h]
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a1 + 1);
  v4 = 0;
  v14 = 0LL;
  v7 = **v3;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v14);
  v8 = v7(v3, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, &v14);
  if ( v8 < 0 )
    ModuleFailFastForHRESULT(v8, retaddr);
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 88LL))(v14, v11);
  if ( CanRenderFromSourceToTarget((const struct RenderTargetInfo *)v11, a2) )
  {
    v9 = (struct IDeviceTextureTarget *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 144LL))(v14);
    if ( IsScreenReadBackCompatible(a3, v9) )
      v4 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 4) - v12) & _xmm) <= 0.0000011920929;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v14);
  return v4;
}
