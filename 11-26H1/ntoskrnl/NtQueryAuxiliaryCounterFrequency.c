/*
 * XREFs of NtQueryAuxiliaryCounterFrequency @ 0x140842700
 * Callers:
 *     DifNtQueryAuxiliaryCounterFrequencyWrapper @ 0x140681210 (DifNtQueryAuxiliaryCounterFrequencyWrapper.c)
 * Callees:
 *     KeQueryAuxiliaryCounterFrequency @ 0x1405E4BE0 (KeQueryAuxiliaryCounterFrequency.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 */

__int64 __fastcall NtQueryAuxiliaryCounterFrequency(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return KeQueryAuxiliaryCounterFrequency((__int64)a1, a2);
  ProbeForWrite(a1, 8uLL, 4u);
  result = KeQueryAuxiliaryCounterFrequency((__int64)&v5, v3);
  if ( (int)result >= 0 )
    *a1 = v5;
  return result;
}
