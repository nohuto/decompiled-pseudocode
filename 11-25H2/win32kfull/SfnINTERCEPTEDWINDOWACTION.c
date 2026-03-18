/*
 * XREFs of SfnINTERCEPTEDWINDOWACTION @ 0x1402BC3D0
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
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

ULONG_PTR __fastcall SfnINTERCEPTEDWINDOWACTION(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // r15d
  struct tagTHREADINFO *v10; // rax
  struct tagTHREADINFO *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  ULONG_PTR result; // rax
  _DWORD v20[6]; // [rsp+30h] [rbp-148h] BYREF
  void *Src; // [rsp+48h] [rbp-130h] BYREF
  ULONG_PTR v22[2]; // [rsp+50h] [rbp-128h] BYREF
  _BYTE v23[8]; // [rsp+60h] [rbp-118h] BYREF
  __int128 v24; // [rsp+68h] [rbp-110h]
  __int64 v25; // [rsp+78h] [rbp-100h]
  ULONG_PTR BugCheckParameter3[6]; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-C8h] BYREF
  int v28; // [rsp+B8h] [rbp-C0h]
  __int64 v29; // [rsp+C0h] [rbp-B8h]
  __int128 v30; // [rsp+C8h] [rbp-B0h]
  __int128 v31; // [rsp+D8h] [rbp-A0h]
  __int128 v32; // [rsp+E8h] [rbp-90h]
  __int128 v33; // [rsp+F8h] [rbp-80h]
  __int128 v34; // [rsp+108h] [rbp-70h]
  __int128 v35; // [rsp+118h] [rbp-60h]
  __int64 v36; // [rsp+128h] [rbp-50h]
  __int64 v37; // [rsp+130h] [rbp-48h]

  v8 = a2;
  Src = 0LL;
  v20[0] = 0;
  v24 = 0LL;
  v25 = 0LL;
  v10 = PtiCurrent((__int64)a1, a2);
  v11 = v10;
  if ( a1 )
    v12 = a1[5] - *((_QWORD *)v10 + 64);
  else
    v12 = 0LL;
  memset_0(&v27, 0, 0x88uLL);
  v27 = v12;
  v28 = v8 & 0x1FFFF;
  v29 = a3;
  *((_DWORD *)a4 + 7) = 0;
  *((_DWORD *)a4 + 23) = 0;
  v30 = *a4;
  v31 = a4[1];
  v32 = a4[2];
  v33 = a4[3];
  v34 = a4[4];
  v35 = a4[5];
  v36 = a5;
  v37 = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v13 = *((_QWORD *)v11 + 65);
  v24 = *(_OWORD *)(v13 + 64);
  v25 = *(_QWORD *)(v13 + 80);
  *(_QWORD *)(*((_QWORD *)v11 + 65) + 72LL) = v12;
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
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v23);
  EtwTraceBeginCallback(131LL);
  v16 = KeUserModeCallback(131LL, &v27, 136LL, &Src, v20);
  EtwTraceEndCallback(131LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v23);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v17);
  v18 = *((_QWORD *)v11 + 65);
  *(_OWORD *)(v18 + 64) = v24;
  *(_QWORD *)(v18 + 80) = v25;
  if ( v16 < 0 || v20[0] != 24 )
    return 0LL;
  v22[0] = 0LL;
  RtlCopyFromUser(v22, Src, 8uLL);
  result = v22[0];
  BugCheckParameter3[2] = v22[0];
  return result;
}
