/*
 * XREFs of ?SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z @ 0x1802A7BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetHardwareProtection@CLegacySwapChain@@UEAAJ_N@Z @ 0x1802A5F00 (-SetHardwareProtection@CLegacySwapChain@@UEAAJ_N@Z.c)
 *     ?EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ @ 0x1802A75A8 (-EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConversionSwapChain::SetHardwareProtection(CConversionSwapChain *this, unsigned __int8 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v7; // eax

  v4 = CLegacySwapChain::SetHardwareProtection(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0xACu, 0LL);
  }
  else
  {
    v6 = *((_QWORD *)this + 62);
    if ( v6
      && ((*(int (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6) < 0
       || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 62) + 56LL))(*((_QWORD *)this + 62)) != a2) )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 62);
    }
    v7 = CConversionSwapChain::EnsureTargetBitmap((CConversionSwapChain *)((char *)this - 24));
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xB7u, 0LL);
  }
  return v5;
}
