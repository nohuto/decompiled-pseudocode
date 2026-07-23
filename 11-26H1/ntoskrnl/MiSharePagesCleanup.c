/*
 * XREFs of MiSharePagesCleanup @ 0x140311260
 * Callers:
 *     MiSharePages @ 0x1402E9008 (MiSharePages.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     MiAttachThreadDone @ 0x140311390 (MiAttachThreadDone.c)
 *     MiFreeCombineBlock @ 0x140311464 (MiFreeCombineBlock.c)
 *     KeForceDetachProcess @ 0x1403118D0 (KeForceDetachProcess.c)
 */

__int64 __fastcall MiSharePagesCleanup(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  __int64 v7; // r14
  _QWORD *v8; // rsi
  __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax

  v3 = a1[1];
  v5 = *a1;
  v6 = a1[7];
  v7 = *(_QWORD *)(v3 + 40);
  v8 = *(_QWORD **)(*a1 + 104);
  v9 = *(_QWORD *)(v3 + 32);
  if ( v6 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(v3 + 32), v6);
    a1[7] = 0LL;
  }
  v10 = *((_DWORD *)a1 + 5);
  if ( (v10 & 0x20) != 0 )
  {
    LOBYTE(v6) = *((_BYTE *)a1 + 48);
    MiUnlockWorkingSetShared(v9, v6);
    *((_DWORD *)a1 + 5) &= ~0x20u;
    v10 = *((_DWORD *)a1 + 5);
  }
  if ( (v10 & 2) != 0 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6);
    *((_DWORD *)a1 + 5) &= ~2u;
    v10 = *((_DWORD *)a1 + 5);
  }
  if ( (v10 & 1) != 0 )
  {
    KeForceDetachProcess(a1 + 8, 0LL);
    MiAttachThreadDone(v7 + 1024, 0LL);
    *((_DWORD *)a1 + 5) &= ~1u;
  }
  v11 = *(_QWORD *)(v5 + 304);
  if ( v11 )
  {
    MiReleaseFreshPage(v11, v6, a3);
    *(_QWORD *)(v5 + 304) = 0LL;
  }
  v12 = *(_QWORD *)(v5 + 296);
  if ( v12 )
  {
    *(_QWORD *)(v12 + 24) = 0LL;
    MiFreeCombineBlock(*(_QWORD *)(v5 + 296), 0LL);
    *(_QWORD *)(v5 + 296) = 0LL;
  }
  result = a1[4];
  *v8 += result;
  return result;
}
