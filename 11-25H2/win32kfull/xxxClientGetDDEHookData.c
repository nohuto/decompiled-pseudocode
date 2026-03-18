/*
 * XREFs of xxxClientGetDDEHookData @ 0x1402BDEAC
 * Callers:
 *     xxxDDETrackPostHook @ 0x140255D80 (xxxDDETrackPostHook.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall xxxClientGetDDEHookData(int a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  void *v10; // rdx
  int v12; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+38h] [rbp-D0h] BYREF
  void *Src; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v15; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v16; // [rsp+58h] [rbp-B0h]
  __int128 v17; // [rsp+68h] [rbp-A0h]
  __int64 v18; // [rsp+78h] [rbp-90h]
  __int64 v19; // [rsp+80h] [rbp-88h]
  int v20; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v21; // [rsp+A8h] [rbp-60h]

  Src = 0LL;
  v12 = 0;
  memset_0(&v20, 0, 0x48uLL);
  v21 = a2;
  v20 = a1;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v13);
  EtwTraceBeginCallback(71LL);
  LODWORD(a2) = KeUserModeCallback(71LL, &v20, 72LL, &Src, &v12);
  EtwTraceEndCallback(71LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v13);
  if ( (int)a2 < 0 )
    return 0LL;
  if ( v12 != 24 )
    return 0LL;
  v13 = 0LL;
  RtlCopyFromUser(&v13, Src, 8uLL);
  v6 = v13;
  v19 = v13;
  v9 = *((_QWORD *)PtiCurrent(v8, v7) + 69);
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 84) & 1) != 0 && *(_QWORD *)(v9 + 96) == a3 )
      return 0LL;
  }
  v10 = (void *)*((_QWORD *)Src + 2);
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  RtlCopyFromUser(&v15, v10, 0x38uLL);
  *(_OWORD *)a3 = v15;
  *(_OWORD *)(a3 + 16) = v16;
  *(_OWORD *)(a3 + 32) = v17;
  *(_QWORD *)(a3 + 48) = v18;
  return v6;
}
