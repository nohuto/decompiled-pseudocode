/*
 * XREFs of MiEmptyWorkingSetInitiate @ 0x1403C5E90
 * Callers:
 *     MiEmptyWorkingSetConverge @ 0x1403C4BA8 (MiEmptyWorkingSetConverge.c)
 *     MiEmptyWorkingSet @ 0x1403C545C (MiEmptyWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403C5D10 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C6258 (MmAdjustWorkingSetSizeEx.c)
 *     MiEmptyTargetedWorkingSet @ 0x1403C7C08 (MiEmptyTargetedWorkingSet.c)
 *     MiEmptyThisWorkingSet @ 0x1404FA1B4 (MiEmptyThisWorkingSet.c)
 *     MiProcessRemoveFromWorkingSet @ 0x140870F0C (MiProcessRemoveFromWorkingSet.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     MiTrimWorkingSet @ 0x1403C437C (MiTrimWorkingSet.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiEmptyWorkingSetInitiate(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  _QWORD v14[3]; // [rsp+30h] [rbp-91h] BYREF
  _DWORD v15[2]; // [rsp+48h] [rbp-79h] BYREF
  char v16; // [rsp+51h] [rbp-70h]
  __int64 v17; // [rsp+68h] [rbp-59h]
  __int64 v18; // [rsp+70h] [rbp-51h]
  __int64 v19; // [rsp+78h] [rbp-49h]
  __int64 (__fastcall *v20)(__int64, unsigned __int64, int); // [rsp+F0h] [rbp+2Fh]
  __int64 (__fastcall *v21)(); // [rsp+F8h] [rbp+37h]
  _QWORD *v22; // [rsp+100h] [rbp+3Fh]

  *(_OWORD *)&v14[1] = 0LL;
  memset_0(v15, 0, 0xC0uLL);
  v15[0] = 6;
  v22 = &v14[1];
  v10 = 0;
  v17 = a1;
  v20 = MiEmptyPte;
  v21 = MiEmptyWorkingSetTail;
  v11 = 1;
  if ( (a2 & 1) != 0 )
  {
    LODWORD(v14[1]) = 1;
  }
  else
  {
    v11 = 0;
    if ( (a2 & 2) != 0 )
    {
      LODWORD(v14[1]) = 2;
      v11 = 2;
    }
  }
  if ( (a2 & 4) != 0 )
    LODWORD(v14[1]) = v11 | 4;
  v18 = a3;
  v19 = a4;
  v16 = MiLockWorkingSetShared(a1, v8, v9);
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0
    && (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    goto LABEL_11;
  }
  if ( (a2 & 8) != 0 || !a2 && !a3 && a4 == -1 )
  {
    MiTrimWorkingSet(a1, 0xFFFFFFFFFFFFFFFFuLL, 0LL, v16, 0, (a2 & 8) != 0 ? 288 : 32);
    goto LABEL_12;
  }
  if ( (unsigned int)MiWalkPageTables((__int64)v15) == 5 )
LABEL_11:
    v10 = -1073741558;
LABEL_12:
  LOBYTE(v12) = v16;
  MiUnlockWorkingSetShared(a1, v12);
  return v10;
}
