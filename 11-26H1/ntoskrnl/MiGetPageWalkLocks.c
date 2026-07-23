/*
 * XREFs of MiGetPageWalkLocks @ 0x140364BB8
 * Callers:
 *     MiDeleteVaDirect @ 0x140363C90 (MiDeleteVaDirect.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MiGetPageWalkLocks(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx

  v3 = *(_QWORD *)(a1 + 32);
  if ( (*(_DWORD *)a1 & 4) != 0 )
    return MiLockWorkingSetShared(v3, v3, a3);
  else
    return MiLockWorkingSetExclusive(v3, v3, a3);
}
