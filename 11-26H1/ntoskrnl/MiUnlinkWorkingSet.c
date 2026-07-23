/*
 * XREFs of MiUnlinkWorkingSet @ 0x1404CE3CC
 * Callers:
 *     MiDeletePartitionResources @ 0x14086F208 (MiDeletePartitionResources.c)
 *     MmDeleteProcessAddressSpace @ 0x140B41970 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlinkAllAgingEntries @ 0x1402EFA7C (MiUnlinkAllAgingEntries.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 */

void __fastcall MiUnlinkWorkingSet(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // r14
  __int64 v4; // rbx
  volatile LONG *v5; // rbx
  KIRQL v6; // si
  __int16 v7; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+22h] [rbp-26h]
  char v9; // [rsp+23h] [rbp-25h]
  int v10; // [rsp+24h] [rbp-24h]
  _QWORD v11[4]; // [rsp+28h] [rbp-20h] BYREF

  v1 = *(unsigned __int16 *)(a1 + 174);
  v3 = *(_QWORD *)(a1 + 16);
  v9 = 0;
  v4 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v1);
  v7 = 263;
  v5 = (volatile LONG *)(v4 + 21384);
  v8 = 6;
  v10 = 0;
  v11[1] = v11;
  v11[0] = v11;
  v6 = ExAcquireSpinLockExclusive(v5);
  while ( *(_DWORD *)(v3 + 56) )
  {
    *(_QWORD *)(v3 + 72) = &v7;
    if ( v6 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    else
      ExReleaseSpinLockExclusive(v5, v6);
    KeWaitForGate((__int64)&v7, 18LL);
    ExAcquireSpinLockExclusive(v5);
  }
  MiUnlinkAllAgingEntries(a1);
  *(_QWORD *)(v3 + 72) = MmBadPointer;
  if ( v6 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  else
    ExReleaseSpinLockExclusive(v5, v6);
}
