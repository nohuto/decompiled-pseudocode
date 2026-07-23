/*
 * XREFs of MiDirtyPte @ 0x1404AA8E4
 * Callers:
 *     MmCopyToCachedPage @ 0x1402B23B0 (MmCopyToCachedPage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 */

void __fastcall MiDirtyPte(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  unsigned __int64 v6; // rsi
  char v7; // bp
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx

  if ( (a3 & 0x40) != 0 || (a3 & 2) != 0 || (a3 & 0x800) == 0 )
    v5 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  else
    v5 = a3 | 0x62;
  if ( (v5 & 1) != 0 )
  {
    v6 = (((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v7 = MiLockWorkingSetShared(a1, a2, v5);
    MiLockPageTableInternal(a1, v6, 0);
    v8 = *(_QWORD *)a2;
    if ( (*(_QWORD *)a2 & 1) != 0 )
    {
      if ( (v8 & 0x42) != 0 || (v8 & 0x800) == 0 )
        v9 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      else
        v9 = v8 | 0x62;
      if ( (v9 & 1) != 0 )
        MiWriteValidPteNewProtection((__int64 *)a2, v9);
    }
    MiUnlockPageTableInternal(a1, v6);
    LOBYTE(v10) = v7;
    MiUnlockWorkingSetShared(a1, v10);
  }
}
