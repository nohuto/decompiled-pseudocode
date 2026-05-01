/*
 * XREFs of ??$_Destroy_range@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewInfo@JointResize@@QEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x180285350
 * Callers:
 *     ?Cleanup@JointResize@@AEAAXXZ @ 0x1800787A8 (-Cleanup@JointResize@@AEAAXXZ.c)
 *     ??1JointResize@@UEAA@XZ @ 0x180285388 (--1JointResize@@UEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAUSecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAPEAUSecondaryViewInfo@JointResize@@QEAU12@0PEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x180536A50 (--$_Uninitialized_move@PEAUSecondaryViewInfo@JointResize@@V-$allocator@USecondaryViewInfo@JointR.c)
 *     ??1_Reallocation_guard@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@QEAA@XZ @ 0x180537A04 (--1_Reallocation_guard@-$vector@USecondaryViewInfo@JointResize@@V-$allocator@USecondaryViewInfo@.c)
 *     ?_Change_array@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@AEAAXQEAUSecondaryViewInfo@JointResize@@_K1@Z @ 0x18053B094 (-_Change_array@-$vector@USecondaryViewInfo@JointResize@@V-$allocator@USecondaryViewInfo@JointRes.c)
 * Callees:
 *     ??1SecondaryViewInfo@JointResize@@QEAA@XZ @ 0x1802C5644 (--1SecondaryViewInfo@JointResize@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<JointResize::SecondaryViewInfo>>(
        JointResize::SecondaryViewInfo *this,
        JointResize::SecondaryViewInfo *a2)
{
  JointResize::SecondaryViewInfo *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      JointResize::SecondaryViewInfo::~SecondaryViewInfo(v3);
      v3 = (JointResize::SecondaryViewInfo *)((char *)v3 + 96);
    }
    while ( v3 != a2 );
  }
}
