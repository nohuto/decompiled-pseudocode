/*
 * XREFs of ?Show@CFrameApplicationPresentation@@UEAAJXZ @ 0x1802119C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x1800A8B98 (-_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ.c)
 *     ?_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x1801F00B0 (-_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoper.c)
 */

__int64 __fastcall CFrameApplicationPresentation::Show(CFrameApplicationPresentation *this)
{
  if ( !*((_BYTE *)this + 52) )
  {
    CFrameApplicationPresentation::_SuppressSplashScreenIfAppropriate(this);
    if ( *((_DWORD *)this + 55) != 1 )
      CFrameApplicationPresentation::_SetFrameCloakSerialized((__int64)this, 0);
    *((_BYTE *)this + 52) = 1;
  }
  return 0LL;
}
