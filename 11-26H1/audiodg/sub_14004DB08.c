/*
 * XREFs of sub_14004DB08 @ 0x14004DB08
 * Callers:
 *     sub_1400409B0 @ 0x1400409B0 (sub_1400409B0.c)
 *     sub_140041CD8 @ 0x140041CD8 (sub_140041CD8.c)
 *     sub_140047C6C @ 0x140047C6C (sub_140047C6C.c)
 *     sub_14004E30C @ 0x14004E30C (sub_14004E30C.c)
 *     sub_140058B84 @ 0x140058B84 (sub_140058B84.c)
 *     sub_140078108 @ 0x140078108 (sub_140078108.c)
 *     sub_1400781C0 @ 0x1400781C0 (sub_1400781C0.c)
 *     sub_1400782A0 @ 0x1400782A0 (sub_1400782A0.c)
 *     sub_14007B9C8 @ 0x14007B9C8 (sub_14007B9C8.c)
 *     sub_14007CC24 @ 0x14007CC24 (sub_14007CC24.c)
 *     sub_14007CF28 @ 0x14007CF28 (sub_14007CF28.c)
 *     sub_14007E5B4 @ 0x14007E5B4 (sub_14007E5B4.c)
 *     sub_14007EA94 @ 0x14007EA94 (sub_14007EA94.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_14004DB08(void *a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapFree(ProcessHeap, 0, a1);
}
