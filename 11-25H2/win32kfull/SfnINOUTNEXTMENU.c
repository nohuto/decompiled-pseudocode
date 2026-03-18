/*
 * XREFs of SfnINOUTNEXTMENU @ 0x1402BB830
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
 */

__int64 __fastcall SfnINOUTNEXTMENU(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r12d
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rcx
  void *v25; // rdx
  __int128 v27; // [rsp+48h] [rbp-E0h]
  __int64 v28; // [rsp+58h] [rbp-D0h]
  __int128 v29; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+70h] [rbp-B8h]
  ULONG_PTR BugCheckParameter3[3]; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+90h] [rbp-98h] BYREF
  int v33; // [rsp+98h] [rbp-90h]
  int v34; // [rsp+9Ch] [rbp-8Ch]
  __int64 v35; // [rsp+A0h] [rbp-88h]
  _BYTE v36[24]; // [rsp+A8h] [rbp-80h]
  __int64 v37; // [rsp+C0h] [rbp-68h]
  __int64 v38; // [rsp+C8h] [rbp-60h]
  __int64 v39; // [rsp+D0h] [rbp-58h]
  void *Src; // [rsp+130h] [rbp+8h] BYREF
  int v41; // [rsp+138h] [rbp+10h] BYREF

  v10 = a2;
  Src = 0LL;
  v41 = 0;
  v12 = PtiCurrent((__int64)a1, a2);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 64);
  else
    v14 = 0LL;
  v34 = 0;
  *(_OWORD *)&v36[8] = 0LL;
  v32 = v14;
  v33 = v10;
  v35 = a3;
  v37 = a5;
  v38 = a6;
  *(_OWORD *)v36 = *(_OWORD *)a4;
  *(_QWORD *)&v36[16] = *(_QWORD *)(a4 + 16);
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v15 = *((_QWORD *)v13 + 65);
  v27 = *(_OWORD *)(v15 + 64);
  v28 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v14;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(a1[5] + 224);
  else
    v17 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 80LL) = v17;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a6);
  EtwTraceBeginCallback(30LL);
  v18 = KeUserModeCallback(30LL, &v32, 64LL, &Src, &v41);
  EtwTraceEndCallback(30LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a6);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v19);
  v20 = *((_QWORD *)v13 + 65);
  *(_OWORD *)(v20 + 64) = v27;
  *(_QWORD *)(v20 + 80) = v28;
  if ( v18 >= 0 && v41 == 24 )
  {
    a5 = 0LL;
    RtlCopyFromUser(&a5, Src, 8uLL);
    v23 = a5;
    v39 = a5;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v23;
    v24 = *((_QWORD *)PtiCurrent(v22, v21) + 69);
    if ( !v24 || (*(_DWORD *)(v24 + 84) & 1) == 0 || *(_QWORD *)(v24 + 96) != a4 )
    {
      v25 = (void *)*((_QWORD *)Src + 2);
      v29 = 0LL;
      v30 = 0LL;
      RtlCopyFromUser(&v29, v25, 0x18uLL);
      *(_OWORD *)a4 = v29;
      *(_QWORD *)(a4 + 16) = v30;
      return v23;
    }
  }
  return 0LL;
}
