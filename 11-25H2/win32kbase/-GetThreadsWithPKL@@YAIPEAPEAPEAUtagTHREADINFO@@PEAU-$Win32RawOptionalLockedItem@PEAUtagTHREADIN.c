/*
 * XREFs of ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU?$Win32RawOptionalLockedItem@PEAUtagTHREADINFO@@$1?Win32FreePool@@YAXPEAX@Z@@PEAUtagKL@@@Z @ 0x1400F4820
 * Callers:
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1400F44B8 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     UserReAllocPool @ 0x14001E320 (UserReAllocPool.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetThreadsWithPKL(char **a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned int v5; // r13d
  __int64 v6; // rdx
  __int64 v7; // rcx
  char *v8; // rbx
  __int64 CurrentProcess; // rcx
  __int64 i; // r15
  __int64 j; // rbp
  _QWORD *v12; // rax
  _QWORD *k; // r12
  _QWORD *v14; // rsi
  __int64 UserGdiSessionState; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v17; // rsi
  __int64 m; // rsi
  struct tagTHREADINFO *v19; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax

  v4 = 0LL;
  v5 = 128;
  v8 = (char *)Win32AllocPoolZInitImpl(256LL, 0x400uLL, 0x69747355u);
  if ( !v8 )
    return 0LL;
  for ( i = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 63520); i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
    {
      v12 = (_QWORD *)(j + 176);
      for ( k = *(_QWORD **)(j + 176); k != v12; k = (_QWORD *)*k )
      {
        v14 = k - 97;
        if ( k != (_QWORD *)776 )
        {
          if ( !a3 || a3 == v14[60] )
          {
            CurrentProcess = *(_QWORD *)(W32GetUserGdiSessionState(CurrentProcess) + 40);
            if ( *(_QWORD *)v14[58] == CurrentProcess
              || (CurrentProcess = PsGetCurrentProcess(), *(_QWORD *)v14[58] == CurrentProcess) )
            {
              if ( (_DWORD)v4 == v5 )
              {
                v5 += 128;
                v22 = UserReAllocPool(v8, 8LL * (unsigned int)v4, 8LL * v5, 0x69747355u);
                if ( !v22 )
                  goto LABEL_34;
                v8 = (char *)v22;
              }
              *(_QWORD *)&v8[8 * v4] = v14;
              v4 = (unsigned int)(v4 + 1);
            }
          }
          v12 = (_QWORD *)(j + 176);
        }
      }
    }
  }
  UserGdiSessionState = W32GetUserGdiSessionState(CurrentProcess);
  ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(UserGdiSessionState + 40));
  v17 = ProcessWin32Process;
  if ( ProcessWin32Process )
    v17 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
  for ( m = *(_QWORD *)(v17 + 320); m; m = *(_QWORD *)(m + 704) )
  {
    if ( !a3 || a3 == *(_QWORD *)(m + 480) )
    {
      if ( (_DWORD)v4 == v5 )
      {
        v5 += 128;
        v21 = UserReAllocPool(v8, 8LL * (unsigned int)v4, 8LL * v5, 0x69747355u);
        if ( !v21 )
        {
LABEL_34:
          GreDeleteFastMutex(v8);
          return 0LL;
        }
        v8 = (char *)v21;
      }
      *(_QWORD *)&v8[8 * v4] = m;
      v4 = (unsigned int)(v4 + 1);
    }
  }
  if ( (_DWORD)v4 && a1 )
  {
    *a1 = v8;
    if ( a2[2] != -1LL )
    {
      BugCheckParameter4 = PtiCurrent();
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)a2, (ULONG_PTR)v8, (ULONG_PTR)BugCheckParameter4);
    }
    v19 = PtiCurrent();
    *a2 = *((_QWORD *)v19 + 48);
    *((_QWORD *)v19 + 48) = a2;
    a2[2] = GreDeleteFastMutex;
    a2[1] = v8;
  }
  else
  {
    GreDeleteFastMutex(v8);
  }
  return (unsigned int)v4;
}
