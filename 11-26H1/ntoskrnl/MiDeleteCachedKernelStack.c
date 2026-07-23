/*
 * XREFs of MiDeleteCachedKernelStack @ 0x14028F3BC
 * Callers:
 *     MiFindContiguousPagesNode @ 0x14028FA50 (MiFindContiguousPagesNode.c)
 *     MiPruneCachedStackList @ 0x1402918B8 (MiPruneCachedStackList.c)
 *     MiAdjustCachedStacks @ 0x1402A7914 (MiAdjustCachedStacks.c)
 * Callees:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiDeleteKernelStackPages @ 0x14028DF2C (MiDeleteKernelStackPages.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiDeleteCachedKernelStack(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // r9
  ULONG_PTR v3; // rdx
  unsigned __int64 v4; // rdi
  unsigned __int64 *v5; // rbx

  v2 = *(_QWORD *)(a2 - 16);
  v3 = a2 - 4080;
  if ( v2 != (qword_140E34D20 ^ v3) )
    KeBugCheckEx(0x1Au, 0x3470uLL, v3, v2, qword_140E34D20 ^ v3);
  if ( *(_DWORD *)(v3 + 4088) == 2 )
    v4 = (unsigned __int64)(unsigned int)KeXStateStackSize >> 12;
  else
    v4 = (unsigned __int8)byte_140E34CE4;
  v5 = (unsigned __int64 *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL - 8 * v4);
  MiDeleteKernelStackPages(a1, (__int64)v5, v4, 5LL, 0LL);
  return MiReleasePtes((__int64)&unk_140E34C20, v5, (int)v4 + 1);
}
