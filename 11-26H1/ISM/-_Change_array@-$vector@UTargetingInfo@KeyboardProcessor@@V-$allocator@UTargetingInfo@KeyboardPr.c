/*
 * XREFs of ?_Change_array@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@AEAAXQEAUTargetingInfo@KeyboardProcessor@@_K1@Z @ 0x180078760
 * Callers:
 *     ??$_Emplace_reallocate@AEAUTargetingInfo@KeyboardProcessor@@@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@AEAAPEAUTargetingInfo@KeyboardProcessor@@QEAU23@AEAU23@@Z @ 0x18008753C (--$_Emplace_reallocate@AEAUTargetingInfo@KeyboardProcessor@@@-$vector@UTargetingInfo@KeyboardPro.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAXPEAUTargetingInfo@KeyboardProcessor@@QEAU12@AEAV?$allocator@UTargetingInfo@KeyboardProcessor@@@0@@Z @ 0x180012958 (--$_Destroy_range@V-$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAXPEAUTargetingInf.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

KeyboardProcessor::TargetingInfo *__fastcall std::vector<KeyboardProcessor::TargetingInfo>::_Change_array(
        KeyboardProcessor::TargetingInfo **a1,
        KeyboardProcessor::TargetingInfo *a2,
        __int64 a3,
        __int64 a4)
{
  KeyboardProcessor::TargetingInfo *v6; // rcx
  KeyboardProcessor::TargetingInfo *result; // rax

  v6 = *a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<KeyboardProcessor::TargetingInfo>>(v6, a1[1]);
    std::_Deallocate<16>(*a1, (a1[2] - *a1) >> 7 << 7);
  }
  *a1 = a2;
  a1[1] = (KeyboardProcessor::TargetingInfo *)((char *)a2 + 384 * a3);
  result = (KeyboardProcessor::TargetingInfo *)((char *)a2 + 384 * a4);
  a1[2] = result;
  return result;
}
