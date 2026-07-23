/*
 * XREFs of MiInitializeImageHeaderPage @ 0x14042A784
 * Callers:
 *     MiCreateImageMapFinish @ 0x140A624DC (MiCreateImageMapFinish.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14042AE90 (MiUnmapPageInHyperSpaceWorker.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall MiInitializeImageHeaderPage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned __int64 result; // rax
  unsigned __int8 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0;
  v5 = MiMapPageInHyperSpaceWorker(a2, &v8, 0x80000000);
  memset_0((void *)(v5 + a3), 0, 4096 - a3);
  LOBYTE(v6) = v8;
  result = MiUnmapPageInHyperSpaceWorker(v5, v6, 0x80000000LL);
  if ( (a3 & 0x1FF) != 0 )
  {
    result = *(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_DWORD *)(result + 56) ^= ((unsigned __int16)a3 ^ (unsigned __int16)*(_DWORD *)(result + 56)) & 0xFFF;
  }
  return result;
}
