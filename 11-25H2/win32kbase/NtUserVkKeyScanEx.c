/*
 * XREFs of NtUserVkKeyScanEx @ 0x14009EED0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     InternalVkKeyScanEx @ 0x14009EF60 (InternalVkKeyScanEx.c)
 *     HKLtoPKL @ 0x14009F540 (HKLtoPKL.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserVkKeyScanEx(unsigned __int16 a1, __int64 a2, int a3)
{
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int16 v9; // bx
  char v11; // [rsp+48h] [rbp+20h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v11, 1LL);
  v6 = PtiCurrent();
  if ( a3 )
    v8 = HKLtoPKL(v6, a2);
  else
    v8 = *((_QWORD *)v6 + 60);
  if ( v8 )
    v9 = InternalVkKeyScanEx(a1, *(_QWORD *)(*(_QWORD *)(v8 + 48) + 32LL));
  else
    v9 = -1;
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v7);
  return v9;
}
