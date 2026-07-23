/*
 * XREFs of KeQuerySystemAvailableCpus @ 0x1405E81D0
 * Callers:
 *     PsQuerySystemAvailableCpus @ 0x1406184F0 (PsQuerySystemAvailableCpus.c)
 *     PsQuerySystemAvailableCpusCount @ 0x140618530 (PsQuerySystemAvailableCpusCount.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     RtlCountSetBitsAffinityEx @ 0x140253280 (RtlCountSetBitsAffinityEx.c)
 *     RtlBeginReadTickLock @ 0x140440370 (RtlBeginReadTickLock.c)
 */

__int64 __fastcall KeQuerySystemAvailableCpus(
        struct _KAFFINITY_EX *a1,
        struct _LIST_ENTRY **a2,
        struct _LIST_ENTRY **a3,
        _DWORD *a4)
{
  struct _LIST_ENTRY *Blink; // rdi
  unsigned int v5; // ebx
  __int64 result; // rax

  Blink = KiSupervisorXStateFeaturesLock.WaitBlock[1].WaitListEntry.Blink;
  v5 = 0;
  if ( a2 && *a2 == KiSupervisorXStateFeaturesLock.WaitBlock[1].WaitListEntry.Blink )
  {
    v5 = -2147483598;
  }
  else
  {
    do
    {
      Blink = (struct _LIST_ENTRY *)RtlBeginReadTickLock((__int64 *)&KiSupervisorXStateFeaturesLock.WaitBlock[1].WaitListEntry.Blink);
      if ( a1 )
        RtlpCopyAffinityEx(a1, a1->Size, (struct _KAFFINITY_EX *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64]);
      if ( a4 )
        *a4 = RtlCountSetBitsAffinityEx((unsigned __int16 *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64]);
    }
    while ( KiSupervisorXStateFeaturesLock.WaitBlock[1].WaitListEntry.Blink != Blink );
  }
  result = v5;
  *a3 = Blink;
  return result;
}
