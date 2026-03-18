/*
 * XREFs of SfnSHELLSYNCDISPLAYCHANGED @ 0x1401E31A0
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

ULONG_PTR __fastcall SfnSHELLSYNCDISPLAYCHANGED(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r15d
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // r14
  __int64 v14; // rsi
  _OWORD *v15; // rax
  char *v16; // rcx
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  ULONG_PTR v27; // rsi
  __int64 v28; // rcx
  void *v29; // rbx
  _OWORD *v30; // rax
  int v32[6]; // [rsp+30h] [rbp-A58h] BYREF
  void *Src; // [rsp+48h] [rbp-A40h] BYREF
  ULONG_PTR v34[2]; // [rsp+50h] [rbp-A38h] BYREF
  char v35[8]; // [rsp+60h] [rbp-A28h] BYREF
  __int128 v36; // [rsp+68h] [rbp-A20h]
  __int64 v37; // [rsp+78h] [rbp-A10h]
  ULONG_PTR BugCheckParameter3[7]; // [rsp+80h] [rbp-A08h] BYREF
  _BYTE v39[1208]; // [rsp+B8h] [rbp-9D0h] BYREF
  __int64 v40; // [rsp+570h] [rbp-518h] BYREF
  int v41; // [rsp+578h] [rbp-510h]
  __int64 v42; // [rsp+580h] [rbp-508h]
  char v43; // [rsp+588h] [rbp-500h] BYREF
  __int64 v44; // [rsp+A40h] [rbp-48h]
  __int64 v45; // [rsp+A48h] [rbp-40h]

  v10 = a2;
  Src = 0LL;
  v32[0] = 0;
  v36 = 0LL;
  v37 = 0LL;
  v12 = PtiCurrent((__int64)a1, a2);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 64);
  else
    v14 = 0LL;
  memset_0(&v40, 0, 0x4E0uLL);
  v40 = v14;
  v41 = v10 & 0x1FFFF;
  v42 = a3;
  v15 = a4;
  v16 = &v43;
  v17 = 9LL;
  v18 = 9LL;
  do
  {
    *(_OWORD *)v16 = *v15;
    *((_OWORD *)v16 + 1) = v15[1];
    *((_OWORD *)v16 + 2) = v15[2];
    *((_OWORD *)v16 + 3) = v15[3];
    *((_OWORD *)v16 + 4) = v15[4];
    *((_OWORD *)v16 + 5) = v15[5];
    *((_OWORD *)v16 + 6) = v15[6];
    v16 += 128;
    *((_OWORD *)v16 - 1) = v15[7];
    v15 += 8;
    --v18;
  }
  while ( v18 );
  *(_OWORD *)v16 = *v15;
  *((_OWORD *)v16 + 1) = v15[1];
  *((_OWORD *)v16 + 2) = v15[2];
  *((_DWORD *)v16 + 12) = *((_DWORD *)v15 + 12);
  v44 = a5;
  v45 = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v19 = *((_QWORD *)v13 + 65);
  v36 = *(_OWORD *)(v19 + 64);
  v37 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 72LL) = v14;
  if ( a1 )
    v20 = *a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(a1[5] + 224);
  else
    v21 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 80LL) = v21;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v35);
  EtwTraceBeginCallback(129LL);
  v22 = KeUserModeCallback(129LL, &v40, 1248LL, &Src, v32);
  EtwTraceEndCallback(129LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v35);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v23);
  v24 = *((_QWORD *)v13 + 65);
  *(_OWORD *)(v24 + 64) = v36;
  *(_QWORD *)(v24 + 80) = v37;
  if ( v22 >= 0 && v32[0] == 24 )
  {
    v34[0] = 0LL;
    RtlCopyFromUser(v34, Src, 8uLL);
    v27 = v34[0];
    BugCheckParameter3[2] = v34[0];
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v27;
    v28 = *((_QWORD *)PtiCurrent(v26, v25) + 69);
    if ( !v28 || (*(_DWORD *)(v28 + 84) & 1) == 0 || *(_OWORD **)(v28 + 96) != a4 )
    {
      v29 = (void *)*((_QWORD *)Src + 2);
      memset_0(v39, 0, 0x4B4uLL);
      RtlCopyFromUser(v39, v29, 0x4B4uLL);
      v30 = v39;
      do
      {
        *a4 = *v30;
        a4[1] = v30[1];
        a4[2] = v30[2];
        a4[3] = v30[3];
        a4[4] = v30[4];
        a4[5] = v30[5];
        a4[6] = v30[6];
        a4 += 8;
        *(a4 - 1) = v30[7];
        v30 += 8;
        --v17;
      }
      while ( v17 );
      *a4 = *v30;
      a4[1] = v30[1];
      a4[2] = v30[2];
      *((_DWORD *)a4 + 12) = *((_DWORD *)v30 + 12);
      return v27;
    }
  }
  return 0LL;
}
