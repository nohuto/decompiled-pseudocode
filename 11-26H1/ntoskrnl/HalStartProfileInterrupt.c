/*
 * XREFs of HalStartProfileInterrupt @ 0x14057FD70
 * Callers:
 *     <none>
 * Callees:
 *     HalpStartProfileInterruptEx @ 0x140580840 (HalpStartProfileInterruptEx.c)
 */

__int64 __fastcall HalStartProfileInterrupt(int a1)
{
  return HalpStartProfileInterruptEx(a1, 0, 0, 0, 0LL);
}
