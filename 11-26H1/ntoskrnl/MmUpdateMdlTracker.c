/*
 * XREFs of MmUpdateMdlTracker @ 0x1404E047C
 * Callers:
 *     IopProbeAndLockPages @ 0x14039F98C (IopProbeAndLockPages.c)
 *     IopProbeAndLockPages_0 @ 0x1404B4354 (IopProbeAndLockPages_0.c)
 *     IopProbeAndLockPages_1 @ 0x1404C5760 (IopProbeAndLockPages_1.c)
 *     IopProbeAndLockPages_2 @ 0x1404E0418 (IopProbeAndLockPages_2.c)
 *     IopProbeAndLockPages_3 @ 0x14050A414 (IopProbeAndLockPages_3.c)
 *     NtQueryQuotaInformationFile @ 0x1407995D0 (NtQueryQuotaInformationFile.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     IopWriteFileGather @ 0x140B01CE0 (IopWriteFileGather.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
