/*
 * XREFs of flush_pending @ 0x1406294F4
 * Callers:
 *     deflate @ 0x14062789C (deflate.c)
 *     deflate_fast @ 0x140627D70 (deflate_fast.c)
 *     deflate_huff @ 0x1406282C0 (deflate_huff.c)
 *     deflate_rle @ 0x140628430 (deflate_rle.c)
 *     deflate_slow @ 0x1406286F0 (deflate_slow.c)
 *     deflate_stored @ 0x140628D40 (deflate_stored.c)
 * Callees:
 *     bi_flush @ 0x14063620C (bi_flush.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

void *__fastcall flush_pending(__int64 a1)
{
  __int64 v1; // rdi
  void *result; // rax
  unsigned int v4; // ebp
  bool v5; // zf

  v1 = *(_QWORD *)(a1 + 40);
  bi_flush(v1);
  result = (void *)*(unsigned int *)(v1 + 40);
  v4 = *(_DWORD *)(a1 + 24);
  if ( (unsigned int)result <= v4 )
    v4 = *(_DWORD *)(v1 + 40);
  if ( v4 )
  {
    result = memmove(*(void **)(a1 + 16), *(const void **)(v1 + 32), v4);
    *(_QWORD *)(a1 + 16) += v4;
    *(_QWORD *)(v1 + 32) += v4;
    *(_DWORD *)(a1 + 28) += v4;
    *(_DWORD *)(a1 + 24) -= v4;
    v5 = *(_DWORD *)(v1 + 40) == v4;
    *(_DWORD *)(v1 + 40) -= v4;
    if ( v5 )
    {
      result = *(void **)(v1 + 16);
      *(_QWORD *)(v1 + 32) = result;
    }
  }
  return result;
}
