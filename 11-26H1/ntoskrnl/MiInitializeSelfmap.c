/*
 * XREFs of MiInitializeSelfmap @ 0x14042A4F4
 * Callers:
 *     MiAllocateTopLevelPage @ 0x140ABFDA0 (MiAllocateTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x140ABFF40 (MiAllocateProcessShadow.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14042AE90 (MiUnmapPageInHyperSpaceWorker.c)
 */

__int64 __fastcall MiInitializeSelfmap(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int8 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v2 = MiMakeValidPte(0LL, a1, -1879048188) & 0xFFFFFFFFFFFFFEFFuLL;
  v3 = MiMapPageInHyperSpaceWorker(a1, &v6, 0x80000000);
  LOBYTE(v4) = v6;
  *(_QWORD *)(v3 + 3944) = v2;
  return MiUnmapPageInHyperSpaceWorker(v3 + 3944, v4, 0x80000000LL);
}
