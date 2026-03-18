/*
 * XREFs of ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x140179B50
 * Callers:
 *     HandleInputThreadDeactivated @ 0x140179B00 (HandleInputThreadDeactivated.c)
 *     HandleInputThreadActivated @ 0x1401A2414 (HandleInputThreadActivated.c)
 * Callees:
 *     RimInputTypeToDeviceInputType @ 0x14005F250 (RimInputTypeToDeviceInputType.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     GetKnownRIMDeviceKind @ 0x1401818AC (GetKnownRIMDeviceKind.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1401AFB50 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBaseInput::HandleInputThreadStateChange(__int64 a1, int a2, int a3)
{
  __int64 v5; // rbx
  int v6; // ebp
  __int64 i; // rdi
  unsigned int KnownRIMDeviceKind; // eax
  __int64 result; // rax

  if ( !IsInputThread(a1, a2, a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1471LL);
  if ( a2 )
  {
    if ( a2 != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1506LL);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    if ( result )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 1232);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v5, 0LL);
    v6 = RimInputTypeToDeviceInputType(*(_DWORD *)(a1 + 144));
    for ( i = **(_QWORD **)(a1 + 1240); i; i = *(_QWORD *)(i + 56) )
    {
      if ( *(_DWORD *)(i + 48) == v6 )
      {
        KnownRIMDeviceKind = GetKnownRIMDeviceKind(i);
        CBaseInput::ForwardPnpNotificationToISM(KnownRIMDeviceKind, i, *(_QWORD *)i, 2LL);
      }
    }
    ExReleasePushLockSharedEx(v5, 0LL);
    KeLeaveCriticalRegion();
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    if ( result )
      return (**(__int64 (__fastcall ***)(__int64))result)(result);
  }
  return result;
}
