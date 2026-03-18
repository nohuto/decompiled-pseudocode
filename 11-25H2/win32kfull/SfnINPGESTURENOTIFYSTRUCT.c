/*
 * XREFs of SfnINPGESTURENOTIFYSTRUCT @ 0x1402BBDF0
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

unsigned __int8 *__fastcall SfnINPGESTURENOTIFYSTRUCT(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        char *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // rsi
  __int64 v14; // r14
  unsigned __int8 *result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int8 *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct tagTHREADINFO *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // rcx
  ULONG_PTR v28; // rdi
  PVOID *v29; // rdx
  int v30; // [rsp+30h] [rbp-338h] BYREF
  ULONG_PTR RegionSize[4]; // [rsp+38h] [rbp-330h] BYREF
  void *Src; // [rsp+58h] [rbp-310h] BYREF
  __int128 v33; // [rsp+60h] [rbp-308h] BYREF
  void (*v34)(void *); // [rsp+70h] [rbp-2F8h]
  _BYTE v35[8]; // [rsp+80h] [rbp-2E8h] BYREF
  __int128 v36; // [rsp+88h] [rbp-2E0h]
  __int64 v37; // [rsp+98h] [rbp-2D0h]
  ULONG_PTR BugCheckParameter3[6]; // [rsp+A0h] [rbp-2C8h] BYREF
  unsigned __int8 v39[96]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v40[512]; // [rsp+130h] [rbp-238h] BYREF

  memset_0(v39, 0, 0x58uLL);
  Src = 0LL;
  v30 = 0;
  v36 = 0LL;
  v37 = 0LL;
  v12 = PtiCurrent(v11, v10);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 64);
  else
    v14 = 0LL;
  result = AllocCallbackMessage(88, 1u, *(unsigned int *)a4, v40, 1, 0x200uLL);
  v18 = result;
  RegionSize[3] = (ULONG_PTR)result;
  if ( result )
  {
    PtiCurrent(v17, v16);
    v33 = 0LL;
    v34 = 0LL;
    if ( v18 != v39 && v18 != v40 )
    {
      v21 = PtiCurrent(v20, v19);
      *(_QWORD *)&v33 = *((_QWORD *)v21 + 48);
      *((_QWORD *)v21 + 48) = &v33;
      *((_QWORD *)&v33 + 1) = v18;
      v34 = Win32FreePool;
    }
    *((_QWORD *)v18 + 5) = v14;
    *((_DWORD *)v18 + 12) = a2;
    *((_QWORD *)v18 + 7) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v18, a4, *(unsigned int *)a4, (void **)v18 + 8) < 0 )
      goto LABEL_18;
    *((_QWORD *)v18 + 9) = a5;
    *((_QWORD *)v18 + 10) = a6;
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
    v22 = *((_QWORD *)v13 + 65);
    v36 = *(_OWORD *)(v22 + 64);
    v37 = *(_QWORD *)(v22 + 80);
    *(_QWORD *)(*((_QWORD *)v13 + 65) + 72LL) = v14;
    v23 = a1 ? *a1 : 0LL;
    *(_QWORD *)(*((_QWORD *)v13 + 65) + 64LL) = v23;
    v24 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
    *(_QWORD *)(*((_QWORD *)v13 + 65) + 80LL) = v24;
    LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v35);
    EtwTraceBeginCallback(114LL);
    *((_QWORD *)v18 + 2) = 0LL;
    v25 = KeUserModeCallback(114LL, v18, *(unsigned int *)v18, &Src, &v30);
    EtwTraceEndCallback(114LL);
    LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v35);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v26);
    v27 = *((_QWORD *)v13 + 65);
    *(_OWORD *)(v27 + 64) = v36;
    *(_QWORD *)(v27 + 80) = v37;
    if ( v25 < 0 )
      goto LABEL_18;
    if ( v30 == 24 )
    {
      RegionSize[0] = 0LL;
      RtlCopyFromUser(RegionSize, Src, 8uLL);
      v28 = RegionSize[0];
      BugCheckParameter3[2] = RegionSize[0];
    }
    else
    {
LABEL_18:
      v28 = 0LL;
    }
    if ( v18 != v39 && v18 != v40 )
    {
      v29 = (PVOID *)(v18 + 32);
      if ( *((_QWORD *)v18 + 4) )
      {
        RegionSize[0] = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v29, RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v33, (__int64)v29);
    }
    return (unsigned __int8 *)v28;
  }
  return result;
}
