/*
 * XREFs of GetAppCompatFlags2QuadWord @ 0x1401452E4
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14009C278 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     _anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting @ 0x1401452AC (_anonymous_namespace_--HasThreadRequestedFocusMouseWheelRouting.c)
 *     NtUserEnableMouseInPointer @ 0x140177A70 (NtUserEnableMouseInPointer.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall GetAppCompatFlags2QuadWord(__int64 a1))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 3080LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
