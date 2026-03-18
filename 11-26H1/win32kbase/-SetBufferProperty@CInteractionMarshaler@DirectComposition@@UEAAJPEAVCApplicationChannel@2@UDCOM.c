/*
 * XREFs of ?SetBufferProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1401957D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1400A59E8 (-ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEBUDwmIntera.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        _DWORD *a4,
        __int64 a5,
        _BYTE *a6)
{
  _DWORD *v6; // rcx

  *a6 = 0;
  if ( a4 && a5 == 16 )
  {
    if ( a3 == 1 || a3 == 2 || a3 == 3 )
    {
      v6 = (_DWORD *)(a1 + 56);
      return DirectComposition::CInteractionConfigurationGroup::ProcessUpdateConfiguration(v6, a4, a3, a6);
    }
    if ( (unsigned int)(a3 - 8) <= 1 )
    {
      v6 = (_DWORD *)(a1 + 160);
      return DirectComposition::CInteractionConfigurationGroup::ProcessUpdateConfiguration(v6, a4, a3, a6);
    }
  }
  return 3221225485LL;
}
