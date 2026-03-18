/*
 * XREFs of PoDeleteThermalRequest @ 0x1407CB670
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x14050A3C0 (PoDestroyReasonContext.c)
 *     PopDeactiveThermalRequest @ 0x1407CBAF8 (PopDeactiveThermalRequest.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PoDeleteThermalRequest(_QWORD **P)
{
  PopDeactiveThermalRequest();
  PoDestroyReasonContext(P[3]);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
