/*
 * XREFs of IssueVerw @ 0x140010360
 * Callers:
 *     MWaitIdle @ 0x140007E10 (MWaitIdle.c)
 *     C1Idle @ 0x140009AF0 (C1Idle.c)
 *     C2Idle @ 0x140009B50 (C2Idle.c)
 *     C3Idle @ 0x140009C20 (C3Idle.c)
 *     IoHaltC1Idle @ 0x140009E50 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __fastcall IssueVerw(__int16 a1)
{
  __int16 v1; // [rsp+8h] [rbp+8h]

  v1 = a1;
  __asm { verw    [rsp+arg_0] }
}
