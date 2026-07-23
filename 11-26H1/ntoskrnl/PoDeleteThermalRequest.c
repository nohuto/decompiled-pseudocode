/*
 * XREFs of PoDeleteThermalRequest @ 0x1407CE710
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x140503E30 (PoDestroyReasonContext.c)
 *     PopDeactiveThermalRequest @ 0x1407CEB98 (PopDeactiveThermalRequest.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PoDeleteThermalRequest(_QWORD **P)
{
  PopDeactiveThermalRequest();
  PoDestroyReasonContext(P[3]);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
