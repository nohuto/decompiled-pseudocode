/*
 * XREFs of MiGetWorkingSetInfoEx @ 0x14040EB0C
 * Callers:
 *     MiGetWorkingSetInfo @ 0x14040E930 (MiGetWorkingSetInfo.c)
 *     EtwpEnumerateWorkingSet @ 0x14077A7EC (EtwpEnumerateWorkingSet.c)
 *     MmLogSystemShareablePfnInfo @ 0x14087D834 (MmLogSystemShareablePfnInfo.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiGetWorkingSetInfoEx(__int64 a1, int a2, _QWORD *a3, unsigned __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rbx
  int v11; // r12d
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned int v15; // ebx
  int v17; // eax
  __int64 v18; // rcx
  __int128 v19; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v20; // [rsp+30h] [rbp-D0h]
  __int64 v21; // [rsp+40h] [rbp-C0h]
  _DWORD v22[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v23; // [rsp+59h] [rbp-A7h]
  __int64 v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall *v26)(__int64, _QWORD *, int); // [rsp+F8h] [rbp-8h]
  __int128 *v27; // [rsp+108h] [rbp+8h]
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp+10h] BYREF

  v21 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v19 = 0LL;
  v20 = 0LL;
  memset_0(v22, 0, 0xC0uLL);
  v10 = 0LL;
  v11 = 0;
  if ( a2 < 0 )
  {
    v17 = 1;
    if ( (a2 & 0x40000000) != 0 )
      v17 = 3;
    LODWORD(v19) = v17;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
  {
LABEL_3:
    v25 = -1LL;
    v26 = MiQueryLeafPte;
    v22[0] = 32774;
    v27 = &v19;
    v23 = MiLockWorkingSetShared(a1, v8, v9);
    if ( v10 && (*(_DWORD *)(v10 + 500) & 0x20) != 0 )
    {
      v15 = -1073741558;
      goto LABEL_15;
    }
    v13 = *(_QWORD *)(a1 + 136);
    if ( a2 >= 0 )
    {
      v13 -= *(_QWORD *)(a1 + 144);
      if ( !v13 )
        goto LABEL_28;
      if ( a4 < 0x30 )
      {
LABEL_26:
        v18 = *(_QWORD *)(a1 + 136);
        v15 = -1073741820;
        if ( a2 >= 0 )
          a3[1] = v18 - *(_QWORD *)(a1 + 144);
        else
          *a3 = v18;
LABEL_15:
        LOBYTE(v12) = v23;
        MiUnlockWorkingSetShared(a1, v12);
        if ( v11 )
          KiUnstackDetachProcess((__int64)&ApcState, 0);
        return v15;
      }
      v12 = 16LL;
      v14 = (a4 - 48) >> 5;
    }
    else
    {
      if ( !v13 )
      {
LABEL_13:
        *a3 = v20;
LABEL_14:
        v15 = 0;
        goto LABEL_15;
      }
      v12 = 16LL;
      if ( a4 < 0x10 )
        goto LABEL_26;
      v12 = 8LL;
      v14 = (a4 - 16) >> 3;
    }
    if ( v13 <= v14 + 1 )
    {
      if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
        v22[0] |= 1u;
      v24 = a1;
      *((_QWORD *)&v20 + 1) = v14 + 1;
      *((_QWORD *)&v19 + 1) = &a3[(unsigned __int64)v12 / 8];
      v21 = v10;
      if ( (unsigned int)MiWalkPageTables((__int64)v22) != 5 )
      {
        if ( a2 < 0 )
          goto LABEL_13;
LABEL_28:
        a3[1] = v20;
        goto LABEL_14;
      }
    }
    goto LABEL_26;
  }
  v10 = a1 - 1024;
  if ( (PVOID)(a1 - 1024) != PsIdleProcess )
  {
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)v10 )
    {
      KeStackAttachProcess((PRKPROCESS)(a1 - 1024), &ApcState);
      v11 = 1;
    }
    goto LABEL_3;
  }
  if ( a2 >= 0 )
    a3[1] = 0LL;
  else
    *a3 = 0LL;
  return 0LL;
}
