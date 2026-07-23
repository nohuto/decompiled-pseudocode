/*
 * XREFs of MiStackTheftFreezeProcessors @ 0x1406F81CC
 * Callers:
 *     MiJumpStackTarget @ 0x1403E7E30 (MiJumpStackTarget.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14042AE90 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiWritePteHighLevel @ 0x1406F7808 (MiWritePteHighLevel.c)
 */

__int64 __fastcall MiStackTheftFreezeProcessors(__int64 *a1)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rsi
  _QWORD *v6; // rsi
  __int64 v7; // rbx
  int v9; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1[1];
  v3 = MiMapPageInHyperSpaceWorker(v1, 0LL, 0x80000000);
  v4 = *a1;
  a1[2] = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = *(_QWORD *)(48 * v4 - 0x21FFFFFFFFF8LL);
  v9 = 0;
  v6 = (_QWORD *)(v5 | 0x8000000000000000uLL);
  v7 = 48 * v1;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v9);
    while ( *(__int64 *)(v7 - 0x21FFFFFFFFE8LL) < 0 );
  }
  MiWritePteHighLevel(
    (ULONG_PTR)v6,
    (ULONG_PTR)v6,
    (v1 << 12) ^ (*v6 ^ (v1 << 12)) & 0xFFF0000000000FFFuLL | 0x20,
    84,
    (__int64)a1);
  _InterlockedAnd64((volatile signed __int64 *)(v7 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  return MiUnmapPageInHyperSpaceWorker(v3, 0x11u, 0x80000000);
}
