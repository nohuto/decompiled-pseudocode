/*
 * XREFs of SfnINSTRINGNULL @ 0x140170AC0
 * Callers:
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1400635B4 (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
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
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x14018C75C (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1402583B0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z @ 0x1402B9BB8 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

ULONG_PTR __fastcall SfnINSTRINGNULL(__int64 *a1, int a2, __int64 a3, int *a4, __int64 a5, __int64 a6, char a7)
{
  int v9; // r14d
  int *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v14; // r15
  unsigned int v15; // r13d
  unsigned __int64 v16; // rdx
  unsigned int v17; // r14d
  ULONG_PTR v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct tagTHREADINFO *v25; // rax
  ULONG_PTR v26; // r14
  void **v27; // r9
  unsigned int v28; // r8d
  CHAR *v29; // rdx
  int v30; // eax
  size_t v31; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // esi
  __int64 v37; // rdx
  __int64 v38; // rcx
  ULONG_PTR v39; // rsi
  PVOID *v40; // rdx
  ULONG_PTR v41; // [rsp+30h] [rbp-348h] BYREF
  int v42; // [rsp+38h] [rbp-340h] BYREF
  int *v43; // [rsp+40h] [rbp-338h]
  int v44; // [rsp+48h] [rbp-330h]
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-318h] BYREF
  __int64 v46; // [rsp+68h] [rbp-310h] BYREF
  void *Src; // [rsp+70h] [rbp-308h] BYREF
  __int128 v48; // [rsp+78h] [rbp-300h] BYREF
  void (*v49)(void *); // [rsp+88h] [rbp-2F0h]
  __int128 v50; // [rsp+98h] [rbp-2E0h]
  __int64 v51; // [rsp+A8h] [rbp-2D0h]
  ULONG_PTR BugCheckParameter3[6]; // [rsp+B0h] [rbp-2C8h] BYREF
  int v53; // [rsp+E0h] [rbp-298h] BYREF
  char v54[92]; // [rsp+E4h] [rbp-294h] BYREF
  _BYTE v55[512]; // [rsp+140h] [rbp-238h] BYREF
  int v56; // [rsp+3B0h] [rbp+38h]

  v46 = a3;
  v44 = a2;
  v9 = a7 & 1;
  v56 = v9;
  memset_0(&v53, 0, 0x58uLL);
  v10 = &v53;
  Src = 0LL;
  v42 = 0;
  v50 = 0LL;
  v51 = 0LL;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v12, v11);
  if ( CurrentThreadNonPaged )
    v14 = *CurrentThreadNonPaged;
  else
    v14 = 0LL;
  if ( a1 )
    v41 = a1[5] - *(_QWORD *)(v14 + 512);
  else
    v41 = 0LL;
  v15 = 0;
  LODWORD(v16) = 0;
  if ( a4 && (*((_QWORD *)a4 + 1) >= (unsigned __int64)MmSystemRangeStart || (unsigned int)a4[1] >> 31 != v9) )
  {
    v15 = 1;
    v16 = (unsigned int)(*a4 + 2);
    if ( (unsigned int)v16 < *a4 )
      goto LABEL_54;
    if ( a4[1] < 0 && !v9 )
    {
      v16 *= 2LL;
      if ( v16 > 0xFFFFFFFF )
        goto LABEL_54;
    }
  }
  if ( v15 )
  {
    v17 = 8 * v15 + 88;
    v18 = ((unsigned int)v16 + 7LL * v15) & 0xFFFFFFFFFFFFFFF8uLL;
    RegionSize = v18;
    if ( v18 <= 0x800 )
    {
      if ( v18 + v17 <= 0x200 )
      {
        v10 = (int *)v55;
        memset_0(v55, 0, sizeof(v55));
      }
      else
      {
        v10 = (int *)Win32AllocPoolWithQuotaZInit((unsigned int)v18 + v17, 1667461973LL);
        if ( !v10 )
          return 0LL;
      }
      *((_QWORD *)v10 + 2) = (char *)v10 + v17;
      *((_QWORD *)v10 + 4) = 0LL;
      v21 = v17 + (unsigned int)RegionSize;
      *v10 = v21;
    }
    else
    {
      v19 = Win32AllocPoolWithQuotaZInit(v17, 1667461973LL);
      v10 = (int *)v19;
      if ( !v19 )
        return 0LL;
      *(_QWORD *)(v19 + 32) = 0LL;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v19 + 32), 0LL, &RegionSize, 0x1000u, 4u) < 0 )
      {
        Win32FreePool(v10);
        return 0LL;
      }
      *((_QWORD *)v10 + 2) = *((_QWORD *)v10 + 4);
      *v10 = v17;
    }
    v10[1] = RegionSize;
    v10[2] = 0;
    v10[6] = 88;
    v43 = v10;
  }
  else
  {
    v10 = &v53;
    v43 = &v53;
    memset_0(v54, 0, 0x54uLL);
    v53 = 88;
  }
  W32GetCurrentThreadNonPaged(v21, v20);
  v48 = 0LL;
  v49 = 0LL;
  if ( v10 != &v53 && v10 != (int *)v55 )
  {
    v25 = PtiCurrent(v24, v23);
    *(_QWORD *)&v48 = *((_QWORD *)v25 + 48);
    *((_QWORD *)v25 + 48) = &v48;
    *((_QWORD *)&v48 + 1) = v10;
    v49 = Win32FreePool;
  }
  v26 = v41;
  *((_QWORD *)v10 + 5) = v41;
  v10[12] = v44;
  *((_QWORD *)v10 + 7) = v46;
  if ( v15 )
  {
    v27 = (void **)(v10 + 20);
    v28 = *a4;
    v29 = (CHAR *)*((_QWORD *)a4 + 1);
    if ( a4[1] < 0 )
    {
      if ( !v56 )
      {
        v30 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v10, v29, 2 * v28 + 2, v27);
LABEL_39:
        if ( v30 < 0 )
          goto LABEL_54;
        goto LABEL_45;
      }
      v31 = v28 + 1;
    }
    else
    {
      if ( v56 )
      {
        v30 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v10, (PCWCH)v29, (v28 >> 1) + 1, v27, 0);
        goto LABEL_39;
      }
      v31 = v28 + 2;
    }
    v30 = CaptureCallbackData((struct _CAPTUREBUF *)v10, v29, v31, v27);
    goto LABEL_39;
  }
  if ( a4 )
    v32 = *((_QWORD *)a4 + 1);
  else
    v32 = 0LL;
  *((_QWORD *)v10 + 10) = v32;
LABEL_45:
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v33 = *(_QWORD *)(v14 + 520);
  v50 = *(_OWORD *)(v33 + 64);
  v51 = *(_QWORD *)(v33 + 80);
  *(_QWORD *)(*(_QWORD *)(v14 + 520) + 72LL) = v26;
  if ( a1 )
    v34 = *a1;
  else
    v34 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 520) + 64LL) = v34;
  if ( a1 )
    v35 = *(_QWORD *)(a1[5] + 224);
  else
    v35 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 520) + 80LL) = v35;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v46);
  EtwTraceBeginCallback(27LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v36 = KeUserModeCallback(27LL, v10, (unsigned int)*v10, &Src, &v42);
  EtwTraceEndCallback(27LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v46);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v37);
  v38 = *(_QWORD *)(v14 + 520);
  *(_OWORD *)(v38 + 64) = v50;
  *(_QWORD *)(v38 + 80) = v51;
  if ( v36 >= 0 && v42 == 24 )
  {
    v41 = 0LL;
    RtlCopyFromUser(&v41, Src, 8uLL);
    v39 = v41;
    BugCheckParameter3[2] = v41;
    goto LABEL_55;
  }
LABEL_54:
  v39 = 0LL;
LABEL_55:
  if ( v10 != &v53 && v10 != (int *)v55 )
  {
    v40 = (PVOID *)(v10 + 8);
    if ( *((_QWORD *)v10 + 4) )
    {
      v41 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v40, &v41, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v48, (__int64)v40);
  }
  return v39;
}
