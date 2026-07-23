/*
 * XREFs of ZwVdmControl @ 0x14072BC20
 * Callers:
 *     DifZwVdmControlWrapper @ 0x1406C2A80 (DifZwVdmControlWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwVdmControl(VDMSERVICECLASS Service, PVOID ServiceData)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Service);
}
