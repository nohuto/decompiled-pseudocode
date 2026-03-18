/*
 * XREFs of MiInitializePageChainHead @ 0x140449C90
 * Callers:
 *     MiCaptureSparsePages @ 0x140879C14 (MiCaptureSparsePages.c)
 *     MiAllocateReadList @ 0x140A524C0 (MiAllocateReadList.c)
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
