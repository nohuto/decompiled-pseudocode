/*
 * XREFs of MiWakeAllZeroCalibrationProcessors @ 0x1407158E4
 * Callers:
 *     MiZeroPageCalibrateDpc @ 0x140716060 (MiZeroPageCalibrateDpc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiWakeAllZeroCalibrationProcessors(int a1)
{
  __int64 result; // rax
  __int64 *v2; // r8
  __int64 v3; // r9

  result = (unsigned int)KeNumberProcessors_0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v2 = KiProcessorBlock;
    v3 = (unsigned int)KeNumberProcessors_0;
    do
    {
      result = *v2++;
      *(_DWORD *)(*(_QWORD *)(result + 34872) + 192LL) = a1;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
