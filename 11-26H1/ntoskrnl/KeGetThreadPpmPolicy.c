/*
 * XREFs of KeGetThreadPpmPolicy @ 0x140535014
 * Callers:
 *     PspGetThreadPpmPolicy @ 0x140A2B1A8 (PspGetThreadPpmPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetThreadPpmPolicy(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 958);
}
