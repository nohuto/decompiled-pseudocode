/*
 * XREFs of MiReleaseLockedVaLeafCharges @ 0x1404B3E8C
 * Callers:
 *     MiUnlockWsle @ 0x140324658 (MiUnlockWsle.c)
 *     MiCopyOnWriteReturnCharges @ 0x14036B1E0 (MiCopyOnWriteReturnCharges.c)
 * Callees:
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     MiReturnResident @ 0x14036E2C0 (MiReturnResident.c)
 */

void __fastcall MiReleaseLockedVaLeafCharges(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // r11
  __int64 v5; // rbx

  v3 = *(unsigned __int16 *)(a1 + 174);
  v4 = a2;
  v5 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * v3);
  if ( !a3 )
    MiReturnResident(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * v3), 1uLL);
  if ( *(__int64 *)(v4 + 40) < 0
    && (*(_QWORD *)(v4 + 16) & 0x400LL) != 0
    && v5 == *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL)) )
  {
    MiReturnCommit(v5, 1LL, 0);
    _InterlockedDecrement64((volatile signed __int64 *)(v5 + 23472));
  }
}
