/*
 * XREFs of ExpNodeCreateSystemThread @ 0x140A03568
 * Callers:
 *     ExpCreateWorkerThread @ 0x140A0346C (ExpCreateWorkerThread.c)
 *     ExpPartitionCreateSystemThread @ 0x140A03608 (ExpPartitionCreateSystemThread.c)
 * Callees:
 *     KeSelectIdealProcessor @ 0x140201160 (KeSelectIdealProcessor.c)
 *     KeQueryNodeActiveAffinity @ 0x140201320 (KeQueryNodeActiveAffinity.c)
 *     PsCreateSystemThreadEx @ 0x140A03170 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall ExpNodeCreateSystemThread(
        USHORT *a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _WORD *a8,
        __int64 a9)
{
  USHORT v9; // cx
  struct _GROUP_AFFINITY Affinity; // [rsp+50h] [rbp-18h] BYREF
  int v13; // [rsp+78h] [rbp+10h] BYREF

  v13 = a2;
  v9 = *a1;
  Affinity = 0LL;
  KeQueryNodeActiveAffinity(v9, &Affinity, 0LL);
  v13 = (unsigned __int16)KeSelectIdealProcessor((__int64)&Affinity, a8, 0LL, 0);
  return PsCreateSystemThreadEx(a9, 0x1FFFFF, 0LL, a4, 0LL, a6, a7, (__int128 *)&Affinity, &v13);
}
