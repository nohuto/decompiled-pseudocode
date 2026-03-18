/*
 * XREFs of ViGenericIsValidIrpStatus @ 0x140B73F90
 * Callers:
 *     <none>
 * Callees:
 *     IoIsValidIrpStatus @ 0x140B73E40 (IoIsValidIrpStatus.c)
 */

bool __fastcall ViGenericIsValidIrpStatus(__int64 a1, unsigned int a2)
{
  return IoIsValidIrpStatus(a2);
}
