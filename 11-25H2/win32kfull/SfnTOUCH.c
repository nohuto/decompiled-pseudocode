/*
 * XREFs of SfnTOUCH @ 0x1401FC5B0
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
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall SfnTOUCH(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // r12d
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rdx
  struct tagTHREADINFO *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 result; // rax
  void *Src; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B0h] BYREF
  _BYTE v23[8]; // [rsp+58h] [rbp-A0h] BYREF
  __int128 v24; // [rsp+60h] [rbp-98h]
  __int64 v25; // [rsp+70h] [rbp-88h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+78h] [rbp-80h] BYREF
  __int64 v27; // [rsp+88h] [rbp-70h] BYREF
  int v28; // [rsp+90h] [rbp-68h]
  int v29; // [rsp+94h] [rbp-64h]
  __int64 v30; // [rsp+98h] [rbp-60h]
  __int64 v31; // [rsp+A0h] [rbp-58h]
  __int64 v32; // [rsp+A8h] [rbp-50h]
  __int64 v33; // [rsp+B0h] [rbp-48h]
  __int64 v34; // [rsp+B8h] [rbp-40h]
  int v35; // [rsp+100h] [rbp+8h] BYREF

  v8 = a2;
  Src = 0LL;
  v35 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v10 = PtiCurrent((__int64)a1, a2);
  v12 = v10;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v10 + 64);
  else
    v13 = 0LL;
  v29 = 0;
  LOBYTE(v11) = 20;
  if ( !HMValidateHandleWithDescriptor(a4, v11) )
    return 0LL;
  v27 = v13;
  v28 = v8;
  v30 = a3;
  v31 = a4;
  v32 = a5;
  v33 = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v14 = *((_QWORD *)v12 + 65);
  v24 = *(_OWORD *)(v14 + 64);
  v25 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(*((_QWORD *)v12 + 65) + 72LL) = v13;
  v15 = a1 ? *a1 : 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 65) + 64LL) = v15;
  v16 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 65) + 80LL) = v16;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v23);
  EtwTraceBeginCallback(112LL);
  v17 = KeUserModeCallback(112LL, &v27, 48LL, &Src, &v35);
  EtwTraceEndCallback(112LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v23);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v18);
  v19 = *((_QWORD *)v12 + 65);
  *(_OWORD *)(v19 + 64) = v24;
  *(_QWORD *)(v19 + 80) = v25;
  if ( v17 < 0 || v35 != 24 )
    return 0LL;
  v22 = 0LL;
  RtlCopyFromUser(&v22, Src, 8uLL);
  result = v22;
  v34 = v22;
  return result;
}
