/*
 * XREFs of ??$_Uninitialized_move@PEAUSecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAPEAUSecondaryViewInfo@JointResize@@QEAU12@0PEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x180536A50
 * Callers:
 *     ??$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@AEAAPEAUSecondaryViewInfo@JointResize@@QEAU23@$$QEAU23@@Z @ 0x1805368EC (--$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@-$vector@USecondaryViewInfo@JointResize@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewInfo@JointResize@@QEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x180285350 (--$_Destroy_range@V-$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewI.c)
 *     ??0SecondaryViewInfo@JointResize@@QEAA@$$QEAU01@@Z @ 0x1802A28C4 (--0SecondaryViewInfo@JointResize@@QEAA@$$QEAU01@@Z.c)
 */

JointResize::SecondaryViewInfo *__fastcall std::_Uninitialized_move<JointResize::SecondaryViewInfo *>(
        __int64 *a1,
        __int64 *a2,
        JointResize::SecondaryViewInfo *a3)
{
  __int64 *v5; // rdx
  __int64 v6; // rdx
  __int64 *v7; // r8

  v5 = a1;
  if ( a1 != a2 )
  {
    do
    {
      JointResize::SecondaryViewInfo::SecondaryViewInfo((__int64)a3, v5);
      a3 = (JointResize::SecondaryViewInfo *)((char *)a3 + 96);
      v5 = (__int64 *)(v6 + 96);
    }
    while ( v5 != v7 );
  }
  std::_Destroy_range<std::allocator<JointResize::SecondaryViewInfo>>(a3, a3);
  return a3;
}
