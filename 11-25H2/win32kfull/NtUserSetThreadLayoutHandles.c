/*
 * XREFs of NtUserSetThreadLayoutHandles @ 0x14022FF90
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserSetThreadLayoutHandles(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  v7 = PtiCurrent(v5, v4);
  v8 = 0LL;
  v9 = *((_QWORD *)v7 + 60);
  if ( !v9 || *(_QWORD *)(v9 + 40) == a2 )
  {
    v10 = HKLtoPKL(v7, a1);
    if ( v10 )
    {
      LOBYTE(v8) = (WORD1(a2) & 0xF000) == 0xE000;
      if ( (_DWORD)v8 != ((WORD1(a1) & 0xF000) == 0xE000) )
        *((_QWORD *)v7 + 105) = a2;
      v12[1] = v10;
      v12[0] = (char *)v7 + 480;
      HMAssignmentLock(v12, 0LL);
      v8 = 1LL;
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
