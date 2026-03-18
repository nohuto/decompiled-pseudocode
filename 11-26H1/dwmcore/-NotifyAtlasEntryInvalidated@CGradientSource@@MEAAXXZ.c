/*
 * XREFs of ?NotifyAtlasEntryInvalidated@CGradientSource@@MEAAXXZ @ 0x18027E72C
 * Callers:
 *     ?NotifyAtlasEntryInvalidated@CGradientBrush@@UEAAXXZ @ 0x18027EA70 (-NotifyAtlasEntryInvalidated@CGradientBrush@@UEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CGradientSource::NotifyAtlasEntryInvalidated(CGradientSource *this)
{
  __int64 *v1; // rcx

  v1 = (__int64 *)((char *)this + 16);
  if ( *v1 )
  {
    *(_QWORD *)(*v1 + 32) = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
  }
}
