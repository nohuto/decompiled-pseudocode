/*
 * XREFs of ??1_Reallocation_guard@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@QEAA@XZ @ 0x180537A04
 * Callers:
 *     ??$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@AEAAPEAUSecondaryViewInfo@JointResize@@QEAU23@$$QEAU23@@Z @ 0x1805368EC (--$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@-$vector@USecondaryViewInfo@JointResize@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewInfo@JointResize@@QEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x180285350 (--$_Destroy_range@V-$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewI.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<JointResize::SecondaryViewInfo>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<JointResize::SecondaryViewInfo>>(
      *(JointResize::SecondaryViewInfo **)(a1 + 24),
      *(JointResize::SecondaryViewInfo **)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), (struct std::nothrow_t *)(96LL * *(_QWORD *)(a1 + 16)));
  }
}
