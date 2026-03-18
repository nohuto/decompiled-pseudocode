/*
 * XREFs of ?vDisableTimers@@YAXK@Z @ 0x140009380
 * Callers:
 *     vDisableSynchronize @ 0x140008E70 (vDisableSynchronize.c)
 *     ?vDisableSynchronizeNKAPC@@YAXPEAX00@Z @ 0x140332990 (-vDisableSynchronizeNKAPC@@YAXPEAX00@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vDisableTimers(char a1)
{
  __int64 v2; // rdx

  v2 = *(_QWORD *)(W32GetSessionState() + 96);
  if ( (a1 & 0x40) != 0 )
    --*(_DWORD *)(v2 + 4712);
  if ( a1 < 0 )
    --*(_QWORD *)(v2 + 4720);
}
