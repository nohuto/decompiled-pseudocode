/*
 * XREFs of SfnINSTRING @ 0x140062E70
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
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140177338 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x14018C75C (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1402583B0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z @ 0x1402B9BB8 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

int *__fastcall SfnINSTRING(__int64 *a1, int a2, __int64 a3, int *a4, __int64 a5, __int64 a6, char a7)
{
  int v9; // r12d
  int *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  struct tagTHREADINFO *v14; // r15
  __int64 v15; // r13
  unsigned int v16; // r12d
  unsigned __int64 v17; // rcx
  int *result; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagTHREADINFO *v23; // rax
  void **v24; // r9
  unsigned int v25; // r8d
  CHAR *v26; // rdx
  int v27; // eax
  size_t v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // esi
  __int64 v34; // rdx
  __int64 v35; // rcx
  ULONG_PTR v36; // rsi
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-338h] BYREF
  int v38; // [rsp+38h] [rbp-330h] BYREF
  ULONG_PTR v39[3]; // [rsp+40h] [rbp-328h] BYREF
  __int64 v40; // [rsp+58h] [rbp-310h] BYREF
  void *Src; // [rsp+60h] [rbp-308h] BYREF
  __int128 v42; // [rsp+68h] [rbp-300h] BYREF
  void (*v43)(void *); // [rsp+78h] [rbp-2F0h]
  __int128 v44; // [rsp+88h] [rbp-2E0h]
  __int64 v45; // [rsp+98h] [rbp-2D0h]
  ULONG_PTR BugCheckParameter3[6]; // [rsp+A0h] [rbp-2C8h] BYREF
  int v47; // [rsp+D0h] [rbp-298h] BYREF
  _BYTE v48[92]; // [rsp+D4h] [rbp-294h] BYREF
  unsigned __int8 v49[512]; // [rsp+130h] [rbp-238h] BYREF
  int v50; // [rsp+3A0h] [rbp+38h]

  v40 = a3;
  LODWORD(v39[0]) = a2;
  v9 = a7 & 1;
  v50 = v9;
  memset_0(&v47, 0, 0x58uLL);
  v10 = &v47;
  Src = 0LL;
  v38 = 0;
  v44 = 0LL;
  v45 = 0LL;
  v13 = PtiCurrent(v12, v11);
  v14 = v13;
  if ( a1 )
    v15 = a1[5] - *((_QWORD *)v13 + 64);
  else
    v15 = 0LL;
  if ( !a4 || *((_QWORD *)a4 + 1) < (unsigned __int64)MmSystemRangeStart && (unsigned int)a4[1] >> 31 == v9 )
  {
    LODWORD(v17) = 0;
    v16 = 0;
  }
  else
  {
    v16 = 1;
    v17 = (unsigned int)(*a4 + 2);
    if ( (unsigned int)v17 < *a4 )
      goto LABEL_44;
    if ( a4[1] < 0 && !v50 )
    {
      v17 *= 2LL;
      if ( v17 > 0xFFFFFFFF )
        goto LABEL_44;
    }
  }
  if ( v16 )
  {
    result = (int *)AllocCallbackMessage(0x58u, v16, (unsigned int)v17, v49, 1, 0x200uLL);
    v10 = result;
    RegionSize = (ULONG_PTR)result;
    if ( !result )
      return result;
  }
  else
  {
    v10 = &v47;
    RegionSize = (ULONG_PTR)&v47;
    memset_0(v48, 0, 0x54uLL);
    v47 = 88;
  }
  PtiCurrent(v20, v19);
  v42 = 0LL;
  v43 = 0LL;
  if ( v10 != &v47 && v10 != (int *)v49 )
  {
    v23 = PtiCurrent(v22, v21);
    *(_QWORD *)&v42 = *((_QWORD *)v23 + 48);
    *((_QWORD *)v23 + 48) = &v42;
    *((_QWORD *)&v42 + 1) = v10;
    v43 = Win32FreePool;
  }
  *((_QWORD *)v10 + 5) = v15;
  v10[12] = v39[0];
  *((_QWORD *)v10 + 7) = v40;
  if ( v16 )
  {
    v24 = (void **)(v10 + 20);
    v25 = *a4;
    v26 = (CHAR *)*((_QWORD *)a4 + 1);
    if ( a4[1] < 0 )
    {
      if ( !v50 )
      {
        v27 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v10, v26, 2 * v25 + 2, v24);
LABEL_29:
        if ( v27 < 0 )
          goto LABEL_44;
        goto LABEL_35;
      }
      v28 = v25 + 1;
    }
    else
    {
      if ( v50 )
      {
        v27 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v10, (PCWCH)v26, (v25 >> 1) + 1, v24, 0);
        goto LABEL_29;
      }
      v28 = v25 + 2;
    }
    v27 = CaptureCallbackData((struct _CAPTUREBUF *)v10, v26, v28, v24);
    goto LABEL_29;
  }
  if ( a4 )
    v29 = *((_QWORD *)a4 + 1);
  else
    v29 = 0LL;
  *((_QWORD *)v10 + 10) = v29;
LABEL_35:
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v30 = *((_QWORD *)v14 + 65);
  v44 = *(_OWORD *)(v30 + 64);
  v45 = *(_QWORD *)(v30 + 80);
  *(_QWORD *)(*((_QWORD *)v14 + 65) + 72LL) = v15;
  if ( a1 )
    v31 = *a1;
  else
    v31 = 0LL;
  *(_QWORD *)(*((_QWORD *)v14 + 65) + 64LL) = v31;
  if ( a1 )
    v32 = *(_QWORD *)(a1[5] + 224);
  else
    v32 = 0LL;
  *(_QWORD *)(*((_QWORD *)v14 + 65) + 80LL) = v32;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v40);
  EtwTraceBeginCallback(26LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v33 = KeUserModeCallback(26LL, v10, (unsigned int)*v10, &Src, &v38);
  EtwTraceEndCallback(26LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v40);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v34);
  v35 = *((_QWORD *)v14 + 65);
  *(_OWORD *)(v35 + 64) = v44;
  *(_QWORD *)(v35 + 80) = v45;
  if ( v33 >= 0 && v38 == 24 )
  {
    v39[0] = 0LL;
    RtlCopyFromUser(v39, Src, 8uLL);
    v36 = v39[0];
    BugCheckParameter3[2] = v39[0];
    goto LABEL_45;
  }
LABEL_44:
  v36 = 0LL;
LABEL_45:
  if ( v10 != &v47 && v10 != (int *)v49 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v42);
  }
  return (int *)v36;
}
