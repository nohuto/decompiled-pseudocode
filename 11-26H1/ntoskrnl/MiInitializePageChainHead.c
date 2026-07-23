/*
 * XREFs of MiInitializePageChainHead @ 0x140441DC0
 * Callers:
 *     MiCaptureSparsePages @ 0x140880010 (MiCaptureSparsePages.c)
 *     MiAllocateReadList @ 0x140A5B7B0 (MiAllocateReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePageChainHead(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
