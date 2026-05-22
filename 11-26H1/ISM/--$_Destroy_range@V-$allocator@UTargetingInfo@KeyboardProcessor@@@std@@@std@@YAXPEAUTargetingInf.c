/*
 * XREFs of ??$_Destroy_range@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAXPEAUTargetingInfo@KeyboardProcessor@@QEAU12@AEAV?$allocator@UTargetingInfo@KeyboardProcessor@@@0@@Z @ 0x180012958
 * Callers:
 *     ?_Change_array@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@AEAAXQEAUTargetingInfo@KeyboardProcessor@@_K1@Z @ 0x180078760 (-_Change_array@-$vector@UTargetingInfo@KeyboardProcessor@@V-$allocator@UTargetingInfo@KeyboardPr.c)
 *     ??1KeyboardProcessor@@MEAA@XZ @ 0x180094464 (--1KeyboardProcessor@@MEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAUTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAPEAUTargetingInfo@KeyboardProcessor@@QEAU12@0PEAU12@AEAV?$allocator@UTargetingInfo@KeyboardProcessor@@@0@@Z @ 0x18009472C (--$_Uninitialized_move@PEAUTargetingInfo@KeyboardProcessor@@V-$allocator@UTargetingInfo@Keyboard.c)
 *     ??1_Reallocation_guard@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@QEAA@XZ @ 0x18019B664 (--1_Reallocation_guard@-$vector@UTargetingInfo@KeyboardProcessor@@V-$allocator@UTargetingInfo@Ke.c)
 * Callees:
 *     ??1TargetingInfo@KeyboardProcessor@@QEAA@XZ @ 0x180013168 (--1TargetingInfo@KeyboardProcessor@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<KeyboardProcessor::TargetingInfo>>(
        KeyboardProcessor::TargetingInfo *this,
        KeyboardProcessor::TargetingInfo *a2)
{
  KeyboardProcessor::TargetingInfo *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      KeyboardProcessor::TargetingInfo::~TargetingInfo(v3);
      v3 = (KeyboardProcessor::TargetingInfo *)((char *)v3 + 384);
    }
    while ( v3 != a2 );
  }
}
