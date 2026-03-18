/*
 * XREFs of ?ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z @ 0x1400C0B80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400B4C14 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     ?GetPriorityFloorRequester@@YA?AW4tagThreadPriorityFloorRequester@@W4tagThreadPriorityFloor@@@Z @ 0x1400C13C8 (-GetPriorityFloorRequester@@YA-AW4tagThreadPriorityFloorRequester@@W4tagThreadPriorityFloor@@@Z.c)
 *     ?GetPriorityFloorValue@@YAEW4tagThreadPriorityFloor@@@Z @ 0x1400C140C (-GetPriorityFloorValue@@YAEW4tagThreadPriorityFloor@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_DdddD @ 0x1400C1450 (WPP_RECORDER_AND_TRACE_SF_DdddD.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDdd @ 0x1400C15B0 (WPP_RECORDER_AND_TRACE_SF_DDdd.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?GetTID@tagTHREADINFO@@QEBAKXZ @ 0x1400F1F80 (-GetTID@tagTHREADINFO@@QEBAKXZ.c)
 */

void __fastcall tagTHREADINFO::ClearPriorityFloor(_QWORD *a1, unsigned int a2)
{
  unsigned __int8 PriorityFloorValue; // al
  __int64 v5; // r13
  int PriorityFloorRequester; // ebp
  char v7; // r12
  __int64 v8; // r8
  bool v9; // r14
  __int64 v10; // rdx
  __int64 UserSessionState; // rax
  int v12; // edx
  int v13; // r8d
  bool v14; // zf
  int v15; // edx
  unsigned __int16 v16; // ax
  unsigned int v17; // r14d
  bool v18; // si
  bool v19; // bp
  char ThreadId; // di
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  __int64 v26; // rdx
  bool v27; // r13
  __int16 v28; // bp
  int v29; // r14d
  char v30; // si
  char v31; // di
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  bool v37; // si
  bool v38; // bp
  char TID; // di
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  int v45; // [rsp+20h] [rbp-88h]
  int v46; // [rsp+28h] [rbp-80h]
  int v47; // [rsp+38h] [rbp-70h]
  unsigned __int8 v48; // [rsp+B0h] [rbp+8h]
  bool v49; // [rsp+C0h] [rbp+18h]

  PriorityFloorValue = GetPriorityFloorValue(a2);
  v5 = PriorityFloorValue;
  v48 = PriorityFloorValue;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 216, 0LL);
  if ( !*((_BYTE *)a1 + v5 + 1744) )
    goto LABEL_2;
  PriorityFloorRequester = GetPriorityFloorRequester(a2);
  if ( (PriorityFloorRequester & *((_DWORD *)a1 + 435)) != PriorityFloorRequester )
    goto LABEL_2;
  v7 = 1;
  v8 = 4096LL;
  v9 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v49 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    PsGetThreadId((PETHREAD)*a1);
    UserSessionState = W32GetUserSessionState(a1[58], v10);
    LOBYTE(v12) = v9;
    LOBYTE(v13) = v49;
    WPP_RECORDER_AND_TRACE_SF_DDdd(*((_QWORD *)WPP_GLOBAL_Control + 3), v12, v13, *(_QWORD *)(UserSessionState + 69144));
    v8 = 4096LL;
  }
  *((_DWORD *)a1 + 435) &= ~PriorityFloorRequester;
  v14 = (*((_BYTE *)a1 + v5 + 1744))-- == 1;
  if ( v14 )
  {
    v15 = 1 << v5;
    if ( ((1 << v5) & (unsigned __int16)a1[217]) == 1 << v5 )
    {
      v16 = a1[217] & ~(_WORD)v15;
      *((_WORD *)a1 + 868) = v16;
      if ( v16 < v15 )
      {
        v14 = !_BitScanReverse(&v17, v16);
        if ( v14 )
        {
          v18 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            ThreadId = (unsigned __int8)PsGetThreadId((PETHREAD)*a1);
            v23 = W32GetUserSessionState(v22, v21);
            LOBYTE(v24) = v19;
            LOBYTE(v25) = v18;
            WPP_RECORDER_AND_TRACE_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v25,
              v24,
              *(_QWORD *)(v23 + 69144),
              4,
              13,
              20,
              (__int64)&WPP_73c4af39d81e3d70f00c63da4eecef9b_Traceguids,
              ThreadId);
          }
          v26 = 0LL;
        }
        else
        {
          v37 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            TID = tagTHREADINFO::GetTID((tagTHREADINFO *)a1);
            v42 = W32GetUserSessionState(v41, v40);
            LOBYTE(v43) = v38;
            LOBYTE(v44) = v37;
            WPP_RECORDER_AND_TRACE_SF_dD(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v44,
              v43,
              *(_QWORD *)(v42 + 69144),
              4,
              13,
              19,
              (__int64)&WPP_73c4af39d81e3d70f00c63da4eecef9b_Traceguids,
              v17,
              TID);
          }
          v26 = v17;
        }
        PsAdjustWin32kPriorityFloor(*a1, v26, v8);
      }
      goto LABEL_21;
    }
LABEL_2:
    KeBugCheckEx(0x164u, 0x41uLL, 0LL, 0LL, 0LL);
  }
LABEL_21:
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v7 = 0;
  }
  v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v28 = *((_WORD *)a1 + 868);
    v29 = *((_DWORD *)a1 + 435);
    v30 = *((_BYTE *)a1 + v48 + 1744);
    v31 = (unsigned __int8)PsGetThreadId((PETHREAD)*a1);
    v34 = W32GetUserSessionState(v33, v32);
    LOBYTE(v35) = v27;
    LOBYTE(v36) = v7;
    WPP_RECORDER_AND_TRACE_SF_DdddD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v36,
      v35,
      *(_QWORD *)(v34 + 69144),
      v45,
      v46,
      21,
      v47,
      v31,
      v48,
      v30,
      v29,
      v28);
  }
  ExReleasePushLockExclusiveEx(a1 + 216, 0LL);
  KeLeaveCriticalRegion();
}
