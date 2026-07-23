/*
 * XREFs of MiZeroTrailingImageBytes @ 0x1406FC570
 * Callers:
 *     MiValidateInPage @ 0x14038DF04 (MiValidateInPage.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14042AE90 (MiUnmapPageInHyperSpaceWorker.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall MiZeroTrailingImageBytes(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdi
  __int64 *v3; // r9
  __int64 *v4; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // edi
  unsigned __int64 v9; // rbx
  unsigned __int8 v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = (__int64 *)(*(_QWORD *)(a1 + 8) + 48LL);
  v4 = &v3[*(unsigned int *)(a1 + 20)];
  result = *(_QWORD *)(v1 + 8);
  v6 = result + 8 * (*(unsigned int *)(v1 + 44) - 1LL);
  while ( v3 < v4 )
  {
    result = *(_QWORD *)(48 * *v3 - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
    if ( result == v6 )
    {
      v7 = *v3;
      v8 = *(_DWORD *)(v2 + 56) & 0xFFF;
      v10 = 0;
      v9 = MiMapPageInHyperSpaceWorker(v7, &v10, 0x80000000);
      memset_0((void *)(v8 + v9), 0, 4096LL - v8);
      return MiUnmapPageInHyperSpaceWorker(v9, v10, 0x80000000);
    }
    ++v3;
  }
  return result;
}
