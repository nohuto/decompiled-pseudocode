/*
 * XREFs of xxxClientCopyDDEOut1 @ 0x1402BD4C4
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x140255BA4 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ?xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z @ 0x1402B9F70 (-xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall xxxClientCopyDDEOut1(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rcx
  void *v7; // rbx
  _DWORD v9[4]; // [rsp+30h] [rbp-158h] BYREF
  void *Src; // [rsp+40h] [rbp-148h] BYREF
  __int64 v11; // [rsp+48h] [rbp-140h] BYREF
  __int64 v12; // [rsp+50h] [rbp-138h]
  _BYTE v13[16]; // [rsp+60h] [rbp-128h] BYREF
  __int128 v14; // [rsp+70h] [rbp-118h] BYREF
  __int128 v15; // [rsp+80h] [rbp-108h]
  __int128 v16; // [rsp+90h] [rbp-F8h]
  __int128 v17; // [rsp+A0h] [rbp-E8h]
  __int64 v18; // [rsp+B0h] [rbp-D8h]
  __int128 v19; // [rsp+C0h] [rbp-C8h] BYREF
  __int128 v20; // [rsp+D0h] [rbp-B8h]
  volatile void *Address[2]; // [rsp+E0h] [rbp-A8h]
  volatile void *v22[2]; // [rsp+F0h] [rbp-98h]
  __int64 v23; // [rsp+100h] [rbp-88h]
  _OWORD v24[4]; // [rsp+120h] [rbp-68h] BYREF
  __int64 v25; // [rsp+160h] [rbp-28h]

  memset_0(&v14, 0, 0x48uLL);
  Src = 0LL;
  v9[0] = 0;
  v24[0] = *(_OWORD *)a1;
  v24[1] = *(_OWORD *)(a1 + 16);
  v24[2] = *(_OWORD *)(a1 + 32);
  v24[3] = *(_OWORD *)(a1 + 48);
  v25 = *(_QWORD *)(a1 + 64);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v13);
  EtwTraceBeginCallback(62LL);
  v2 = KeUserModeCallback(62LL, v24, 72LL, &Src, v9);
  EtwTraceEndCallback(62LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v13);
  if ( v2 >= 0 && v9[0] == 24 )
  {
    v11 = 0LL;
    RtlCopyFromUser(&v11, Src, 8uLL);
    v5 = v11;
    v12 = v11;
    if ( !v11 )
      return v5;
    v6 = *((_QWORD *)PtiCurrent(v4, v3) + 69);
    if ( !v6 || (*(_DWORD *)(v6 + 84) & 1) == 0 || *(__int128 **)(v6 + 96) != &v14 )
    {
      v7 = (void *)*((_QWORD *)Src + 2);
      memset_0(&v19, 0, 0x48uLL);
      RtlCopyFromUser(&v19, v7, 0x48uLL);
      v14 = v19;
      v15 = v20;
      v16 = *(_OWORD *)Address;
      v17 = *(_OWORD *)v22;
      v18 = v23;
      if ( *(_DWORD *)(a1 + 40) )
      {
        ProbeForWrite(Address[0], *(int *)(a1 + 40), 1u);
        memmove((void *)Address[0], (const void *)(a1 + 72), *(int *)(a1 + 40));
      }
      if ( *(_DWORD *)(a1 + 64) )
      {
        ProbeForWrite(v22[1], *(int *)(a1 + 64), 1u);
        memmove((void *)v22[1], (const void *)(a1 + *(int *)(a1 + 40) + 72LL), *(int *)(a1 + 64));
      }
      if ( *((_QWORD *)&v20 + 1) && (unsigned int)xxxClientCopyDDEOut2((struct tagINTDDEINFO *)&v14) )
      {
        if ( (v15 & 0x800) != 0 )
          v5 = *((_QWORD *)&v15 + 1);
        v12 = v5;
      }
      *(_OWORD *)a1 = v14;
      *(_OWORD *)(a1 + 16) = v15;
      *(_OWORD *)(a1 + 32) = v16;
      *(_OWORD *)(a1 + 48) = v17;
      *(_QWORD *)(a1 + 64) = v18;
      return v5;
    }
  }
  return 0LL;
}
