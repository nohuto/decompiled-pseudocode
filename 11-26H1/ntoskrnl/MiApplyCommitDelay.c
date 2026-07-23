/*
 * XREFs of MiApplyCommitDelay @ 0x1404EF674
 * Callers:
 *     MiChargeCommitSlow @ 0x1402D6E68 (MiChargeCommitSlow.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiApplyCommitDelay(__int64 a1, char a2, __int64 a3)
{
  volatile LONG *v4; // rdi
  KIRQL v5; // dl
  int v6; // eax
  int v7; // eax
  KIRQL v8; // al
  LARGE_INTEGER Timeout; // [rsp+58h] [rbp+20h] BYREF

  if ( (a2 & 4) == 0
    && (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0
    && KeGetCurrentIrql() < 2u
    && a3 != *(_QWORD *)(a1 + 17224)
    && *(_DWORD *)(a1 + 2804) )
  {
    v4 = (volatile LONG *)(a1 + 2112);
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2112));
    v6 = *(_DWORD *)(a1 + 2800);
    if ( v6 )
    {
      v7 = v6 + 1;
    }
    else
    {
      *(_WORD *)(a1 + 2808) = 0;
      *(_DWORD *)(a1 + 2812) = 0;
      v7 = 1;
      *(_QWORD *)(a1 + 2824) = a1 + 2816;
      *(_QWORD *)(a1 + 2816) = a1 + 2816;
      *(_BYTE *)(a1 + 2810) = 6;
    }
    *(_DWORD *)(a1 + 2800) = v7;
    if ( v5 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    else
      ExReleaseSpinLockExclusive(v4, v5);
    Timeout = Mi10Milliseconds;
    KeWaitForSingleObject((PVOID)(a1 + 2808), Executive, 0, 0, &Timeout);
    v8 = ExAcquireSpinLockExclusive(v4);
    --*(_DWORD *)(a1 + 2800);
    if ( v8 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    else
      ExReleaseSpinLockExclusive(v4, v8);
  }
}
