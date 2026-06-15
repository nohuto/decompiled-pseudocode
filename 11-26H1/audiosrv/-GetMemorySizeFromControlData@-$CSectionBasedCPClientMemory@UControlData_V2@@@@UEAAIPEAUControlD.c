/*
 * XREFs of ?GetMemorySizeFromControlData@?$CSectionBasedCPClientMemory@UControlData_V2@@@@UEAAIPEAUControlData_V2@@@Z @ 0x18015F4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSectionBasedCPClientMemory<ControlData_V2>::GetMemorySizeFromControlData(__int64 a1, __int64 a2)
{
  return *(unsigned int *)(a2 + 4);
}
