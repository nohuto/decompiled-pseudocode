/*
 * XREFs of NtUserCsDdeUninitialize @ 0x14021EFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoRip @ 0x14006739C (HMValidateHandleNoRip.c)
 *     xxxDestroyThreadDDEObject @ 0x14017D9E0 (xxxDestroyThreadDDEObject.c)
 */

__int64 __fastcall NtUserCsDdeUninitialize(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rbx
  struct tagTHREADINFO *v7; // rax

  EnterCrit(0LL, 0LL);
  LOBYTE(v2) = 9;
  v5 = (_QWORD *)HMValidateHandleNoRip(a1, v2);
  if ( v5 )
  {
    v7 = PtiCurrent(v4, v3);
    xxxDestroyThreadDDEObject((__int64)v7, v5);
  }
  UserSessionSwitchLeaveCrit(v4);
  return 1LL;
}
