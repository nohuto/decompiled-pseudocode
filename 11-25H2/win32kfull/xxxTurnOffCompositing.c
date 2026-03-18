/*
 * XREFs of xxxTurnOffCompositing @ 0x1402062A8
 * Callers:
 *     xxxSetWindowStyle @ 0x14004EEC0 (xxxSetWindowStyle.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14001BAD0 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxInternalEnumWindow @ 0x14006337C (xxxInternalEnumWindow.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z @ 0x1401894A8 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z.c)
 */

void __fastcall xxxTurnOffCompositing(struct tagWND **a1, __int64 a2)
{
  struct tagWND *v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  BugCheckParameter3[1] = 0LL;
  v2 = (struct tagWND *)a1;
  BugCheckParameter3[0] = -1LL;
  v3 = 1;
  if ( (_DWORD)a2 )
  {
    v2 = a1[14];
    if ( !v2 )
    {
      Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, a2);
      return;
    }
    v3 = 3;
    Win32HMThreadLockBase<tagWND,0,1>::ManualLock<void>(BugCheckParameter3, (__int64)v2);
  }
  xxxInternalEnumWindow(v2, (__int64 (__fastcall *)(__int64, __int64))xxxEnumTurnOffCompositing, 0LL, v3);
  if ( BugCheckParameter3[0] != -1LL )
  {
    v6 = PtiCurrent(v5, v4);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v6, BugCheckParameter3);
  }
}
