/*
 * XREFs of SfnOUTLPTITLEBARINFOEX @ 0x1401E1C20
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

ULONG_PTR __fastcall SfnOUTLPTITLEBARINFOEX(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
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
  ULONG_PTR v23; // rdi
  __int64 v24; // rcx
  void *v25; // rbx
  int v27[6]; // [rsp+30h] [rbp-218h] BYREF
  void *Src; // [rsp+48h] [rbp-200h] BYREF
  ULONG_PTR v29[2]; // [rsp+50h] [rbp-1F8h] BYREF
  char v30[8]; // [rsp+60h] [rbp-1E8h] BYREF
  __int128 v31; // [rsp+68h] [rbp-1E0h]
  __int64 v32; // [rsp+78h] [rbp-1D0h]
  ULONG_PTR BugCheckParameter3[7]; // [rsp+80h] [rbp-1C8h] BYREF
  _OWORD v34[8]; // [rsp+B8h] [rbp-190h] BYREF
  __int64 v35; // [rsp+138h] [rbp-110h]
  int v36; // [rsp+140h] [rbp-108h]
  __int64 v37; // [rsp+150h] [rbp-F8h] BYREF
  int v38; // [rsp+158h] [rbp-F0h]
  __int64 v39; // [rsp+160h] [rbp-E8h]
  __int128 v40; // [rsp+168h] [rbp-E0h]
  __int128 v41; // [rsp+178h] [rbp-D0h]
  __int128 v42; // [rsp+188h] [rbp-C0h]
  __int128 v43; // [rsp+198h] [rbp-B0h]
  __int128 v44; // [rsp+1A8h] [rbp-A0h]
  __int128 v45; // [rsp+1B8h] [rbp-90h]
  __int128 v46; // [rsp+1C8h] [rbp-80h]
  __int128 v47; // [rsp+1D8h] [rbp-70h]
  __int64 v48; // [rsp+1E8h] [rbp-60h]
  int v49; // [rsp+1F0h] [rbp-58h]
  __int64 v50; // [rsp+1F8h] [rbp-50h]
  __int64 v51; // [rsp+200h] [rbp-48h]

  v10 = a2;
  Src = 0LL;
  v27[0] = 0;
  v31 = 0LL;
  v32 = 0LL;
  v12 = PtiCurrent((__int64)a1, a2);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 64);
  else
    v14 = 0LL;
  memset_0(&v37, 0, 0xB8uLL);
  v37 = v14;
  v38 = v10;
  v39 = a3;
  v40 = *a4;
  v41 = a4[1];
  v42 = a4[2];
  v43 = a4[3];
  v44 = a4[4];
  v45 = a4[5];
  v46 = a4[6];
  v47 = a4[7];
  v48 = *((_QWORD *)a4 + 16);
  v49 = *((_DWORD *)a4 + 34);
  v50 = a5;
  v51 = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v15 = *((_QWORD *)v13 + 65);
  v31 = *(_OWORD *)(v15 + 64);
  v32 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 72LL) = v14;
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
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v30);
  EtwTraceBeginCallback(111LL);
  v18 = KeUserModeCallback(111LL, &v37, 184LL, &Src, v27);
  EtwTraceEndCallback(111LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v30);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v19);
  v20 = *((_QWORD *)v13 + 65);
  *(_OWORD *)(v20 + 64) = v31;
  *(_QWORD *)(v20 + 80) = v32;
  if ( v18 >= 0 && v27[0] == 24 )
  {
    v29[0] = 0LL;
    RtlCopyFromUser(v29, Src, 8uLL);
    v23 = v29[0];
    BugCheckParameter3[2] = v29[0];
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v23;
    v24 = *((_QWORD *)PtiCurrent(v22, v21) + 69);
    if ( !v24 || (*(_DWORD *)(v24 + 84) & 1) == 0 || *(__int128 **)(v24 + 96) != a4 )
    {
      v25 = (void *)*((_QWORD *)Src + 2);
      memset_0(v34, 0, 0x8CuLL);
      RtlCopyFromUser(v34, v25, 0x8CuLL);
      *a4 = v34[0];
      a4[1] = v34[1];
      a4[2] = v34[2];
      a4[3] = v34[3];
      a4[4] = v34[4];
      a4[5] = v34[5];
      a4[6] = v34[6];
      a4[7] = v34[7];
      *((_QWORD *)a4 + 16) = v35;
      *((_DWORD *)a4 + 34) = v36;
      return v23;
    }
  }
  return 0LL;
}
