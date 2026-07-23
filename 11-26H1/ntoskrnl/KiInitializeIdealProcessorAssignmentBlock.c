/*
 * XREFs of KiInitializeIdealProcessorAssignmentBlock @ 0x1404D0DB8
 * Callers:
 *     KeInitializeProcess @ 0x140B58704 (KeInitializeProcess.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiInitializeIdealProcessorAssignmentBlock(__int64 a1)
{
  __int64 result; // rax

  memset_0((void *)a1, 0, 0x1D8uLL);
  *(_DWORD *)(a1 + 208) = 2097184;
  *(_QWORD *)(a1 + 4) = 0LL;
  result = (*(_DWORD *)(a1 + 8) & 0x3FFFF | 0x20040000u) - 1;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
