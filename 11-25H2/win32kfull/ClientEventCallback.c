/*
 * XREFs of ClientEventCallback @ 0x1402BA094
 * Callers:
 *     xxxEventWndProc @ 0x1402DD6A0 (xxxEventWndProc.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x140148EB4 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140177338 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1402583B0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall ClientEventCallback(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned __int8 *result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int8 *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  int v12; // ebx
  unsigned int v13; // ebx
  PVOID *v14; // rdx
  int v15; // [rsp+30h] [rbp-298h] BYREF
  __int64 v16; // [rsp+38h] [rbp-290h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-288h] BYREF
  void *Src; // [rsp+48h] [rbp-280h] BYREF
  __int128 v19; // [rsp+50h] [rbp-278h] BYREF
  void (*v20)(void *); // [rsp+60h] [rbp-268h]
  __int64 v21; // [rsp+68h] [rbp-260h]
  _OWORD v22[3]; // [rsp+78h] [rbp-250h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-220h]
  unsigned __int8 v24[512]; // [rsp+B0h] [rbp-218h] BYREF

  v4 = *(unsigned __int16 *)(a2 + 6) + 8;
  memset(v22, 0, sizeof(v22));
  v23 = 0LL;
  Src = 0LL;
  v15 = 0;
  result = AllocCallbackMessage(56, 1u, v4, v24, 1, 0x200uLL);
  v8 = result;
  RegionSize = (ULONG_PTR)result;
  if ( result )
  {
    PtiCurrent(v7, v6);
    v19 = 0LL;
    v20 = 0LL;
    if ( v8 != (unsigned __int8 *)v22 && v8 != v24 )
    {
      v11 = PtiCurrent(v10, v9);
      *(_QWORD *)&v19 = *((_QWORD *)v11 + 48);
      *((_QWORD *)v11 + 48) = &v19;
      *((_QWORD *)&v19 + 1) = v8;
      v20 = Win32FreePool;
    }
    *((_QWORD *)v8 + 5) = a1;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v8, (char *)a2, v4, (void **)v8 + 6) >= 0
      && (LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v16),
          EtwTraceBeginCallback(65LL),
          *((_QWORD *)v8 + 2) = 0LL,
          v12 = KeUserModeCallback(65LL, v8, *(unsigned int *)v8, &Src, &v15),
          EtwTraceEndCallback(65LL),
          LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v16),
          v12 >= 0)
      && v15 == 24 )
    {
      v16 = 0LL;
      RtlCopyFromUser(&v16, Src, 8uLL);
      v13 = v16;
      v21 = v16;
    }
    else
    {
      v13 = 0;
    }
    if ( v8 != (unsigned __int8 *)v22 && v8 != v24 )
    {
      v14 = (PVOID *)(v8 + 32);
      if ( *((_QWORD *)v8 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v14, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v19, (__int64)v14);
    }
    return (unsigned __int8 *)v13;
  }
  return result;
}
