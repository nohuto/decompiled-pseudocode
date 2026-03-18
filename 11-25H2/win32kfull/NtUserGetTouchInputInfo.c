/*
 * XREFs of NtUserGetTouchInputInfo @ 0x1402006B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     _FreeTouchInputInfo @ 0x1400CABF0 (_FreeTouchInputInfo.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtUserGetTouchInputInfo(__int64 a1, unsigned int a2, volatile void *a3, int a4)
{
  __int64 v5; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  struct tagTHREADINFO *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  unsigned int v15; // eax
  SIZE_T v16; // rbx
  __int64 CurrentProcessWow64Process; // rax
  int v18; // ebx
  int v20; // ecx

  v5 = a2;
  EnterCrit(0LL, 0LL);
  v10 = PtiCurrent(v8, v7);
  if ( !a3 || a4 != 48 )
  {
    v20 = 87;
LABEL_11:
    v18 = 0;
    UserSetLastError(v20);
    goto LABEL_9;
  }
  LOBYTE(v9) = 20;
  v11 = HMValidateHandleWithDescriptor(a1, v9);
  v14 = v11;
  if ( !v11 )
  {
    v18 = 0;
    goto LABEL_9;
  }
  if ( *(struct tagTHREADINFO **)(v11 + 16) != v10 )
  {
    v20 = 5;
    goto LABEL_11;
  }
  v15 = *(_DWORD *)(v11 + 24);
  if ( v15 < (unsigned int)v5 )
    v5 = v15;
  v16 = 48 * v5;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v13, v12);
  ProbeForWrite(a3, v16, CurrentProcessWow64Process != 0 ? 1 : 4);
  memmove((void *)a3, (const void *)(v14 + 32), v16);
  v18 = 1;
  v13 = *((_QWORD *)v10 + 149);
  if ( v13 == a1 )
  {
    FreeTouchInputInfo(v13);
    *((_QWORD *)v10 + 149) = 0LL;
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v13);
  return v18;
}
