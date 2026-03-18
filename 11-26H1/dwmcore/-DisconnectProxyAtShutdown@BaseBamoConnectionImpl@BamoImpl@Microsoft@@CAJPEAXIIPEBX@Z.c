/*
 * XREFs of ?DisconnectProxyAtShutdown@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAXIIPEBX@Z @ 0x18023F570
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectProxyAtShutdown(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  _QWORD *v4; // rdx
  _BYTE *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a4;
  if ( a4 )
  {
    a4[29] = 1;
    v4 = (_QWORD *)a1[1];
    if ( v4 == (_QWORD *)a1[2] )
    {
      std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
        a1,
        (__int64)v4,
        (__int64 *)&v6);
    }
    else
    {
      *v4 = a4;
      a1[1] += 8LL;
    }
  }
  return 0LL;
}
