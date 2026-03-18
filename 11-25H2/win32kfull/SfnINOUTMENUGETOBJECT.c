/*
 * XREFs of SfnINOUTMENUGETOBJECT @ 0x1402BB540
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
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

ULONG_PTR __fastcall SfnINOUTMENUGETOBJECT(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        ULONG_PTR a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r15d
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  ULONG_PTR v21; // rdi
  _QWORD *v22; // rbx
  __int128 v24; // [rsp+58h] [rbp-100h]
  __int64 v25; // [rsp+68h] [rbp-F0h]
  __m128i v26; // [rsp+70h] [rbp-E8h] BYREF
  volatile void *Address; // [rsp+80h] [rbp-D8h]
  ULONG_PTR BugCheckParameter3[7]; // [rsp+88h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+C0h] [rbp-98h] BYREF
  int v30; // [rsp+C8h] [rbp-90h]
  __int64 v31; // [rsp+D0h] [rbp-88h]
  __int128 v32; // [rsp+D8h] [rbp-80h]
  __int128 v33; // [rsp+E8h] [rbp-70h]
  ULONG_PTR v34; // [rsp+F8h] [rbp-60h]
  __int64 v35; // [rsp+100h] [rbp-58h]
  __m128i v36; // [rsp+110h] [rbp-48h]
  volatile void *v37; // [rsp+120h] [rbp-38h]
  void *Src; // [rsp+160h] [rbp+8h] BYREF
  int v39; // [rsp+168h] [rbp+10h] BYREF

  v10 = a2;
  Src = 0LL;
  v39 = 0;
  v12 = PtiCurrent((__int64)a1, a2);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 64);
  else
    v14 = 0LL;
  memset_0(&v29, 0, 0x48uLL);
  v29 = v14;
  v30 = v10;
  v31 = a3;
  v32 = *a4;
  v33 = a4[1];
  v34 = a5;
  v35 = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v15 = *((_QWORD *)v13 + 65);
  v24 = *(_OWORD *)(v15 + 64);
  v25 = *(_QWORD *)(v15 + 80);
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
  EtwTraceBeginCallback(102LL);
  v18 = KeUserModeCallback(102LL, &v29, 72LL, &Src, &v39);
  EtwTraceEndCallback(102LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a6);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v19);
  v20 = *((_QWORD *)v13 + 65);
  *(_OWORD *)(v20 + 64) = v24;
  *(_QWORD *)(v20 + 80) = v25;
  if ( v18 >= 0 && v39 == 24 )
  {
    a5 = 0LL;
    RtlCopyFromUser(&a5, Src, 8uLL);
    v21 = a5;
    BugCheckParameter3[2] = a5;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v21;
    v26 = 0LL;
    Address = 0LL;
    RtlCopyFromUser(&v26, Src, 0x18uLL);
    v36 = v26;
    v37 = Address;
    if ( _mm_cvtsi128_si32(_mm_srli_si128(v26, 8)) == 8 )
    {
      v22 = Address;
      ProbeForRead(Address, 8uLL, 4u);
      *((_QWORD *)a4 + 3) = *v22;
      return v21;
    }
  }
  return 0LL;
}
