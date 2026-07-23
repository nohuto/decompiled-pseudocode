/*
 * XREFs of SmHpBufferCleanup @ 0x1403E9E38
 * Callers:
 *     SmHpChunkFree @ 0x140211300 (SmHpChunkFree.c)
 *     SmHpChunkHeapCleanup @ 0x1403E9DB0 (SmHpChunkHeapCleanup.c)
 * Callees:
 *     SmHpBufferUpdateFullness @ 0x14024F400 (SmHpBufferUpdateFullness.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmHpBufferCleanup(__int64 a1, _WORD *a2)
{
  int v4; // ebx
  __int64 result; // rax

  SmHpBufferUpdateFullness(a1, (__int64)a2, -a2[5]);
  v4 = *(_DWORD *)(*(_QWORD *)a2 + 16LL);
  ExFreePoolWithTag(*(PVOID *)a2, 0);
  *(_QWORD *)a2 = 0LL;
  result = *(unsigned int *)(a1 + 544);
  *((_DWORD *)a2 + 2) = result;
  *(_DWORD *)(a1 + 544) = v4;
  return result;
}
