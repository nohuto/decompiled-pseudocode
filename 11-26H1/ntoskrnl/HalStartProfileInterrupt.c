/*
 * XREFs of HalStartProfileInterrupt @ 0x140582290
 * Callers:
 *     <none>
 * Callees:
 *     HalpStartProfileInterruptEx @ 0x140582D60 (HalpStartProfileInterruptEx.c)
 */

__int64 __fastcall HalStartProfileInterrupt(int a1)
{
  return HalpStartProfileInterruptEx(a1, 0, 0, 0, 0LL);
}
