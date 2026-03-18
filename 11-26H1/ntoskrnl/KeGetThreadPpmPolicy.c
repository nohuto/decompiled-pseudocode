/*
 * XREFs of KeGetThreadPpmPolicy @ 0x140532B74
 * Callers:
 *     PspGetThreadPpmPolicy @ 0x140A21B88 (PspGetThreadPpmPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetThreadPpmPolicy(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 958);
}
