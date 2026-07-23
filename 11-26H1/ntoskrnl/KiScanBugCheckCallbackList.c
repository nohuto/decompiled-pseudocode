/*
 * XREFs of KiScanBugCheckCallbackList @ 0x1405EB3BC
 * Callers:
 *     IopWriteTriageDumpToFirmware @ 0x1405CCCA8 (IopWriteTriageDumpToFirmware.c)
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void KiScanBugCheckCallbackList()
{
  unsigned __int64 ThreadLock; // rbx
  unsigned __int64 *p_ThreadLock; // r15
  __int64 v2; // r14
  int v3; // esi
  __int64 v4; // rcx
  __int64 v5; // rdx

  ThreadLock = KiSupervisorXStateFeaturesLock.ThreadLock;
  if ( KiSupervisorXStateFeaturesLock.ThreadLock && KiSupervisorXStateFeaturesLock.CycleTime )
  {
    p_ThreadLock = &KiSupervisorXStateFeaturesLock.ThreadLock;
LABEL_4:
    if ( (unsigned __int64 *)ThreadLock != &KiSupervisorXStateFeaturesLock.ThreadLock && (ThreadLock & 7) == 0 )
    {
      v2 = ThreadLock;
      v3 = 0;
      while ( MmIsAddressValidEx(v2) )
      {
        ++v2;
        if ( (unsigned int)++v3 >= 0x40 )
        {
          if ( *(unsigned __int64 **)(ThreadLock + 8) != p_ThreadLock )
            return;
          v4 = *(_QWORD *)(ThreadLock + 24);
          v5 = *(unsigned int *)(ThreadLock + 32);
          if ( *(_BYTE *)(ThreadLock + 56) == 1
            && *(_QWORD *)(ThreadLock + 48) == *(_QWORD *)(ThreadLock + 16) + v4 + v5 + *(_QWORD *)(ThreadLock + 40) )
          {
            *(_BYTE *)(ThreadLock + 56) = 2;
            guard_dispatch_icall_no_overrides(v4, v5);
            *(_BYTE *)(ThreadLock + 56) = 3;
          }
          p_ThreadLock = (unsigned __int64 *)ThreadLock;
          ThreadLock = *(_QWORD *)ThreadLock;
          goto LABEL_4;
        }
      }
    }
  }
}
