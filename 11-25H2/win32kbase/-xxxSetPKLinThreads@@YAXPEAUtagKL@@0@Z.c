/*
 * XREFs of ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1400F44B8
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011CA28 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1400A1AFC (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1400F3EF0 (xxxChangeForegroundKeyboardTable.c)
 *     HMAssignmentLock @ 0x1400F4780 (HMAssignmentLock.c)
 *     ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU?$Win32RawOptionalLockedItem@PEAUtagTHREADINFO@@$1?Win32FreePool@@YAXPEAX@Z@@PEAUtagKL@@@Z @ 0x1400F4820 (-GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU-$Win32RawOptionalLockedItem@PEAUtagTHREADIN.c)
 *     ApiSetEditionImmActivateAndUnloadThreadsLayout @ 0x1400F4A9C (ApiSetEditionImmActivateAndUnloadThreadsLayout.c)
 */

void __fastcall xxxSetPKLinThreads(struct tagKL *a1, struct tagKL *a2)
{
  unsigned int ThreadsWithPKL; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // r8d
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax
  _QWORD v15[4]; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+60h] [rbp-10h]
  _QWORD *v18; // [rsp+90h] [rbp+20h] BYREF

  v18 = 0LL;
  v15[2] = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v17 = -1LL;
  ThreadsWithPKL = GetThreadsWithPKL(&v18, BugCheckParameter2, a2);
  v8 = ThreadsWithPKL;
  if ( ThreadsWithPKL )
    PtiCurrent();
  if ( a1
    && *(_QWORD *)(W32GetUserSessionState(v6, v5) + 18904)
    && *(struct tagKL **)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 18904) + 480LL) == a2 )
  {
    xxxChangeForegroundKeyboardTable(a2, a1, 1u);
  }
  if ( (_DWORD)v8 )
  {
    if ( a2 )
    {
      ApiSetEditionImmActivateAndUnloadThreadsLayout((_DWORD)v18, v8, v7, (_DWORD)a1, *((_DWORD *)a2 + 10));
    }
    else
    {
      v12 = v18;
      do
      {
        v13 = *v12 + 480LL;
        v15[1] = a1;
        v15[0] = v13;
        HMAssignmentLock(v15, 0LL);
        ++v12;
        --v8;
      }
      while ( v8 );
    }
    if ( v17 == -1 )
    {
      BugCheckParameter4 = PtiCurrent();
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, 0LL, (ULONG_PTR)BugCheckParameter4);
    }
    PopAndFreeW32ThreadLock((__int64)BugCheckParameter2);
    v11 = -1LL;
    v17 = -1LL;
  }
  else
  {
    v11 = v17;
  }
  if ( a2 && *((struct tagKL **)a2 + 2) != a1 )
  {
    *(_QWORD *)(*((_QWORD *)a1 + 3) + 16LL) = *((_QWORD *)a1 + 2);
    *(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) = *((_QWORD *)a1 + 3);
    *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a1 + 3) = a2;
    *(_QWORD *)(*((_QWORD *)a2 + 2) + 24LL) = a1;
    v11 = v17;
    *((_QWORD *)a2 + 2) = a1;
  }
  if ( v11 != -1 )
    PopAndFreeW32ThreadLock((__int64)BugCheckParameter2);
}
