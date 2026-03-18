/*
 * XREFs of ?ReleaseBackBuffer@CLegacySwapChain@@IEAAXXZ @ 0x1801E2E08
 * Callers:
 *     ?ResetBuffers@CLegacySwapChain@@MEAAJXZ @ 0x180204C60 (-ResetBuffers@CLegacySwapChain@@MEAAJXZ.c)
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x180204EA4 (--1CLegacySwapChain@@MEAA@XZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacySwapChain::ReleaseBackBuffer(CLegacySwapChain *this)
{
  __int64 *v1; // rbx
  __int64 v2; // r8

  v1 = (__int64 *)((char *)this + 296);
  v2 = *((_QWORD *)this + 37);
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)v2 + 80LL))(
      *((_QWORD *)this + 37),
      ((unsigned __int64)this + 280) & -(__int64)(this != 0LL));
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
  }
}
