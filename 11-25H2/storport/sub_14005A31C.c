/*
 * XREFs of sub_14005A31C @ 0x14005A31C
 * Callers:
 *     sub_140039BC0 @ 0x140039BC0 (sub_140039BC0.c)
 *     DoScreenSave @ 0x14003A05C (DoScreenSave.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_14005A31C(__int64 a1, char a2)
{
  struct _KDPC *Dpc; // rdi
  struct _KTIMER *v4; // rsi

  Dpc = (struct _KDPC *)(a1 + 5856);
  v4 = (struct _KTIMER *)(a1 + 5792);
  if ( !a2 )
  {
    KeInitializeTimer((PKTIMER)(a1 + 5792));
    KeInitializeDpc(Dpc, sub_14005DAC0, *(PVOID *)(a1 + 8));
  }
  return KeSetCoalescableTimer(v4, (LARGE_INTEGER)-18000000000LL, 0x1B7740u, 0xEA60u, Dpc);
}
