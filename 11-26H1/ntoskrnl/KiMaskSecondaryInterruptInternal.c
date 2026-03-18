/*
 * XREFs of KiMaskSecondaryInterruptInternal @ 0x140423640
 * Callers:
 *     KeMaskInterrupt @ 0x140424930 (KeMaskInterrupt.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x1402C4DEC (HalpReleaseHighLevelLock.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x1404238CC (KiAcquireSecondaryInterruptConnectLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiMaskSecondaryInterruptInternal(int a1, unsigned int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rsi
  KSPIN_LOCK *v5; // rbx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY **p_Blink; // rcx

  v3 = 0;
  v4 = 3LL * (unsigned int)(a1 - 256);
  v5 = (KSPIN_LOCK *)&KiDpcCorralLock.WaitBlock[2].WaitListEntry.Flink[v4];
  KiAcquireSecondaryInterruptConnectLock((PKSPIN_LOCK)&KiDpcCorralLock.WaitBlock[2].WaitListEntry.Flink[v4]);
  if ( LOBYTE(KiDpcCorralLock.WaitBlock[2].WaitListEntry.Flink[v4 + 2].Flink)
    || (Blink = KiDpcCorralLock.WaitBlock[2].WaitListEntry.Flink[v4 + 2].Blink) == 0LL )
  {
    HalpReleaseHighLevelLock(v5, 0);
    return 0LL;
  }
  else
  {
    p_Blink = &Blink->Blink;
    while ( ((_DWORD)p_Blink[12] & 1) != 0 )
    {
      p_Blink = (struct _LIST_ENTRY **)*p_Blink;
      if ( p_Blink == &Blink->Blink )
      {
        LOBYTE(KiDpcCorralLock.WaitBlock[2].WaitListEntry.Flink[v4 + 2].Flink) = 1;
        goto LABEL_9;
      }
    }
    v3 = 296;
LABEL_9:
    HalpReleaseHighLevelLock(v5, 0);
    if ( !v3 )
      guard_dispatch_icall_no_overrides(a2, 0LL);
    return v3;
  }
}
