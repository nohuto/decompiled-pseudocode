/*
 * XREFs of SfnPOUTLPINT @ 0x1402BCA00
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
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1401A24DC (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1402583B0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

unsigned __int8 *__fastcall SfnPOUTLPINT(
        __int64 *a1,
        int a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  struct tagTHREADINFO *v15; // r15
  __int64 v16; // r14
  unsigned __int64 v17; // rdi
  unsigned __int8 *result; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagTHREADINFO *v23; // rax
  void *v24; // r13
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // esi
  __int64 v29; // rdx
  __int64 v30; // rcx
  void *v31; // rsi
  PVOID *v32; // rdx
  int v33; // [rsp+30h] [rbp-398h] BYREF
  void *Src[5]; // [rsp+38h] [rbp-390h] BYREF
  void *v35; // [rsp+60h] [rbp-368h] BYREF
  SIZE_T Length; // [rsp+68h] [rbp-360h] BYREF
  __int128 v37; // [rsp+70h] [rbp-358h] BYREF
  volatile void *Address; // [rsp+80h] [rbp-348h]
  __int128 v39; // [rsp+88h] [rbp-340h] BYREF
  void (*v40)(void *); // [rsp+98h] [rbp-330h]
  _BYTE v41[8]; // [rsp+B0h] [rbp-318h] BYREF
  __int128 v42; // [rsp+B8h] [rbp-310h]
  __int64 v43; // [rsp+C8h] [rbp-300h]
  ULONG_PTR BugCheckParameter3[7]; // [rsp+D0h] [rbp-2F8h] BYREF
  __int128 v45; // [rsp+108h] [rbp-2C0h]
  volatile void *v46; // [rsp+118h] [rbp-2B0h]
  unsigned __int8 v47[96]; // [rsp+120h] [rbp-2A8h] BYREF
  unsigned __int8 v48[512]; // [rsp+180h] [rbp-248h] BYREF

  Src[0] = a4;
  memset_0(v47, 0, sizeof(v47));
  v11 = v47;
  v35 = 0LL;
  v33 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v14 = PtiCurrent(v13, v12);
  v15 = v14;
  if ( a1 )
    v16 = a1[5] - *((_QWORD *)v14 + 64);
  else
    v16 = 0LL;
  v17 = 4LL * (unsigned int)a3;
  if ( v17 > 0xFFFFFFFF )
    goto LABEL_27;
  Length = (unsigned int)v17;
  result = AllocCallbackMessage(96, 1u, (unsigned int)v17, v48, 0, 0x200uLL);
  v11 = result;
  Src[1] = result;
  if ( !result )
    return result;
  PtiCurrent(v20, v19);
  v39 = 0LL;
  v40 = 0LL;
  if ( v11 != v47 && v11 != v48 )
  {
    v23 = PtiCurrent(v22, v21);
    *(_QWORD *)&v39 = *((_QWORD *)v23 + 48);
    *((_QWORD *)v23 + 48) = &v39;
    *((_QWORD *)&v39 + 1) = v11;
    v40 = Win32FreePool;
  }
  *((_QWORD *)v11 + 5) = v16;
  *((_DWORD *)v11 + 12) = a2;
  *((_QWORD *)v11 + 7) = a3;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (a7 & 2) != 0 )
  {
    *((_DWORD *)v11 + 22) = v17;
    v24 = Src[0];
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v11, (char *)Src[0], (unsigned int)v17, (void **)v11 + 10) < 0 )
      goto LABEL_27;
  }
  else
  {
    if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v17, (void **)v11 + 10) < 0 )
      goto LABEL_27;
    *((_DWORD *)v11 + 22) = v17;
    v24 = Src[0];
  }
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v25 = *((_QWORD *)v15 + 65);
  v42 = *(_OWORD *)(v25 + 64);
  v43 = *(_QWORD *)(v25 + 80);
  *(_QWORD *)(*((_QWORD *)v15 + 65) + 72LL) = v16;
  if ( a1 )
    v26 = *a1;
  else
    v26 = 0LL;
  *(_QWORD *)(*((_QWORD *)v15 + 65) + 64LL) = v26;
  if ( a1 )
    v27 = *(_QWORD *)(a1[5] + 224);
  else
    v27 = 0LL;
  *(_QWORD *)(*((_QWORD *)v15 + 65) + 80LL) = v27;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v41);
  EtwTraceBeginCallback(37LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v28 = KeUserModeCallback(37LL, v11, *(unsigned int *)v11, &v35, &v33);
  EtwTraceEndCallback(37LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v41);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v29);
  v30 = *((_QWORD *)v15 + 65);
  *(_OWORD *)(v30 + 64) = v42;
  *(_QWORD *)(v30 + 80) = v43;
  if ( v28 >= 0 && v33 == 24 )
  {
    Src[0] = 0LL;
    RtlCopyFromUser(Src, v35, 8uLL);
    v31 = Src[0];
    BugCheckParameter3[2] = (ULONG_PTR)Src[0];
    if ( (_DWORD)v17 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      v37 = 0LL;
      Address = 0LL;
      RtlCopyFromUser(&v37, v35, 0x18uLL);
      v45 = v37;
      v46 = Address;
      ProbeForRead(Address, Length, 4u);
      memmove(v24, (const void *)Address, Length);
    }
    goto LABEL_28;
  }
LABEL_27:
  v31 = 0LL;
LABEL_28:
  if ( v11 != v47 && v11 != v48 )
  {
    v32 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      Length = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v32, &Length, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v39, (__int64)v32);
  }
  return (unsigned __int8 *)v31;
}
