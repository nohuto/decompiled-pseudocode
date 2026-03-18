/*
 * XREFs of NtUserVkKeyScanEx @ 0x140087D30
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HKLtoPKL @ 0x1400870A0 (HKLtoPKL.c)
 *     InternalVkKeyScanEx @ 0x140087DB0 (InternalVkKeyScanEx.c)
 */

__int64 __fastcall NtUserVkKeyScanEx(unsigned __int16 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int16 v15; // bx

  v6 = a3;
  EnterSharedCrit(0LL, 1LL, a3, a4);
  v9 = PtiCurrent(v8, v7);
  if ( v6 )
    v14 = HKLtoPKL((__int64)v9, a2);
  else
    v14 = *((_QWORD *)v9 + 59);
  if ( v14 )
    v15 = InternalVkKeyScanEx(a1, *(_QWORD *)(*(_QWORD *)(v14 + 48) + 32LL));
  else
    v15 = -1;
  UserSessionSwitchLeaveCritWithNonPaged(v11, v10, v12, v13);
  return v15;
}
