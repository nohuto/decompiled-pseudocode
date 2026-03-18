/*
 * XREFs of xxxClientFreeWindowClassExtraBytes @ 0x1401B393C
 * Callers:
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140058980 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxValidateClassAndSize @ 0x140242488 (xxxValidateClassAndSize.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

void __fastcall xxxClientFreeWindowClassExtraBytes(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF
  char v7; // [rsp+60h] [rbp+18h] BYREF

  v6 = 0LL;
  v5 = 0;
  v3 = *(_QWORD *)(a1 + 40) - *((_QWORD *)PtiCurrent(a1, a2) + 64);
  v4[1] = a2;
  v4[0] = v3;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v7);
  EtwTraceBeginCallback(124LL);
  KeUserModeCallback(124LL, v4, 16LL, &v6, &v5);
  EtwTraceEndCallback(124LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v7);
}
