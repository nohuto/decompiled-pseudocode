/*
 * XREFs of ?_Change_array@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@AEAAXQEAUSecondaryViewInfo@JointResize@@_K1@Z @ 0x18053B094
 * Callers:
 *     ??$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@AEAAPEAUSecondaryViewInfo@JointResize@@QEAU23@$$QEAU23@@Z @ 0x1805368EC (--$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@-$vector@USecondaryViewInfo@JointResize@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewInfo@JointResize@@QEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x180285350 (--$_Destroy_range@V-$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewI.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<JointResize::SecondaryViewInfo>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  JointResize::SecondaryViewInfo *v6; // rcx
  __int64 result; // rax

  v6 = *(JointResize::SecondaryViewInfo **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<JointResize::SecondaryViewInfo>>(
      v6,
      *(JointResize::SecondaryViewInfo **)(a1 + 8));
    std::_Deallocate<16>(
      *(void **)a1,
      (struct std::nothrow_t *)(32 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 5)));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 96 * a3;
  result = a2 + 96 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
