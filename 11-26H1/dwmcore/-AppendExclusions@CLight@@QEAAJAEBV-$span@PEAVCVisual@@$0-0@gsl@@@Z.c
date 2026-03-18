/*
 * XREFs of ?AppendExclusions@CLight@@QEAAJAEBV?$span@PEAVCVisual@@$0?0@gsl@@@Z @ 0x1802643B4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetExclusions@CLight@@QEAAJAEBV?$span@PEAVCVisual@@$0?0@gsl@@@Z @ 0x180264C20 (-SetExclusions@CLight@@QEAAJAEBV-$span@PEAVCVisual@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ?AddLight@CVisual@@QEAAXPEAVCLight@@W4LightBehavior@@@Z @ 0x18026043C (-AddLight@CVisual@@QEAAXPEAVCLight@@W4LightBehavior@@@Z.c)
 */

__int64 __fastcall CLight::AppendExclusions(__int64 *a1, _QWORD *a2)
{
  __int64 *v2; // rbx
  __int64 *v4; // rsi
  _QWORD *v5; // rdi
  __int64 v6; // rbp
  __int64 *v7; // rdx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = (__int64 *)a2[1];
  v4 = &v2[*a2];
  if ( v2 != v4 )
  {
    v5 = a1 + 26;
    do
    {
      v6 = *v2;
      v9 = *v2;
      CVisual::AddLight(v9, a1, 1);
      v7 = (__int64 *)v5[1];
      if ( v7 == (__int64 *)v5[2] )
      {
        std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
          v5,
          (__int64)v7,
          &v9);
      }
      else
      {
        *v7 = v6;
        v5[1] += 8LL;
      }
      ++v2;
    }
    while ( v2 != v4 );
  }
  return 0LL;
}
