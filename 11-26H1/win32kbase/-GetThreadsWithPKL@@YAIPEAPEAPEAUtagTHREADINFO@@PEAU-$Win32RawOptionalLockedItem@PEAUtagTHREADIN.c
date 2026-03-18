/*
 * XREFs of ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU?$Win32RawOptionalLockedItem@PEAUtagTHREADINFO@@$1?Win32FreePool@@YAXPEAX@Z@@PEAUtagKL@@@Z @ 0x14011C7C0
 * Callers:
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x14011C5F8 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     UserReAllocPool @ 0x140043400 (UserReAllocPool.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetThreadsWithPKL(char **a1, _QWORD *a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  int v6; // edx
  int v7; // ecx
  char *v8; // rdi
  int v9; // r8d
  __int64 v10; // rcx
  __int64 i; // r13
  __int64 j; // r15
  _QWORD *v13; // rax
  _QWORD *k; // r12
  _QWORD *v15; // rbp
  __int64 *v16; // rax
  __int64 v17; // rbx
  bool v18; // zf
  __int64 UserGdiSessionState; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbx
  __int64 v26; // rbx
  unsigned int v27; // ebp
  __int64 v29; // rax
  struct tagTHREADINFO *v30; // rax
  __int64 v31; // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax
  int v35; // [rsp+88h] [rbp+20h]

  v4 = 128;
  v35 = 128;
  v5 = 0LL;
  v8 = (char *)Win32AllocPoolZInitImpl(256LL, 0x400uLL, 0x69747355u);
  if ( !v8 )
    return 0LL;
  for ( i = *(_QWORD *)(W32GetUserSessionState(v7, v6, v9) + 63512); i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
    {
      v13 = (_QWORD *)(j + 176);
      for ( k = *(_QWORD **)(j + 176); k != v13; k = (_QWORD *)*k )
      {
        v15 = k - 96;
        if ( k != (_QWORD *)768 )
        {
          if ( !a3 || a3 == v15[59] )
          {
            v10 = *(_QWORD *)(W32GetUserGdiSessionState(v10) + 40);
            v16 = (__int64 *)v15[57];
            if ( *v16 == v10 || (v17 = *v16, v18 = v17 == PsGetCurrentProcess(v10), v4 = v35, v18) )
            {
              if ( (_DWORD)v5 == v4 )
              {
                v4 += 128;
                v35 = v4;
                v31 = UserReAllocPool(v8, 8LL * (unsigned int)v5, 8LL * v4, 1769239381LL);
                if ( !v31 )
                  goto LABEL_32;
                v8 = (char *)v31;
              }
              *(_QWORD *)&v8[8 * v5] = v15;
              v5 = (unsigned int)(v5 + 1);
            }
          }
          v13 = (_QWORD *)(j + 176);
        }
      }
    }
  }
  UserGdiSessionState = W32GetUserGdiSessionState(v10);
  ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(UserGdiSessionState + 40));
  v25 = ProcessWin32Process;
  if ( ProcessWin32Process )
  {
    v22 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
    v25 = v22 & ProcessWin32Process;
  }
  v26 = *(_QWORD *)(v25 + 328);
  v27 = v35;
  while ( v26 )
  {
    if ( !a3 || a3 == *(_QWORD *)(v26 + 472) )
    {
      if ( (_DWORD)v5 == v27 )
      {
        v27 += 128;
        v29 = UserReAllocPool(v8, 8LL * (unsigned int)v5, 8LL * v27, 1769239381LL);
        if ( !v29 )
        {
LABEL_32:
          GreDeleteFastMutex(v8, v21, v23, v24);
          return 0LL;
        }
        v8 = (char *)v29;
      }
      *(_QWORD *)&v8[8 * v5] = v26;
      v5 = (unsigned int)(v5 + 1);
    }
    v26 = *(_QWORD *)(v26 + 696);
  }
  if ( (_DWORD)v5 && a1 )
  {
    *a1 = v8;
    if ( a2[2] != -1LL )
    {
      BugCheckParameter4 = PtiCurrent(v22, v21);
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)a2, (ULONG_PTR)v8, (ULONG_PTR)BugCheckParameter4);
    }
    v30 = PtiCurrent(v22, v21);
    *a2 = *((_QWORD *)v30 + 47);
    *((_QWORD *)v30 + 47) = a2;
    a2[2] = GreDeleteFastMutex;
    a2[1] = v8;
  }
  else
  {
    GreDeleteFastMutex(v8, v21, v23, v24);
  }
  return (unsigned int)v5;
}
