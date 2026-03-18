/*
 * XREFs of ValidateQWORDDoubleRange @ 0x1401DF8FC
 * Callers:
 *     ReadInputHapticSettings @ 0x1401DF5F0 (ReadInputHapticSettings.c)
 *     WritePointerDeviceSettings @ 0x1401DF9A0 (WritePointerDeviceSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateQWORDDoubleRange(__int64 a1, double a2, double a3, double a4)
{
  __int64 result; // rax

  if ( *(double *)&a1 < a2 )
    return *(_QWORD *)&a4;
  result = a1;
  if ( a3 < *(double *)&a1 )
    return *(_QWORD *)&a4;
  return result;
}
