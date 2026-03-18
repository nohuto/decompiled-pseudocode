/*
 * XREFs of ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x140212A90
 * Callers:
 *     <none>
 * Callees:
 *     HMCreateHandleForObject @ 0x14003B950 (HMCreateHandleForObject.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x14014B6B8 (UpdatePointerDeviceSystemMetrics.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?OnPTPDeviceArrived@PTPTelemetry@@SAXQEAUDEVICEINFO@@@Z @ 0x1402114A4 (-OnPTPDeviceArrived@PTPTelemetry@@SAXQEAUDEVICEINFO@@@Z.c)
 */

char __fastcall CHidInput::OnRIMDeviceCreated(
        CHidInput *this,
        struct RawInputManagerDeviceObject *a2,
        struct DEVICEINFO *a3)
{
  char v4; // si
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbx
  bool v8; // zf

  v4 = 1;
  if ( (*((_DWORD *)a2 + 64) & 0x80u) != 0 )
  {
    v5 = (_QWORD *)*((_QWORD *)a2 + 66);
    LOBYTE(a2) = 22;
    v7 = HMCreateHandleForObject(v5, (__int64)a2);
    if ( v7 )
    {
      if ( *((_DWORD *)a3 + 2) != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 819);
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      if ( *(_QWORD *)(v7 + 792) != -1LL )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 826);
      v8 = *(_DWORD *)(v7 + 24) == 7;
      *(_QWORD *)(v7 + 792) = *(_QWORD *)a3;
      if ( v8 )
        PTPTelemetry::OnPTPDeviceArrived(a3, v6);
      LOBYTE(v6) = 1;
      UpdatePointerDeviceSystemMetrics(a3, v6);
    }
    else
    {
      return 0;
    }
  }
  return v4;
}
