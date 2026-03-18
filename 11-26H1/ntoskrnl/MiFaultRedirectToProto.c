/*
 * XREFs of MiFaultRedirectToProto @ 0x140511920
 * Callers:
 *     MmAccessFault @ 0x1403A2390 (MmAccessFault.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1402D2540 (MiGetProtoPteAddress.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiUnlockVadTree @ 0x140326440 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1403265D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140326730 (MiLocateAddress.c)
 *     MiRetainSubsection @ 0x1406FF8C8 (MiRetainSubsection.c)
 */

__int64 __fastcall MiFaultRedirectToProto(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  char v5; // bp
  unsigned int v6; // edi
  struct _LIST_ENTRY *Address; // rax
  __int64 v8; // rsi
  __int64 ProtoPteAddress; // rdi

  if ( *(_QWORD *)a1 >= 0xFFFF800000000000uLL
    || (v4 = *(_QWORD *)(a1 + 104), v4 == qword_140E2D628)
    || qword_140E2D630 && v4 == qword_140E2D630 )
  {
LABEL_12:
    *(_DWORD *)(a1 + 80) &= ~8u;
    return 0LL;
  }
  v5 = 1;
  v6 = (*(_DWORD *)(a1 + 80) & 8) != 0 ? 0xFFFFFFFE : 0;
  MiLockVadTree(1u, a2, a3);
  Address = MiLocateAddress(*(_QWORD *)a1);
  v8 = (__int64)Address;
  if ( Address )
  {
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)&Address[4]);
    v5 = 9;
  }
  MiUnlockVadTree(v5, 0x11u);
  if ( v8 )
  {
    ProtoPteAddress = MiGetProtoPteAddress(v8, *(_QWORD *)a1 >> 12, v6 + 12, (unsigned int **)(a1 + 112));
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v8 + 64));
    if ( ProtoPteAddress )
    {
      if ( *(_QWORD *)(a1 + 104) != ProtoPteAddress )
        *(_QWORD *)(a1 + 104) = ProtoPteAddress;
      MiRetainSubsection(*(_QWORD *)(a1 + 112));
      goto LABEL_12;
    }
  }
  *(_QWORD *)(a1 + 104) = 0LL;
  return 3221225477LL;
}
