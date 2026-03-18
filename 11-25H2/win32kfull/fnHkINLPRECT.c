/*
 * XREFs of fnHkINLPRECT @ 0x140230B78
 * Callers:
 *     xxxHkCallHook @ 0x1400C5590 (xxxHkCallHook.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall fnHkINLPRECT(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  int v6; // ebx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  void *v11; // rdx
  int v13; // [rsp+30h] [rbp-78h] BYREF
  void *Src; // [rsp+38h] [rbp-70h] BYREF
  __int128 v15; // [rsp+40h] [rbp-68h] BYREF
  __int64 v16; // [rsp+50h] [rbp-58h]
  _DWORD v17[2]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v18; // [rsp+70h] [rbp-38h]
  __int128 v19; // [rsp+78h] [rbp-30h]
  __int64 v20; // [rsp+88h] [rbp-20h]
  __int64 v21; // [rsp+90h] [rbp-18h]

  Src = 0LL;
  v13 = 0;
  v17[1] = 0;
  v17[0] = a1;
  v18 = a2;
  v19 = *a3;
  v20 = a4;
  v21 = a5;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v15);
  EtwTraceBeginCallback(48LL);
  v6 = KeUserModeCallback(48LL, v17, 48LL, &Src, &v13);
  EtwTraceEndCallback(48LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v15);
  if ( v6 < 0 )
    return 0LL;
  if ( v13 != 24 )
    return 0LL;
  *(_QWORD *)&v15 = 0LL;
  RtlCopyFromUser(&v15, Src, 8uLL);
  v7 = v15;
  v16 = v15;
  v10 = *((_QWORD *)PtiCurrent(v9, v8) + 69);
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 84) & 1) != 0 && *(__int128 **)(v10 + 96) == a3 )
      return 0LL;
  }
  v11 = (void *)*((_QWORD *)Src + 2);
  v15 = 0LL;
  RtlCopyFromUser(&v15, v11, 0x10uLL);
  *a3 = v15;
  return v7;
}
