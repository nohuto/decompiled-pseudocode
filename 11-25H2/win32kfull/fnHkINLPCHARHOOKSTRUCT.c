/*
 * XREFs of fnHkINLPCHARHOOKSTRUCT @ 0x1400C3D88
 * Callers:
 *     xxxCallCtfHook @ 0x1400C4B80 (xxxCallCtfHook.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall fnHkINLPCHARHOOKSTRUCT(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  int v8; // ebx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  void *v13; // rdx
  __int128 v15; // [rsp+30h] [rbp-98h] BYREF
  __int128 v16; // [rsp+40h] [rbp-88h]
  __int64 v17; // [rsp+50h] [rbp-78h]
  int v18; // [rsp+70h] [rbp-58h] BYREF
  __int64 v19; // [rsp+78h] [rbp-50h]
  __int64 v20; // [rsp+80h] [rbp-48h]
  __int64 v21; // [rsp+88h] [rbp-40h]
  __int128 v22; // [rsp+90h] [rbp-38h]
  __int128 v23; // [rsp+A0h] [rbp-28h]
  int v24; // [rsp+B0h] [rbp-18h]
  int v25; // [rsp+D0h] [rbp+8h] BYREF
  void *Src; // [rsp+E8h] [rbp+20h] BYREF

  Src = 0LL;
  v25 = 0;
  memset_0(&v18, 0, 0x48uLL);
  v18 = a1;
  v19 = a2;
  v22 = *a3;
  v23 = a3[1];
  v24 = 0;
  v20 = 0LL;
  v21 = a5;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  EtwTraceBeginCallback(130LL);
  v8 = KeUserModeCallback(130LL, &v18, 72LL, &Src, &v25);
  EtwTraceEndCallback(130LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  if ( v8 < 0 )
    return 0LL;
  if ( v25 != 24 )
    return 0LL;
  a5 = 0LL;
  RtlCopyFromUser(&a5, Src, 8uLL);
  v9 = a5;
  v17 = a5;
  v12 = *((_QWORD *)PtiCurrent(v11, v10) + 69);
  if ( v12 )
  {
    if ( (*(_DWORD *)(v12 + 84) & 1) != 0 && *(__int128 **)(v12 + 96) == a3 )
      return 0LL;
  }
  v13 = (void *)*((_QWORD *)Src + 2);
  v15 = 0LL;
  v16 = 0LL;
  RtlCopyFromUser(&v15, v13, 0x20uLL);
  *a3 = v15;
  a3[1] = v16;
  return v9;
}
