/*
 * XREFs of MiOutSwapWorkingSet @ 0x1403FE6E0
 * Callers:
 *     MiOutSwapKernelStackPage @ 0x1403FE32C (MiOutSwapKernelStackPage.c)
 *     MmOutSwapVirtualAddresses @ 0x1403FE41C (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1404BC104 (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiOutSwapWorkingSet(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  _DWORD v13[2]; // [rsp+28h] [rbp-71h] BYREF
  char v14; // [rsp+31h] [rbp-68h]
  __int64 v15; // [rsp+48h] [rbp-51h]
  __int64 v16; // [rsp+50h] [rbp-49h]
  __int64 v17; // [rsp+58h] [rbp-41h]
  __int64 (__fastcall *v18)(__int64, ULONG_PTR, int); // [rsp+D0h] [rbp+37h]
  __int64 v19; // [rsp+E0h] [rbp+47h]

  memset_0(v13, 0, 0xC0uLL);
  v19 = a5;
  v18 = MiOutSwapWorkingSetPte;
  v11 = *(_DWORD *)(a1 + 184);
  v15 = a1;
  v13[0] = 69;
  if ( (v11 & 0xF) != 0 )
  {
    v14 = 17;
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
      return;
    v13[0] = 71;
    v16 = a3;
    v17 = a4;
    v14 = MiLockWorkingSetShared(a1, v9, v10);
  }
  MiWalkPageTables((__int64)v13);
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 )
  {
    LOBYTE(v12) = v14;
    MiUnlockWorkingSetShared(a1, v12);
  }
}
