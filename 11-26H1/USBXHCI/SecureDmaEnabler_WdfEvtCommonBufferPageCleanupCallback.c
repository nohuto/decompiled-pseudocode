/*
 * XREFs of SecureDmaEnabler_WdfEvtCommonBufferPageCleanupCallback @ 0x14007F270
 * Callers:
 *     <none>
 * Callees:
 *     SecureDmaEnabler_Unmap @ 0x140056258 (SecureDmaEnabler_Unmap.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SecureDmaEnabler_WdfEvtCommonBufferPageCleanupCallback(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
             WdfDriverGlobals,
             a1,
             off_14006B2B8);
  if ( *(_DWORD *)(result + 104) )
    return SecureDmaEnabler_Unmap(*(_QWORD *)(result + 24), result + 96);
  return result;
}
