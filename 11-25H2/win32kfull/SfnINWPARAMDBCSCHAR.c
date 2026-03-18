/*
 * XREFs of SfnINWPARAMDBCSCHAR @ 0x1401FFE50
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
 *     RtlWCSMessageWParamCharToMB @ 0x1401EEA10 (RtlWCSMessageWParamCharToMB.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall SfnINWPARAMDBCSCHAR(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  int v8; // r14d
  struct tagTHREADINFO *v10; // rax
  struct tagTHREADINFO *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 result; // rax
  __int128 v20; // [rsp+48h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A0h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v23; // [rsp+70h] [rbp-88h] BYREF
  int v24; // [rsp+78h] [rbp-80h]
  int v25; // [rsp+7Ch] [rbp-7Ch]
  __int64 v26; // [rsp+80h] [rbp-78h]
  __int64 v27; // [rsp+88h] [rbp-70h]
  __int64 v28; // [rsp+90h] [rbp-68h]
  __int64 v29; // [rsp+98h] [rbp-60h]
  int v30; // [rsp+A0h] [rbp-58h]
  int v31; // [rsp+A4h] [rbp-54h]
  __int64 v32; // [rsp+A8h] [rbp-50h]
  void *Src; // [rsp+100h] [rbp+8h] BYREF
  int v34; // [rsp+108h] [rbp+10h] BYREF
  __int64 v35; // [rsp+110h] [rbp+18h] BYREF

  v35 = a3;
  v8 = a2;
  Src = 0LL;
  v34 = 0;
  v10 = PtiCurrent((__int64)a1, a2);
  v11 = v10;
  if ( a1 )
    v12 = a1[5] - *((_QWORD *)v10 + 64);
  else
    v12 = 0LL;
  v25 = 0;
  v31 = 0;
  v23 = v12;
  v24 = v8;
  v30 = a7 & 1;
  if ( (a7 & 1) != 0 )
    RtlWCSMessageWParamCharToMB(v8, (unsigned __int16 *)&v35);
  v26 = v35;
  v27 = a4;
  v28 = a5;
  v29 = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v13 = *((_QWORD *)v11 + 65);
  v20 = *(_OWORD *)(v13 + 64);
  v21 = *(_QWORD *)(v13 + 80);
  *(_QWORD *)(v13 + 72) = v12;
  if ( a1 )
    v14 = *a1;
  else
    v14 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 65) + 64LL) = v14;
  if ( a1 )
    v15 = *(_QWORD *)(a1[5] + 224);
  else
    v15 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 65) + 80LL) = v15;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a6);
  EtwTraceBeginCallback(95LL);
  v16 = KeUserModeCallback(95LL, &v23, 56LL, &Src, &v34);
  EtwTraceEndCallback(95LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a6);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v17);
  v18 = *((_QWORD *)v11 + 65);
  *(_OWORD *)(v18 + 64) = v20;
  *(_QWORD *)(v18 + 80) = v21;
  if ( v16 < 0 || v34 != 24 )
    return 0LL;
  a5 = 0LL;
  RtlCopyFromUser(&a5, Src, 8uLL);
  result = a5;
  v32 = a5;
  return result;
}
