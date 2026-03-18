/*
 * XREFs of xxxClientExpandStringW @ 0x1401247A8
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x140124264 (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x14011BBD0 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x140148EB4 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140177338 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x14019F8C8 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1402583B0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall xxxClientExpandStringW(struct _LARGE_STRING *a1)
{
  unsigned int v2; // eax
  unsigned __int8 *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int8 *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  int v10; // ebx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  int v16; // [rsp+30h] [rbp-328h] BYREF
  unsigned int v17[2]; // [rsp+38h] [rbp-320h] BYREF
  void *Src; // [rsp+40h] [rbp-318h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+48h] [rbp-310h] BYREF
  __int128 v20; // [rsp+58h] [rbp-300h] BYREF
  void (*v21)(void *); // [rsp+68h] [rbp-2F0h]
  __int128 v22; // [rsp+70h] [rbp-2E8h] BYREF
  __int64 v23; // [rsp+80h] [rbp-2D8h]
  __int128 v24; // [rsp+88h] [rbp-2D0h] BYREF
  __int64 v25; // [rsp+98h] [rbp-2C0h]
  _OWORD v26[3]; // [rsp+B0h] [rbp-2A8h] BYREF
  __int64 v27; // [rsp+E0h] [rbp-278h]
  unsigned __int8 v28[592]; // [rsp+F0h] [rbp-268h] BYREF

  memset(v26, 0, sizeof(v26));
  v27 = 0LL;
  Src = 0LL;
  v16 = 0;
  v2 = *((_DWORD *)a1 + 1) & 0x7FFFFFFF;
  if ( v2 > 0x208 )
    v2 = 520;
  result = (unsigned __int8 *)AllocCallbackMessage(0x38u, 1u, v2, v28, 1, 0x248uLL);
  v6 = result;
  RegionSize[1] = (ULONG_PTR)result;
  if ( result )
  {
    PtiCurrent(v5, v4);
    v20 = 0LL;
    v21 = 0LL;
    if ( v6 != (unsigned __int8 *)v26 && v6 != v28 )
    {
      v9 = PtiCurrent(v8, v7);
      *(_QWORD *)&v20 = *((_QWORD *)v9 + 48);
      *((_QWORD *)v9 + 48) = &v20;
      *((_QWORD *)&v20 + 1) = v6;
      v21 = Win32FreePool;
    }
    *((_DWORD *)v6 + 10) = *(_DWORD *)a1;
    *((_DWORD *)v6 + 11) ^= (*((_DWORD *)a1 + 1) ^ *((_DWORD *)v6 + 11)) & 0x7FFFFFFF;
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v6,
                *((void **)a1 + 1),
                (unsigned int)(*(_DWORD *)a1 + 2),
                (void **)v6 + 6) < 0 )
      goto LABEL_14;
    *((_DWORD *)v6 + 11) &= ~0x80000000;
    LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v17);
    EtwTraceBeginCallback(59LL);
    *((_QWORD *)v6 + 2) = 0LL;
    v10 = KeUserModeCallback(59LL, v6, *(unsigned int *)v6, &Src, &v16);
    EtwTraceEndCallback(59LL);
    LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v17);
    if ( v10 < 0 )
      goto LABEL_14;
    if ( v16 != 24 )
      goto LABEL_14;
    *(_QWORD *)v17 = 0LL;
    RtlCopyFromUser(v17, Src, 8uLL);
    v11 = v17[0];
    RegionSize[0] = *(_QWORD *)v17;
    v22 = 0LL;
    v23 = 0LL;
    RtlCopyFromUser(&v22, Src, 0x18uLL);
    v24 = v22;
    v25 = v23;
    v14 = *((_QWORD *)PtiCurrent(v13, v12) + 69);
    if ( !v14 )
      goto LABEL_13;
    if ( (*(_DWORD *)(v14 + 84) & 1) != 0 && *(struct _LARGE_STRING **)(v14 + 96) == a1 )
    {
LABEL_14:
      v15 = 0;
    }
    else
    {
LABEL_13:
      v15 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v24, v11, *((_DWORD *)a1 + 1) >> 31, 0);
      RegionSize[0] = v15;
      CopyOutputString((volatile void **)&v24, a1, *((_DWORD *)a1 + 1) & 0x7FFFFFFF, 0);
    }
    if ( v6 != (unsigned __int8 *)v26 && v6 != v28 )
    {
      if ( *((_QWORD *)v6 + 4) )
      {
        RegionSize[0] = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v6 + 4, RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock(&v20);
    }
    return (unsigned __int8 *)v15;
  }
  return result;
}
