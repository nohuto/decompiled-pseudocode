/*
 * XREFs of MiUnlinkSubsectionWaitBlock @ 0x1406FADC0
 * Callers:
 *     MiPurgeSubsection @ 0x140422170 (MiPurgeSubsection.c)
 *     MiSubsectionProtosCreated @ 0x14050DFD0 (MiSubsectionProtosCreated.c)
 *     MiChangingSubsectionProtos @ 0x1406F9120 (MiChangingSubsectionProtos.c)
 *     MiAllocateFileExtents @ 0x140B5F8D8 (MiAllocateFileExtents.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 */

void __fastcall MiUnlinkSubsectionWaitBlock(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  KIRQL v6; // dl
  _QWORD *v7; // r8
  _QWORD *v8; // rcx
  __int64 v9; // rax

  v3 = *a1;
  if ( a3 )
    v6 = 17;
  else
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  v7 = 0LL;
  if ( (*(_DWORD *)(v3 + 56) & 0x20) != 0 )
    v8 = *(_QWORD **)(v3 + 80);
  else
    v8 = (_QWORD *)a1[3];
  if ( !v8 )
    goto LABEL_12;
  do
  {
    if ( v8 == (_QWORD *)a2 )
      break;
    v7 = v8;
    v8 = (_QWORD *)*v8;
  }
  while ( v8 );
  if ( v7 )
  {
    *v7 = *v8;
  }
  else
  {
LABEL_12:
    v9 = *v8;
    if ( (*(_DWORD *)(v3 + 56) & 0x20) != 0 )
      *(_QWORD *)(v3 + 80) = v9;
    else
      a1[3] = v9;
  }
  *(_DWORD *)(a2 + 16) &= ~1u;
  if ( v6 != 17 )
  {
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72), v6);
    KeLeaveCriticalRegion();
    *(_DWORD *)(a2 + 16) &= ~8u;
  }
}
