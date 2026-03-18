/*
 * XREFs of ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x14020BB70
 * Callers:
 *     NtUserStopAndEndInertia @ 0x1401C1050 (NtUserStopAndEndInertia.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D29C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9DE0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x1402122A0 (-EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::StopAndEndInertia(PERESOURCE *this, __int64 a2, void *a3)
{
  int v3; // r14d
  char v5; // bl
  char v6; // di
  bool v7; // bp
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  __int64 i; // rdx
  PERESOURCE Blink; // rcx
  char *v13; // rsi
  __int64 v14; // rdi
  char v15; // di
  bool v16; // si
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rdx
  bool v22; // di
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  int v27; // edx
  int v28; // r8d
  PERESOURCE *v29[8]; // [rsp+50h] [rbp-58h] BYREF

  v3 = a2;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(this, a2);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      4,
      308,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids,
      v3);
  }
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v29, this + 4, 0LL);
  Blink = this[7];
  v13 = (char *)(this + 6);
LABEL_14:
  if ( Blink == (PERESOURCE)v13 )
    goto LABEL_45;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= LODWORD(Blink->ExclusiveWaiters) )
    {
      Blink = (PERESOURCE)Blink->SystemResourcesList.Blink;
      goto LABEL_14;
    }
    v14 = *(_QWORD *)&Blink[2].ActiveCount + 480LL * (unsigned int)i;
    if ( *(unsigned __int16 *)(v14 + 172) == v3 )
      break;
  }
  if ( !v14 )
  {
LABEL_45:
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v15 = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = W32GetUserSessionState(WPP_GLOBAL_Control, i);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v15;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(v17 + 69144),
        2,
        4,
        309,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
    UserSetLastError(1168);
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v27) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v27) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v5 = 0;
    if ( (_BYTE)v27 || v5 )
    {
      LOBYTE(v28) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v27,
        v28,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        310,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
  }
  else
  {
    v20 = W32GetUserSessionState(Blink, i);
    if ( (unsigned __int8)CInertiaManager::EndInertiaAtPoint(
                            v20 + 16920,
                            *(_QWORD *)(v14 + 200),
                            *(_QWORD *)(v14 + 208),
                            3LL) )
    {
      CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v29);
      return 1LL;
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v5 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v21);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v24,
        *(_QWORD *)(v23 + 69144),
        2,
        4,
        311,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v29);
  return 0LL;
}
