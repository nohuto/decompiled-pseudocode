/*
 * XREFs of SfnPOPTINLPUINT @ 0x1402BC660
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
 *     PopAndFreeAlwaysW32ThreadLock @ 0x140148EB4 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140177338 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1402583B0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

unsigned __int8 *__fastcall SfnPOPTINLPUINT(__int64 *a1, int a2, __int64 a3, char *a4, __int64 a5, __int64 a6)
{
  int *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // rsi
  __int64 v14; // r14
  unsigned int v15; // edx
  unsigned __int64 v16; // r15
  unsigned __int8 *result; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct tagTHREADINFO *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // rcx
  ULONG_PTR v29; // rdi
  PVOID *v30; // rdx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-348h] BYREF
  int v32; // [rsp+38h] [rbp-340h] BYREF
  ULONG_PTR v33[3]; // [rsp+40h] [rbp-338h] BYREF
  void *Src; // [rsp+58h] [rbp-320h] BYREF
  __int128 v35; // [rsp+60h] [rbp-318h] BYREF
  void (*v36)(void *); // [rsp+70h] [rbp-308h]
  _BYTE v37[8]; // [rsp+80h] [rbp-2F8h] BYREF
  __int128 v38; // [rsp+88h] [rbp-2F0h]
  __int64 v39; // [rsp+98h] [rbp-2E0h]
  ULONG_PTR BugCheckParameter3[6]; // [rsp+A0h] [rbp-2D8h] BYREF
  int v41; // [rsp+D0h] [rbp-2A8h] BYREF
  _BYTE v42[92]; // [rsp+D4h] [rbp-2A4h] BYREF
  unsigned __int8 v43[512]; // [rsp+130h] [rbp-248h] BYREF

  LODWORD(v33[0]) = a2;
  memset_0(&v41, 0, 0x58uLL);
  v9 = &v41;
  Src = 0LL;
  v32 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v12 = PtiCurrent(v11, v10);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 64);
  else
    v14 = 0LL;
  if ( a4 )
  {
    v15 = 1;
    v16 = 4LL * (unsigned int)a3;
    if ( v16 > 0xFFFFFFFF )
      goto LABEL_28;
  }
  else
  {
    LODWORD(v16) = 0;
    v15 = 0;
  }
  if ( v15 )
  {
    result = AllocCallbackMessage(88, v15, (unsigned int)v16, v43, 1, 0x200uLL);
    v9 = (int *)result;
    RegionSize = (ULONG_PTR)result;
    if ( !result )
      return result;
  }
  else
  {
    v9 = &v41;
    RegionSize = (ULONG_PTR)&v41;
    memset_0(v42, 0, 0x54uLL);
    v41 = 88;
  }
  PtiCurrent(v19, v18);
  v35 = 0LL;
  v36 = 0LL;
  if ( v9 != &v41 && v9 != (int *)v43 )
  {
    v22 = PtiCurrent(v21, v20);
    *(_QWORD *)&v35 = *((_QWORD *)v22 + 48);
    *((_QWORD *)v22 + 48) = &v35;
    *((_QWORD *)&v35 + 1) = v9;
    v36 = Win32FreePool;
  }
  *((_QWORD *)v9 + 5) = v14;
  v9[12] = v33[0];
  *((_QWORD *)v9 + 7) = a3;
  if ( a4 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v9, a4, (unsigned int)v16, (void **)v9 + 8) < 0 )
      goto LABEL_28;
  }
  else
  {
    *((_QWORD *)v9 + 8) = 0LL;
  }
  *((_QWORD *)v9 + 9) = a5;
  *((_QWORD *)v9 + 10) = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v23 = *((_QWORD *)v13 + 65);
  v38 = *(_OWORD *)(v23 + 64);
  v39 = *(_QWORD *)(v23 + 80);
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 72LL) = v14;
  if ( a1 )
    v24 = *a1;
  else
    v24 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 64LL) = v24;
  if ( a1 )
    v25 = *(_QWORD *)(a1[5] + 224);
  else
    v25 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 80LL) = v25;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v37);
  EtwTraceBeginCallback(36LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v26 = KeUserModeCallback(36LL, v9, (unsigned int)*v9, &Src, &v32);
  EtwTraceEndCallback(36LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v37);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v27);
  v28 = *((_QWORD *)v13 + 65);
  *(_OWORD *)(v28 + 64) = v38;
  *(_QWORD *)(v28 + 80) = v39;
  if ( v26 >= 0 && v32 == 24 )
  {
    v33[0] = 0LL;
    RtlCopyFromUser(v33, Src, 8uLL);
    v29 = v33[0];
    BugCheckParameter3[2] = v33[0];
    goto LABEL_29;
  }
LABEL_28:
  v29 = 0LL;
LABEL_29:
  if ( v9 != &v41 && v9 != (int *)v43 )
  {
    v30 = (PVOID *)(v9 + 8);
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v30, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v35, (__int64)v30);
  }
  return (unsigned __int8 *)v29;
}
