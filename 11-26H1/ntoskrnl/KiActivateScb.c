/*
 * XREFs of KiActivateScb @ 0x140238544
 * Callers:
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140237F74 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     ?KiAddThreadToSchedulingGroup@@YAXPEAU_KTHREAD@@PEAU_KSCHEDULING_GROUP@@EPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140238460 (-KiAddThreadToSchedulingGroup@@YAXPEAU_KTHREAD@@PEAU_KSCHEDULING_GROUP@@EPEAU_SINGLE_LIST_ENTRY@.c)
 *     KeYieldExecution @ 0x1402387B0 (KeYieldExecution.c)
 *     KiAddThreadToScbQueue @ 0x1404AC16C (KiAddThreadToScbQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall KiActivateScb(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  _QWORD *v4; // rax
  __int64 v5; // rax

  v2 = a1 + 35544;
  while ( a2 && (*(_WORD *)(a2 + 128) & 0x200) == 0 )
  {
    v3 = *(_QWORD **)(v2 + 8);
    v4 = (_QWORD *)(a2 + 88);
    if ( *v3 != v2 )
      __fastfail(3u);
    *v4 = v2;
    *(_QWORD *)(a2 + 96) = v3;
    *v3 = v4;
    *(_QWORD *)(v2 + 8) = v4;
    v2 = a2 + 88;
    *(_WORD *)(a2 + 128) = *(_WORD *)(a2 + 128) & 0xF1FF | 0x200;
    v5 = *(_QWORD *)(a2 + 440);
    a2 = v5;
    if ( v5 )
      ++*(_QWORD *)(v5 + 416);
  }
}
