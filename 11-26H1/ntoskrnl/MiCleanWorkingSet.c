/*
 * XREFs of MiCleanWorkingSet @ 0x1403C5004
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A00B64 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     MiDrainSystemAccessLog @ 0x1403C508C (MiDrainSystemAccessLog.c)
 */

__int64 __fastcall MiCleanWorkingSet(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  KIRQL v5; // di
  __int64 v6; // rbx

  v3 = a1 + 1024;
  v5 = MiLockWorkingSetExclusive(a1 + 1024, a2, a3);
  *(_BYTE *)(v3 + 187) = HIBYTE(*(_DWORD *)(v3 + 184)) | 1;
  --*(_QWORD *)(a1 + 648);
  MiDrainSystemAccessLog(v3);
  v6 = *(_QWORD *)(v3 + 120);
  MiUnlockWorkingSetExclusive(v3, v5);
  return v6 - 25;
}
