/*
 * XREFs of xxxClientFindMnemChar @ 0x1402BDAEC
 * Callers:
 *     xxxMNFindChar @ 0x1402EC6B0 (xxxMNFindChar.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x140148EB4 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140177338 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1402583B0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

unsigned __int8 *__fastcall xxxClientFindMnemChar(char **a1, __int16 a2)
{
  unsigned __int8 *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int8 *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  int v11; // ebx
  unsigned int v12; // ebx
  PVOID *v13; // rdx
  int v14; // [rsp+30h] [rbp-2B8h] BYREF
  __int64 v15; // [rsp+38h] [rbp-2B0h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-2A8h] BYREF
  void *Src; // [rsp+48h] [rbp-2A0h] BYREF
  __int128 v18; // [rsp+50h] [rbp-298h] BYREF
  void (*v19)(void *); // [rsp+60h] [rbp-288h]
  __int64 v20; // [rsp+68h] [rbp-280h]
  unsigned __int8 v21[80]; // [rsp+80h] [rbp-268h] BYREF
  unsigned __int8 v22[512]; // [rsp+D0h] [rbp-218h] BYREF

  memset_0(v21, 0, 0x48uLL);
  Src = 0LL;
  v14 = 0;
  result = AllocCallbackMessage(72, 1u, *((unsigned __int16 *)a1 + 1), v22, 1, 0x200uLL);
  v7 = result;
  RegionSize = (ULONG_PTR)result;
  if ( result )
  {
    PtiCurrent(v6, v5);
    v18 = 0LL;
    v19 = 0LL;
    if ( v7 != v21 && v7 != v22 )
    {
      v10 = PtiCurrent(v9, v8);
      *(_QWORD *)&v18 = *((_QWORD *)v10 + 48);
      *((_QWORD *)v10 + 48) = &v18;
      *((_QWORD *)&v18 + 1) = v7;
      v19 = Win32FreePool;
    }
    *((_WORD *)v7 + 28) = a2;
    *((_DWORD *)v7 + 15) = 1;
    *((_DWORD *)v7 + 16) = 1;
    *((_WORD *)v7 + 20) = *(_WORD *)a1;
    *((_WORD *)v7 + 21) = *((_WORD *)a1 + 1);
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v7,
                a1[1],
                (unsigned int)*(unsigned __int16 *)a1 + 2,
                (void **)v7 + 6) >= 0
      && (LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v15),
          EtwTraceBeginCallback(66LL),
          *((_QWORD *)v7 + 2) = 0LL,
          v11 = KeUserModeCallback(66LL, v7, *(unsigned int *)v7, &Src, &v14),
          EtwTraceEndCallback(66LL),
          LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v15),
          v11 >= 0)
      && v14 == 24 )
    {
      v15 = 0LL;
      RtlCopyFromUser(&v15, Src, 8uLL);
      v12 = v15;
      v20 = v15;
    }
    else
    {
      v12 = 0;
    }
    if ( v7 != v21 && v7 != v22 )
    {
      v13 = (PVOID *)(v7 + 32);
      if ( *((_QWORD *)v7 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v13, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v18, (__int64)v13);
    }
    return (unsigned __int8 *)v12;
  }
  return result;
}
