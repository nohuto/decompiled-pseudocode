/*
 * XREFs of ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800E1DB8
 * Callers:
 *     ?Release@CConversionSwapChain@@UEAAKXZ @ 0x1800E1200 (-Release@CConversionSwapChain@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E149C (-reset@-$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ @ 0x180149160 (-ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801FC7E4 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ??1?$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18021ED74 (--1-$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800E1E44 (-InternalRelease@-$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILCOMBaseWeakRefSource<CMilObjectDeleter>::InternalRelease(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  unsigned int v4; // edi

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 8LL))(*(_QWORD *)(a1 + 16));
    v3 = v1 + 16;
    EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 16));
  }
  else
  {
    v3 = 16LL;
  }
  v4 = CMILRefCountBaseT<IUnknownWeakRefSource,CMilObjectDeleter>::InternalRelease(a1);
  if ( v1 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return v4;
}
