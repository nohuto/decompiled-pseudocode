/*
 * XREFs of NtQueryAuxiliaryCounterFrequency @ 0x14084B7A0
 * Callers:
 *     DifNtQueryAuxiliaryCounterFrequencyWrapper @ 0x140684DF0 (DifNtQueryAuxiliaryCounterFrequencyWrapper.c)
 * Callees:
 *     KeQueryAuxiliaryCounterFrequency @ 0x1405E7550 (KeQueryAuxiliaryCounterFrequency.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtQueryAuxiliaryCounterFrequency(PLARGE_INTEGER AuxiliaryCounterFrequency)
{
  __int64 v1; // rdx
  __int64 v3; // rdx
  NTSTATUS result; // eax
  LONGLONG v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return KeQueryAuxiliaryCounterFrequency((__int64)AuxiliaryCounterFrequency, v1);
  ProbeForWrite(AuxiliaryCounterFrequency, 8uLL, 4u);
  result = KeQueryAuxiliaryCounterFrequency((__int64)&v5, v3);
  if ( result >= 0 )
    AuxiliaryCounterFrequency->QuadPart = v5;
  return result;
}
