/*
 * XREFs of CiThreadReferenceTaskIndex @ 0x140003EF0
 * Callers:
 *     CiCreateTaskIndexClientFromThread @ 0x14000F850 (CiCreateTaskIndexClientFromThread.c)
 * Callees:
 *     CiAcquireProcessLock @ 0x14000E8C0 (CiAcquireProcessLock.c)
 *     CiReleaseProcessLock @ 0x14000F7B0 (CiReleaseProcessLock.c)
 */

__int64 __fastcall CiThreadReferenceTaskIndex(__int64 a1)
{
  __int64 v2; // rdi

  v2 = 0LL;
  CiAcquireProcessLock(a1);
  if ( (*(_BYTE *)(a1 + 148) & 2) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 72);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v2 + 48)) <= 1 )
      __fastfail(0xEu);
  }
  CiReleaseProcessLock(a1);
  return v2;
}
