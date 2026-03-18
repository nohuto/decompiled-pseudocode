/*
 * XREFs of ProcessSleep @ 0x14003D6B0
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 */

__int64 __fastcall ProcessSleep(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v5; // rcx

  v5 = *(_QWORD **)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v5[1];
  HeapFree(v5);
  return a3;
}
