/*
 * XREFs of ??0SecondaryViewInfo@JointResize@@QEAA@$$QEAU01@@Z @ 0x1802A28C4
 * Callers:
 *     ??$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@AEAAPEAUSecondaryViewInfo@JointResize@@QEAU23@$$QEAU23@@Z @ 0x1805368EC (--$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@-$vector@USecondaryViewInfo@JointResize@.c)
 *     ??$_Uninitialized_move@PEAUSecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAPEAUSecondaryViewInfo@JointResize@@QEAU12@0PEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x180536A50 (--$_Uninitialized_move@PEAUSecondaryViewInfo@JointResize@@V-$allocator@USecondaryViewInfo@JointR.c)
 *     ??$emplace_back@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@QEAAAEAUSecondaryViewInfo@JointResize@@$$QEAU23@@Z @ 0x180536F98 (--$emplace_back@USecondaryViewInfo@JointResize@@@-$vector@USecondaryViewInfo@JointResize@@V-$all.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall JointResize::SecondaryViewInfo::SecondaryViewInfo(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 result; // rax

  v2 = *a2;
  *a2 = 0LL;
  *(_QWORD *)a1 = v2;
  *(_DWORD *)(a1 + 8) = *((_DWORD *)a2 + 2);
  *(_QWORD *)(a1 + 16) = a2[2];
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 3);
  *(_BYTE *)(a1 + 40) = *((_BYTE *)a2 + 40);
  v3 = a2[6];
  a2[6] = 0LL;
  *(_QWORD *)(a1 + 48) = v3;
  *(_QWORD *)(a1 + 56) = a2[7];
  *(_DWORD *)(a1 + 64) = *((_DWORD *)a2 + 16);
  *(_QWORD *)(a1 + 68) = *(__int64 *)((char *)a2 + 68);
  *(_DWORD *)(a1 + 76) = *((_DWORD *)a2 + 19);
  result = a1;
  *(_OWORD *)(a1 + 80) = *((_OWORD *)a2 + 5);
  return result;
}
