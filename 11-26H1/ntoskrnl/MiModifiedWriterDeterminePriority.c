/*
 * XREFs of MiModifiedWriterDeterminePriority @ 0x1403FFAC8
 * Callers:
 *     MiModifiedWriterShouldWrite @ 0x1403FF7EC (MiModifiedWriterShouldWrite.c)
 * Callees:
 *     IoBoostThreadIoPriority @ 0x140205BAC (IoBoostThreadIoPriority.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1403FFB60 (MiUseLowIoPriorityForModifiedPages.c)
 */

__int64 __fastcall MiModifiedWriterDeterminePriority(__int64 a1, int *a2)
{
  KSPIN_LOCK *CurrentThread; // rsi
  __int64 v5; // r8
  int v6; // eax

  CurrentThread = (KSPIN_LOCK *)KeGetCurrentThread();
  if ( !(unsigned int)MiUseLowIoPriorityForModifiedPages(a1) )
  {
    if ( *(_DWORD *)(a1 + 820) )
      IoBoostThreadIoPriority(CurrentThread, 2, 0);
    a2[1] = 2;
    v6 = -1;
    goto LABEL_4;
  }
  if ( *(_QWORD *)(a1 + 23456) >= *(_QWORD *)(a1 + 856) )
  {
    a2[1] = 0;
    *(_DWORD *)(a1 + 848) = 4;
    v6 = KeSetActualBasePriorityThread((__int64)CurrentThread, 4LL, v5);
LABEL_4:
    *a2 = v6;
    return 1LL;
  }
  return 0LL;
}
