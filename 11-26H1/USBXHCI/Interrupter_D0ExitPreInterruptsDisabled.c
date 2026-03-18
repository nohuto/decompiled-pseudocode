/*
 * XREFs of Interrupter_D0ExitPreInterruptsDisabled @ 0x1400284C0
 * Callers:
 *     Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x140028380 (Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Interrupter_ReleaseEventRingLock @ 0x1400285B0 (Interrupter_ReleaseEventRingLock.c)
 *     Interrupter_AcquireEventRingLock @ 0x140028690 (Interrupter_AcquireEventRingLock.c)
 */

__int64 __fastcall Interrupter_D0ExitPreInterruptsDisabled(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  char v6; // al
  __int64 v7; // rdx
  int v8; // edx
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  for ( Timeout.QuadPart = 0LL; (unsigned int)v1 < *(_DWORD *)(a1 + 92); v1 = (unsigned int)(v1 + 1) )
  {
    v3 = *(_QWORD *)(a1 + 32);
    v4 = *(_QWORD *)(v3 + 8 * v1);
    if ( v4 && *(_QWORD *)(v4 + 216) )
    {
      v6 = Interrupter_AcquireEventRingLock(*(_QWORD *)(v3 + 8 * v1));
      *(_DWORD *)(v4 + 112) |= 2u;
      LOBYTE(v7) = v6;
      Interrupter_ReleaseEventRingLock(v4, v7);
      Timeout.QuadPart = -600000000LL;
      while ( KeWaitForSingleObject((PVOID)(v4 + 192), Executive, 0, 0, &Timeout) == 258 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
            v8,
            9,
            36,
            (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
            v1);
        }
      }
    }
  }
  return 0LL;
}
