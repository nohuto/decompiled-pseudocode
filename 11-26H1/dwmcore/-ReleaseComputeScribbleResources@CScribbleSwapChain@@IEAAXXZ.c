/*
 * XREFs of ?ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ @ 0x1801D2430
 * Callers:
 *     ?PostPresentForComputeScribble@CScribbleSwapChain@@IEAAX_N@Z @ 0x1801FFF3C (-PostPresentForComputeScribble@CScribbleSwapChain@@IEAAX_N@Z.c)
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x180204EA4 (--1CLegacySwapChain@@MEAA@XZ.c)
 *     ?CleanupComputeScribble@CDDisplaySwapChain@@UEAAX_N@Z @ 0x18021F300 (-CleanupComputeScribble@CDDisplaySwapChain@@UEAAX_N@Z.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x18029A3D8 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 *     ?TransitionAwayCurrentPrimaries@CDDisplaySwapChain@@IEAAXXZ @ 0x18029B0AC (-TransitionAwayCurrentPrimaries@CDDisplaySwapChain@@IEAAXXZ.c)
 *     ?CleanupComputeScribble@CLegacySwapChain@@UEAAX_N@Z @ 0x1802A5B80 (-CleanupComputeScribble@CLegacySwapChain@@UEAAX_N@Z.c)
 *     ?NotifyInvalidResource@CLegacySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802A5DC0 (-NotifyInvalidResource@CLegacySwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F5C70 (-reset@-$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScribbleSwapChain::ReleaseComputeScribbleResources(volatile signed __int32 **this)
{
  unsigned int i; // edi
  __int64 v3; // rax

  wil::com_ptr_t<CDecodeBitmap,wil::err_returncode_policy>::reset(this + 33);
  for ( i = 0; i < (*((unsigned int (__fastcall **)(char *))this[3] + 12))((char *)this + 24); ++i )
  {
    v3 = (*((__int64 (__fastcall **)(char *, _QWORD))this[3] + 28))((char *)this + 24, i);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 208LL))(v3);
  }
}
