/*
 * XREFs of zzzMoveShadow @ 0x140220F8C
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140233E58 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     zzzUpdateLayeredWindow @ 0x14005335C (zzzUpdateLayeredWindow.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1400E12C0 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

struct tagSHADOW *__fastcall zzzMoveShadow(struct tagWND *a1, __int64 a2)
{
  struct tagSHADOW *result; // rax
  struct tagSHADOW *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+50h] [rbp-18h] BYREF
  struct tagPOINT v9; // [rsp+78h] [rbp+10h] BYREF

  result = FindShadow(a1, a2);
  v4 = result;
  if ( result )
  {
    v9 = *(struct tagPOINT *)(*((_QWORD *)a1 + 5) + 88LL);
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, *((_QWORD *)result + 1));
    zzzUpdateLayeredWindow(*((WindowActions **)v4 + 1), 0LL, &v9, 0LL, 0LL, 0LL, 0, 0LL, 0, 0LL);
    v7 = PtiCurrent(v6, v5);
    return (struct tagSHADOW *)Win32HM_UnlockFromThread<1>((ULONG_PTR)v7, BugCheckParameter3);
  }
  return result;
}
