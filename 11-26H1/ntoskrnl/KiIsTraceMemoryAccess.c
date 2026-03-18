/*
 * XREFs of KiIsTraceMemoryAccess @ 0x140466A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall KiIsTraceMemoryAccess(unsigned __int64 a1)
{
  return a1 < stru_140FC01F0.WriteTransferCount
      && a1 >= stru_140FC01F0.ReadTransferCount
      && KiDynamicTraceEnabled
      && KeGetCurrentIrql() == 15;
}
