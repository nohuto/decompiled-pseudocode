/*
 * XREFs of MiRemoveSecureEntry @ 0x14048A184
 * Callers:
 *     MmUnsecureVirtualMemory @ 0x140992B70 (MmUnsecureVirtualMemory.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140A027C4 (MiUnmapLockedPagesInUserSpace.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiWriteVadFlags @ 0x14046CF50 (MiWriteVadFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x140A03224 (MiUnsecureVirtualMemoryAgainstWrites.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiRemoveSecureEntry(ULONG_PTR BugCheckParameter2, _QWORD *P)
{
  volatile LONG *v2; // r15
  unsigned int v5; // ebx
  int v6; // ebp
  _QWORD *v7; // r14
  KIRQL v8; // r12
  _WORD *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx

  v2 = (volatile LONG *)(BugCheckParameter2 + 64);
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(BugCheckParameter2 + 64));
  v9 = (_WORD *)(*(_QWORD *)(BugCheckParameter2 + 56) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v9 )
  {
    while ( 1 )
    {
      if ( v9[4] == 2 && v5 <= 1 )
        ++v5;
      if ( v9 == (_WORD *)P )
      {
        v10 = *(_QWORD *)v9;
        v6 = 1;
        if ( v7 )
          *v7 = v10;
        else
          *(_QWORD *)(BugCheckParameter2 + 56) = v10 | *(_QWORD *)(BugCheckParameter2 + 56) & 0xFLL;
      }
      if ( v5 > 1 && v6 )
        break;
      v7 = v9;
      v9 = *(_WORD **)v9;
      if ( !v9 )
      {
        if ( v5 == 1 )
          MiWriteVadFlags(BugCheckParameter2, 1LL, 0LL);
        break;
      }
    }
  }
  if ( v8 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v8);
  if ( !v6 )
    KeBugCheckEx(0x1Au, 0x15001uLL, BugCheckParameter2, (ULONG_PTR)(P + 3), 0LL);
  v11 = P[3];
  if ( (v11 & 0x10) != 0 )
    MiUnsecureVirtualMemoryAgainstWrites(BugCheckParameter2, v11, P[4]);
  ExFreePoolWithTag(P, 0);
}
