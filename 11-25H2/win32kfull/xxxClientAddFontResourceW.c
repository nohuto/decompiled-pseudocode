/*
 * XREFs of xxxClientAddFontResourceW @ 0x140128360
 * Callers:
 *     xxxAddFontResourceW @ 0x140128314 (xxxAddFontResourceW.c)
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

unsigned __int8 *__fastcall xxxClientAddFontResourceW(void **a1, unsigned int a2, __int64 a3)
{
  unsigned __int8 *result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int8 *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  int v13; // ebx
  unsigned int v14; // ebx
  int v15; // [rsp+30h] [rbp-2F8h] BYREF
  __int64 v16; // [rsp+38h] [rbp-2F0h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-2E8h] BYREF
  void *Src; // [rsp+48h] [rbp-2E0h] BYREF
  __int128 v19; // [rsp+50h] [rbp-2D8h] BYREF
  void (*v20)(void *); // [rsp+60h] [rbp-2C8h]
  __int64 v21; // [rsp+68h] [rbp-2C0h]
  unsigned __int8 v22[144]; // [rsp+80h] [rbp-2A8h] BYREF
  unsigned __int8 v23[512]; // [rsp+110h] [rbp-218h] BYREF

  memset_0(v22, 0, 0x88uLL);
  Src = 0LL;
  v15 = 0;
  result = (unsigned __int8 *)AllocCallbackMessage(0x88u, 1u, *((unsigned __int16 *)a1 + 1), v23, 1, 0x200uLL);
  v9 = result;
  RegionSize = (ULONG_PTR)result;
  if ( result )
  {
    PtiCurrent(v8, v7);
    v19 = 0LL;
    v20 = 0LL;
    if ( v9 != v22 && v9 != v23 )
    {
      v12 = PtiCurrent(v11, v10);
      *(_QWORD *)&v19 = *((_QWORD *)v12 + 48);
      *((_QWORD *)v12 + 48) = &v19;
      *((_QWORD *)&v19 + 1) = v9;
      v20 = Win32FreePool;
    }
    *((_WORD *)v9 + 20) = *(_WORD *)a1;
    *((_WORD *)v9 + 21) = *((_WORD *)a1 + 1);
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v9,
                a1[1],
                (unsigned int)*(unsigned __int16 *)a1 + 2,
                (void **)v9 + 6) < 0 )
      goto LABEL_13;
    *((_DWORD *)v9 + 14) = a2;
    if ( a3 && *(_DWORD *)(a3 + 4) )
    {
      *(_OWORD *)(v9 + 60) = *(_OWORD *)a3;
      *(_OWORD *)(v9 + 76) = *(_OWORD *)(a3 + 16);
      *(_OWORD *)(v9 + 92) = *(_OWORD *)(a3 + 32);
      *(_OWORD *)(v9 + 108) = *(_OWORD *)(a3 + 48);
      *(_QWORD *)(v9 + 124) = *(_QWORD *)(a3 + 64);
    }
    else
    {
      *((_DWORD *)v9 + 16) = 0;
    }
    LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v16);
    EtwTraceBeginCallback(83LL);
    *((_QWORD *)v9 + 2) = 0LL;
    v13 = KeUserModeCallback(83LL, v9, *(unsigned int *)v9, &Src, &v15);
    EtwTraceEndCallback(83LL);
    LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v16);
    if ( v13 >= 0 && v15 == 24 )
    {
      v16 = 0LL;
      RtlCopyFromUser(&v16, Src, 8uLL);
      v14 = v16;
      v21 = v16;
    }
    else
    {
LABEL_13:
      v14 = 0;
    }
    if ( v9 != v22 && v9 != v23 )
    {
      if ( *((_QWORD *)v9 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock(&v19);
    }
    return (unsigned __int8 *)v14;
  }
  return result;
}
