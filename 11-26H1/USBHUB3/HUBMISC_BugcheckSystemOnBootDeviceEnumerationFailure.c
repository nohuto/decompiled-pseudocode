/*
 * XREFs of HUBMISC_BugcheckSystemOnBootDeviceEnumerationFailure @ 0x14002E4C8
 * Callers:
 *     HUBDSM_BugcheckingSystemOnBootDeviceEnumerationFailure @ 0x14001FF10 (HUBDSM_BugcheckingSystemOnBootDeviceEnumerationFailure.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

void __fastcall __noreturn HUBMISC_BugcheckSystemOnBootDeviceEnumerationFailure(__int64 a1)
{
  _BOOL8 v1; // rbx
  __int64 v2; // rax
  ULONG_PTR v3; // rax

  v1 = (*(_DWORD *)(a1 + 1640) & 2) != 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(WdfDriverGlobals, v2);
  KeBugCheckEx(0x144u, 2uLL, v3, v1 + 1, 0LL);
}
