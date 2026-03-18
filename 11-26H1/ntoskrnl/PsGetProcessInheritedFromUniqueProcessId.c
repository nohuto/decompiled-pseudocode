/*
 * XREFs of PsGetProcessInheritedFromUniqueProcessId @ 0x140486A00
 * Callers:
 *     PsChargeProcessWakeCounter @ 0x1409BE250 (PsChargeProcessWakeCounter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessInheritedFromUniqueProcessId(__int64 a1)
{
  return *(_QWORD *)(a1 + 720);
}
