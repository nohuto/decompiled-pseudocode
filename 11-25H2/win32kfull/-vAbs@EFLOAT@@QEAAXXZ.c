/*
 * XREFs of ?vAbs@EFLOAT@@QEAAXXZ @ 0x1401C8BB4
 * Callers:
 *     ?GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1400BF184 (-GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?bCalcLayoutUnits@RFONTOBJ@@QEAAHAEAVUDCOBJ@@@Z @ 0x1401C48B4 (-bCalcLayoutUnits@RFONTOBJ@@QEAAHAEAVUDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall EFLOAT::vAbs(EFLOAT *this)
{
  if ( *(float *)this < 0.0 )
    *(_DWORD *)this ^= _xmm;
}
