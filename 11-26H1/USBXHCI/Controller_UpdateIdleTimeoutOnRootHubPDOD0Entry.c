/*
 * XREFs of Controller_UpdateIdleTimeoutOnRootHubPDOD0Entry @ 0x14003A60C
 * Callers:
 *     RootHub_UcxEvtInterruptTransfer @ 0x14000B150 (RootHub_UcxEvtInterruptTransfer.c)
 * Callees:
 *     Feature_RH1S__private_IsEnabledDeviceUsageNoInline @ 0x140044D98 (Feature_RH1S__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_UpdateIdleTimeoutOnRootHubPDOD0Entry(__int64 a1)
{
  __int64 result; // rax

  if ( (unsigned int)Feature_RH1S__private_IsEnabledDeviceUsageNoInline() )
    result = 1LL;
  else
    result = (*(_QWORD *)(a1 + 744) & 0x200000LL) != 0 ? 1000 : 1;
  if ( !*(_DWORD *)(a1 + 864) && *(_DWORD *)(a1 + 976) != (_DWORD)result )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3040))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 968));
  return result;
}
