/*
 * XREFs of HalpDmaCvmHandleUnrecoverableFrames @ 0x14058B98C
 * Callers:
 *     HalpDmaCvmSetPageShareability @ 0x140785D68 (HalpDmaCvmSetPageShareability.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpDmaCvmHandleUnrecoverableFrames(__int64 a1, __int64 a2, unsigned int a3)
{
  _InterlockedAdd(&dword_140FBAD50, a3);
}
