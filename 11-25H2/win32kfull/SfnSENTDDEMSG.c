/*
 * XREFs of SfnSENTDDEMSG @ 0x1402BCE50
 * Callers:
 *     xxxDefWindowProc @ 0x1400C36C0 (xxxDefWindowProc.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1400C4340 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxHkCallHook @ 0x1400C5590 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x14012B834 (xxxSendMessageCallback.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A55C (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140283430 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     xxxDDETrackGetMessageHook @ 0x140255BA4 (xxxDDETrackGetMessageHook.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

ULONG_PTR __fastcall SfnSENTDDEMSG(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  int v9; // edi
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // rsi
  __int64 v13; // r14
  signed int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  ULONG_PTR result; // rax
  ULONG_PTR v22[2]; // [rsp+40h] [rbp-F8h] BYREF
  _BYTE v23[8]; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v24; // [rsp+58h] [rbp-E0h]
  __int64 v25; // [rsp+68h] [rbp-D0h]
  __int64 v26; // [rsp+70h] [rbp-C8h] BYREF
  int v27; // [rsp+78h] [rbp-C0h]
  int v28; // [rsp+7Ch] [rbp-BCh]
  __int64 v29; // [rsp+80h] [rbp-B8h]
  __int64 v30; // [rsp+88h] [rbp-B0h]
  __int128 v31; // [rsp+90h] [rbp-A8h]
  __int64 v32; // [rsp+A0h] [rbp-98h] BYREF
  signed int v33; // [rsp+A8h] [rbp-90h]
  int v34; // [rsp+ACh] [rbp-8Ch]
  __int64 v35; // [rsp+B0h] [rbp-88h]
  __int64 v36; // [rsp+B8h] [rbp-80h]
  __int64 v37; // [rsp+C0h] [rbp-78h]
  __int64 v38; // [rsp+C8h] [rbp-70h]
  BOOL v39; // [rsp+D0h] [rbp-68h]
  int v40; // [rsp+D4h] [rbp-64h]
  ULONG_PTR BugCheckParameter3[12]; // [rsp+D8h] [rbp-60h] BYREF
  void *Src; // [rsp+140h] [rbp+8h] BYREF
  int v43; // [rsp+148h] [rbp+10h] BYREF

  v9 = a2;
  v28 = 0;
  v31 = 0LL;
  Src = 0LL;
  v43 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v11 = PtiCurrent((__int64)a1, a2);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 64);
  else
    v13 = 0LL;
  v34 = 0;
  v40 = 0;
  v14 = v9 & 0xBFFFFFFF;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v15 = *((_QWORD *)v12 + 65);
  v24 = *(_OWORD *)(v15 + 64);
  v25 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(*((_QWORD *)v12 + 65) + 72LL) = v13;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 65) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(a1[5] + 224);
  else
    v17 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 65) + 80LL) = v17;
  if ( v14 >= 0 )
  {
    v32 = v13;
    v33 = v14;
    v35 = a3;
    v36 = a4;
  }
  else
  {
    if ( a1 )
      v26 = *a1;
    else
      v26 = 0LL;
    v27 = v14 & 0x7FFFFFFF;
    v29 = a3;
    v30 = a4;
    xxxDDETrackGetMessageHook((__int64)&v26);
    v32 = _HMObjectFromHandle(v26) - *((_QWORD *)v12 + 64);
    v33 = v27;
    v35 = v29;
    v36 = v30;
  }
  v37 = a5;
  v38 = a6;
  v39 = (a7 & 1) == 0;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v23);
  EtwTraceBeginCallback(38LL);
  v18 = KeUserModeCallback(38LL, &v32, 56LL, &Src, &v43);
  EtwTraceEndCallback(38LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v23);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v19);
  v20 = *((_QWORD *)v12 + 65);
  *(_OWORD *)(v20 + 64) = v24;
  *(_QWORD *)(v20 + 80) = v25;
  if ( v18 < 0 || v43 != 24 )
    return 0LL;
  v22[0] = 0LL;
  RtlCopyFromUser(v22, Src, 8uLL);
  result = v22[0];
  BugCheckParameter3[2] = v22[0];
  return result;
}
