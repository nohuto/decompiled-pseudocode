/*
 * XREFs of MiInitializeWorkingSetList @ 0x1404D3AF0
 * Callers:
 *     MiInitializeSystemWorkingSetList @ 0x1408676D4 (MiInitializeSystemWorkingSetList.c)
 *     MmInitializeProcessAddressSpace @ 0x1409622B0 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402B34E0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     MiAllocateWsle @ 0x1402D7F18 (MiAllocateWsle.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MiInitializeWorkingSetList(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // eax
  char v6; // di
  __int64 v7; // rdx

  v4 = *(_DWORD *)(a1 + 184);
  if ( (v4 & 0xF) != a3 )
    *(_BYTE *)(a1 + 184) = a3 & 0xF | v4 & 0xF0;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_QWORD *)(a1 + 144) = 0LL;
    *(_QWORD *)(a1 + 152) = 0LL;
    *(_QWORD *)(a1 + 160) = 0LL;
    *(_QWORD *)(a1 + 128) = a4;
    *(_QWORD *)(a1 + 16) = a2;
  }
  else
  {
    *(_QWORD *)(a1 - 376) = 1LL;
    *(_QWORD *)(a1 + 16) = a2;
    v6 = MiLockWorkingSetShared(a1, 0xFFFFF68000000000uLL, 0x7FFFFFFFF8LL);
    MiLockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL, 0);
    MiAllocateWsle(
      a1,
      (signed __int64 *)0xFFFFF6FB7DBEDF68LL,
      (_QWORD *)(48 * ((MEMORY[0xFFFFF6FB7DBEDF68] >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL),
      0,
      *(__int64 *)&CLFS_LSN_NULL_EXT,
      32,
      0LL);
    MiUnlockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL);
    LOBYTE(v7) = v6;
    MiUnlockWorkingSetShared(a1, v7);
  }
  return 0LL;
}
