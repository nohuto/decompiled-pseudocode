/*
 * XREFs of SfnDWORDOPTINLPMSG @ 0x14017B6A0
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
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

ULONG_PTR __fastcall SfnDWORDOPTINLPMSG(__int64 *a1, __int64 a2, __int64 a3, __int128 *a4, ULONG_PTR a5, __int64 a6)
{
  int v8; // r12d
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  ULONG_PTR result; // rax
  __int128 v20; // [rsp+48h] [rbp-D0h]
  __int64 v21; // [rsp+58h] [rbp-C0h]
  ULONG_PTR BugCheckParameter3[6]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+90h] [rbp-88h] BYREF
  int v24; // [rsp+98h] [rbp-80h]
  __int64 v25; // [rsp+A0h] [rbp-78h]
  BOOL v26; // [rsp+A8h] [rbp-70h]
  ULONG_PTR v27; // [rsp+B0h] [rbp-68h]
  __int64 v28; // [rsp+B8h] [rbp-60h]
  __int128 v29; // [rsp+C0h] [rbp-58h]
  __int128 v30; // [rsp+D0h] [rbp-48h]
  __int128 v31; // [rsp+E0h] [rbp-38h]
  void *Src; // [rsp+120h] [rbp+8h] BYREF
  int v33; // [rsp+128h] [rbp+10h] BYREF

  v8 = a2;
  Src = 0LL;
  v33 = 0;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v11 = *CurrentThreadNonPaged;
  else
    v11 = 0LL;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(v11 + 512);
  else
    v12 = 0LL;
  memset_0(&v23, 0, 0x60uLL);
  v23 = v12;
  v24 = v8;
  v25 = a3;
  if ( a4 )
  {
    *((_DWORD *)a4 + 3) = 0;
    *((_DWORD *)a4 + 11) = 0;
  }
  v26 = a4 != 0LL;
  if ( a4 )
  {
    v29 = *a4;
    v30 = a4[1];
    v31 = a4[2];
  }
  v27 = a5;
  v28 = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v13 = *(_QWORD *)(v11 + 520);
  v20 = *(_OWORD *)(v13 + 64);
  v21 = *(_QWORD *)(v13 + 80);
  *(_QWORD *)(v13 + 72) = v12;
  if ( a1 )
    v14 = *a1;
  else
    v14 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 520) + 64LL) = v14;
  if ( a1 )
    v15 = *(_QWORD *)(a1[5] + 224);
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 520) + 80LL) = v15;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a6);
  EtwTraceBeginCallback(4LL);
  v16 = KeUserModeCallback(4LL, &v23, 96LL, &Src, &v33);
  EtwTraceEndCallback(4LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a6);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v17);
  v18 = *(_QWORD *)(v11 + 520);
  *(_OWORD *)(v18 + 64) = v20;
  *(_QWORD *)(v18 + 80) = v21;
  if ( v16 < 0 || v33 != 24 )
    return 0LL;
  a5 = 0LL;
  RtlCopyFromUser(&a5, Src, 8uLL);
  result = a5;
  BugCheckParameter3[2] = a5;
  return result;
}
