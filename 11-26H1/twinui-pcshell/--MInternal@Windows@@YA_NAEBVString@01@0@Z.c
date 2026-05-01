/*
 * XREFs of ??MInternal@Windows@@YA_NAEBVString@01@0@Z @ 0x18004D990
 * Callers:
 *     ??$_Med3_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@00U?$less@X@0@@Z @ 0x18004CFF8 (--$_Med3_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YA?AU?$pair@PEAVString@Internal@Windows@@PEAV123@@0@PEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x18004D11C (--$_Partition_by_median_guess_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YA-AU-.c)
 *     ??$_Pop_heap_hole_by_index@PEAVString@Internal@Windows@@V123@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@_J1$$QEAV123@U?$less@X@0@@Z @ 0x18030F630 (--$_Pop_heap_hole_by_index@PEAVString@Internal@Windows@@V123@U-$less@X@std@@@std@@YAXPEAVString@.c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Internal::operator<(HSTRING *a1, HSTRING *a2)
{
  HSTRING v2; // rdx
  HSTRING v3; // rcx
  INT32 result; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  v3 = *a1;
  result = 0;
  WindowsCompareStringOrdinal(v3, v2, &result);
  return result == -1;
}
