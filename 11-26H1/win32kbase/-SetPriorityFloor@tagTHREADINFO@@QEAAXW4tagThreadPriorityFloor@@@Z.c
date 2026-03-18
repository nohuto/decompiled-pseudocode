/*
 * XREFs of ?SetPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z @ 0x1400F7D40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_DdddD @ 0x1400F80C0 (WPP_RECORDER_AND_TRACE_SF_DdddD.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400F8224 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDdd @ 0x1400F8318 (WPP_RECORDER_AND_TRACE_SF_DDdd.c)
 */

void __fastcall tagTHREADINFO::SetPriorityFloor(_QWORD *a1, unsigned int a2)
{
  char v2; // r12
  __int64 v4; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rdx
  int v8; // ebp
  CTouchProcessor **v9; // r8
  bool v10; // r14
  int v11; // edx
  int v12; // r8d
  __int64 UserSessionState; // rax
  int v14; // edx
  int v15; // r8d
  char v16; // al
  bool v17; // bp
  bool v18; // r14
  char ThreadId; // di
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  __int16 v26; // bp
  int v27; // r14d
  char v28; // si
  char v29; // di
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  __int64 v33; // rax
  int v34; // edx
  int v35; // r8d
  int BugCheckParameter4; // [rsp+20h] [rbp-78h]
  int v37; // [rsp+28h] [rbp-70h]
  int v38; // [rsp+38h] [rbp-60h]
  bool v39; // [rsp+A8h] [rbp+10h]
  bool v40; // [rsp+A8h] [rbp+10h]

  v2 = 1;
  if ( a2 > 1 )
    goto LABEL_3;
  _mm_lfence();
  v4 = a2;
  v5 = a1 + 216;
  v6 = (unsigned __int8)asc_140269F10[8 * a2];
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5, 0LL);
  v7 = (unsigned int)v6;
  if ( *((_BYTE *)a1 + v6 + 1744) == 0xFF
    || (v8 = *(_DWORD *)&asc_140269F10[8 * v4 + 4], (v8 & *((_DWORD *)a1 + 435)) == v8) )
  {
LABEL_3:
    KeBugCheckEx(0x164u, 0x41uLL, 0LL, 0LL, 0LL);
  }
  v9 = &WPP_GLOBAL_Control;
  v10 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    PsGetThreadId((PETHREAD)*a1);
    UserSessionState = W32GetUserSessionState(a1[57], v11, v12);
    LOBYTE(v14) = v10;
    LOBYTE(v15) = v39;
    WPP_RECORDER_AND_TRACE_SF_DDdd(*((_QWORD *)WPP_GLOBAL_Control + 3), v14, v15, *(_QWORD *)(UserSessionState + 69136));
    v7 = v6;
    v9 = &WPP_GLOBAL_Control;
  }
  *((_DWORD *)a1 + 435) |= v8;
  v16 = *((_BYTE *)a1 + v7 + 1744) + 1;
  *((_BYTE *)a1 + v7 + 1744) = v16;
  if ( v16 == 1 )
  {
    if ( *((unsigned __int16 *)a1 + 868) < 1 << v6 )
    {
      v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        ThreadId = (unsigned __int8)PsGetThreadId((PETHREAD)*a1);
        v23 = W32GetUserSessionState(v21, v20, v22);
        LOBYTE(v24) = v18;
        LOBYTE(v25) = v17;
        WPP_RECORDER_AND_TRACE_SF_dD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v24,
          *(_QWORD *)(v23 + 69136),
          4,
          13,
          16,
          (__int64)&WPP_ecd75a293f58357f88bf2c1d127de49e_Traceguids,
          v6,
          ThreadId);
      }
      PsAdjustWin32kPriorityFloor(*a1, (unsigned int)v6, v9);
    }
    *((_WORD *)a1 + 868) |= 1 << v6;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v2 = 0;
  }
  v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = *((_WORD *)a1 + 868);
    v27 = *((_DWORD *)a1 + 435);
    v28 = *((_BYTE *)a1 + v6 + 1744);
    v29 = (unsigned __int8)PsGetThreadId((PETHREAD)*a1);
    v33 = W32GetUserSessionState(v31, v30, v32);
    LOBYTE(v34) = v2;
    LOBYTE(v35) = v40;
    WPP_RECORDER_AND_TRACE_SF_DdddD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v34,
      v35,
      *(_QWORD *)(v33 + 69136),
      BugCheckParameter4,
      v37,
      17,
      v38,
      v29,
      v6,
      v28,
      v27,
      v26);
  }
  ExReleasePushLockExclusiveEx(v5);
  KeLeaveCriticalRegion();
}
