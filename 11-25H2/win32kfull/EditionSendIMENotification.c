/*
 * XREFs of EditionSendIMENotification @ 0x140225450
 * Callers:
 *     <none>
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

__int64 __fastcall EditionSendIMENotification(__int64 a1, struct tagWND *a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  Win32HM_LockIntoThread<0>(a1, (__int64)a2, BugCheckParameter3);
  xxxSendMessage(a2, a3);
  v7 = PtiCurrent(v6, v5);
  return Win32HM_UnlockFromThread<0>((ULONG_PTR)v7, BugCheckParameter3);
}
