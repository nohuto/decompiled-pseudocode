/*
 * XREFs of ZwSetInformationProcess @ 0x14069B4C0
 * Callers:
 *     DifZwSetInformationProcessWrapper @ 0x14063C970 (DifZwSetInformationProcessWrapper.c)
 *     CmpInitializeRegistryProcess @ 0x1407C8AB0 (CmpInitializeRegistryProcess.c)
 *     RtlCreateUserStack @ 0x1409EB5AC (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x140A144C8 (RtlpWow64CreateUserStack.c)
 *     StartFirstUserProcess @ 0x140C4F72C (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
