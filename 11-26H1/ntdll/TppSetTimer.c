/*
 * XREFs of TppSetTimer @ 0x180089890
 * Callers:
 *     TpSetWaitEx @ 0x180039E60 (TpSetWaitEx.c)
 *     TpSetTimerEx @ 0x180089470 (TpSetTimerEx.c)
 *     TppSetupNextWait @ 0x1800C7470 (TppSetupNextWait.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlSetLastWin32Error @ 0x180040B90 (RtlSetLastWin32Error.c)
 *     TppUpdateSubQueueTimer @ 0x180088FF0 (TppUpdateSubQueueTimer.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

void __fastcall TppSetTimer(__int64 a1, _RTL_SRWLOCK *a2, __int64 *a3, int a4, int a5)
{
  __int64 v5; // rax
  int v7; // edx
  __int64 *v9; // rbx
  __int64 v11; // rbp
  _BYTE *v12; // r12
  __int64 v13; // rcx
  __int64 v14; // r8
  _DWORD *SharedData; // r9
  __int64 v16; // r9
  int v17; // eax
  _DWORD *v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // r8
  __int64 v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // r9
  bool v24; // of
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 *v30; // rdx
  _QWORD *v31; // r8
  __int64 v32; // rcx
  _QWORD *v33; // r8
  __int64 v34; // r9
  LONG v35; // eax
  char v36; // [rsp+20h] [rbp-A8h]
  _DWORD Fields[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v38; // [rsp+38h] [rbp-90h]
  __int128 v39; // [rsp+40h] [rbp-88h]
  __int64 v40; // [rsp+50h] [rbp-78h]
  __int64 v41; // [rsp+58h] [rbp-70h]
  __int64 v42; // [rsp+60h] [rbp-68h]
  int v43; // [rsp+68h] [rbp-60h]
  int v44; // [rsp+6Ch] [rbp-5Ch]
  int v45; // [rsp+70h] [rbp-58h]

  v5 = *a3;
  v7 = a5;
  v9 = (__int64 *)(a1 + 328);
  *(_DWORD *)(a1 + 344) = a5;
  *(_DWORD *)(a1 + 348) = a4;
  if ( v5 >= 0 )
  {
    v12 = (_BYTE *)(a1 + 354);
    *(_BYTE *)(a1 + 354) |= 2u;
    v11 = (__int64)&a2[1];
    v13 = *a3;
    v36 = 1;
    *v9 = *a3;
    if ( !v13 )
    {
      v13 = 1LL;
      v36 = 1;
      *v9 = 1LL;
    }
  }
  else
  {
    v36 = 0;
    v11 = (__int64)&a2[16];
    if ( a1 == -328 )
    {
      v35 = RtlNtStatusToDosErrorNoTeb(-1073741811);
      RtlSetLastWin32Error(v35);
      v36 = 0;
    }
    else
    {
      *v9 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
    }
    v12 = (_BYTE *)(a1 + 354);
    v13 = *v9 - *a3;
    if ( v13 < *v9 )
      v13 = 0x7FFFFFFFFFFFFFFFLL;
    *v9 = v13;
    v7 = *(_DWORD *)(a1 + 344);
  }
  v14 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v16 = (__int64)NtCurrentPeb()->SharedData + 556;
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 344);
    v16 = 2147353478LL;
  }
  if ( *(_BYTE *)v16 )
  {
    Fields[1] = 472514560;
    Fields[0] = 0;
    v38 = 0LL;
    v43 = *(_DWORD *)(a1 + 348);
    v17 = ((unsigned __int8)*v12 >> 1) & 1;
    v39 = 0LL;
    v45 = v17;
    v41 = v11;
    v42 = a1;
    v40 = v13;
    v44 = v7;
    v18 = NtCurrentPeb()->SharedData;
    if ( v18 && *v18 )
      v14 = (__int64)NtCurrentPeb()->SharedData + 556;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v14, 0x20402u, 0x24u, Fields);
  }
  RtlAcquireSRWLockExclusive(a2);
  v19 = *v9;
  v20 = (_QWORD *)(a1 + 288);
  v21 = *(unsigned int *)(a1 + 344);
  v22 = (__int64 *)(a1 + 304);
  *(_QWORD *)(a1 + 320) = *v9;
  *(_QWORD *)(a1 + 312) = a1 + 304;
  v23 = v19 + 10000 * v21;
  *(_QWORD *)(a1 + 304) = a1 + 304;
  v24 = __OFSUB__(v23, v19);
  *(_QWORD *)(a1 + 296) = a1 + 288;
  *(_QWORD *)(a1 + 288) = a1 + 288;
  v25 = *(_QWORD **)(v11 + 8);
  if ( 10000 * v21 < 0 != v24 )
    v23 = 0x7FFFFFFFFFFFFFFFLL;
  if ( !v25 )
  {
LABEL_20:
    *(_QWORD *)(v11 + 8) = v20;
    goto LABEL_21;
  }
  if ( v25[4] >= *(_QWORD *)(a1 + 320) )
  {
    v28 = *v22;
    if ( *(__int64 **)(*v22 + 8) != v22 )
      goto LABEL_17;
    *v25 = v28;
    v25[1] = v22;
    *(_QWORD *)(v28 + 8) = v25;
    *v22 = (__int64)v25;
    goto LABEL_20;
  }
  v26 = v25[2];
  v27 = v25 + 2;
  if ( *(_QWORD **)(v26 + 8) != v25 + 2 )
    goto LABEL_17;
  *v20 = v26;
  *(_QWORD *)(a1 + 296) = v27;
  *(_QWORD *)(v26 + 8) = v20;
  *v27 = v20;
LABEL_21:
  v29 = (_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 280) = v23;
  v30 = (__int64 *)(a1 + 264);
  *(_QWORD *)(a1 + 272) = a1 + 264;
  *(_QWORD *)(a1 + 264) = a1 + 264;
  *(_QWORD *)(a1 + 256) = a1 + 248;
  *(_QWORD *)(a1 + 248) = a1 + 248;
  v31 = *(_QWORD **)(v11 + 16);
  if ( !v31 )
    goto LABEL_31;
  if ( v31[4] >= *(_QWORD *)(a1 + 280) )
  {
    v34 = *v30;
    if ( *(__int64 **)(*v30 + 8) != v30 )
LABEL_17:
      __fastfail(3u);
    *v31 = v34;
    v31[1] = v30;
    *(_QWORD *)(v34 + 8) = v31;
    *v30 = (__int64)v31;
LABEL_31:
    *(_QWORD *)(v11 + 16) = v29;
    goto LABEL_32;
  }
  v32 = v31[2];
  v33 = v31 + 2;
  if ( *(_QWORD **)(v32 + 8) != v33 )
    goto LABEL_17;
  *v29 = v32;
  *(_QWORD *)(a1 + 256) = v33;
  *(_QWORD *)(v32 + 8) = v29;
  *v33 = v29;
LABEL_32:
  *v12 |= 1u;
  *(_BYTE *)(a1 + 352) = 1;
  TppUpdateSubQueueTimer(v11, v36);
  RtlReleaseSRWLockExclusive(a2);
}
