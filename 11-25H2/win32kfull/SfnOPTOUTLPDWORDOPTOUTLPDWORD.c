/*
 * XREFs of SfnOPTOUTLPDWORDOPTOUTLPDWORD @ 0x140171840
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
 */

__int64 __fastcall SfnOPTOUTLPDWORDOPTOUTLPDWORD(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r14d
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  _DWORD *v21; // rdx
  _DWORD *v22; // rdx
  __int128 v24; // [rsp+58h] [rbp-A0h]
  __int64 v25; // [rsp+68h] [rbp-90h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v27; // [rsp+80h] [rbp-78h] BYREF
  int v28; // [rsp+88h] [rbp-70h]
  int v29; // [rsp+8Ch] [rbp-6Ch]
  __int64 v30; // [rsp+90h] [rbp-68h]
  __int64 v31; // [rsp+98h] [rbp-60h]
  __int64 v32; // [rsp+A0h] [rbp-58h]
  void *Src; // [rsp+100h] [rbp+8h] BYREF
  int v34; // [rsp+108h] [rbp+10h] BYREF

  v10 = a2;
  Src = 0LL;
  v34 = 0;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v13 = *CurrentThreadNonPaged;
  else
    v13 = 0LL;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(v13 + 512);
  else
    v14 = 0LL;
  v29 = 0;
  v27 = v14;
  v28 = v10;
  v30 = a5;
  v31 = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v15 = *(_QWORD *)(v13 + 520);
  v24 = *(_OWORD *)(v15 + 64);
  v25 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v14;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 520) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(a1[5] + 224);
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 520) + 80LL) = v17;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a6);
  EtwTraceBeginCallback(31LL);
  v18 = KeUserModeCallback(31LL, &v27, 32LL, &Src, &v34);
  EtwTraceEndCallback(31LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a6);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v19);
  v20 = *(_QWORD *)(v13 + 520);
  *(_OWORD *)(v20 + 64) = v24;
  *(_QWORD *)(v20 + 80) = v25;
  if ( v18 < 0 || v34 != 24 )
    return 0LL;
  a5 = 0LL;
  RtlCopyFromUser(&a5, Src, 8uLL);
  v32 = a5;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    if ( a3 )
    {
      v21 = (_DWORD *)*((_QWORD *)Src + 2);
      if ( (unsigned __int64)v21 >= MmUserProbeAddress )
        v21 = (_DWORD *)MmUserProbeAddress;
      *a3 = *v21;
    }
    if ( a4 )
    {
      v22 = (_DWORD *)(*((_QWORD *)Src + 2) + 4LL);
      if ( (unsigned __int64)v22 >= MmUserProbeAddress )
        v22 = (_DWORD *)MmUserProbeAddress;
      *a4 = *v22;
    }
  }
  return a5;
}
