/*
 * XREFs of SfnGETWINDOWDATA @ 0x1402BA3D0
 * Callers:
 *     xxxDefWindowProc @ 0x1400C36C0 (xxxDefWindowProc.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1400C4340 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxHkCallHook @ 0x1400C5590 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x14012B834 (xxxSendMessageCallback.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A55C (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140283430 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall SfnGETWINDOWDATA(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // ebx
  __int64 v15; // [rsp+40h] [rbp-48h] BYREF
  int v16; // [rsp+48h] [rbp-40h]
  int v17; // [rsp+4Ch] [rbp-3Ch]
  __int64 v18; // [rsp+50h] [rbp-38h]
  __int64 v19; // [rsp+58h] [rbp-30h]
  __int64 v20; // [rsp+60h] [rbp-28h]
  __int64 v21; // [rsp+68h] [rbp-20h]
  void *Src; // [rsp+90h] [rbp+8h] BYREF
  int v23; // [rsp+98h] [rbp+10h] BYREF

  v7 = a2;
  Src = 0LL;
  v23 = 0;
  PtiCurrent((__int64)a1, a2);
  v17 = 0;
  if ( a1 )
    v11 = *a1;
  else
    v11 = 0LL;
  v15 = v11;
  v16 = v7;
  v18 = a3;
  v19 = a4;
  v20 = a5;
  if ( (*(_BYTE *)(a1[5] + 18) & 8) != 0 )
    v12 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19872) + 424LL);
  else
    v12 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19872) + 616LL);
  v21 = v12;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  EtwTraceBeginCallback(125LL);
  v13 = KeUserModeCallback(125LL, &v15, 48LL, &Src, &v23);
  EtwTraceEndCallback(125LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  if ( v13 < 0 || v23 != 24 )
    return 0LL;
  a5 = 0LL;
  RtlCopyFromUser(&a5, Src, 8uLL);
  return a5;
}
