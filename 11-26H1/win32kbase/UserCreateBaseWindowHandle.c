/*
 * XREFs of UserCreateBaseWindowHandle @ 0x1401EA460
 * Callers:
 *     NtUserCreateBaseWindow @ 0x1401E26A0 (NtUserCreateBaseWindow.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     HMFreeObject @ 0x1401187F0 (HMFreeObject.c)
 *     HMAllocObjectEx @ 0x14011DE20 (HMAllocObjectEx.c)
 */

__int64 __fastcall UserCreateBaseWindowHandle(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rbp
  __int64 v6; // rsi
  struct tagTHREADINFO *v7; // rax
  int v8; // r8d
  char *v9; // rdi
  __int64 v10; // rbx
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax

  v4 = (unsigned int)a2;
  v6 = 0LL;
  v7 = PtiCurrent(a1, a2);
  v9 = 0LL;
  v10 = (__int64)v7;
  if ( !a1 )
  {
    v11 = 87;
LABEL_15:
    UserSetLastError(v11);
    return v6;
  }
  if ( (*((_DWORD *)v7 + 340) & 0x1000000) == 0 )
  {
    v11 = 4317;
    goto LABEL_15;
  }
  if ( (_DWORD)v4 )
  {
    v9 = (char *)Win32AllocPoolZInitImpl(256LL, v4, 0x64776255u);
    if ( !v9 )
      return v6;
  }
  LOBYTE(v8) = 23;
  v13 = HMAllocObjectEx(v10, 0LL, v8, 0x90u, a3);
  if ( !v13 )
  {
LABEL_12:
    if ( v9 )
      GreDeleteFastMutex(v9, v12, v14, v15);
    return v6;
  }
  v16 = Win32AllocPoolZInitImpl(256LL, 0x20uLL, 0x68707355u);
  *(_QWORD *)(v13 + 80) = v16;
  if ( v16 )
  {
    *(_QWORD *)v16 = 0LL;
    *(_QWORD *)(v16 + 8) = 0LL;
    *(_DWORD *)(v16 + 16) = 0;
    *(_DWORD *)(v13 + 132) &= ~2u;
    *(_QWORD *)(v13 + 120) = v9;
    v9 = 0LL;
    *(_QWORD *)(v13 + 56) = a1;
    *(_DWORD *)(v13 + 128) = v4;
    *(_QWORD *)(v13 + 104) = v13 + 96;
    *(_QWORD *)(v13 + 96) = v13 + 96;
    v6 = *(_QWORD *)v13;
    goto LABEL_12;
  }
  if ( v9 )
    GreDeleteFastMutex(v9, v12, v14, v15);
  HMFreeObject((struct _HEAD *)v13, v12, v14);
  return 0LL;
}
