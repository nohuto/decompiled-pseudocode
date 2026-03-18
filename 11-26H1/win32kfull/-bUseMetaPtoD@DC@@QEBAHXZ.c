/*
 * XREFs of ?bUseMetaPtoD@DC@@QEBAHXZ @ 0x1401086F4
 * Callers:
 *     ?bCalcLayoutUnits@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1401072C0 (-bCalcLayoutUnits@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x14010787C (-bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z.c)
 *     ?GrepGetTextExtentW@@YAHAEAVDCOBJ@@PEAGHPEAUtagSIZE@@I@Z @ 0x1401C4B10 (-GrepGetTextExtentW@@YAHAEAVDCOBJ@@PEAGHPEAUtagSIZE@@I@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x140108968 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 */

__int64 __fastcall DC::bUseMetaPtoD(DC *this)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( *((float *)this + 113) != 0.0 )
    return (unsigned int)EFLOAT::bIsZero((DC *)((char *)this + 456)) == 0;
  return v1;
}
