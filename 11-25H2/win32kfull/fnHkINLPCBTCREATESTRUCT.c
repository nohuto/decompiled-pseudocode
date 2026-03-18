/*
 * XREFs of fnHkINLPCBTCREATESTRUCT @ 0x1401AAFFC
 * Callers:
 *     xxxHkCallHook @ 0x1400C5590 (xxxHkCallHook.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x140148EB4 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140177338 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     GetThreadDesktopWindow @ 0x1401785A0 (GetThreadDesktopWindow.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x14018C75C (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1402583B0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z @ 0x1402B9BB8 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

unsigned __int8 *__fastcall fnHkINLPCBTCREATESTRUCT(int a1, __int64 a2, __int64 *a3, ULONG_PTR a4, int a5)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r12
  unsigned int v8; // r15d
  __int64 v9; // rdx
  __int64 *ThreadDesktopWindow; // r13
  int *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // rax
  unsigned int v17; // eax
  unsigned __int64 v18; // rax
  unsigned int v19; // eax
  unsigned __int8 *result; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct tagTHREADINFO *v25; // rax
  ULONG_PTR v26; // r15
  _OWORD *v27; // rax
  CHAR *v28; // rdx
  void **v29; // r9
  struct _CAPTUREBUF *v30; // rcx
  size_t v31; // r8
  unsigned int v32; // r8d
  int v33; // eax
  int v34; // r8d
  void **v35; // r9
  unsigned int v36; // r8d
  CHAR *v37; // rdx
  int v38; // eax
  size_t v39; // r8
  struct tagTHREADINFO *v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // ebx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rcx
  void *v51; // rbx
  PVOID *v52; // rdx
  int v53; // [rsp+30h] [rbp-4A8h] BYREF
  int *v54; // [rsp+38h] [rbp-4A0h]
  CHAR v55; // [rsp+40h] [rbp-498h]
  __int64 v56; // [rsp+48h] [rbp-490h] BYREF
  int v57; // [rsp+50h] [rbp-488h] BYREF
  __int16 v58; // [rsp+54h] [rbp-484h]
  void *Src; // [rsp+80h] [rbp-458h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp-450h] BYREF
  struct tagTHREADINFO *v61; // [rsp+90h] [rbp-448h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+98h] [rbp-440h] BYREF
  __int128 v63; // [rsp+A8h] [rbp-430h] BYREF
  void (*v64)(void *); // [rsp+B8h] [rbp-420h]
  __int64 v65; // [rsp+C8h] [rbp-410h]
  __int128 v66; // [rsp+E0h] [rbp-3F8h]
  __int64 v67; // [rsp+F0h] [rbp-3E8h]
  _OWORD v68[2]; // [rsp+F8h] [rbp-3E0h] BYREF
  __int128 v69; // [rsp+118h] [rbp-3C0h]
  __int128 v70; // [rsp+128h] [rbp-3B0h]
  __int128 v71; // [rsp+138h] [rbp-3A0h]
  __int64 v72; // [rsp+148h] [rbp-390h]
  __int64 v73; // [rsp+158h] [rbp-380h]
  _OWORD v74[5]; // [rsp+190h] [rbp-348h] BYREF
  __int64 v75; // [rsp+1E0h] [rbp-2F8h]
  int v76; // [rsp+1F0h] [rbp-2E8h] BYREF
  char v77[172]; // [rsp+1F4h] [rbp-2E4h] BYREF
  unsigned __int8 v78[512]; // [rsp+2A0h] [rbp-238h] BYREF

  RegionSize = a4;
  BugCheckParameter3[0] = (ULONG_PTR)a3;
  v65 = a2;
  v53 = a1;
  LODWORD(v6) = 0;
  LODWORD(v7) = 0;
  v8 = 0;
  memset_0(v74, 0, 0x58uLL);
  ThreadDesktopWindow = (__int64 *)GetThreadDesktopWindow(0LL, v9);
  memset_0(&v76, 0, 0xA8uLL);
  v11 = &v76;
  Src = 0LL;
  v57 = 0;
  v66 = 0LL;
  v67 = 0LL;
  v14 = PtiCurrent(v13, v12);
  v61 = v14;
  if ( ThreadDesktopWindow )
    v56 = ThreadDesktopWindow[5] - *((_QWORD *)v14 + 64);
  else
    v56 = 0LL;
  v15 = *a3;
  v16 = *(_QWORD *)(v15 + 56);
  if ( v16 && (*(_DWORD *)(v15 + 84) >> 31 != a5 || v16 >= (unsigned __int64)MmSystemRangeStart) )
  {
    v17 = *(_DWORD *)(v15 + 80);
    v6 = v17 + 2;
    if ( (unsigned int)v6 < v17 )
      goto LABEL_70;
    if ( *(int *)(v15 + 84) < 0 && !a5 )
    {
      v6 *= 2LL;
      if ( v6 > 0xFFFFFFFF )
        goto LABEL_70;
    }
    v8 = 1;
  }
  v18 = *(_QWORD *)(v15 + 64);
  if ( (v18 & 0xFFFFFFFFFFFF0000uLL) != 0
    && (*(_DWORD *)(v15 + 100) >> 31 != a5 || v18 >= (unsigned __int64)MmSystemRangeStart) )
  {
    v19 = *(_DWORD *)(v15 + 96);
    v7 = v19 + 2;
    if ( (unsigned int)v7 < v19 )
      goto LABEL_70;
    if ( *(int *)(v15 + 100) < 0 && !a5 )
    {
      v7 *= 2LL;
      if ( v7 > 0xFFFFFFFF )
        goto LABEL_70;
    }
    ++v8;
  }
  if ( (int)v7 + (int)v6 >= (unsigned int)v6 )
  {
    if ( v8 )
    {
      result = AllocCallbackMessage(168, v8, (unsigned int)(v7 + v6), v78, 1, 0x200uLL);
      v11 = (int *)result;
      v54 = (int *)result;
      if ( !result )
        return result;
    }
    else
    {
      v11 = &v76;
      v54 = &v76;
      memset_0(v77, 0, 0xA4uLL);
      v76 = 168;
    }
    PtiCurrent(v22, v21);
    v63 = 0LL;
    v64 = 0LL;
    if ( v11 != &v76 && v11 != (int *)v78 )
    {
      v25 = PtiCurrent(v24, v23);
      *(_QWORD *)&v63 = *((_QWORD *)v25 + 48);
      *((_QWORD *)v25 + 48) = &v63;
      *((_QWORD *)&v63 + 1) = v11;
      v64 = Win32FreePool;
    }
    *((_QWORD *)v11 + 5) = v56;
    v11[12] = v53;
    *((_QWORD *)v11 + 7) = v65;
    v26 = BugCheckParameter3[0];
    *(_DWORD *)(*(_QWORD *)BugCheckParameter3[0] + 52LL) = 0;
    *(_DWORD *)(*(_QWORD *)v26 + 76LL) = 0;
    v27 = *(_OWORD **)v26;
    *((_OWORD *)v11 + 4) = *(_OWORD *)*(_QWORD *)v26;
    *((_OWORD *)v11 + 5) = v27[1];
    *((_OWORD *)v11 + 6) = v27[2];
    *((_OWORD *)v11 + 7) = v27[3];
    *((_OWORD *)v11 + 8) = v27[4];
    if ( !(_DWORD)v6 )
      goto LABEL_48;
    if ( *(int *)(v15 + 84) < 0 )
    {
      v28 = *(CHAR **)(v15 + 56);
      v55 = *v28;
      if ( v55 == -1 )
      {
        if ( a5 )
        {
          v31 = 3LL;
        }
        else
        {
          v53 = 0;
          v53 = ((unsigned __int16)(*(_DWORD *)v28 >> 8) << 16) | 0xFFFF;
          v31 = 4LL;
          v28 = (CHAR *)&v53;
        }
        v29 = (void **)(v11 + 30);
        v30 = (struct _CAPTUREBUF *)v11;
      }
      else
      {
        v29 = (void **)(v11 + 30);
        v34 = *(_DWORD *)(v15 + 80);
        v28 = *(CHAR **)(v15 + 88);
        v30 = (struct _CAPTUREBUF *)v11;
        if ( !a5 )
        {
          if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v28, 2 * v34 + 2, v29) < 0 )
            goto LABEL_70;
          goto LABEL_48;
        }
        v31 = (unsigned int)(v34 + 1);
      }
    }
    else
    {
      v28 = *(CHAR **)(v15 + 56);
      v58 = *(_WORD *)v28;
      v29 = (void **)(v11 + 30);
      v30 = (struct _CAPTUREBUF *)v11;
      if ( v58 == -1 )
      {
        if ( a5 )
        {
          ++v28;
          v31 = 3LL;
        }
        else
        {
          v31 = 4LL;
        }
      }
      else
      {
        v32 = *(_DWORD *)(v15 + 80);
        v28 = *(CHAR **)(v15 + 88);
        if ( a5 )
        {
          v33 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v28, (v32 >> 1) + 1, v29, 0);
          goto LABEL_45;
        }
        v31 = v32 + 2;
      }
    }
    v33 = CaptureCallbackData(v30, v28, v31, v29);
LABEL_45:
    if ( v33 < 0 )
      goto LABEL_70;
LABEL_48:
    if ( !(_DWORD)v7 )
    {
LABEL_58:
      *((_QWORD *)v11 + 18) = *(_QWORD *)(v26 + 8);
      *((_QWORD *)v11 + 19) = RegionSize;
      v11[40] = a5;
      Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(
        BugCheckParameter3,
        (__int64)ThreadDesktopWindow);
      v40 = v61;
      v41 = *((_QWORD *)v61 + 65);
      v66 = *(_OWORD *)(v41 + 64);
      v67 = *(_QWORD *)(v41 + 80);
      *(_QWORD *)(*((_QWORD *)v61 + 65) + 72LL) = v56;
      if ( ThreadDesktopWindow )
        v42 = *ThreadDesktopWindow;
      else
        v42 = 0LL;
      *(_QWORD *)(*((_QWORD *)v40 + 65) + 64LL) = v42;
      if ( ThreadDesktopWindow )
        v43 = *(_QWORD *)(ThreadDesktopWindow[5] + 224);
      else
        v43 = 0LL;
      *(_QWORD *)(*((_QWORD *)v40 + 65) + 80LL) = v43;
      LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v61);
      EtwTraceBeginCallback(42LL);
      *((_QWORD *)v11 + 2) = 0LL;
      v44 = KeUserModeCallback(42LL, v11, (unsigned int)*v11, &Src, &v57);
      EtwTraceEndCallback(42LL);
      LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v61);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v45);
      v46 = *((_QWORD *)v40 + 65);
      *(_OWORD *)(v46 + 64) = v66;
      *(_QWORD *)(v46 + 80) = v67;
      if ( v44 >= 0 && v57 == 24 )
      {
        v56 = 0LL;
        RtlCopyFromUser(&v56, Src, 8uLL);
        v47 = v56;
        v73 = v56;
        v50 = *((_QWORD *)PtiCurrent(v49, v48) + 69);
        if ( !v50 || (*(_DWORD *)(v50 + 84) & 1) == 0 || *(_OWORD **)(v50 + 96) != v74 )
        {
          v51 = (void *)*((_QWORD *)Src + 2);
          memset_0(v68, 0, 0x58uLL);
          RtlCopyFromUser(v68, v51, 0x58uLL);
          v74[0] = v68[0];
          v74[1] = v68[1];
          v74[2] = v69;
          v74[3] = v70;
          v74[4] = v71;
          v75 = v72;
          *(_QWORD *)(v26 + 8) = v72;
          *(_OWORD *)(*(_QWORD *)v26 + 32LL) = v69;
          goto LABEL_71;
        }
      }
      goto LABEL_70;
    }
    v35 = (void **)(v11 + 32);
    v36 = *(_DWORD *)(v15 + 96);
    v37 = *(CHAR **)(v15 + 104);
    if ( *(int *)(v15 + 100) < 0 )
    {
      if ( !a5 )
      {
        v38 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v37, 2 * v36 + 2, v35);
LABEL_57:
        if ( v38 < 0 )
          goto LABEL_70;
        goto LABEL_58;
      }
      v39 = v36 + 1;
    }
    else
    {
      if ( a5 )
      {
        v38 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v37, (v36 >> 1) + 1, v35, 0);
        goto LABEL_57;
      }
      v39 = v36 + 2;
    }
    v38 = CaptureCallbackData((struct _CAPTUREBUF *)v11, v37, v39, v35);
    goto LABEL_57;
  }
LABEL_70:
  v47 = 0LL;
LABEL_71:
  if ( v11 != &v76 && v11 != (int *)v78 )
  {
    v52 = (PVOID *)(v11 + 8);
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v52, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v63, (__int64)v52);
  }
  return (unsigned __int8 *)v47;
}
