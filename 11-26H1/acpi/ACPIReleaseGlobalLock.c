/*
 * XREFs of ACPIReleaseGlobalLock @ 0x14002E900
 * Callers:
 *     GlobalLockEventHandler @ 0x14002E620 (GlobalLockEventHandler.c)
 *     ACPIIoctlReleaseGlobalLock @ 0x140049658 (ACPIIoctlReleaseGlobalLock.c)
 * Callees:
 *     WRITE_PM1_CONTROL @ 0x14002EA8C (WRITE_PM1_CONTROL.c)
 *     WPP_RECORDER_SF_q @ 0x14002EC00 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x14002ED00 (WPP_RECORDER_SF_qd.c)
 *     ACPIAcquireHardwareGlobalLock @ 0x14002EE40 (ACPIAcquireHardwareGlobalLock.c)
 *     ACPIStartNextGlobalLockRequest @ 0x14002EF2C (ACPIStartNextGlobalLockRequest.c)
 *     WPP_RECORDER_SF_qq @ 0x14002F0B4 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall ACPIReleaseGlobalLock(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 v4; // rdx
  volatile signed __int32 *v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett

  v3 = a1;
  v4 = *((_QWORD *)AcpiInformation + 9);
  if ( a1 == v4 )
  {
    if ( (*((_DWORD *)AcpiInformation + 20))-- == 1 )
    {
      *((_QWORD *)AcpiInformation + 9) = 0LL;
      v6 = (volatile signed __int32 *)*((_QWORD *)AcpiInformation + 5);
      v7 = *v6;
      if ( !*((_BYTE *)AcpiInformation + 84) )
      {
        do
        {
          v8 = v7;
          v7 = _InterlockedCompareExchange(v6, v7 & 0xFFFFFFFC, v7);
        }
        while ( v8 != v7 );
        if ( (v7 & 1) != 0 )
          WRITE_PM1_CONTROL(4LL, 0LL);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v6,
          3,
          17,
          (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
          v3);
      }
      if ( *((_UNKNOWN **)AcpiInformation + 6) != (_UNKNOWN *)((char *)AcpiInformation + 48) )
      {
        if ( (unsigned __int8)ACPIAcquireHardwareGlobalLock(*((_QWORD *)AcpiInformation + 5), v6, a3) )
          ACPIStartNextGlobalLockRequest();
      }
      return 0LL;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qd(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      3,
      16,
      (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
      *((_QWORD *)AcpiInformation + 9),
      *((_DWORD *)AcpiInformation + 20));
    return 0LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_qq(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        3,
        15,
        (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
        *((_QWORD *)AcpiInformation + 9),
        a1);
    }
    return 3222536215LL;
  }
}
