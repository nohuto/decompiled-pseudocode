/*
 * XREFs of MiLockPagableImageSection @ 0x140368CD0
 * Callers:
 *     MmLockPagableSectionByHandle @ 0x140A9F220 (MmLockPagableSectionByHandle.c)
 *     MmLockPagableDataSection @ 0x140ABC640 (MmLockPagableDataSection.c)
 *     MiLockPagableSections @ 0x140D06FF0 (MiLockPagableSections.c)
 * Callees:
 *     MiUnlockImageSection @ 0x140368D68 (MiUnlockImageSection.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiLockImageSection @ 0x140A9E9E8 (MiLockImageSection.c)
 */

__int64 __fastcall MiLockPagableImageSection(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx

  BugCheckParameter4 = *(unsigned int *)(a1 + 296);
  v6 = *(_QWORD *)(a1 + 288);
  v7 = (__int64)((unsigned __int128)((__int64)(a2 - v6) * (__int128)0x6666666666666667LL) >> 64) >> 4;
  v8 = (v7 >> 63) + v7;
  if ( a2 < v6 || (unsigned int)v8 >= (unsigned int)BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x1013uLL, a2 | a3, (unsigned int)v8, BugCheckParameter4);
  v9 = *(_QWORD *)(a1 + 200) + 12LL * (unsigned int)v8;
  if ( a3 == 1 )
    return MiLockImageSection(a1, v9);
  else
    return MiUnlockImageSection(a1, v9, a2);
}
