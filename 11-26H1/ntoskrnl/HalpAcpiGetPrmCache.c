/*
 * XREFs of HalpAcpiGetPrmCache @ 0x14057BD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall HalpAcpiGetPrmCache(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a2 = &HalpAcpiPrmUpdateList;
  result = &HalpAcpiPrmFirmwareList;
  *a1 = &HalpAcpiPrmFirmwareList;
  return result;
}
