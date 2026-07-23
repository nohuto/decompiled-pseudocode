/*
 * XREFs of MiReplicatePteChange @ 0x14052ABE0
 * Callers:
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiAllocateWsle @ 0x1402B9CD8 (MiAllocateWsle.c)
 *     MiDeleteSystemPageTable @ 0x1402EBAE0 (MiDeleteSystemPageTable.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140327678 (MiUnlockNestedPageTableWritePte.c)
 *     MiInitializeSystemPageTable @ 0x14033CC0C (MiInitializeSystemPageTable.c)
 *     MiInitializeShadowPageTable @ 0x14087B9A8 (MiInitializeShadowPageTable.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReplicatePteChangeToProcess @ 0x140710830 (MiReplicatePteChangeToProcess.c)
 */

void __fastcall MiReplicatePteChange(__int64 a1, int a2)
{
  _KPROCESS *Process; // rbp
  KIRQL CurrentIrql; // bl
  __int64 *i; // rdi
  __int64 *v7; // rcx

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a2 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql == 2 )
    {
      CurrentIrql = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E36200);
    }
    else
    {
      ExAcquireSpinLockExclusive(&dword_140E36200);
    }
  }
  for ( i = (__int64 *)qword_140E2D798; i != &qword_140E2D798; i = (__int64 *)*i )
  {
    v7 = i - 168;
    if ( (*((_DWORD *)i - 211) & 0x800000) == 0 )
    {
      if ( (*((_DWORD *)v7 + 125) & 0xC00) != 0 && (*((_DWORD *)v7 + 125) & 0x80u) == 0 )
      {
        if ( v7 != (__int64 *)Process )
          MiReplicatePteChangeToProcess(v7, a1);
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)v7 + 125, 0x800000u);
      }
    }
  }
  if ( !a2 )
  {
    if ( CurrentIrql == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36200);
    else
      ExReleaseSpinLockExclusive(&dword_140E36200, CurrentIrql);
  }
}
