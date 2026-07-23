/*
 * XREFs of MiDecommitPagedPool @ 0x140353D78
 * Callers:
 *     MmFreePoolMemory @ 0x14035231C (MmFreePoolMemory.c)
 * Callees:
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 *     MiUnmapReturnSystemCommit @ 0x140AA7B48 (MiUnmapReturnSystemCommit.c)
 */

__int64 __fastcall MiDecommitPagedPool(unsigned __int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int128 v5; // [rsp+40h] [rbp-48h] BYREF
  __int128 v6; // [rsp+50h] [rbp-38h]
  __int128 v7; // [rsp+60h] [rbp-28h]
  __int64 v8; // [rsp+70h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  MiDecommitPages((a1 >> 9) & 0xFFFFFFF8, a2, 0, 0, 0LL, ~(a3 >> 26) & 0x10, 0LL, (__int64)&v5);
  v3 = *((_QWORD *)&v6 + 1);
  MiUnmapReturnSystemCommit(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (unsigned __int16)word_140E372AE), &v5);
  return v3;
}
