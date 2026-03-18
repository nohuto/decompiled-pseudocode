/*
 * XREFs of xxxClientPSMTextOut @ 0x1402BE1C0
 * Callers:
 *     xxxPSMTextOut @ 0x1402EE394 (xxxPSMTextOut.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreSaveDC @ 0x140054408 (GreSaveDC.c)
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x140148EB4 (PopAndFreeAlwaysW32ThreadLock.c)
 *     CreateCompatiblePublicDC @ 0x140174D54 (CreateCompatiblePublicDC.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140177338 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1402583B0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

HDC __fastcall xxxClientPSMTextOut(HDC a1, unsigned int a2, unsigned int a3, char **a4, int a5, int a6)
{
  HDC result; // rax
  HDC v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int8 *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct tagTHREADINFO *v17; // rax
  unsigned int v18; // ebx
  int v19; // r12d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rdx
  __int64 UserSessionState; // rax
  PVOID *v26; // rdx
  int v27; // [rsp+60h] [rbp-2E8h] BYREF
  HBITMAP v28; // [rsp+68h] [rbp-2E0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-2D8h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-2D0h] BYREF
  void *Src; // [rsp+80h] [rbp-2C8h] BYREF
  __int128 v32; // [rsp+88h] [rbp-2C0h] BYREF
  void (*v33)(void *); // [rsp+98h] [rbp-2B0h]
  HDC v34; // [rsp+A0h] [rbp-2A8h]
  HDC v35; // [rsp+A8h] [rbp-2A0h]
  unsigned __int8 v36[80]; // [rsp+C0h] [rbp-288h] BYREF
  unsigned __int8 v37[512]; // [rsp+110h] [rbp-238h] BYREF

  RegionSize = (ULONG_PTR)a1;
  memset_0(v36, 0, sizeof(v36));
  Src = 0LL;
  v27 = 0;
  v28 = 0LL;
  result = CreateCompatiblePublicDC(a1, &v28);
  v11 = result;
  v35 = result;
  if ( !result )
    return result;
  result = (HDC)AllocCallbackMessage(80, 1u, *((unsigned __int16 *)a4 + 1), v37, 1, 0x200uLL);
  v14 = (unsigned __int8 *)result;
  v34 = result;
  if ( !result )
  {
    if ( v11 != a1 )
    {
      GreDeleteDC(v11);
      return (HDC)GreDeleteObject(v28);
    }
    return result;
  }
  PtiCurrent(v13, v12);
  v32 = 0LL;
  v33 = 0LL;
  if ( v14 != v36 && v14 != v37 )
  {
    v17 = PtiCurrent(v16, v15);
    *(_QWORD *)&v32 = *((_QWORD *)v17 + 48);
    *((_QWORD *)v17 + 48) = &v32;
    *((_QWORD *)&v32 + 1) = v14;
    v33 = Win32FreePool;
  }
  *((_QWORD *)v14 + 7) = v11;
  *((_DWORD *)v14 + 16) = a2;
  *((_DWORD *)v14 + 17) = a3;
  *((_DWORD *)v14 + 18) = a5;
  *((_DWORD *)v14 + 19) = a6;
  *((_WORD *)v14 + 20) = *(_WORD *)a4;
  *((_WORD *)v14 + 21) = *((_WORD *)a4 + 1);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v14,
              a4[1],
              (unsigned int)*(unsigned __int16 *)a4 + 2,
              (void **)v14 + 6) >= 0 )
  {
    v18 = GreSaveDC(a1);
    LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v29);
    EtwTraceBeginCallback(78LL);
    *((_QWORD *)v14 + 2) = 0LL;
    v19 = KeUserModeCallback(78LL, v14, *(unsigned int *)v14, &Src, &v27);
    EtwTraceEndCallback(78LL);
    LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v29);
    GreRestoreDC(a1, v18);
    if ( v11 == a1 )
    {
LABEL_12:
      if ( v19 >= 0 && v27 == 24 )
      {
        v29 = 0LL;
        RtlCopyFromUser(&v29, Src, 8uLL);
      }
      goto LABEL_15;
    }
    if ( v19 >= 0 )
    {
      v22 = *(_QWORD *)(W32GetUserSessionState(v21, v20) + 56968);
      v23 = *(_DWORD *)(v22 + 100);
      UserSessionState = W32GetUserSessionState(v22, v24);
      GreBitBltInternal(
        a1,
        0,
        0,
        *(_DWORD *)(*(_QWORD *)(UserSessionState + 56968) + 96LL),
        v23,
        v11,
        0,
        0,
        0xCC0020u,
        0,
        0);
      goto LABEL_12;
    }
  }
LABEL_15:
  if ( v11 != a1 )
  {
    GreDeleteDC(v11);
    GreDeleteObject(v28);
  }
  result = (HDC)v36;
  if ( v14 != v36 )
  {
    result = (HDC)v37;
    if ( v14 != v37 )
    {
      v26 = (PVOID *)(v14 + 32);
      if ( *((_QWORD *)v14 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v26, &RegionSize, 0x8000u);
      }
      return (HDC)PopAndFreeAlwaysW32ThreadLock((__int64)&v32, (__int64)v26);
    }
  }
  return result;
}
