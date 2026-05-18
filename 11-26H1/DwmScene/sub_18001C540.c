/*
 * XREFs of sub_18001C540 @ 0x18001C540
 * Callers:
 *     sub_18000D990 @ 0x18000D990 (sub_18000D990.c)
 *     sub_180015784 @ 0x180015784 (sub_180015784.c)
 *     sub_180017198 @ 0x180017198 (sub_180017198.c)
 *     sub_1800172BC @ 0x1800172BC (sub_1800172BC.c)
 *     sub_1800173E0 @ 0x1800173E0 (sub_1800173E0.c)
 *     sub_1800174D0 @ 0x1800174D0 (sub_1800174D0.c)
 *     sub_18001759C @ 0x18001759C (sub_18001759C.c)
 *     sub_180017668 @ 0x180017668 (sub_180017668.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_1800391E4 @ 0x1800391E4 (sub_1800391E4.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall sub_18001C540(SIZE_T a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapAlloc(ProcessHeap, 0, a1);
}
