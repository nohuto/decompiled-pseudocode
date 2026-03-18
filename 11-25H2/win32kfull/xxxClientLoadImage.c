/*
 * XREFs of xxxClientLoadImage @ 0x1401244C4
 * Callers:
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x14004E6E0 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     _anonymous_namespace_::xxxReplaceMouseCursorsWithPenCursors @ 0x140124150 (_anonymous_namespace_--xxxReplaceMouseCursorsWithPenCursors.c)
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x140124264 (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x140125CF4 (xxxUpdateSystemIconsFromRegistry.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoRip @ 0x14006739C (HMValidateHandleNoRip.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x140148EB4 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140177338 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1402583B0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

unsigned __int8 *__fastcall xxxClientLoadImage(
        void **a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v7; // r15d
  __int64 v9; // rcx
  unsigned int v10; // r8d
  _BOOL8 v11; // rdx
  unsigned __int8 *result; // rax
  unsigned __int8 *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagTHREADINFO *v16; // rax
  unsigned __int16 v17; // ax
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rbx
  int v21; // [rsp+30h] [rbp-2E8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-2E0h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-2D8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-2D0h]
  void *Src; // [rsp+50h] [rbp-2C8h]
  void *v26; // [rsp+58h] [rbp-2C0h] BYREF
  __int128 v27; // [rsp+60h] [rbp-2B8h] BYREF
  void (*v28)(void *); // [rsp+70h] [rbp-2A8h]
  __int64 v29; // [rsp+78h] [rbp-2A0h]
  _DWORD v30[24]; // [rsp+90h] [rbp-288h] BYREF
  unsigned __int8 v31[512]; // [rsp+F0h] [rbp-228h] BYREF

  v7 = a3;
  v24 = 0LL;
  memset_0(v30, 0, sizeof(v30));
  v26 = 0LL;
  v21 = 0;
  v10 = *((unsigned __int16 *)a1 + 1);
  v11 = (_WORD)v10 != 0;
  Src = 0LL;
  if ( (_WORD)v10 )
  {
    result = (unsigned __int8 *)AllocCallbackMessage(
                                  0x60u,
                                  v11,
                                  v10 & (unsigned __int64)-(__int64)((_WORD)v10 != 0),
                                  v31,
                                  1,
                                  0x200uLL);
    v13 = result;
    RegionSize = (ULONG_PTR)result;
    if ( !result )
      return result;
  }
  else
  {
    v13 = (unsigned __int8 *)v30;
    RegionSize = (ULONG_PTR)v30;
    v30[0] = 96;
  }
  PtiCurrent(v9, v11);
  v27 = 0LL;
  v28 = 0LL;
  if ( v13 != (unsigned __int8 *)v30 && v13 != v31 )
  {
    v16 = PtiCurrent(v15, v14);
    *(_QWORD *)&v27 = *((_QWORD *)v16 + 48);
    *((_QWORD *)v16 + 48) = &v27;
    *((_QWORD *)&v27 + 1) = v13;
    v28 = Win32FreePool;
  }
  *((_DWORD *)v13 + 10) = v24;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v13,
              Src,
              (unsigned int)(unsigned __int16)v24 + 2,
              (void **)v13 + 6) < 0 )
    goto LABEL_17;
  *((_WORD *)v13 + 28) = *(_WORD *)a1;
  v17 = *((_WORD *)a1 + 1);
  *((_WORD *)v13 + 29) = v17;
  if ( v17 )
  {
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v13,
                a1[1],
                (unsigned int)*(unsigned __int16 *)a1 + 2,
                (void **)v13 + 8) < 0 )
      goto LABEL_17;
  }
  else
  {
    *((_QWORD *)v13 + 8) = a1[1];
  }
  *((_DWORD *)v13 + 18) = v7;
  *((_DWORD *)v13 + 19) = a4;
  *((_DWORD *)v13 + 20) = a5;
  *((_DWORD *)v13 + 21) = a6;
  *((_DWORD *)v13 + 22) = 0;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v22);
  EtwTraceBeginCallback(74LL);
  *((_QWORD *)v13 + 2) = 0LL;
  v18 = KeUserModeCallback(74LL, v13, *(unsigned int *)v13, &v26, &v21);
  EtwTraceEndCallback(74LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v22);
  if ( v18 >= 0 && v21 == 24 )
  {
    v22 = 0LL;
    RtlCopyFromUser(&v22, v26, 8uLL);
    v20 = v22;
    v29 = v22;
    if ( v22 )
    {
      LOBYTE(v19) = 3;
      v20 = HMValidateHandleNoRip(v22, v19);
    }
    goto LABEL_18;
  }
LABEL_17:
  v20 = 0LL;
LABEL_18:
  if ( v13 != (unsigned __int8 *)v30 && v13 != v31 )
  {
    if ( *((_QWORD *)v13 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v13 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v27);
  }
  return (unsigned __int8 *)v20;
}
