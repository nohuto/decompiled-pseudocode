/*
 * XREFs of ACPIAsyncAcquireGlobalLock @ 0x14002E660
 * Callers:
 *     ACPIIoctlAcquireGlobalLock @ 0x14002D708 (ACPIIoctlAcquireGlobalLock.c)
 *     GlobalLockEventHandler @ 0x14002E620 (GlobalLockEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x14002EC00 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x14002ED00 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall ACPIAsyncAcquireGlobalLock(__int64 a1)
{
  KIRQL v2; // di
  volatile signed __int32 *v3; // rdx
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  void **i; // rcx
  _QWORD *v8; // rcx
  char *v9; // rax
  void **v10; // rdx
  void **v11; // rsi

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      3,
      10,
      (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
      a1);
  if ( a1 == *((_QWORD *)AcpiInformation + 9) )
  {
    ++*((_DWORD *)AcpiInformation + 20);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qd(
        WPP_GLOBAL_Control->DeviceExtension,
        4,
        3,
        11,
        (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
        a1,
        *((_DWORD *)AcpiInformation + 20));
    return 0LL;
  }
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AcpiInformation + 8);
  if ( *((_UNKNOWN **)AcpiInformation + 6) == (_UNKNOWN *)((char *)AcpiInformation + 48) )
  {
    v3 = (volatile signed __int32 *)*((_QWORD *)AcpiInformation + 5);
    if ( *((_BYTE *)AcpiInformation + 84) )
      goto LABEL_9;
    v4 = *v3;
    do
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange(v3, v4 | ((v4 & 2 | 4u) >> 1), v4);
    }
    while ( v5 != v4 );
    if ( (v4 & 2) == 0 )
    {
LABEL_9:
      *((_QWORD *)AcpiInformation + 9) = a1;
      *((_DWORD *)AcpiInformation + 20) = 1;
      KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v2);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          4,
          3,
          12,
          (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
          a1);
      return 0LL;
    }
  }
  for ( i = (void **)*((_QWORD *)AcpiInformation + 6); ; i = (void **)*i )
  {
    if ( i == (void **)((char *)AcpiInformation + 48) )
    {
      *(_WORD *)(a1 + 10) = 1;
      v8 = (_QWORD *)(a1 + 16);
      v9 = (char *)AcpiInformation + 48;
      v10 = (void **)*((_QWORD *)AcpiInformation + 7);
      if ( *v10 != (char *)AcpiInformation + 48 )
        __fastfail(3u);
      *v8 = v9;
      *(_QWORD *)(a1 + 24) = v10;
      *v10 = v8;
      *((_QWORD *)v9 + 1) = v8;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          4,
          3,
          14,
          (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
          a1);
      goto LABEL_17;
    }
    v11 = i - 2;
    if ( i - 2 == (void **)a1 )
      break;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      3,
      13,
      (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
      a1,
      *(_WORD *)(a1 + 10));
  ++*((_WORD *)v11 + 5);
LABEL_17:
  KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v2);
  return 259LL;
}
