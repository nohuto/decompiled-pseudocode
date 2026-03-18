/*
 * XREFs of SfnCOPYDATA @ 0x1401306F0
 * Callers:
 *     xxxDefWindowProc @ 0x1400C36C0 (xxxDefWindowProc.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1400C4340 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxHkCallHook @ 0x1400C5590 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x14012B834 (xxxSendMessageCallback.c)
 *     ?xxxSendShutdownData@@YA_JPEAUHWND__@@_K@Z @ 0x1401303C4 (-xxxSendShutdownData@@YA_JPEAUHWND__@@_K@Z.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A55C (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140283430 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x140148EB4 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1402583B0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

ULONG_PTR __fastcall SfnCOPYDATA(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // r14
  __int64 v14; // r15
  unsigned int v15; // r12d
  unsigned int *v16; // rbx
  ULONG_PTR v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagTHREADINFO *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // esi
  __int64 v28; // rdx
  __int64 v29; // rcx
  ULONG_PTR v30; // rsi
  unsigned int v31; // [rsp+30h] [rbp-358h]
  ULONG_PTR v32; // [rsp+38h] [rbp-350h] BYREF
  _DWORD v33[6]; // [rsp+40h] [rbp-348h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-330h] BYREF
  __int64 v35; // [rsp+60h] [rbp-328h] BYREF
  void *Src; // [rsp+68h] [rbp-320h] BYREF
  __int128 v37; // [rsp+70h] [rbp-318h] BYREF
  void (*v38)(void *); // [rsp+80h] [rbp-308h]
  __int128 v39; // [rsp+90h] [rbp-2F8h]
  __int64 v40; // [rsp+A0h] [rbp-2E8h]
  ULONG_PTR BugCheckParameter3[7]; // [rsp+A8h] [rbp-2E0h] BYREF
  _DWORD v42[28]; // [rsp+E0h] [rbp-2A8h] BYREF
  _BYTE v43[512]; // [rsp+150h] [rbp-238h] BYREF

  v35 = a3;
  LODWORD(v32) = a2;
  memset_0(v42, 0, sizeof(v42));
  Src = 0LL;
  v33[0] = 0;
  v39 = 0LL;
  v40 = 0LL;
  v10 = PtiCurrent(v9, v8);
  v13 = v10;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v10 + 64);
  else
    v14 = 0LL;
  if ( a4 )
  {
    v31 = *(_DWORD *)(a4 + 8);
    v15 = v31;
    v17 = (v31 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
    RegionSize = v17;
    if ( v17 <= 0x800 )
    {
      if ( v17 + 120 <= 0x200 )
      {
        v16 = (unsigned int *)v43;
        memset_0(v43, 0, sizeof(v43));
      }
      else
      {
        v16 = (unsigned int *)Win32AllocPoolWithQuotaZInit((unsigned int)(v17 + 120), 1667461973LL);
        if ( !v16 )
          return 0LL;
      }
      *((_QWORD *)v16 + 2) = v16 + 30;
      *((_QWORD *)v16 + 4) = 0LL;
      *v16 = RegionSize + 120;
    }
    else
    {
      v18 = Win32AllocPoolWithQuotaZInit(120LL, 1667461973LL);
      v16 = (unsigned int *)v18;
      if ( !v18 )
        return 0LL;
      v19 = (_QWORD *)(v18 + 32);
      *(_QWORD *)(v18 + 32) = 0LL;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v18 + 32), 0LL, &RegionSize, 0x1000u, 4u) < 0 )
      {
        Win32FreePool(v16);
        return 0LL;
      }
      *((_QWORD *)v16 + 2) = *v19;
      *v16 = 120;
      v15 = v31;
    }
    v16[1] = RegionSize;
    v16[2] = 0;
    v16[6] = 112;
    goto LABEL_17;
  }
  v15 = 0;
  v16 = v42;
  v42[0] = 112;
LABEL_17:
  PtiCurrent(v12, v11);
  v37 = 0LL;
  v38 = 0LL;
  if ( v16 != v42 && v16 != (unsigned int *)v43 )
  {
    v23 = PtiCurrent(v22, v21);
    *(_QWORD *)&v37 = *((_QWORD *)v23 + 48);
    *((_QWORD *)v23 + 48) = &v37;
    *((_QWORD *)&v37 + 1) = v16;
    v38 = Win32FreePool;
  }
  *((_QWORD *)v16 + 5) = v14;
  v16[12] = v32;
  *((_QWORD *)v16 + 7) = v35;
  if ( a4 )
  {
    v16[16] = 1;
    *(_DWORD *)(a4 + 12) = 0;
    *(_OWORD *)(v16 + 18) = *(_OWORD *)a4;
    *((_QWORD *)v16 + 11) = *(_QWORD *)(a4 + 16);
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v16, *(void **)(a4 + 16), v15, (void **)v16 + 11) < 0 )
      goto LABEL_33;
  }
  else
  {
    v16[16] = 0;
  }
  *((_QWORD *)v16 + 12) = a5;
  *((_QWORD *)v16 + 13) = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v24 = *((_QWORD *)v13 + 65);
  v39 = *(_OWORD *)(v24 + 64);
  v40 = *(_QWORD *)(v24 + 80);
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 72LL) = v14;
  if ( a1 )
    v25 = *a1;
  else
    v25 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 64LL) = v25;
  if ( a1 )
    v26 = *(_QWORD *)(a1[5] + 224);
  else
    v26 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 80LL) = v26;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v35);
  EtwTraceBeginCallback(0LL);
  *((_QWORD *)v16 + 2) = 0LL;
  v27 = KeUserModeCallback(0LL, v16, *v16, &Src, v33);
  EtwTraceEndCallback(0LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v35);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v28);
  v29 = *((_QWORD *)v13 + 65);
  *(_OWORD *)(v29 + 64) = v39;
  *(_QWORD *)(v29 + 80) = v40;
  if ( v27 >= 0 && v33[0] == 24 )
  {
    v32 = 0LL;
    RtlCopyFromUser(&v32, Src, 8uLL);
    v30 = v32;
    BugCheckParameter3[2] = v32;
    goto LABEL_34;
  }
LABEL_33:
  v30 = 0LL;
LABEL_34:
  if ( v16 != v42 && v16 != (unsigned int *)v43 )
  {
    if ( *((_QWORD *)v16 + 4) )
    {
      v32 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v16 + 4, &v32, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v37);
  }
  return v30;
}
