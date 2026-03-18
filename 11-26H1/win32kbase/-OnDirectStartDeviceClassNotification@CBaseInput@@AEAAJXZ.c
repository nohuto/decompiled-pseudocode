/*
 * XREFs of ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1400E5180
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1400E52A0 (RIMDirectStartDeviceClassNotifications.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1400E5470 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 */

__int64 __fastcall CBaseInput::OnDirectStartDeviceClassNotification(CBaseInput *this)
{
  unsigned int Count; // eax
  CTouchProcessor *v3; // rdx
  int v4; // ecx
  int started; // edi
  int v6; // r8d
  bool v7; // bl
  bool v8; // si
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  void **v13; // [rsp+68h] [rbp+10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v13, "OnDirectStartDeviceClassNotification", 0LL);
  Count = AtomicExecutionCheck::GetCount();
  if ( Count )
    KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
  started = RIMDirectStartDeviceClassNotifications(*((_QWORD *)this + 1), gpWin32kDriverObject);
  if ( started < 0 )
  {
    v3 = WPP_GLOBAL_Control;
    v7 = 0;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      v4 = *((_DWORD *)WPP_GLOBAL_Control + 11);
      if ( (v4 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        v7 = 1;
    }
    v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(v4, (_DWORD)WPP_GLOBAL_Control, v6);
      LOBYTE(v10) = v8;
      LOBYTE(v11) = v7;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 69136),
        2,
        2,
        16,
        (__int64)&WPP_a07c44b8f26832a02b5dbe6dbb74dde0_Traceguids,
        started);
    }
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v13,
    (__int64)v3);
  return (unsigned int)started;
}
