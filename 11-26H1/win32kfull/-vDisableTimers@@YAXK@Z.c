/*
 * XREFs of ?vDisableTimers@@YAXK@Z @ 0x1402365DC
 * Callers:
 *     vDisableSynchronize @ 0x140236500 (vDisableSynchronize.c)
 *     ?vDisableSynchronizeNKAPC@@YAXPEAX00@Z @ 0x140325F90 (-vDisableSynchronizeNKAPC@@YAXPEAX00@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vDisableTimers(int a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rdx

  v2 = a1;
  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  if ( (v2 & 0x40) != 0 )
    --*(_DWORD *)(v3 + 4712);
  if ( v2 < 0 )
    --*(_QWORD *)(v3 + 4720);
}
