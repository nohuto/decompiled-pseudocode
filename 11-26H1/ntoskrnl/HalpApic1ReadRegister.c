/*
 * XREFs of HalpApic1ReadRegister @ 0x1404700F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpApic1ReadRegister(int a1)
{
  return *(unsigned int *)(a1 + HalpLocalApic);
}
