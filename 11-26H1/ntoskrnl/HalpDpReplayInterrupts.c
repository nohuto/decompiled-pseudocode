/*
 * XREFs of HalpDpReplayInterrupts @ 0x140BF45D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDpReplayInterrupts(__int64 a1)
{
  int v1; // r8d

  if ( !*(_QWORD *)(HalpInterruptController + 160) )
  {
    v1 = -1073741637;
LABEL_5:
    HalpInterruptSetProblemEx(
      HalpInterruptController,
      28,
      v1,
      (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
      0x362u);
    return (unsigned int)v1;
  }
  v1 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), a1);
  if ( v1 < 0 )
    goto LABEL_5;
  return (unsigned int)v1;
}
