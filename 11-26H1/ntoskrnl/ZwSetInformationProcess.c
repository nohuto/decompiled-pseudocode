/*
 * XREFs of ZwSetInformationProcess @ 0x140723770
 * Callers:
 *     DifZwSetInformationProcessWrapper @ 0x1406BA600 (DifZwSetInformationProcessWrapper.c)
 *     CmpInitializeRegistryProcess @ 0x140857024 (CmpInitializeRegistryProcess.c)
 *     RtlCreateUserStack @ 0x1409EA3A8 (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x140AB853C (RtlpWow64CreateUserStack.c)
 *     StartFirstUserProcess @ 0x140D08548 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
