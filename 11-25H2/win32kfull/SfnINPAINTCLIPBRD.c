/*
 * XREFs of SfnINPAINTCLIPBRD @ 0x1402BBAF0
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
 *     _WindowFromDC @ 0x1401553E8 (_WindowFromDC.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall SfnINPAINTCLIPBRD(__int64 *a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  int v8; // r13d
  __int64 v10; // rbx
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rax
  _DWORD v26[6]; // [rsp+30h] [rbp-128h] BYREF
  void *Src; // [rsp+48h] [rbp-110h] BYREF
  __int64 v28; // [rsp+50h] [rbp-108h] BYREF
  _BYTE v29[8]; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-F0h]
  __int128 v31; // [rsp+70h] [rbp-E8h]
  __int64 v32; // [rsp+80h] [rbp-D8h]
  ULONG_PTR BugCheckParameter3[5]; // [rsp+88h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-A8h] BYREF
  int v35; // [rsp+B8h] [rbp-A0h]
  __int64 v36; // [rsp+C0h] [rbp-98h]
  __int128 v37; // [rsp+C8h] [rbp-90h]
  __int128 v38; // [rsp+D8h] [rbp-80h]
  __int128 v39; // [rsp+E8h] [rbp-70h]
  __int128 v40; // [rsp+F8h] [rbp-60h]
  __int64 v41; // [rsp+108h] [rbp-50h]
  __int64 v42; // [rsp+110h] [rbp-48h]
  __int64 v43; // [rsp+118h] [rbp-40h]

  v8 = a2;
  v10 = 0LL;
  Src = 0LL;
  v26[0] = 0;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v11 = PtiCurrent((__int64)a1, a2);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 64);
  else
    v13 = 0LL;
  memset_0(&v34, 0, 0x70uLL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
  v16 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v16 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(v16 + 664), 4u) )
    return v10;
  v34 = v13;
  v35 = v8;
  v36 = a3;
  *((_DWORD *)a4 + 17) = 0;
  v37 = *a4;
  v38 = a4[1];
  v39 = a4[2];
  v40 = a4[3];
  v41 = *((_QWORD *)a4 + 8);
  v42 = a5;
  v43 = a6;
  v18 = WindowFromDC(*(_QWORD *)a4, v17);
  *(_QWORD *)&v37 = _GetDC(v18);
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v19 = *((_QWORD *)v12 + 65);
  v31 = *(_OWORD *)(v19 + 64);
  v32 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(*((_QWORD *)v12 + 65) + 72LL) = v13;
  v20 = 0LL;
  if ( a1 )
    v20 = *a1;
  *(_QWORD *)(*((_QWORD *)v12 + 65) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(a1[5] + 224);
  else
    v21 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 65) + 80LL) = v21;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v29);
  EtwTraceBeginCallback(23LL);
  v22 = KeUserModeCallback(23LL, &v34, 112LL, &Src, v26);
  EtwTraceEndCallback(23LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v29);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v23);
  v24 = *((_QWORD *)v12 + 65);
  *(_OWORD *)(v24 + 64) = v31;
  *(_QWORD *)(v24 + 80) = v32;
  if ( v22 >= 0 && v26[0] == 24 )
  {
    v28 = 0LL;
    RtlCopyFromUser(&v28, Src, 8uLL);
    v10 = v28;
    v30 = v28;
    _ReleaseDC(v37);
    return v10;
  }
  return 0LL;
}
