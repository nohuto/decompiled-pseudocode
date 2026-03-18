/*
 * XREFs of HalpDmaCvmHandleUnrecoverableFrames @ 0x1405892BC
 * Callers:
 *     HalpDmaCvmSetPageShareability @ 0x140783234 (HalpDmaCvmSetPageShareability.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpDmaCvmHandleUnrecoverableFrames(__int64 a1, __int64 a2, unsigned int a3)
{
  _InterlockedAdd(&dword_140FBA990, a3);
}
