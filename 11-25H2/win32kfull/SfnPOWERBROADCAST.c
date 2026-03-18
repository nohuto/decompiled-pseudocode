/*
 * XREFs of SfnPOWERBROADCAST @ 0x1401A10A0
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
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
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

ULONG_PTR __fastcall SfnPOWERBROADCAST(struct tagWND *a1, int a2, __int64 a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rdx
  struct tagTHREADINFO *v14; // r14
  char *v15; // r12
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int16 v20; // r8
  int v21; // ecx
  unsigned int v22; // esi
  unsigned __int8 *v23; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct tagTHREADINFO *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // edi
  __int64 v32; // rdx
  __int64 v33; // rcx
  ULONG_PTR v34; // rdi
  PVOID *v35; // rdx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-338h] BYREF
  int v37; // [rsp+38h] [rbp-330h] BYREF
  ULONG_PTR v38[3]; // [rsp+40h] [rbp-328h] BYREF
  __int64 v39; // [rsp+58h] [rbp-310h] BYREF
  void *Src; // [rsp+60h] [rbp-308h] BYREF
  __int128 v41; // [rsp+68h] [rbp-300h] BYREF
  void (*v42)(void *); // [rsp+78h] [rbp-2F0h]
  __int128 v43; // [rsp+88h] [rbp-2E0h]
  __int64 v44; // [rsp+98h] [rbp-2D0h]
  ULONG_PTR BugCheckParameter3[6]; // [rsp+A0h] [rbp-2C8h] BYREF
  _DWORD v46[24]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v47[512]; // [rsp+130h] [rbp-238h] BYREF

  v39 = a3;
  LODWORD(v38[0]) = a2;
  RegionSize = (unsigned __int16)a3 & 0x8000;
  v9 = 0;
  memset_0(v46, 0, 0x58uLL);
  Src = 0LL;
  v37 = 0;
  v43 = 0LL;
  v44 = 0LL;
  v12 = PtiCurrent(v11, v10);
  v14 = v12;
  v15 = (char *)a1 + 40;
  if ( a1 )
    v16 = *(_QWORD *)v15 - *((_QWORD *)v12 + 64);
  else
    v16 = 0LL;
  if ( a1 )
    v17 = *(_QWORD *)a1;
  else
    v17 = 0LL;
  LOBYTE(v13) = 1;
  if ( !HMValidateHandleNoSecure(v17, v13) )
    return 0LL;
  switch ( a3 )
  {
    case 0LL:
      v21 = 1;
LABEL_20:
      v20 = 769;
      goto LABEL_21;
    case 2LL:
      if ( (*(_BYTE *)(*(_QWORD *)v15 + 19LL) & 1) == 0 )
        return 0LL;
      v21 = 0;
      goto LABEL_20;
    case 4LL:
      SetOrClrWF(0, a1, 0x301u, 1);
      v20 = 770;
      v21 = 1;
      goto LABEL_21;
    case 6LL:
    case 7LL:
      SetOrClrWF(0, a1, 0x301u, 1);
      v20 = 770;
      v21 = 0;
LABEL_21:
      SetOrClrWF(v21, a1, v20, 1);
      break;
    case 32787LL:
      v9 = 1;
      break;
  }
  v22 = 0;
  if ( RegionSize )
  {
    if ( a4 )
    {
      if ( a4 >= MmSystemRangeStart )
      {
        v22 = a4[4] + 20;
        if ( a4[4] >= 0xFFFFFFEC )
          return 0LL;
      }
    }
  }
  if ( v9 )
  {
    v23 = AllocCallbackMessage(88, v9, v22, v47, 1, 0x200uLL);
    RegionSize = (ULONG_PTR)v23;
    if ( !v23 )
      return 0LL;
  }
  else
  {
    v23 = (unsigned __int8 *)v46;
    RegionSize = (ULONG_PTR)v46;
    v46[0] = 88;
  }
  PtiCurrent(v19, v18);
  v41 = 0LL;
  v42 = 0LL;
  if ( v23 != (unsigned __int8 *)v46 && v23 != v47 )
  {
    v27 = PtiCurrent(v26, v25);
    *(_QWORD *)&v41 = *((_QWORD *)v27 + 48);
    *((_QWORD *)v27 + 48) = &v41;
    *((_QWORD *)&v41 + 1) = v23;
    v42 = Win32FreePool;
  }
  *((_QWORD *)v23 + 5) = v16;
  *((_DWORD *)v23 + 12) = v38[0];
  *((_QWORD *)v23 + 7) = v39;
  if ( v22 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v23, a4, v22, (void **)v23 + 10) < 0 )
      goto LABEL_46;
  }
  else
  {
    *((_QWORD *)v23 + 10) = a4;
  }
  *((_QWORD *)v23 + 8) = a5;
  *((_QWORD *)v23 + 9) = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v28 = *((_QWORD *)v14 + 65);
  v43 = *(_OWORD *)(v28 + 64);
  v44 = *(_QWORD *)(v28 + 80);
  *(_QWORD *)(*((_QWORD *)v14 + 65) + 72LL) = v16;
  if ( a1 )
    v29 = *(_QWORD *)a1;
  else
    v29 = 0LL;
  *(_QWORD *)(*((_QWORD *)v14 + 65) + 64LL) = v29;
  if ( a1 )
    v30 = *(_QWORD *)(*(_QWORD *)v15 + 224LL);
  else
    v30 = 0LL;
  *(_QWORD *)(*((_QWORD *)v14 + 65) + 80LL) = v30;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v39);
  EtwTraceBeginCallback(29LL);
  *((_QWORD *)v23 + 2) = 0LL;
  v31 = KeUserModeCallback(29LL, v23, *(unsigned int *)v23, &Src, &v37);
  EtwTraceEndCallback(29LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v39);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v32);
  v33 = *((_QWORD *)v14 + 65);
  *(_OWORD *)(v33 + 64) = v43;
  *(_QWORD *)(v33 + 80) = v44;
  if ( v31 >= 0 && v37 == 24 )
  {
    v38[0] = 0LL;
    RtlCopyFromUser(v38, Src, 8uLL);
    v34 = v38[0];
    BugCheckParameter3[2] = v38[0];
    goto LABEL_47;
  }
LABEL_46:
  v34 = 0LL;
LABEL_47:
  if ( v23 != (unsigned __int8 *)v46 && v23 != v47 )
  {
    v35 = (PVOID *)(v23 + 32);
    if ( *((_QWORD *)v23 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v35, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v41, (__int64)v35);
  }
  return v34;
}
