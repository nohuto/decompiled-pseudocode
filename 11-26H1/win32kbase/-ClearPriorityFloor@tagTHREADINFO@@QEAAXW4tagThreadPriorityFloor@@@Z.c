/*
 * XREFs of ?ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z @ 0x1400F77B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPriorityFloorRequester@@YA?AW4tagThreadPriorityFloorRequester@@W4tagThreadPriorityFloor@@@Z @ 0x1400F7BF0 (-GetPriorityFloorRequester@@YA-AW4tagThreadPriorityFloorRequester@@W4tagThreadPriorityFloor@@@Z.c)
 *     ?GetPriorityFloorValue@@YAEW4tagThreadPriorityFloor@@@Z @ 0x1400F7C38 (-GetPriorityFloorValue@@YAEW4tagThreadPriorityFloor@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_DdddD @ 0x1400F80C0 (WPP_RECORDER_AND_TRACE_SF_DdddD.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400F8224 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDdd @ 0x1400F8318 (WPP_RECORDER_AND_TRACE_SF_DDdd.c)
 *     ?GetTID@tagTHREADINFO@@QEBAKXZ @ 0x140137220 (-GetTID@tagTHREADINFO@@QEBAKXZ.c)
 */

void __fastcall tagTHREADINFO::ClearPriorityFloor(_QWORD *a1, unsigned int a2)
{
  unsigned __int8 PriorityFloorValue; // al
  __int64 v5; // rsi
  int PriorityFloorRequester; // ebp
  char v7; // r12
  __int64 v8; // r8
  bool v9; // r14
  int v10; // edx
  int v11; // r8d
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  bool v15; // zf
  int v16; // edx
  unsigned __int16 v17; // ax
  unsigned int v18; // r14d
  bool v19; // si
  bool v20; // bp
  char ThreadId; // di
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rdx
  bool v29; // r13
  __int16 v30; // bp
  int v31; // r14d
  char v32; // si
  char v33; // di
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  bool v40; // si
  bool v41; // bp
  char TID; // di
  int v43; // edx
  int v44; // ecx
  int v45; // r8d
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  int BugCheckParameter4; // [rsp+20h] [rbp-88h]
  int v50; // [rsp+28h] [rbp-80h]
  int v51; // [rsp+38h] [rbp-70h]
  unsigned __int8 v52; // [rsp+B0h] [rbp+8h]
  bool v53; // [rsp+C0h] [rbp+18h]

  PriorityFloorValue = GetPriorityFloorValue(a2);
  v5 = PriorityFloorValue;
  v52 = PriorityFloorValue;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 216, 0LL);
  if ( !*((_BYTE *)a1 + v5 + 1744) )
    goto LABEL_2;
  PriorityFloorRequester = GetPriorityFloorRequester(a2);
  if ( (PriorityFloorRequester & *((_DWORD *)a1 + 435)) != PriorityFloorRequester )
    goto LABEL_2;
  v7 = 1;
  v8 = 4096LL;
  v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v53 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    PsGetThreadId((PETHREAD)*a1);
    UserSessionState = W32GetUserSessionState(a1[57], v10, v11);
    LOBYTE(v13) = v53;
    LOBYTE(v14) = v9;
    WPP_RECORDER_AND_TRACE_SF_DDdd(*((_QWORD *)WPP_GLOBAL_Control + 3), v14, v13, *(_QWORD *)(UserSessionState + 69136));
    v8 = 4096LL;
  }
  *((_DWORD *)a1 + 435) &= ~PriorityFloorRequester;
  v15 = (*((_BYTE *)a1 + (unsigned int)v5 + 1744))-- == 1;
  if ( v15 )
  {
    v16 = 1 << v5;
    if ( ((1 << v5) & (unsigned __int16)a1[217]) == 1 << v5 )
    {
      v17 = a1[217] & ~(_WORD)v16;
      *((_WORD *)a1 + 868) = v17;
      if ( v17 < v16 )
      {
        v15 = !_BitScanReverse(&v18, v17);
        if ( v15 )
        {
          v19 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            ThreadId = (unsigned __int8)PsGetThreadId((PETHREAD)*a1);
            v25 = W32GetUserSessionState(v23, v22, v24);
            LOBYTE(v26) = v20;
            LOBYTE(v27) = v19;
            WPP_RECORDER_AND_TRACE_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v27,
              v26,
              *(_QWORD *)(v25 + 69136),
              4,
              13,
              20,
              (__int64)&WPP_ecd75a293f58357f88bf2c1d127de49e_Traceguids,
              ThreadId);
          }
          v28 = 0LL;
        }
        else
        {
          v40 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            TID = tagTHREADINFO::GetTID((tagTHREADINFO *)a1);
            v46 = W32GetUserSessionState(v44, v43, v45);
            LOBYTE(v47) = v41;
            LOBYTE(v48) = v40;
            WPP_RECORDER_AND_TRACE_SF_dD(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v48,
              v47,
              *(_QWORD *)(v46 + 69136),
              4,
              13,
              19,
              (__int64)&WPP_ecd75a293f58357f88bf2c1d127de49e_Traceguids,
              v18,
              TID);
          }
          v28 = v18;
        }
        PsAdjustWin32kPriorityFloor(*a1, v28, v8);
      }
      goto LABEL_21;
    }
LABEL_2:
    KeBugCheckEx(0x164u, 0x41uLL, 0LL, 0LL, 0LL);
  }
LABEL_21:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v7 = 0;
  }
  v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v30 = *((_WORD *)a1 + 868);
    v31 = *((_DWORD *)a1 + 435);
    v32 = *((_BYTE *)a1 + v52 + 1744);
    v33 = (unsigned __int8)PsGetThreadId((PETHREAD)*a1);
    v37 = W32GetUserSessionState(v35, v34, v36);
    LOBYTE(v38) = v29;
    LOBYTE(v39) = v7;
    WPP_RECORDER_AND_TRACE_SF_DdddD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v39,
      v38,
      *(_QWORD *)(v37 + 69136),
      BugCheckParameter4,
      v50,
      21,
      v51,
      v33,
      v52,
      v32,
      v31,
      v30);
  }
  ExReleasePushLockExclusiveEx(a1 + 216);
  KeLeaveCriticalRegion();
}
