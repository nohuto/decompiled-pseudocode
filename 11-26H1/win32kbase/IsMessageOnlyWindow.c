/*
 * XREFs of IsMessageOnlyWindow @ 0x14006F8D0
 * Callers:
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x14007122C (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1400CE260 (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall IsMessageOnlyWindow(__int64 a1))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4656LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
