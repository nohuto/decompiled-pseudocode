/*
 * XREFs of MiReplicatePteChange @ 0x140528570
 * Callers:
 *     MiRewritePteWithLockBit @ 0x14029F518 (MiRewritePteWithLockBit.c)
 *     MiAllocateWsle @ 0x1402D7F18 (MiAllocateWsle.c)
 *     MiDeleteSystemPageTable @ 0x140309A60 (MiDeleteSystemPageTable.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140325648 (MiUnlockNestedPageTableWritePte.c)
 *     MiInitializeSystemPageTable @ 0x14033AB8C (MiInitializeSystemPageTable.c)
 *     MiInitializeShadowPageTable @ 0x1408755C4 (MiInitializeShadowPageTable.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReplicatePteChangeToProcess @ 0x14070BB80 (MiReplicatePteChangeToProcess.c)
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
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E36080);
    }
    else
    {
      ExAcquireSpinLockExclusive(&dword_140E36080);
    }
  }
  for ( i = (__int64 *)qword_140E2D618; i != &qword_140E2D618; i = (__int64 *)*i )
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
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36080);
    else
      ExReleaseSpinLockExclusive(&dword_140E36080, CurrentIrql);
  }
}
