/*
 * XREFs of ?SetColor@?$CColorGradientStopGeneratedT@VCColorGradientStop@@VCResource@@@@QEAAJU_D3DCOLORVALUE@@@Z @ 0x18024A890
 * Callers:
 *     ?SetProperty@?$CColorGradientStopGeneratedT@VCColorGradientStop@@VCResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801E1880 (-SetProperty@-$CColorGradientStopGeneratedT@VCColorGradientStop@@VCResource@@@@MEAAJUDCOMPOSITIO.c)
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ??8@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x18017FEC0 (--8@YA_NAEBU_D3DCOLORVALUE@@0@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorGradientStopGeneratedT<CColorGradientStop,CResource>::SetColor(__int64 a1, __int128 *a2)
{
  _OWORD *v3; // rdx
  _OWORD *v4; // r8
  bool v5; // zf
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  v7 = *a2;
  if ( !operator==((float *)&v7, (float *)(a1 + 76)) )
  {
    v5 = *(_QWORD *)(a1 + 48) == 0LL;
    *v3 = *v4;
    if ( !v5 )
      CResource::InvalidateConsumingAnimationsInternal(a1);
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 80LL))(a1, 10LL, a1);
  }
  return 0LL;
}
