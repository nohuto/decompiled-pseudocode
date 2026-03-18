/*
 * XREFs of ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x14011C5F8
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011BC8C (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMAssignmentLock @ 0x14009B8F0 (HMAssignmentLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1400D0920 (PopAndFreeW32ThreadLock.c)
 *     xxxChangeForegroundKeyboardTable @ 0x14011B070 (xxxChangeForegroundKeyboardTable.c)
 *     ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU?$Win32RawOptionalLockedItem@PEAUtagTHREADINFO@@$1?Win32FreePool@@YAXPEAX@Z@@PEAUtagKL@@@Z @ 0x14011C7C0 (-GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU-$Win32RawOptionalLockedItem@PEAUtagTHREADIN.c)
 *     ApiSetEditionImmActivateAndUnloadThreadsLayout @ 0x1401BEDC8 (ApiSetEditionImmActivateAndUnloadThreadsLayout.c)
 */

void __fastcall xxxSetPKLinThreads(struct tagKL *a1, struct tagKL *a2)
{
  unsigned int ThreadsWithPKL; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // r8d
  __int64 v8; // rsi
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // r14
  __int64 *v14; // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax
  __int64 *v16[4]; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+60h] [rbp-10h]
  _QWORD *v19; // [rsp+90h] [rbp+20h] BYREF

  v19 = 0LL;
  v18 = -1LL;
  v16[2] = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  ThreadsWithPKL = GetThreadsWithPKL(&v19, BugCheckParameter2, a2);
  v8 = ThreadsWithPKL;
  if ( ThreadsWithPKL )
    PtiCurrent(v6, v5);
  if ( a1
    && *(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 18944)
    && *(struct tagKL **)(*(_QWORD *)(W32GetUserSessionState(v9, v5, v7) + 18944) + 472LL) == a2 )
  {
    xxxChangeForegroundKeyboardTable(a2, a1, 1u);
  }
  if ( (_DWORD)v8 )
  {
    if ( a2 )
    {
      ApiSetEditionImmActivateAndUnloadThreadsLayout((_DWORD)v19, v8, v7, (_DWORD)a1, *((_DWORD *)a2 + 10));
    }
    else
    {
      v13 = v19;
      do
      {
        v14 = (__int64 *)(*v13 + 472LL);
        v16[1] = (__int64 *)a1;
        v16[0] = v14;
        HMAssignmentLock(v16, 0, v7);
        ++v13;
        --v8;
      }
      while ( v8 );
    }
    if ( v18 == -1 )
    {
      BugCheckParameter4 = PtiCurrent(v11, v10);
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, 0LL, (ULONG_PTR)BugCheckParameter4);
    }
    PopAndFreeW32ThreadLock((__int64)BugCheckParameter2, v10);
    v12 = -1LL;
    v18 = -1LL;
  }
  else
  {
    v12 = v18;
  }
  if ( a2 && *((struct tagKL **)a2 + 2) != a1 )
  {
    *(_QWORD *)(*((_QWORD *)a1 + 3) + 16LL) = *((_QWORD *)a1 + 2);
    *(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) = *((_QWORD *)a1 + 3);
    *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a1 + 3) = a2;
    *(_QWORD *)(*((_QWORD *)a2 + 2) + 24LL) = a1;
    v12 = v18;
    *((_QWORD *)a2 + 2) = a1;
  }
  if ( v12 != -1 )
    PopAndFreeW32ThreadLock((__int64)BugCheckParameter2, v5);
}
