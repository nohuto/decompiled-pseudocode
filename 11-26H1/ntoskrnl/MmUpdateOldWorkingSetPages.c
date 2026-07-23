/*
 * XREFs of MmUpdateOldWorkingSetPages @ 0x1404C3F54
 * Callers:
 *     PfpDeprioritizeOldPagesInWs @ 0x140AF2140 (PfpDeprioritizeOldPagesInWs.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MmUpdateOldWorkingSetPages(ULONG_PTR BugCheckParameter1, int a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // r14d
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rdx
  _OWORD v15[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v16; // [rsp+40h] [rbp-C0h]
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v18; // [rsp+54h] [rbp-ACh]
  char v19; // [rsp+59h] [rbp-A7h]
  ULONG_PTR v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall *v22)(__int64, unsigned __int64, __int64); // [rsp+F8h] [rbp-8h]
  __int64 (__fastcall *v23)(__int64, __int64); // [rsp+100h] [rbp+0h]
  _OWORD *v24; // [rsp+108h] [rbp+8h]
  _OWORD v25[3]; // [rsp+110h] [rbp+10h] BYREF

  memset(v25, 0, sizeof(v25));
  memset(v15, 0, sizeof(v15));
  v16 = 0LL;
  memset_0(&v17, 0, 0xC0uLL);
  if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v8 = 0;
  }
  else
  {
    v8 = 1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v25);
  }
  v9 = v15[0];
  v10 = 0;
  if ( (a3 & 2) != 0 )
  {
    v9 = LODWORD(v15[0]) | 1;
    LODWORD(v15[0]) |= 1u;
  }
  if ( (a3 & 1) != 0 )
    LODWORD(v15[0]) = v9 | 2;
  v11 = *(_DWORD *)(BugCheckParameter1 + 1208);
  DWORD1(v15[0]) = a2;
  if ( (v11 & 0xF) == 0 )
  {
    if ( *(_QWORD *)(BugCheckParameter1 + 1648) )
    {
LABEL_11:
      *((_QWORD *)&v16 + 1) = 1LL;
      goto LABEL_12;
    }
    v12 = (*(_QWORD *)(BugCheckParameter1 + 368) & 0xFFFFFFFFFFFFFFFCuLL) == 0;
LABEL_10:
    if ( v12 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( _bittest64(&MiFlags, 0x26u) )
  {
    v12 = (v11 & 0x40) == 0;
    goto LABEL_10;
  }
LABEL_12:
  v17 = 6;
  v24 = v15;
  v20 = BugCheckParameter1 + 1024;
  v22 = MiUpdateOldPte;
  v23 = MiUpdateOldWorkingSetPagesTail;
  v21 = -1LL;
  v18 = v18 & 0xFFFF0FFF | 0x6000;
  v19 = MiLockWorkingSetShared(BugCheckParameter1 + 1024, v6, v7);
  if ( (*(_DWORD *)(BugCheckParameter1 + 500) & 0x20) != 0 )
  {
    v10 = -1073741558;
  }
  else
  {
    *((_QWORD *)&v15[0] + 1) = *(_QWORD *)(BugCheckParameter1 + 1128);
    if ( *((_QWORD *)&v15[0] + 1) )
      MiWalkPageTables((__int64)&v17);
  }
  LOBYTE(v13) = v19;
  MiUnlockWorkingSetShared(BugCheckParameter1 + 1024, v13);
  if ( v8 )
    KiUnstackDetachProcess((__int64)v25, 0);
  return v10;
}
