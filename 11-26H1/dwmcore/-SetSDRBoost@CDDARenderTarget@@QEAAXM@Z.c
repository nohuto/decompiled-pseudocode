/*
 * XREFs of ?SetSDRBoost@CDDARenderTarget@@QEAAXM@Z @ 0x180253388
 * Callers:
 *     ?SetSDRBoost@CDDisplayRenderTarget@@IEAAXM@Z @ 0x180206BF8 (-SetSDRBoost@CDDisplayRenderTarget@@IEAAXM@Z.c)
 *     ?SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z @ 0x180206CF0 (-SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z.c)
 * Callees:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x180057900 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDDARenderTarget::SetSDRBoost(CDDARenderTarget *this, float a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  if ( *((float *)this + 52) != a2 )
  {
    v3 = *((_QWORD *)this + 22);
    *((float *)this + 52) = a2;
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 64);
      *(float *)(v3 + 100) = a2;
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v4 + 16) + 160LL))(v4 + 16);
    }
    CTargetDirtyBase<8>::SetFullDirty((__int64)this + 504);
  }
}
