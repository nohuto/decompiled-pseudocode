/*
 * XREFs of ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x14020FBD8
 * Callers:
 *     HandleInputThreadActivated @ 0x14015ED44 (HandleInputThreadActivated.c)
 *     HandleInputThreadDeactivated @ 0x1401A27E0 (HandleInputThreadDeactivated.c)
 * Callees:
 *     RimInputTypeToDeviceInputType @ 0x14002E578 (RimInputTypeToDeviceInputType.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     GetKnownRIMDeviceKind @ 0x140148660 (GetKnownRIMDeviceKind.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x14020F598 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBaseInput::HandleInputThreadStateChange(__int64 a1, __int64 a2)
{
  int v2; // ebx
  struct W32_PUSH_LOCK *v4; // rbx
  int v5; // ebp
  __int64 i; // rdi
  int KnownRIMDeviceKind; // eax
  __int64 result; // rax

  v2 = a2;
  if ( !IsInputThread(a1, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1493);
  if ( v2 )
  {
    if ( v2 != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1528);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    if ( result )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  else
  {
    v4 = *(struct W32_PUSH_LOCK **)(a1 + 1232);
    W32AcquirePushLockSharedEx(v4, 0);
    v5 = RimInputTypeToDeviceInputType(*(_DWORD *)(a1 + 144));
    for ( i = **(_QWORD **)(a1 + 1240); i; i = *(_QWORD *)(i + 56) )
    {
      if ( *(_DWORD *)(i + 48) == v5 )
      {
        KnownRIMDeviceKind = GetKnownRIMDeviceKind(i);
        CBaseInput::ForwardPnpNotificationToISM(KnownRIMDeviceKind, i, *(_QWORD *)i, 2);
      }
    }
    ExReleasePushLockSharedEx(v4, 0LL);
    KeLeaveCriticalRegion();
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    if ( result )
      return (**(__int64 (__fastcall ***)(__int64))result)(result);
  }
  return result;
}
