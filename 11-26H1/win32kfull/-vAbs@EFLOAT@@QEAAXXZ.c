/*
 * XREFs of ?vAbs@EFLOAT@@QEAAXXZ @ 0x1401F48EC
 * Callers:
 *     ?bGetNtoW_Win31@@YAHPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@KH@Z @ 0x1400C3444 (-bGetNtoW_Win31@@YAHPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@KH@Z.c)
 *     ?bCalcLayoutUnits@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1401072C0 (-bCalcLayoutUnits@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?GrepGetTextExtentW@@YAHAEAVDCOBJ@@PEAGHPEAUtagSIZE@@I@Z @ 0x1401C4B10 (-GrepGetTextExtentW@@YAHAEAVDCOBJ@@PEAGHPEAUtagSIZE@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall EFLOAT::vAbs(EFLOAT *this)
{
  if ( *(float *)this < 0.0 )
    *(_DWORD *)this ^= _xmm;
}
