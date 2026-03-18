/*
 * XREFs of SfnINLPCREATESTRUCT @ 0x140258460
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
 *     ?GetMultiByteSizeFromUnicodeString@@YAHU_LARGE_STRING@@PEAK@Z @ 0x1402B9DCC (-GetMultiByteSizeFromUnicodeString@@YAHU_LARGE_STRING@@PEAK@Z.c)
 *     ?GetProcessACP@@YAGPEAUtagPROCESSINFO@@@Z @ 0x1402B9E24 (-GetProcessACP@@YAGPEAUtagPROCESSINFO@@@Z.c)
 *     Feature_CaptionTruncatedUTF8CodePage__private_IsEnabledDeviceUsageNoInline @ 0x1402BA358 (Feature_CaptionTruncatedUTF8CodePage__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

unsigned __int8 *__fastcall SfnINLPCREATESTRUCT(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned int v9; // r12d
  int v10; // r15d
  int *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  ULONG_PTR v15; // r14
  unsigned __int64 v16; // rdx
  unsigned int v17; // ecx
  unsigned int v18; // edx
  unsigned __int64 v19; // rcx
  int v20; // eax
  unsigned __int64 v21; // rdx
  unsigned int v22; // edx
  int v23; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v25; // edx
  unsigned __int8 *result; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct tagTHREADINFO *v31; // rax
  ULONG_PTR v32; // r12
  WCHAR *v33; // rdx
  void **v34; // r9
  struct _CAPTUREBUF *v35; // rcx
  size_t v36; // r8
  unsigned int v37; // r8d
  int v38; // r12d
  WCHAR *v39; // rax
  int v40; // r8d
  void **v41; // r9
  unsigned int v42; // r8d
  CHAR *v43; // rdx
  int v44; // eax
  size_t v45; // r8
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // esi
  __int64 v50; // rdx
  __int64 v51; // rcx
  ULONG_PTR v52; // rsi
  PVOID *v53; // rdx
  BOOL v54; // [rsp+30h] [rbp-408h]
  unsigned int v55; // [rsp+34h] [rbp-404h] BYREF
  unsigned int v56; // [rsp+38h] [rbp-400h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-3F8h] BYREF
  ULONG_PTR v58; // [rsp+48h] [rbp-3F0h] BYREF
  int v59; // [rsp+50h] [rbp-3E8h] BYREF
  char v60; // [rsp+54h] [rbp-3E4h]
  int v61; // [rsp+58h] [rbp-3E0h] BYREF
  WCHAR v62; // [rsp+5Ch] [rbp-3DCh]
  __int64 v63; // [rsp+88h] [rbp-3B0h] BYREF
  void *Src; // [rsp+90h] [rbp-3A8h] BYREF
  __int128 v65; // [rsp+98h] [rbp-3A0h] BYREF
  void (*v66)(void *); // [rsp+A8h] [rbp-390h]
  __int128 v67; // [rsp+C8h] [rbp-370h]
  __int64 v68; // [rsp+D8h] [rbp-360h]
  ULONG_PTR BugCheckParameter3[10]; // [rsp+E0h] [rbp-358h] BYREF
  __int128 v70; // [rsp+130h] [rbp-308h] BYREF
  __int128 v71; // [rsp+140h] [rbp-2F8h] BYREF
  int v72; // [rsp+150h] [rbp-2E8h] BYREF
  _BYTE v73[172]; // [rsp+154h] [rbp-2E4h] BYREF
  unsigned __int8 v74[512]; // [rsp+200h] [rbp-238h] BYREF

  v63 = a3;
  v59 = a2;
  v55 = 0;
  v56 = 0;
  v9 = 0;
  v10 = a7 & 1;
  v54 = 0;
  if ( (unsigned int)((__int64 (*)(void))Feature_CaptionTruncatedUTF8CodePage__private_IsEnabledDeviceUsageNoInline)() )
    v54 = GetProcessACP(*(struct tagPROCESSINFO **)(a1[2] + 464)) == 0xFDE9;
  memset_0(&v72, 0, 0xA8uLL);
  v11 = &v72;
  Src = 0LL;
  v61 = 0;
  v67 = 0LL;
  v68 = 0LL;
  v15 = (ULONG_PTR)PtiCurrent(v13, v12);
  RegionSize = v15;
  if ( a1 )
    v58 = a1[5] - *(_QWORD *)(v15 + 512);
  else
    v58 = 0LL;
  if ( a4 )
  {
    v16 = *(_QWORD *)(a4 + 56);
    if ( v16 )
    {
      if ( *(_DWORD *)(a4 + 84) >> 31 != v10
        || (v14 = (unsigned __int64)MmSystemRangeStart, v16 >= (unsigned __int64)MmSystemRangeStart) )
      {
        if ( (unsigned int)((__int64 (*)(void))Feature_CaptionTruncatedUTF8CodePage__private_IsEnabledDeviceUsageNoInline)()
          && (a7 & 1) != 0
          && *(int *)(a4 + 84) >= 0
          && v54 )
        {
          v70 = *(_OWORD *)(a4 + 80);
          if ( !(unsigned int)GetMultiByteSizeFromUnicodeString(&v70, &v55) )
            goto LABEL_99;
        }
        else
        {
          v17 = *(_DWORD *)(a4 + 80);
          v18 = -1;
          if ( v17 + 2 >= v17 )
            v18 = v17 + 2;
          v55 = v18;
          if ( v17 + 2 < v17 )
            goto LABEL_99;
          if ( *(int *)(a4 + 84) < 0 && (a7 & 1) == 0 )
          {
            v19 = 2LL * v18;
            v20 = -1;
            if ( v19 <= 0xFFFFFFFF )
              v20 = 2 * v18;
            v55 = v20;
            if ( v19 > 0xFFFFFFFF )
              goto LABEL_99;
          }
        }
        v9 = 1;
        v14 = (unsigned __int64)MmSystemRangeStart;
      }
    }
    else
    {
      v14 = (unsigned __int64)MmSystemRangeStart;
    }
    v21 = *(_QWORD *)(a4 + 64);
    if ( (v21 & 0xFFFFFFFFFFFF0000uLL) != 0 && (*(_DWORD *)(a4 + 100) >> 31 != v10 || v21 >= *(_QWORD *)v14) )
    {
      if ( (unsigned int)Feature_CaptionTruncatedUTF8CodePage__private_IsEnabledDeviceUsageNoInline(v14)
        && (a7 & 1) != 0
        && *(int *)(a4 + 100) >= 0
        && v54 )
      {
        v71 = *(_OWORD *)(a4 + 96);
        if ( !(unsigned int)GetMultiByteSizeFromUnicodeString(&v71, &v56) )
          goto LABEL_99;
      }
      else
      {
        v14 = *(unsigned int *)(a4 + 96);
        v22 = -1;
        if ( (int)v14 + 2 >= (unsigned int)v14 )
          v22 = v14 + 2;
        v56 = v22;
        if ( (int)v14 + 2 < (unsigned int)v14 )
          goto LABEL_99;
        if ( *(int *)(a4 + 100) < 0 && (a7 & 1) == 0 )
        {
          v14 = 2LL * v22;
          v23 = -1;
          if ( v14 <= 0xFFFFFFFF )
            v23 = 2 * v22;
          v56 = v23;
          if ( v14 > 0xFFFFFFFF )
            goto LABEL_99;
        }
      }
      ++v9;
    }
    v15 = RegionSize;
  }
  IsEnabledDeviceUsageNoInline = Feature_CaptionTruncatedUTF8CodePage__private_IsEnabledDeviceUsageNoInline(v14);
  v25 = v55 + v56;
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( v25 < v55 || v25 >= 0x7FFFFFFF )
      goto LABEL_99;
  }
  else if ( v25 < v55 )
  {
    goto LABEL_99;
  }
  if ( v9 )
  {
    result = AllocCallbackMessage(168, v9, v25, v74, 1, 0x200uLL);
    v11 = (int *)result;
    RegionSize = (ULONG_PTR)result;
    if ( !result )
      return result;
  }
  else
  {
    v11 = &v72;
    RegionSize = (ULONG_PTR)&v72;
    memset_0(v73, 0, 0xA4uLL);
    v72 = 168;
  }
  PtiCurrent(v28, v27);
  v65 = 0LL;
  v66 = 0LL;
  if ( v11 != &v72 && v11 != (int *)v74 )
  {
    v31 = PtiCurrent(v30, v29);
    *(_QWORD *)&v65 = *((_QWORD *)v31 + 48);
    *((_QWORD *)v31 + 48) = &v65;
    *((_QWORD *)&v65 + 1) = v11;
    v66 = Win32FreePool;
  }
  v32 = v58;
  *((_QWORD *)v11 + 5) = v58;
  v11[12] = v59;
  *((_QWORD *)v11 + 7) = v63;
  *((_QWORD *)v11 + 8) = a4 != 0;
  if ( a4 )
  {
    *(_DWORD *)(a4 + 52) = 0;
    *(_DWORD *)(a4 + 76) = 0;
    *(_OWORD *)(v11 + 18) = *(_OWORD *)a4;
    *(_OWORD *)(v11 + 22) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)(v11 + 26) = *(_OWORD *)(a4 + 32);
    *(_OWORD *)(v11 + 30) = *(_OWORD *)(a4 + 48);
    *(_OWORD *)(v11 + 34) = *(_OWORD *)(a4 + 64);
    if ( v55 )
    {
      if ( *(int *)(a4 + 84) >= 0 )
      {
        v33 = *(WCHAR **)(a4 + 56);
        v62 = *v33;
        v34 = (void **)(v11 + 32);
        v35 = (struct _CAPTUREBUF *)v11;
        if ( v62 == 0xFFFF )
        {
          if ( (a7 & 1) != 0 )
          {
            v33 = (WCHAR *)((char *)v33 + 1);
            v36 = 3LL;
          }
          else
          {
            v36 = 4LL;
          }
        }
        else
        {
          v37 = *(_DWORD *)(a4 + 80);
          v33 = *(WCHAR **)(a4 + 88);
          if ( (a7 & 1) != 0 )
          {
            v38 = v54;
            if ( (int)CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, v33, (v37 >> 1) + 1, v34, v54) < 0 )
              goto LABEL_99;
LABEL_79:
            if ( !v56 )
            {
LABEL_89:
              v32 = v58;
              goto LABEL_90;
            }
            v41 = (void **)(v11 + 34);
            v42 = *(_DWORD *)(a4 + 96);
            v43 = *(CHAR **)(a4 + 104);
            if ( *(int *)(a4 + 100) < 0 )
            {
              if ( (a7 & 1) == 0 )
              {
                v44 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v43, 2 * v42 + 2, v41);
LABEL_88:
                if ( v44 < 0 )
                  goto LABEL_99;
                goto LABEL_89;
              }
              v45 = v42 + 1;
            }
            else
            {
              if ( (a7 & 1) != 0 )
              {
                v44 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v43, (v42 >> 1) + 1, v41, v38);
                goto LABEL_88;
              }
              v45 = v42 + 2;
            }
            v44 = CaptureCallbackData((struct _CAPTUREBUF *)v11, v43, v45, v41);
            goto LABEL_88;
          }
          v36 = v37 + 2;
        }
        goto LABEL_63;
      }
      v39 = *(WCHAR **)(a4 + 56);
      v60 = *(_BYTE *)v39;
      if ( v60 == -1 )
      {
        if ( (a7 & 1) != 0 )
        {
          v36 = 3LL;
          v33 = v39;
        }
        else
        {
          v59 = 0;
          v59 = ((unsigned __int16)(*(_DWORD *)v39 >> 8) << 16) | 0xFFFF;
          v36 = 4LL;
          v33 = (WCHAR *)&v59;
        }
        v34 = (void **)(v11 + 32);
        v35 = (struct _CAPTUREBUF *)v11;
LABEL_63:
        if ( (int)CaptureCallbackData(v35, (char *)v33, v36, v34) < 0 )
          goto LABEL_99;
        goto LABEL_78;
      }
      v34 = (void **)(v11 + 32);
      v40 = *(_DWORD *)(a4 + 80);
      v33 = *(WCHAR **)(a4 + 88);
      v35 = (struct _CAPTUREBUF *)v11;
      if ( (a7 & 1) != 0 )
      {
        v36 = (unsigned int)(v40 + 1);
        goto LABEL_63;
      }
      if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, (CHAR *)v33, 2 * v40 + 2, v34) < 0 )
        goto LABEL_99;
    }
LABEL_78:
    v38 = v54;
    goto LABEL_79;
  }
LABEL_90:
  *((_QWORD *)v11 + 19) = a5;
  *((_QWORD *)v11 + 20) = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v46 = *(_QWORD *)(v15 + 520);
  v67 = *(_OWORD *)(v46 + 64);
  v68 = *(_QWORD *)(v46 + 80);
  *(_QWORD *)(*(_QWORD *)(v15 + 520) + 72LL) = v32;
  if ( a1 )
    v47 = *a1;
  else
    v47 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 520) + 64LL) = v47;
  if ( a1 )
    v48 = *(_QWORD *)(a1[5] + 224);
  else
    v48 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 520) + 80LL) = v48;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v63);
  EtwTraceBeginCallback(10LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v49 = KeUserModeCallback(10LL, v11, (unsigned int)*v11, &Src, &v61);
  EtwTraceEndCallback(10LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v63);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v50);
  v51 = *(_QWORD *)(v15 + 520);
  *(_OWORD *)(v51 + 64) = v67;
  *(_QWORD *)(v51 + 80) = v68;
  if ( v49 >= 0 && v61 == 24 )
  {
    v58 = 0LL;
    RtlCopyFromUser(&v58, Src, 8uLL);
    v52 = v58;
    BugCheckParameter3[5] = v58;
    goto LABEL_100;
  }
LABEL_99:
  v52 = 0LL;
LABEL_100:
  if ( v11 != &v72 && v11 != (int *)v74 )
  {
    v53 = (PVOID *)(v11 + 8);
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v53, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v65, (__int64)v53);
  }
  return (unsigned __int8 *)v52;
}
