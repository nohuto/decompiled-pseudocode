/*
 * XREFs of MmUpdateMdlTracker @ 0x1404D9B5C
 * Callers:
 *     IopProbeAndLockPages @ 0x1403A16EC (IopProbeAndLockPages.c)
 *     IopProbeAndLockPages_0 @ 0x1404AD924 (IopProbeAndLockPages_0.c)
 *     IopProbeAndLockPages_1 @ 0x1404BF110 (IopProbeAndLockPages_1.c)
 *     IopProbeAndLockPages_2 @ 0x1404D9AF8 (IopProbeAndLockPages_2.c)
 *     IopProbeAndLockPages_3 @ 0x140503E84 (IopProbeAndLockPages_3.c)
 *     NtQueryQuotaInformationFile @ 0x14079C100 (NtQueryQuotaInformationFile.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     IopWriteFileGather @ 0x140B03A10 (IopWriteFileGather.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MmUpdateMdlTracker(unsigned __int64 a1, struct _LIST_ENTRY *a2, struct _LIST_ENTRY *a3)
{
  PEPROCESS v3; // r9
  unsigned int v4; // edi
  struct _LIST_ENTRY *Flink; // rbx
  volatile LONG *p_Blink; // rsi
  volatile LONG *v10; // rcx
  KIRQL v11; // bp

  v3 = *(PEPROCESS *)(a1 + 16);
  v4 = 0;
  if ( !v3 )
    v3 = PsInitialSystemProcess;
  Flink = v3[2].Header.WaitListHead.Flink;
  if ( !Flink )
    return 0LL;
  p_Blink = (volatile LONG *)&Flink[1].Blink;
  v10 = (volatile LONG *)&Flink[1].Blink;
  if ( KeGetCurrentIrql() == 2 )
  {
    v11 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v10);
  }
  else
  {
    v11 = ExAcquireSpinLockExclusive(v10);
  }
LABEL_6:
  for ( Flink = Flink->Flink; Flink; Flink = Flink->Blink )
  {
    if ( (struct _LIST_ENTRY *)a1 < Flink[1].Blink )
      goto LABEL_6;
    if ( (struct _LIST_ENTRY *)a1 <= Flink[1].Blink )
      break;
  }
  if ( Flink && (a2 || a3) )
  {
    Flink[4].Blink = a2;
    Flink[5].Flink = a3;
    memset_0(&Flink[5].Blink, 0, 0x60uLL);
  }
  if ( v11 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(p_Blink);
  else
    ExReleaseSpinLockExclusive(p_Blink, v11);
  LOBYTE(v4) = Flink != 0LL;
  return v4;
}
