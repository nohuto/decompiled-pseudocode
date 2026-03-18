/*
 * XREFs of ClientCallDitThread @ 0x140071100
 * Callers:
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x140070610 (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall ClientCallDitThread(__int64 a1, __int64 a2, __int64 a3))(__int64, __int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48)
                                                               + 5704LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64))result(a1, a2, a3);
  return result;
}
