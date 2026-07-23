/*
 * XREFs of PspPicoGetContextThreadEx @ 0x140802560
 * Callers:
 *     <none>
 * Callees:
 *     PspGetContextThreadInternal @ 0x1409E8E80 (PspGetContextThreadInternal.c)
 */

__int64 __fastcall PspPicoGetContextThreadEx(int a1, int a2, int a3, int a4, char a5)
{
  return PspGetContextThreadInternal(a1, a2, a3, a4, a5 != 0);
}
