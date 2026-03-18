/*
 * XREFs of ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x140216654
 * Callers:
 *     NtUserStopAndEndInertia @ 0x1401E9D80 (NtUserStopAndEndInertia.c)
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x14004CC00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x14004CC60 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x140219374 (-EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::StopAndEndInertia(PERESOURCE *this, int a2, void *a3)
{
  char v5; // bl
  char v6; // di
  bool v7; // bp
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  unsigned int i; // edx
  unsigned int ExclusiveWaiters; // r8d
  PERESOURCE Blink; // rcx
  char *v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rdi
  char v17; // di
  bool v18; // si
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // r8d
  bool v25; // di
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  int v30; // r8d
  PERESOURCE *v31[8]; // [rsp+50h] [rbp-58h] BYREF

  v5 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)this, a2, (_DWORD)WPP_GLOBAL_Control);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      4,
      308,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids,
      a2);
  }
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v31, this + 4, 0LL);
  Blink = this[7];
  v14 = (char *)(this + 6);
LABEL_14:
  if ( Blink == (PERESOURCE)v14 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v17 = 0;
    }
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, i, ExclusiveWaiters);
      LOBYTE(v20) = v18;
      LOBYTE(v21) = v17;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v20,
        *(_QWORD *)(v19 + 69136),
        2,
        4,
        309,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    UserSetLastError(1168);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v23) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v23) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v5 = 0;
    if ( (_BYTE)v23 || v5 )
    {
      LOBYTE(v30) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v30,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        310,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
  }
  else
  {
    ExclusiveWaiters = (unsigned int)Blink->ExclusiveWaiters;
    for ( i = 0; ; ++i )
    {
      if ( i >= ExclusiveWaiters )
      {
        Blink = (PERESOURCE)Blink->SystemResourcesList.Blink;
        goto LABEL_14;
      }
      v15 = *(_QWORD *)&Blink[2].ActiveCount;
      v16 = 480LL * i;
      if ( *(unsigned __int16 *)(v16 + v15 + 172) == a2 )
        break;
    }
    v22 = W32GetUserSessionState((_DWORD)Blink, i, ExclusiveWaiters);
    if ( (unsigned __int8)CInertiaManager::EndInertiaAtPoint(
                            v22 + 16912,
                            *(_QWORD *)(v16 + v15 + 200),
                            *(_QWORD *)(v16 + v15 + 208),
                            3LL) )
    {
      CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v31, v23);
      return 1LL;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v5 = 0;
    }
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v23, v24);
      LOBYTE(v27) = v25;
      LOBYTE(v28) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v28,
        v27,
        *(_QWORD *)(v26 + 69136),
        2,
        4,
        311,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v31, v23);
  return 0LL;
}
