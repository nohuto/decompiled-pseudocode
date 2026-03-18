/*
 * XREFs of KiUnmaskSecondaryInterruptInternal @ 0x140423578
 * Callers:
 *     KeUnmaskInterrupt @ 0x140423A04 (KeUnmaskInterrupt.c)
 *     KeConnectInterrupt @ 0x140424368 (KeConnectInterrupt.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x1402C4DEC (HalpReleaseHighLevelLock.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x1404238CC (KiAcquireSecondaryInterruptConnectLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiUnmaskSecondaryInterruptInternal(int a1, unsigned int a2)
{
  __int64 v3; // rsi
  KSPIN_LOCK *v4; // rbp
  unsigned int v5; // ebx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY **p_Blink; // rcx
  struct _LIST_ENTRY **v8; // rax
  int v9; // edi

  v3 = 3LL * (unsigned int)(a1 - 256);
  v4 = (KSPIN_LOCK *)&KiDpcCorralLock.WaitBlock[2].WaitListEntry.Flink[v3];
  v5 = 0;
  KiAcquireSecondaryInterruptConnectLock((PKSPIN_LOCK)&KiDpcCorralLock.WaitBlock[2].WaitListEntry.Flink[v3]);
  if ( !LOBYTE(KiDpcCorralLock.WaitBlock[2].WaitListEntry.Flink[v3 + 2].Flink) )
  {
    v5 = 296;
LABEL_4:
    HalpReleaseHighLevelLock(v4, 0);
    return v5;
  }
  Blink = KiDpcCorralLock.WaitBlock[2].WaitListEntry.Flink[v3 + 2].Blink;
  if ( !Blink )
    goto LABEL_4;
  p_Blink = &Blink->Blink;
  v8 = &Blink->Blink;
  while ( 1 )
  {
    v9 = (_DWORD)v8[12] & 1;
    if ( !v9 )
      break;
    v8 = (struct _LIST_ENTRY **)*v8;
    if ( v8 == p_Blink )
      goto LABEL_10;
  }
  LOBYTE(KiDpcCorralLock.WaitBlock[2].WaitListEntry.Flink[v3 + 2].Flink) = 0;
LABEL_10:
  HalpReleaseHighLevelLock(v4, 0);
  if ( !v9 )
    return (unsigned int)guard_dispatch_icall_no_overrides(a2, 0LL);
  return v5;
}
