/*
 * XREFs of NtUserMapVirtualKeyEx @ 0x14009F250
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     InternalMapVirtualKeyEx @ 0x14009F2F0 (InternalMapVirtualKeyEx.c)
 *     HKLtoPKL @ 0x14009F540 (HKLtoPKL.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserMapVirtualKeyEx(unsigned int a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned int v8; // edi
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v13, 1LL);
  v8 = 0;
  v9 = PtiCurrent();
  if ( a4 )
    v11 = HKLtoPKL(v9, a3);
  else
    v11 = *((_QWORD *)v9 + 60);
  if ( v11 )
    v8 = InternalMapVirtualKeyEx(a1, a2, *(_QWORD *)(*(_QWORD *)(v11 + 48) + 32LL));
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v10);
  return v8;
}
