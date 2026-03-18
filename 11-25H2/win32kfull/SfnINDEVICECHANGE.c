/*
 * XREFs of SfnINDEVICECHANGE @ 0x140176990
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
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1402583B0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

ULONG_PTR __fastcall SfnINDEVICECHANGE(
        __int64 *a1,
        int a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v13; // rsi
  __int64 v14; // r12
  unsigned int v15; // r13d
  ULONG_PTR v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int *v20; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct tagTHREADINFO *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // r14d
  __int64 v29; // rdx
  __int64 v30; // rcx
  ULONG_PTR v31; // rsi
  PVOID *v32; // rdx
  ULONG_PTR v33; // [rsp+30h] [rbp-348h] BYREF
  int v34; // [rsp+38h] [rbp-340h] BYREF
  ULONG_PTR v35[3]; // [rsp+40h] [rbp-338h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-320h] BYREF
  __int64 v37; // [rsp+60h] [rbp-318h] BYREF
  void *Src; // [rsp+68h] [rbp-310h] BYREF
  __int128 v39; // [rsp+70h] [rbp-308h] BYREF
  void (*v40)(void *); // [rsp+80h] [rbp-2F8h]
  __int128 v41; // [rsp+90h] [rbp-2E8h]
  __int64 v42; // [rsp+A0h] [rbp-2D8h]
  ULONG_PTR BugCheckParameter3[7]; // [rsp+A8h] [rbp-2D0h] BYREF
  _BYTE v44[96]; // [rsp+E0h] [rbp-298h] BYREF
  _BYTE v45[512]; // [rsp+140h] [rbp-238h] BYREF
  int v46; // [rsp+3B0h] [rbp+38h]

  v37 = a3;
  LODWORD(v35[0]) = a2;
  v46 = a7 & 1;
  v9 = (unsigned __int16)a3 & 0x8000;
  memset_0(v44, 0, sizeof(v44));
  Src = 0LL;
  v34 = 0;
  v41 = 0LL;
  v42 = 0LL;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v11, v10);
  if ( CurrentThreadNonPaged )
    v13 = *CurrentThreadNonPaged;
  else
    v13 = 0LL;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(v13 + 512);
  else
    v14 = 0LL;
  v15 = 0;
  if ( v9 && a4 && a4 >= MmSystemRangeStart )
    v15 = *a4;
  v16 = (v15 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  RegionSize = v16;
  if ( v16 <= 0x800 )
  {
    if ( v16 + 104 <= 0x200 )
    {
      v20 = (unsigned int *)v45;
      memset_0(v45, 0, sizeof(v45));
    }
    else
    {
      v20 = (unsigned int *)Win32AllocPoolWithQuotaZInit((unsigned int)(v16 + 104), 1667461973LL);
      if ( !v20 )
        goto LABEL_13;
    }
    *((_QWORD *)v20 + 2) = v20 + 26;
    *((_QWORD *)v20 + 4) = 0LL;
    *v20 = RegionSize + 104;
  }
  else
  {
    v17 = Win32AllocPoolWithQuotaZInit(104LL, 1667461973LL);
    v20 = (unsigned int *)v17;
    if ( !v17 )
    {
LABEL_13:
      v20 = 0LL;
      goto LABEL_23;
    }
    *(_QWORD *)(v17 + 32) = 0LL;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v17 + 32), 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    {
      Win32FreePool(v20);
      goto LABEL_13;
    }
    *((_QWORD *)v20 + 2) = *((_QWORD *)v20 + 4);
    *v20 = 104;
  }
  v20[1] = RegionSize;
  v20[2] = 0;
  v20[6] = 96;
LABEL_23:
  v33 = (ULONG_PTR)v20;
  if ( !v20 )
    return 0LL;
  W32GetCurrentThreadNonPaged(v19, v18);
  v39 = 0LL;
  v40 = 0LL;
  if ( v20 != (unsigned int *)v44 && v20 != (unsigned int *)v45 )
  {
    v24 = PtiCurrent(v23, v22);
    *(_QWORD *)&v39 = *((_QWORD *)v24 + 48);
    *((_QWORD *)v24 + 48) = &v39;
    *((_QWORD *)&v39 + 1) = v20;
    v40 = Win32FreePool;
  }
  *((_QWORD *)v20 + 5) = v14;
  v20[12] = v35[0];
  *((_QWORD *)v20 + 7) = v37;
  if ( v15 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v20, a4, *a4, (void **)v20 + 10) < 0 )
      goto LABEL_41;
  }
  else
  {
    *((_QWORD *)v20 + 10) = a4;
  }
  v20[22] = v46;
  *((_QWORD *)v20 + 8) = a5;
  *((_QWORD *)v20 + 9) = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v25 = *(_QWORD *)(v13 + 520);
  v41 = *(_OWORD *)(v25 + 64);
  v42 = *(_QWORD *)(v25 + 80);
  *(_QWORD *)(*(_QWORD *)(v13 + 520) + 72LL) = v14;
  if ( a1 )
    v26 = *a1;
  else
    v26 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 520) + 64LL) = v26;
  if ( a1 )
    v27 = *(_QWORD *)(a1[5] + 224);
  else
    v27 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 520) + 80LL) = v27;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v37);
  EtwTraceBeginCallback(28LL);
  *((_QWORD *)v20 + 2) = 0LL;
  v28 = KeUserModeCallback(28LL, v20, *v20, &Src, &v34);
  EtwTraceEndCallback(28LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v37);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v29);
  v30 = *(_QWORD *)(v13 + 520);
  *(_OWORD *)(v30 + 64) = v41;
  *(_QWORD *)(v30 + 80) = v42;
  if ( v28 >= 0 && v34 == 24 )
  {
    v35[0] = 0LL;
    RtlCopyFromUser(v35, Src, 8uLL);
    v31 = v35[0];
    BugCheckParameter3[2] = v35[0];
    goto LABEL_42;
  }
LABEL_41:
  v31 = 0LL;
LABEL_42:
  if ( v20 != (unsigned int *)v44 && v20 != (unsigned int *)v45 )
  {
    v32 = (PVOID *)(v20 + 8);
    if ( *((_QWORD *)v20 + 4) )
    {
      v33 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v32, &v33, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v39, (__int64)v32);
  }
  return v31;
}
