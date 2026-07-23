/*
 * XREFs of KeSetMaximumCountPriQueue @ 0x1405FC13C
 * Callers:
 *     ExpWorkQueueManagerThread @ 0x140A77D60 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     <none>
 */

void __fastcall KeSetMaximumCountPriQueue(__int64 a1, int a2)
{
  if ( !a2 )
    a2 = KeNumberProcessors_0;
  *(_DWORD *)(a1 + 664) = a2;
}
