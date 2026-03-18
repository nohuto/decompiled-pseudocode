/*
 * XREFs of GreDecrementObjectReferenceCount @ 0x140149510
 * Callers:
 *     <none>
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x14001F150 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreDecrementObjectReferenceCount(__int64 a1, char a2)
{
  unsigned int v3; // ebx
  __int64 SessionState; // rax
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned int *v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = a1;
  SessionState = W32GetSessionState(a1);
  HANDLELOCK::HANDLELOCK((__int64 *)&v8, *(unsigned int **)(SessionState + 88), v3, 1);
  v5 = 0;
  if ( v9 && *((_BYTE *)v8 + 14) == a2 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v10 + 8) + 96LL))(*(_QWORD *)(v10 + 8), *v8);
    --*(_DWORD *)(v6 + 8);
  }
  else
  {
    v5 = -1073741816;
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v8);
  return v5;
}
