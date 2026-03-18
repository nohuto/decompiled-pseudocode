/*
 * XREFs of SmmInitializeLogicalPool @ 0x14009CE9C
 * Callers:
 *     SmmInitializeLogicalAllocator @ 0x140287E80 (SmmInitializeLogicalAllocator.c)
 * Callees:
 *     <none>
 */

void __fastcall SmmInitializeLogicalPool(__int64 a1)
{
  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)a1 = a1;
  *(_DWORD *)(a1 + 16) = 0;
}
