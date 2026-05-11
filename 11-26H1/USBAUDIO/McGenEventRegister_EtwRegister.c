/*
 * XREFs of McGenEventRegister_EtwRegister @ 0x14000BEE4
 * Callers:
 *     DeviceCreate @ 0x1400088F0 (DeviceCreate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventRegister_EtwRegister(__int64 a1, __int64 a2, void *a3, ULONGLONG *a4)
{
  NTSTATUS result; // eax

  result = 0;
  if ( !*a4 )
    return EtwRegister(&EXBUSAUD_PROVIDER, McGenControlCallbackV2, a3, a4);
  return result;
}
