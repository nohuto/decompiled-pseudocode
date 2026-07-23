/*
 * XREFs of PsGetContextThread @ 0x1409E8340
 * Callers:
 *     <none>
 * Callees:
 *     PspGetContextThreadInternal @ 0x1409E8E80 (PspGetContextThreadInternal.c)
 */

__int64 __fastcall PsGetContextThread(int a1, int a2, int a3)
{
  return PspGetContextThreadInternal(a1, a2, a3, (_BYTE)a3, 1);
}
