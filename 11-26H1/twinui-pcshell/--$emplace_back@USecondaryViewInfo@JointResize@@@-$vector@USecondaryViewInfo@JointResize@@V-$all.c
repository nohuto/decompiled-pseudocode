/*
 * XREFs of ??$emplace_back@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@QEAAAEAUSecondaryViewInfo@JointResize@@$$QEAU23@@Z @ 0x180536F98
 * Callers:
 *     ?CalculateSecondaryViews@JointResize@@AEAAJXZ @ 0x1800794C0 (-CalculateSecondaryViews@JointResize@@AEAAJXZ.c)
 * Callees:
 *     ??0SecondaryViewInfo@JointResize@@QEAA@$$QEAU01@@Z @ 0x1802A28C4 (--0SecondaryViewInfo@JointResize@@QEAA@$$QEAU01@@Z.c)
 *     ??$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@AEAAPEAUSecondaryViewInfo@JointResize@@QEAU23@$$QEAU23@@Z @ 0x1805368EC (--$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@-$vector@USecondaryViewInfo@JointResize@.c)
 */

__int64 __fastcall std::vector<JointResize::SecondaryViewInfo>::emplace_back<JointResize::SecondaryViewInfo>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v5; // rcx

  v3 = a1[1];
  if ( v3 == a1[2] )
    return std::vector<JointResize::SecondaryViewInfo>::_Emplace_reallocate<JointResize::SecondaryViewInfo>(a1, v3, a2);
  JointResize::SecondaryViewInfo::SecondaryViewInfo(v3, a2);
  v5 = *(_QWORD *)(v4 + 8);
  *(_QWORD *)(v4 + 8) = v5 + 96;
  return v5;
}
