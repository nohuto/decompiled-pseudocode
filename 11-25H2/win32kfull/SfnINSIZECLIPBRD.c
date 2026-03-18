/*
 * XREFs of SfnINSIZECLIPBRD @ 0x1402BC140
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
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINSIZECLIPBRD(__int64 *a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  int v8; // r13d
  __int64 v10; // rbx
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rsi
  __int64 v14; // r14
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rax
  _DWORD v24[6]; // [rsp+30h] [rbp-E8h] BYREF
  void *Src; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v27[8]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-B0h]
  __int128 v29; // [rsp+70h] [rbp-A8h]
  __int64 v30; // [rsp+80h] [rbp-98h]
  ULONG_PTR BugCheckParameter3[5]; // [rsp+88h] [rbp-90h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-68h] BYREF
  int v33; // [rsp+B8h] [rbp-60h]
  int v34; // [rsp+BCh] [rbp-5Ch]
  __int64 v35; // [rsp+C0h] [rbp-58h]
  __int128 v36; // [rsp+C8h] [rbp-50h]
  __int64 v37; // [rsp+D8h] [rbp-40h]
  __int64 v38; // [rsp+E0h] [rbp-38h]

  v8 = a2;
  v10 = 0LL;
  Src = 0LL;
  v24[0] = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v11 = PtiCurrent((__int64)a1, a2);
  v13 = v11;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v11 + 64);
  else
    v14 = 0LL;
  v34 = 0;
  v36 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
  v16 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v16 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( RtlAreAllAccessesGranted(*(_DWORD *)(v16 + 664), 4u) )
  {
    v32 = v14;
    v33 = v8;
    v35 = a3;
    v36 = *a4;
    v37 = a5;
    v38 = a6;
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
    v17 = *((_QWORD *)v13 + 65);
    v29 = *(_OWORD *)(v17 + 64);
    v30 = *(_QWORD *)(v17 + 80);
    *(_QWORD *)(*((_QWORD *)v13 + 65) + 72LL) = v14;
    v18 = 0LL;
    if ( a1 )
      v18 = *a1;
    *(_QWORD *)(*((_QWORD *)v13 + 65) + 64LL) = v18;
    if ( a1 )
      v19 = *(_QWORD *)(a1[5] + 224);
    else
      v19 = 0LL;
    *(_QWORD *)(*((_QWORD *)v13 + 65) + 80LL) = v19;
    LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v27);
    EtwTraceBeginCallback(24LL);
    v20 = KeUserModeCallback(24LL, &v32, 56LL, &Src, v24);
    EtwTraceEndCallback(24LL);
    LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v27);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v21);
    v22 = *((_QWORD *)v13 + 65);
    *(_OWORD *)(v22 + 64) = v29;
    *(_QWORD *)(v22 + 80) = v30;
    if ( v20 < 0 || v24[0] != 24 )
      return 0LL;
    v26 = 0LL;
    RtlCopyFromUser(&v26, Src, 8uLL);
    v10 = v26;
    v28 = v26;
  }
  return v10;
}
