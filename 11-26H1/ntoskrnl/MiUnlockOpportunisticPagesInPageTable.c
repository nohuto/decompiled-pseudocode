/*
 * XREFs of MiUnlockOpportunisticPagesInPageTable @ 0x14031594C
 * Callers:
 *     MiSwitchToTransition @ 0x1402A1680 (MiSwitchToTransition.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403146B4 (MiReplaceRotateWithDemandZeroNoCopy.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiInvokeIoReleasePages @ 0x14050DC54 (MiInvokeIoReleasePages.c)
 *     MiLockIoPfnTree @ 0x1406F92D4 (MiLockIoPfnTree.c)
 *     MiUnlockIoPfnTree @ 0x1406F9AFC (MiUnlockIoPfnTree.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall MiUnlockOpportunisticPagesInPageTable(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v8; // rdi
  __int64 v9; // r14
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r12
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // r11
  unsigned __int64 PteShadow; // rdx
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned __int64 v27; // [rsp+30h] [rbp-128h]
  _BYTE v28[12]; // [rsp+40h] [rbp-118h] BYREF
  int v29; // [rsp+4Ch] [rbp-10Ch]
  int v30; // [rsp+5Ch] [rbp-FCh]

  memset_0(v28, 0, 0xC8uLL);
  v8 = 0LL;
  v9 = 0LL;
  v10 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = -1LL;
  MiInitializeTbFlushList((unsigned int)v28, a1, 20, 24, 1);
  if ( a4 > (a3 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
    a4 = a3 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
  v27 = a4;
  MiLockIoPfnTree(5LL);
  if ( a3 <= a4 )
  {
    v15 = 0xFFFFFFFFFFLL;
    while ( 1 )
    {
      PteShadow = *(_QWORD *)a3;
      v14 = v8;
      v17 = v8;
      if ( a3 >= 0xFFFFF6FB7DBED000uLL && a3 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(a3, PteShadow);
      v18 = v15 & (PteShadow >> 12);
      if ( v18 <= qword_140E2D920 )
      {
        v12 = 6 * v18;
        v13 = 1LL;
        if ( ((*(_QWORD *)(48 * v18 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
          break;
      }
      v12 = qword_140E35FC0[0];
      if ( !qword_140E35FC0[0] )
        goto LABEL_8;
      v13 = v18 & 0xFFFFFFFFFFFFFE00uLL;
      if ( v11 != -1LL && v11 == v13 )
        goto LABEL_8;
      if ( !v9 || *(_QWORD *)(v9 + 24) != v13 )
      {
        do
        {
          v23 = *(_QWORD *)(v12 + 24);
          if ( v18 < v23 )
          {
            v12 = *(_QWORD *)v12;
          }
          else
          {
            if ( v18 < v23 + 512 )
              break;
            v12 = *(_QWORD *)(v12 + 8);
          }
        }
        while ( v12 );
        if ( !v12 )
        {
          v11 = v18 & 0xFFFFFFFFFFFFFE00uLL;
          goto LABEL_8;
        }
        v9 = v12;
      }
      v13 = 1LL;
      if ( *(_WORD *)(v9
                    + 2 * ((v18 & ((1LL << ((unsigned __int8)dword_140E2D878 - 12)) - 1)) - *(_QWORD *)(v9 + 24))
                    + 176) )
        goto LABEL_24;
LABEL_8:
      a3 += 8LL;
      v15 = 0xFFFFFFFFFFLL;
      if ( a3 > a4 )
        goto LABEL_9;
    }
    if ( (*(_QWORD *)(48 * v18 - 0x220000000000LL + 40) & 0x10000000000LL) != 0
      || (*(_QWORD *)(48 * v18 - 0x220000000000LL + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
    {
      v13 = 2LL;
    }
    if ( (unsigned __int16)*(_DWORD *)(48 * v18 - 0x220000000000LL + 32) <= (unsigned __int16)v13 )
      goto LABEL_8;
    v13 = 1LL;
LABEL_24:
    v8 = a3;
    if ( v14 )
      v8 = v17;
    if ( a2 == 17 )
      goto LABEL_9;
    MiInsertTbFlushEntry(v28, v18 << 12, 1LL);
    if ( v30 == v29 )
    {
      LOBYTE(v12) = 17;
      MiUnlockIoPfnTree(v12, 5LL, v13, v14);
      MiUnlockPageTableInternal(a1, v10);
      LOBYTE(v20) = a2;
      MiUnlockWorkingSetShared(a1, v20);
      MiInvokeIoReleasePages(v28);
      MiLockWorkingSetShared(a1, v21, v22);
      MiLockPageTableInternal(a1, v10, 0);
      MiLockIoPfnTree(5LL);
    }
    a4 = v27;
    goto LABEL_8;
  }
LABEL_9:
  LOBYTE(v12) = 17;
  MiUnlockIoPfnTree(v12, 5LL, v13, v14);
  if ( v30 )
  {
    MiUnlockPageTableInternal(a1, v10);
    LOBYTE(v24) = a2;
    MiUnlockWorkingSetShared(a1, v24);
    MiInvokeIoReleasePages(v28);
    MiLockWorkingSetShared(a1, v25, v26);
    MiLockPageTableInternal(a1, v10, 0);
  }
  return v8;
}
