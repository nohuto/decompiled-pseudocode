/*
 * XREFs of IssueVerw @ 0x14000E650
 * Callers:
 *     MWaitIdle @ 0x140003DD0 (MWaitIdle.c)
 *     C1Idle @ 0x140005E40 (C1Idle.c)
 *     C2Idle @ 0x140005EA0 (C2Idle.c)
 *     C3Idle @ 0x140005F70 (C3Idle.c)
 *     IoHaltC1Idle @ 0x1400061A0 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __fastcall IssueVerw(__int16 a1)
{
  __int16 v1; // [rsp+8h] [rbp+8h]

  v1 = a1;
  __asm { verw    [rsp+arg_0] }
}
