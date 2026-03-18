/*
 * XREFs of ClientGetListboxString @ 0x140061F10
 * Callers:
 *     SfnOUTCBOXSTRING @ 0x140061C90 (SfnOUTCBOXSTRING.c)
 *     SfnOUTLBOXSTRING @ 0x140061E20 (SfnOUTLBOXSTRING.c)
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

unsigned __int8 *__fastcall ClientGetListboxString(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        __int64 a9)
{
  unsigned __int8 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  struct tagTHREADINFO *v16; // r13
  __int64 v17; // r14
  unsigned int v18; // eax
  unsigned __int64 v19; // rdi
  unsigned __int8 *result; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct tagTHREADINFO *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // edi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 v34; // rdi
  __int64 v35; // rcx
  void *v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // r14d
  int v41; // r8d
  unsigned int v42; // r8d
  unsigned int v43; // eax
  int v44; // [rsp+30h] [rbp-388h] BYREF
  int v45[2]; // [rsp+38h] [rbp-380h] BYREF
  unsigned __int8 *v46; // [rsp+40h] [rbp-378h]
  unsigned int v47[2]; // [rsp+48h] [rbp-370h] BYREF
  void *Src; // [rsp+50h] [rbp-368h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+58h] [rbp-360h] BYREF
  __int128 v50; // [rsp+70h] [rbp-348h] BYREF
  void (*v51)(void *); // [rsp+80h] [rbp-338h]
  _BYTE v52[8]; // [rsp+90h] [rbp-328h] BYREF
  __int128 v53; // [rsp+98h] [rbp-320h]
  __int64 v54; // [rsp+A8h] [rbp-310h]
  __int128 v55; // [rsp+B0h] [rbp-308h] BYREF
  __int64 v56; // [rsp+C0h] [rbp-2F8h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+C8h] [rbp-2F0h] BYREF
  __int128 v58; // [rsp+D8h] [rbp-2E0h] BYREF
  __int64 v59; // [rsp+E8h] [rbp-2D0h]
  unsigned __int8 v60[96]; // [rsp+120h] [rbp-298h] BYREF
  unsigned __int8 v61[512]; // [rsp+180h] [rbp-238h] BYREF

  v47[0] = a2;
  v45[0] = a7 & 1;
  memset_0(v60, 0, sizeof(v60));
  v12 = v60;
  Src = 0LL;
  v44 = 0;
  RegionSize[0] = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v15 = PtiCurrent(v14, v13);
  v16 = v15;
  if ( a1 )
    v17 = a1[5] - *((_QWORD *)v15 + 64);
  else
    v17 = 0LL;
  v18 = a4[1] & 0x7FFFFFFF;
  v19 = v18 + 2;
  if ( (unsigned int)v19 >= v18 )
  {
    if ( a4[1] >= 0 || v45[0] || (v19 *= 2LL, v19 <= 0xFFFFFFFF) )
    {
      result = (unsigned __int8 *)AllocCallbackMessage(0x60u, 1u, (unsigned int)v19, v61, 0, 0x200uLL);
      v12 = result;
      v46 = result;
      if ( !result )
        return result;
      PtiCurrent(v22, v21);
      v50 = 0LL;
      v51 = 0LL;
      if ( v12 != v60 && v12 != v61 )
      {
        v25 = PtiCurrent(v24, v23);
        *(_QWORD *)&v50 = *((_QWORD *)v25 + 48);
        *((_QWORD *)v25 + 48) = &v50;
        *((_QWORD *)&v50 + 1) = v12;
        v51 = Win32FreePool;
      }
      *((_QWORD *)v12 + 5) = v17;
      *((_DWORD *)v12 + 12) = v47[0];
      *((_QWORD *)v12 + 7) = a3;
      *((_QWORD *)v12 + 8) = a5;
      *((_QWORD *)v12 + 9) = a6;
      if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v12, v19, (void **)v12 + 10) >= 0 )
      {
        *((_DWORD *)v12 + 22) = v19;
        Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
        v26 = *((_QWORD *)v16 + 65);
        v53 = *(_OWORD *)(v26 + 64);
        v54 = *(_QWORD *)(v26 + 80);
        *(_QWORD *)(*((_QWORD *)v16 + 65) + 72LL) = v17;
        v27 = a1 ? *a1 : 0LL;
        *(_QWORD *)(*((_QWORD *)v16 + 65) + 64LL) = v27;
        v28 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
        *(_QWORD *)(*((_QWORD *)v16 + 65) + 80LL) = v28;
        LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v52);
        EtwTraceBeginCallback(72LL);
        *((_QWORD *)v12 + 2) = 0LL;
        v29 = KeUserModeCallback(72LL, v12, *(unsigned int *)v12, &Src, &v44);
        EtwTraceEndCallback(72LL);
        LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v52);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v30);
        v31 = *((_QWORD *)v16 + 65);
        *(_OWORD *)(v31 + 64) = v53;
        *(_QWORD *)(v31 + 80) = v54;
        if ( v29 >= 0 && v44 == 24 )
        {
          *(_QWORD *)v47 = 0LL;
          RtlCopyFromUser(v47, Src, 8uLL);
          v34 = *(_QWORD *)v47;
          RegionSize[0] = *(_QWORD *)v47;
          if ( (v47[0] & 0x80000000) != 0 )
          {
            LODWORD(v34) = v47[0];
            goto LABEL_45;
          }
          if ( a9 && (*(_DWORD *)(a9 + 84) & 5) != 0 || (a7 & 2) != 0 )
            goto LABEL_45;
          if ( a8 )
          {
            v35 = *((_QWORD *)PtiCurrent(v33, v32) + 69);
            if ( !v35 || (*(_DWORD *)(v35 + 84) & 1) == 0 || *(_QWORD *)(v35 + 96) != *((_QWORD *)a4 + 1) )
            {
              v36 = (void *)*((_QWORD *)Src + 2);
              *(_QWORD *)v45 = 0LL;
              RtlCopyFromUser(v45, v36, 8uLL);
              **((_QWORD **)a4 + 1) = *(_QWORD *)v45;
              goto LABEL_38;
            }
          }
          else
          {
            v55 = 0LL;
            v56 = 0LL;
            RtlCopyFromUser(&v55, Src, 0x18uLL);
            v58 = v55;
            v59 = v56;
            v39 = *((_QWORD *)PtiCurrent(v38, v37) + 69);
            if ( !v39 || (*(_DWORD *)(v39 + 84) & 1) == 0 || *(int **)(v39 + 96) != a4 )
            {
              v40 = v45[0];
              v34 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v58, v34, (unsigned int)a4[1] >> 31, v45[0]);
              RegionSize[0] = v34;
              v41 = a4[1];
              if ( v41 >= 0 )
                v42 = ((unsigned int)v41 >> 1) & 0x3FFFFFFF;
              else
                v42 = v41 & 0x7FFFFFFF;
              CopyOutputString((struct _CALLBACKSTATUS *)&v58, (struct _LARGE_STRING *)a4, v42, v40);
LABEL_38:
              if ( !a8 && v34 != -1LL )
              {
                v43 = (unsigned int)*a4 >> 1;
                if ( a4[1] < 0 )
                  v43 = *a4;
                if ( v34 > v43 )
                  LODWORD(v34) = v43;
              }
              goto LABEL_45;
            }
          }
        }
      }
    }
  }
  LODWORD(v34) = 0;
LABEL_45:
  if ( v12 != v60 && v12 != v61 )
  {
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v50);
  }
  return (unsigned __int8 *)(unsigned int)v34;
}
