/*
 * XREFs of NtUserSetWindowRgn @ 0x1401C8AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowRgn @ 0x14004E0F4 (xxxSetWindowRgn.c)
 */

__int64 __fastcall NtUserSetWindowRgn(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v7;
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 40);
    if ( (((*(_WORD *)(v8 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      Win32HM_LockIntoThread<0>(v6, v7, BugCheckParameter3);
      v9 = xxxSetWindowRgn(v10, a2, a3);
      v13 = PtiCurrent(v12, v11);
      Win32HM_UnlockFromThread<0>((ULONG_PTR)v13, BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
