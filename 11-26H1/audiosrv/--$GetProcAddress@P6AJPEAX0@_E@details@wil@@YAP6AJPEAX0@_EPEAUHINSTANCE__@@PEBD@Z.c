/*
 * XREFs of ??$GetProcAddress@P6AJPEAX0@_E@details@wil@@YAP6AJPEAX0@_EPEAUHINSTANCE__@@PEBD@Z @ 0x1800B6510
 * Callers:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x1800B7924 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 * Callees:
 *     <none>
 */

FARPROC __fastcall ___GetProcAddress_P6AJPEAX0__E_details_wil__YAP6AJPEAX0__EPEAUHINSTANCE____PEBD_Z(HMODULE a1)
{
  return GetProcAddress(a1, "RtlDisownModuleHeapAllocation");
}
