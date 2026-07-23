/*
 * XREFs of McGenEventRegister_EtwRegister @ 0x1405B5AA8
 * Callers:
 *     CcInitializeVolumeCacheMap @ 0x14038713C (CcInitializeVolumeCacheMap.c)
 *     CarEtwRegister @ 0x14064C674 (CarEtwRegister.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     EtwRegister @ 0x140917980 (EtwRegister.c)
 */

NTSTATUS __fastcall McGenEventRegister_EtwRegister(const GUID *a1, __int64 a2, void *a3, ULONGLONG *a4)
{
  NTSTATUS result; // eax

  result = 0;
  if ( !*a4 )
    return EtwRegister(a1, McGenControlCallbackV2, a3, a4);
  return result;
}
