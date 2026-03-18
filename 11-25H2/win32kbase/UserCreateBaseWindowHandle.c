/*
 * XREFs of UserCreateBaseWindowHandle @ 0x1401C18D0
 * Callers:
 *     NtUserCreateBaseWindow @ 0x1401BC060 (NtUserCreateBaseWindow.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     HMAllocObjectEx @ 0x14003E880 (HMAllocObjectEx.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMFreeObject @ 0x1400F67F0 (HMFreeObject.c)
 */

__int64 __fastcall UserCreateBaseWindowHandle(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int64 v4; // rbp
  __int64 v6; // rsi
  struct tagTHREADINFO *v7; // rax
  char *v8; // rbx
  __int64 v9; // rdi
  int v10; // ecx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx

  v4 = a2;
  v6 = 0LL;
  v7 = PtiCurrent();
  v8 = 0LL;
  v9 = (__int64)v7;
  if ( !a1 )
  {
    v10 = 87;
LABEL_15:
    UserSetLastError(v10);
    return v6;
  }
  if ( (*((_DWORD *)v7 + 340) & 0x1000000) == 0 )
  {
    v10 = 4317;
    goto LABEL_15;
  }
  if ( (_DWORD)v4 )
  {
    v8 = (char *)Win32AllocPoolZInitImpl(256LL, v4, 0x64776255u);
    if ( !v8 )
      return v6;
  }
  v11 = HMAllocObjectEx(v9, 0LL, 0x17u, 0x90u, a3);
  if ( !v11 )
  {
LABEL_12:
    if ( v8 )
      GreDeleteFastMutex(v8);
    return v6;
  }
  v12 = Win32AllocPoolZInitImpl(256LL, 0x20uLL, 0x68707355u);
  *(_QWORD *)(v11 + 80) = v12;
  if ( v12 )
  {
    *(_QWORD *)v12 = 0LL;
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_DWORD *)(v12 + 16) = 0;
    *(_DWORD *)(v11 + 132) &= ~2u;
    v6 = *(_QWORD *)v11;
    *(_QWORD *)(v11 + 120) = v8;
    v8 = 0LL;
    *(_QWORD *)(v11 + 104) = v11 + 96;
    *(_QWORD *)(v11 + 96) = v11 + 96;
    *(_QWORD *)(v11 + 56) = a1;
    *(_DWORD *)(v11 + 128) = v4;
    goto LABEL_12;
  }
  if ( v8 )
    GreDeleteFastMutex(v8);
  HMFreeObject((unsigned int *)v11, v13);
  return 0LL;
}
