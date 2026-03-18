/*
 * XREFs of SfnINCNTOUTSTRINGNULL @ 0x1402BA540
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
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x14011BBD0 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x140148EB4 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140177338 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x14019F8C8 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1401A24DC (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

unsigned __int8 *__fastcall SfnINCNTOUTSTRINGNULL(
        _QWORD *a1,
        int a2,
        ULONG_PTR a3,
        __int64 a4,
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
  unsigned int v17; // eax
  unsigned __int64 v18; // rdi
  unsigned __int8 *result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct tagTHREADINFO *v24; // rax
  ULONG_PTR v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // edi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  PVOID *v36; // rdx
  int v37; // [rsp+30h] [rbp-388h] BYREF
  int v38; // [rsp+34h] [rbp-384h]
  unsigned __int8 *v39; // [rsp+38h] [rbp-380h]
  ULONG_PTR RegionSize[3]; // [rsp+40h] [rbp-378h] BYREF
  void *Src; // [rsp+58h] [rbp-360h] BYREF
  unsigned int v42[2]; // [rsp+60h] [rbp-358h] BYREF
  __int64 v43; // [rsp+68h] [rbp-350h]
  __int128 v44; // [rsp+70h] [rbp-348h] BYREF
  void (*v45)(void *); // [rsp+80h] [rbp-338h]
  _BYTE v46[8]; // [rsp+90h] [rbp-328h] BYREF
  __int128 v47; // [rsp+98h] [rbp-320h]
  __int64 v48; // [rsp+A8h] [rbp-310h]
  __m128i v49; // [rsp+B0h] [rbp-308h] BYREF
  __int64 v50; // [rsp+C0h] [rbp-2F8h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+C8h] [rbp-2F0h] BYREF
  __m128i v52; // [rsp+D8h] [rbp-2E0h] BYREF
  __int64 v53; // [rsp+E8h] [rbp-2D0h]
  unsigned __int8 v54[96]; // [rsp+110h] [rbp-2A8h] BYREF
  unsigned __int8 v55[512]; // [rsp+170h] [rbp-248h] BYREF

  RegionSize[0] = a3;
  v38 = a7 & 1;
  memset_0(v54, 0, sizeof(v54));
  v11 = v54;
  Src = 0LL;
  v37 = 0;
  v43 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v14 = PtiCurrent(v13, v12);
  v15 = v14;
  if ( a1 )
    v16 = a1[5] - *((_QWORD *)v14 + 64);
  else
    v16 = 0LL;
  v17 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v18 = v17 + 2;
  if ( (unsigned int)v18 < v17 )
    goto LABEL_31;
  if ( *(int *)(a4 + 4) < 0 && !v38 )
  {
    v18 *= 2LL;
    if ( v18 > 0xFFFFFFFF )
      goto LABEL_31;
  }
  result = AllocCallbackMessage(96, 1u, (unsigned int)v18, v55, 0, 0x200uLL);
  v11 = result;
  v39 = result;
  if ( !result )
    return result;
  PtiCurrent(v21, v20);
  v44 = 0LL;
  v45 = 0LL;
  if ( v11 != v54 && v11 != v55 )
  {
    v24 = PtiCurrent(v23, v22);
    *(_QWORD *)&v44 = *((_QWORD *)v24 + 48);
    *((_QWORD *)v24 + 48) = &v44;
    *((_QWORD *)&v44 + 1) = v11;
    v45 = Win32FreePool;
  }
  v25 = RegionSize[0];
  if ( RegionSize[0] < 2 )
    goto LABEL_31;
  *((_QWORD *)v11 + 5) = v16;
  *((_DWORD *)v11 + 12) = a2;
  *((_QWORD *)v11 + 7) = v25;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v18, (void **)v11 + 10) < 0 )
    goto LABEL_31;
  *((_DWORD *)v11 + 22) = v18;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v26 = *((_QWORD *)v15 + 65);
  v47 = *(_OWORD *)(v26 + 64);
  v48 = *(_QWORD *)(v26 + 80);
  *(_QWORD *)(*((_QWORD *)v15 + 65) + 72LL) = v16;
  v27 = a1 ? *a1 : 0LL;
  *(_QWORD *)(*((_QWORD *)v15 + 65) + 64LL) = v27;
  v28 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
  *(_QWORD *)(*((_QWORD *)v15 + 65) + 80LL) = v28;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v46);
  EtwTraceBeginCallback(8LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v29 = KeUserModeCallback(8LL, v11, *(unsigned int *)v11, &Src, &v37);
  EtwTraceEndCallback(8LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v46);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v30);
  v31 = *((_QWORD *)v15 + 65);
  *(_OWORD *)(v31 + 64) = v47;
  *(_QWORD *)(v31 + 80) = v48;
  if ( v29 < 0 || v37 != 24 )
    goto LABEL_31;
  *(_QWORD *)v42 = 0LL;
  RtlCopyFromUser(v42, Src, 8uLL);
  v32 = *(_QWORD *)v42;
  v43 = *(_QWORD *)v42;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 )
    goto LABEL_32;
  if ( (a7 & 2) != 0 )
    goto LABEL_32;
  v49 = 0LL;
  v50 = 0LL;
  RtlCopyFromUser(&v49, Src, 0x18uLL);
  v52 = v49;
  v53 = v50;
  if ( !_mm_cvtsi128_si32(_mm_srli_si128(v49, 8)) )
    goto LABEL_32;
  v35 = *((_QWORD *)PtiCurrent(v34, v33) + 69);
  if ( v35 && (*(_DWORD *)(v35 + 84) & 1) != 0 && *(_QWORD *)(v35 + 96) == a4 )
  {
LABEL_31:
    v32 = 0LL;
  }
  else
  {
    v32 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v52, v32, *(_DWORD *)(a4 + 4) >> 31, v38);
    v43 = v32;
    CopyOutputString((volatile void **)&v52, (struct _LARGE_STRING *)a4, RegionSize[0], v38);
  }
LABEL_32:
  if ( v11 != v54 && v11 != v55 )
  {
    v36 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v36, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v44, (__int64)v36);
  }
  return (unsigned __int8 *)v32;
}
