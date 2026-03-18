/*
 * XREFs of SfnINLPMDICREATESTRUCT @ 0x1402BAD10
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
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x14018C75C (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1402583B0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z @ 0x1402B9BB8 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

unsigned __int8 *__fastcall SfnINLPMDICREATESTRUCT(
        __int64 a1,
        int a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r12
  unsigned int v10; // r13d
  int v11; // r15d
  int *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  unsigned __int64 v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned __int8 *result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct tagTHREADINFO *v24; // rax
  ULONG_PTR v25; // r13
  void **v26; // r9
  unsigned int v27; // r8d
  CHAR *v28; // rdx
  int v29; // eax
  size_t v30; // r8
  void **v31; // r9
  unsigned int v32; // r8d
  CHAR *v33; // rdx
  int v34; // eax
  size_t v35; // r8
  __int64 *v36; // rsi
  struct tagTHREADINFO *v37; // r14
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // esi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rsi
  PVOID *v45; // rdx
  int v46; // [rsp+30h] [rbp-378h] BYREF
  __int64 *v47; // [rsp+38h] [rbp-370h] BYREF
  int *v48; // [rsp+40h] [rbp-368h]
  int v49; // [rsp+48h] [rbp-360h]
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-348h] BYREF
  struct tagTHREADINFO *v51; // [rsp+68h] [rbp-340h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+70h] [rbp-338h] BYREF
  void *Src; // [rsp+80h] [rbp-328h] BYREF
  __int128 v54; // [rsp+88h] [rbp-320h] BYREF
  void (*v55)(void *); // [rsp+98h] [rbp-310h]
  __int128 v56; // [rsp+A8h] [rbp-300h]
  __int64 v57; // [rsp+B8h] [rbp-2F0h]
  __int64 v58; // [rsp+C0h] [rbp-2E8h]
  int v59; // [rsp+E0h] [rbp-2C8h] BYREF
  char v60[140]; // [rsp+E4h] [rbp-2C4h] BYREF
  unsigned __int8 v61[512]; // [rsp+170h] [rbp-238h] BYREF

  RegionSize = a3;
  v49 = a2;
  v47 = (__int64 *)a1;
  LODWORD(v8) = 0;
  LODWORD(v9) = 0;
  v10 = 0;
  v11 = a7 & 1;
  memset_0(&v59, 0, 0x90uLL);
  v12 = &v59;
  Src = 0LL;
  v46 = 0;
  v56 = 0LL;
  v57 = 0LL;
  v15 = PtiCurrent(v14, v13);
  v51 = v15;
  if ( v47 )
    BugCheckParameter3[0] = v47[5] - *((_QWORD *)v15 + 64);
  else
    BugCheckParameter3[0] = 0LL;
  v16 = *(_QWORD *)(a4 + 8);
  if ( v16 && (v16 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 60) >> 31 != v11) )
  {
    v17 = *(_DWORD *)(a4 + 56);
    v8 = v17 + 2;
    if ( (unsigned int)v8 < v17 )
      goto LABEL_57;
    if ( *(int *)(a4 + 60) < 0 && (a7 & 1) == 0 )
    {
      v8 *= 2LL;
      if ( v8 > 0xFFFFFFFF )
        goto LABEL_57;
    }
    v10 = 1;
  }
  if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) != 0
    && (*(_QWORD *)a4 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 76) >> 31 != v11) )
  {
    v18 = *(_DWORD *)(a4 + 72);
    v9 = v18 + 2;
    if ( (unsigned int)v9 < v18 )
      goto LABEL_57;
    if ( *(int *)(a4 + 76) < 0 && (a7 & 1) == 0 )
    {
      v9 *= 2LL;
      if ( v9 > 0xFFFFFFFF )
        goto LABEL_57;
    }
    ++v10;
  }
  if ( (int)v9 + (int)v8 >= (unsigned int)v8 )
  {
    if ( v10 )
    {
      result = AllocCallbackMessage(144, v10, (unsigned int)(v9 + v8), v61, 1, 0x200uLL);
      v12 = (int *)result;
      v48 = (int *)result;
      if ( !result )
        return result;
    }
    else
    {
      v12 = &v59;
      v48 = &v59;
      memset_0(v60, 0, sizeof(v60));
      v59 = 144;
    }
    PtiCurrent(v21, v20);
    v54 = 0LL;
    v55 = 0LL;
    if ( v12 != &v59 && v12 != (int *)v61 )
    {
      v24 = PtiCurrent(v23, v22);
      *(_QWORD *)&v54 = *((_QWORD *)v24 + 48);
      *((_QWORD *)v24 + 48) = &v54;
      *((_QWORD *)&v54 + 1) = v12;
      v55 = Win32FreePool;
    }
    v25 = BugCheckParameter3[0];
    *((_QWORD *)v12 + 5) = BugCheckParameter3[0];
    v12[12] = v49;
    *((_QWORD *)v12 + 7) = RegionSize;
    *(_DWORD *)(a4 + 44) = 0;
    *((_OWORD *)v12 + 4) = *(_OWORD *)a4;
    *((_OWORD *)v12 + 5) = *(_OWORD *)(a4 + 16);
    *((_OWORD *)v12 + 6) = *(_OWORD *)(a4 + 32);
    *((_QWORD *)v12 + 14) = *(_QWORD *)(a4 + 48);
    if ( !(_DWORD)v8 )
      goto LABEL_38;
    v26 = (void **)(v12 + 18);
    v27 = *(_DWORD *)(a4 + 56);
    v28 = *(CHAR **)(a4 + 64);
    if ( *(int *)(a4 + 60) < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v29 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, v28, 2 * v27 + 2, v26);
LABEL_37:
        if ( v29 < 0 )
          goto LABEL_57;
LABEL_38:
        if ( !(_DWORD)v9 )
        {
LABEL_48:
          *((_QWORD *)v12 + 15) = a5;
          *((_QWORD *)v12 + 16) = a6;
          v36 = v47;
          Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v47);
          v37 = v51;
          v38 = *((_QWORD *)v51 + 65);
          v56 = *(_OWORD *)(v38 + 64);
          v57 = *(_QWORD *)(v38 + 80);
          *(_QWORD *)(*((_QWORD *)v51 + 65) + 72LL) = v25;
          if ( v36 )
            v39 = *v36;
          else
            v39 = 0LL;
          *(_QWORD *)(*((_QWORD *)v37 + 65) + 64LL) = v39;
          if ( v36 )
            v40 = *(_QWORD *)(v36[5] + 224);
          else
            v40 = 0LL;
          *(_QWORD *)(*((_QWORD *)v37 + 65) + 80LL) = v40;
          LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v51);
          EtwTraceBeginCallback(15LL);
          *((_QWORD *)v12 + 2) = 0LL;
          v41 = KeUserModeCallback(15LL, v12, (unsigned int)*v12, &Src, &v46);
          EtwTraceEndCallback(15LL);
          LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v51);
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v42);
          v43 = *((_QWORD *)v37 + 65);
          *(_OWORD *)(v43 + 64) = v56;
          *(_QWORD *)(v43 + 80) = v57;
          if ( v41 >= 0 && v46 == 24 )
          {
            v47 = 0LL;
            RtlCopyFromUser(&v47, Src, 8uLL);
            v44 = (__int64)v47;
            v58 = (__int64)v47;
            goto LABEL_58;
          }
          goto LABEL_57;
        }
        v31 = (void **)(v12 + 16);
        v32 = *(_DWORD *)(a4 + 72);
        v33 = *(CHAR **)(a4 + 80);
        if ( *(int *)(a4 + 76) < 0 )
        {
          if ( (a7 & 1) == 0 )
          {
            v34 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, v33, 2 * v32 + 2, v31);
LABEL_47:
            if ( v34 < 0 )
              goto LABEL_57;
            goto LABEL_48;
          }
          v35 = v32 + 1;
        }
        else
        {
          if ( (a7 & 1) != 0 )
          {
            v34 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v33, (v32 >> 1) + 1, v31, 0);
            goto LABEL_47;
          }
          v35 = v32 + 2;
        }
        v34 = CaptureCallbackData((struct _CAPTUREBUF *)v12, v33, v35, v31);
        goto LABEL_47;
      }
      v30 = v27 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v29 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v28, (v27 >> 1) + 1, v26, 0);
        goto LABEL_37;
      }
      v30 = v27 + 2;
    }
    v29 = CaptureCallbackData((struct _CAPTUREBUF *)v12, v28, v30, v26);
    goto LABEL_37;
  }
LABEL_57:
  v44 = 0LL;
LABEL_58:
  if ( v12 != &v59 && v12 != (int *)v61 )
  {
    v45 = (PVOID *)(v12 + 8);
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v45, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v54, (__int64)v45);
  }
  return (unsigned __int8 *)v44;
}
