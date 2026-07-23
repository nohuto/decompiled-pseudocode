/*
 * XREFs of MiWriteVadFlags @ 0x14046CF50
 * Callers:
 *     MiRemoveSecureEntry @ 0x14048A184 (MiRemoveSecureEntry.c)
 *     MiInsertVadEvent @ 0x140494C48 (MiInsertVadEvent.c)
 *     MiApplyImageHotPatchRequest @ 0x140874C78 (MiApplyImageHotPatchRequest.c)
 *     MiCreatePatchSectionRequest @ 0x140875B58 (MiCreatePatchSectionRequest.c)
 *     MiGetVadForHotPatchInProgress @ 0x1408763E8 (MiGetVadForHotPatchInProgress.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiWriteVadFlags(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  char v5; // r14
  int v6; // r15d
  volatile LONG *v7; // r12
  int v8; // esi
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax

  v3 = a3;
  v5 = a2;
  v6 = a2 & 1;
  if ( (a2 & 1) != 0 )
  {
    v7 = (volatile LONG *)(a1 + 64);
    v8 = a2 & 2;
    CurrentIrql = 17;
    result = *(_DWORD *)(a1 + 48) ^ ((unsigned __int8)*(_DWORD *)(a1 + 48) ^ (unsigned __int8)(2 * a3)) & 2u;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    v8 = v5 & 2;
    if ( (v5 & 2) != 0 )
      MiLockVadTree(3u, a2, a3);
    v7 = (volatile LONG *)(a1 + 64);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    result = *(unsigned int *)(a1 + 48);
  }
  if ( v8 )
    result = v3 & 1 | (unsigned int)result & 0xFFFFFFFE;
  if ( (v5 & 4) != 0 )
    result = ((unsigned int)result ^ (v3 << 21)) & 0x600000 ^ (unsigned int)result;
  *(_DWORD *)(a1 + 48) = result;
  if ( !v6 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v7);
    if ( v8 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8] + 1);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
