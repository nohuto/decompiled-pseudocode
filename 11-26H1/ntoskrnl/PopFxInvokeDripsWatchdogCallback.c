/*
 * XREFs of PopFxInvokeDripsWatchdogCallback @ 0x1407D06F4
 * Callers:
 *     PopDripsWatchdogInvokeDeviceCallbacks @ 0x140B347EC (PopDripsWatchdogInvokeDeviceCallbacks.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopFxInvokeDripsWatchdogCallback(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx

  result = a1;
  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 168) )
    {
      if ( result == a2
        || (result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 864), 0, 0),
            (result & 8) != 0) )
      {
        result = *(_QWORD *)(v3 + 904);
        v4 = *(_QWORD *)(a2 + 32);
        if ( !result || result == *(_QWORD *)(v4 + 8) )
          return guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 192), v4);
      }
    }
  }
  return result;
}
