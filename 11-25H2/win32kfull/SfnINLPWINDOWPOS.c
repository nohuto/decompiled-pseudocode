/*
 * XREFs of SfnINLPWINDOWPOS @ 0x140182A80
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

ULONG_PTR __fastcall SfnINLPWINDOWPOS(__int64 *a1, __int64 a2, __int64 a3, __int128 *a4, ULONG_PTR a5, __int64 a6)
{
  int v8; // r12d
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  ULONG_PTR result; // rax
  __int128 v20; // [rsp+48h] [rbp-C0h]
  __int64 v21; // [rsp+58h] [rbp-B0h]
  ULONG_PTR BugCheckParameter3[6]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+90h] [rbp-78h] BYREF
  int v24; // [rsp+98h] [rbp-70h]
  __int64 v25; // [rsp+A0h] [rbp-68h]
  __int128 v26; // [rsp+A8h] [rbp-60h]
  __int128 v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C8h] [rbp-40h]
  ULONG_PTR v29; // [rsp+D0h] [rbp-38h]
  __int64 v30; // [rsp+D8h] [rbp-30h]
  void *Src; // [rsp+110h] [rbp+8h] BYREF
  int v32; // [rsp+118h] [rbp+10h] BYREF

  v8 = a2;
  Src = 0LL;
  v32 = 0;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v11 = *CurrentThreadNonPaged;
  else
    v11 = 0LL;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(v11 + 512);
  else
    v12 = 0LL;
  memset_0(&v23, 0, 0x50uLL);
  v23 = v12;
  v24 = v8;
  v25 = a3;
  *((_DWORD *)a4 + 9) = 0;
  v26 = *a4;
  v27 = a4[1];
  v28 = *((_QWORD *)a4 + 4);
  v29 = a5;
  v30 = a6;
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
  EtwTraceBeginCallback(17LL);
  v16 = KeUserModeCallback(17LL, &v23, 80LL, &Src, &v32);
  EtwTraceEndCallback(17LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a6);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v17);
  v18 = *(_QWORD *)(v11 + 520);
  *(_OWORD *)(v18 + 64) = v20;
  *(_QWORD *)(v18 + 80) = v21;
  if ( v16 < 0 || v32 != 24 )
    return 0LL;
  a5 = 0LL;
  RtlCopyFromUser(&a5, Src, 8uLL);
  result = a5;
  BugCheckParameter3[2] = a5;
  return result;
}
