/*
 * XREFs of ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18007CDD8
 * Callers:
 *     ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x180087058 (-wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z.c)
 *     ?FormatNtStatusMsg@details@wil@@YAXJPEAGK@Z @ 0x1800911C0 (-FormatNtStatusMsg@details@wil@@YAXJPEAGK@Z.c)
 * Callees:
 *     <none>
 */

HINSTANCE wil_details_GetNtDllModuleHandle(void)
{
  HINSTANCE result; // rax

  result = (HINSTANCE)`wil_details_GetNtDllModuleHandle'::`2'::wil_details_ntdllModuleHandle;
  if ( !`wil_details_GetNtDllModuleHandle'::`2'::wil_details_ntdllModuleHandle )
  {
    result = GetModuleHandleW(L"ntdll.dll");
    `wil_details_GetNtDllModuleHandle'::`2'::wil_details_ntdllModuleHandle = (__int64)result;
  }
  return result;
}
