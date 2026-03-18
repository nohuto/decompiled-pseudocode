/*
 * XREFs of ?SetPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z @ 0x1400C0FB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400B4C14 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     ?GetPriorityFloorRequester@@YA?AW4tagThreadPriorityFloorRequester@@W4tagThreadPriorityFloor@@@Z @ 0x1400C13C8 (-GetPriorityFloorRequester@@YA-AW4tagThreadPriorityFloorRequester@@W4tagThreadPriorityFloor@@@Z.c)
 *     ?GetPriorityFloorValue@@YAEW4tagThreadPriorityFloor@@@Z @ 0x1400C140C (-GetPriorityFloorValue@@YAEW4tagThreadPriorityFloor@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_DdddD @ 0x1400C1450 (WPP_RECORDER_AND_TRACE_SF_DdddD.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDdd @ 0x1400C15B0 (WPP_RECORDER_AND_TRACE_SF_DDdd.c)
 */

void __fastcall tagTHREADINFO::SetPriorityFloor(_QWORD *a1, unsigned int a2)
{
  __int64 PriorityFloorValue; // r13
  int PriorityFloorRequester; // ebp
  __int64 v6; // r8
  char v7; // r12
  bool v8; // r14
  __int64 v9; // rdx
  __int64 UserSessionState; // rax
  int v11; // edx
  int v12; // r8d
  char v13; // cl
  bool v14; // bp
  bool v15; // r14
  char ThreadId; // di
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  __int16 v22; // bp
  int v23; // r14d
  char v24; // si
  char v25; // di
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // edx
  int v30; // r8d
  int v31; // [rsp+20h] [rbp-78h]
  int v32; // [rsp+28h] [rbp-70h]
  int v33; // [rsp+38h] [rbp-60h]
  bool v34; // [rsp+A0h] [rbp+8h]
  bool v35; // [rsp+A0h] [rbp+8h]

  PriorityFloorValue = (unsigned __int8)GetPriorityFloorValue(a2);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 216, 0LL);
  if ( *((_BYTE *)a1 + PriorityFloorValue + 1744) == 0xFF
    || (PriorityFloorRequester = GetPriorityFloorRequester(a2),
        (PriorityFloorRequester & *((_DWORD *)a1 + 435)) == PriorityFloorRequester) )
  {
    KeBugCheckEx(0x164u, 0x41uLL, 0LL, 0LL, 0LL);
  }
  v7 = 1;
  v8 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    PsGetThreadId((PETHREAD)*a1);
    UserSessionState = W32GetUserSessionState(a1[58], v9);
    LOBYTE(v11) = v8;
    LOBYTE(v12) = v34;
    WPP_RECORDER_AND_TRACE_SF_DDdd(*((_QWORD *)WPP_GLOBAL_Control + 3), v11, v12, *(_QWORD *)(UserSessionState + 69144));
  }
  *((_DWORD *)a1 + 435) |= PriorityFloorRequester;
  v13 = *((_BYTE *)a1 + PriorityFloorValue + 1744) + 1;
  *((_BYTE *)a1 + PriorityFloorValue + 1744) = v13;
  if ( v13 == 1 )
  {
    if ( *((unsigned __int16 *)a1 + 868) < 1 << PriorityFloorValue )
    {
      v14 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        ThreadId = (unsigned __int8)PsGetThreadId((PETHREAD)*a1);
        v19 = W32GetUserSessionState(v18, v17);
        LOBYTE(v20) = v15;
        LOBYTE(v21) = v14;
        WPP_RECORDER_AND_TRACE_SF_dD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v21,
          v20,
          *(_QWORD *)(v19 + 69144),
          4,
          13,
          16,
          (__int64)&WPP_73c4af39d81e3d70f00c63da4eecef9b_Traceguids,
          PriorityFloorValue,
          ThreadId);
      }
      PsAdjustWin32kPriorityFloor(*a1, (unsigned int)PriorityFloorValue, v6);
    }
    *((_WORD *)a1 + 868) |= 1 << PriorityFloorValue;
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v7 = 0;
  }
  v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v22 = *((_WORD *)a1 + 868);
    v23 = *((_DWORD *)a1 + 435);
    v24 = *((_BYTE *)a1 + PriorityFloorValue + 1744);
    v25 = (unsigned __int8)PsGetThreadId((PETHREAD)*a1);
    v28 = W32GetUserSessionState(v27, v26);
    LOBYTE(v29) = v7;
    LOBYTE(v30) = v35;
    WPP_RECORDER_AND_TRACE_SF_DdddD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v29,
      v30,
      *(_QWORD *)(v28 + 69144),
      v31,
      v32,
      17,
      v33,
      v25,
      PriorityFloorValue,
      v24,
      v23,
      v22);
  }
  ExReleasePushLockExclusiveEx(a1 + 216, 0LL);
  KeLeaveCriticalRegion();
}
