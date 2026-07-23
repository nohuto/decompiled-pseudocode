/*
 * XREFs of PopFxAccumulateDeviceIRPhaseAccounting @ 0x140421CB8
 * Callers:
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x1404210CC (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PopFxEndDeviceIRPhaseAccounting @ 0x140421C6C (PopFxEndDeviceIRPhaseAccounting.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxAccumulateDeviceIRPhaseAccounting(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = a1 - qword_140F100F0;
  qword_140F10110 += v1;
  if ( v1 > qword_140F10100 )
    qword_140F10100 = v1;
  if ( v1 < qword_140F10108 )
    qword_140F10108 = v1;
  ++dword_140F10118;
  qword_140F100F0 = 0LL;
}
