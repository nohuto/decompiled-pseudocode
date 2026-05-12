/*
 * XREFs of StorBuildMFNDGetSingleCCLogPageCommand @ 0x1400C9BB8
 * Callers:
 *     StorGetAndLogMFNDQoSStatistics @ 0x1400C9C9C (StorGetAndLogMFNDQoSStatistics.c)
 *     StorGetAndLogNVMeDevicePanicWorkRoutine @ 0x1400C9FF0 (StorGetAndLogNVMeDevicePanicWorkRoutine.c)
 *     StorGetAndLogNVMeErrorInfoWorkRoutine @ 0x1400CA1C0 (StorGetAndLogNVMeErrorInfoWorkRoutine.c)
 *     StorGetAndLogNVMeSmartHealthInfoWorkRoutine @ 0x1400CA390 (StorGetAndLogNVMeSmartHealthInfoWorkRoutine.c)
 *     StorQueryMFNDChildPFQoSStatisticsLog @ 0x1401932C0 (StorQueryMFNDChildPFQoSStatisticsLog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorBuildMFNDGetSingleCCLogPageCommand(
        __int64 a1,
        unsigned __int16 a2,
        char a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned int a6)
{
  int v7; // eax
  int v8; // ecx
  __int64 result; // rax

  *(_BYTE *)(a1 + 40) = a3;
  v7 = *(_DWORD *)(a1 + 40);
  *(_BYTE *)a1 = -46;
  v8 = v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)(a5 << 15)) & 0x8000;
  *(_DWORD *)(a1 + 40) = v8;
  if ( a3 == -47 )
    *(_DWORD *)(a1 + 40) = v8 ^ ((unsigned __int16)v8 ^ (unsigned __int16)(a4 << 8)) & 0x100;
  *(_BYTE *)(a1 + 60) = 5;
  *(_WORD *)(a1 + 42) = (a6 >> 2) - 1;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_WORD *)(a1 + 44) = ((a6 >> 2) - 1) >> 16;
  result = *(_DWORD *)(a1 + 60) & 0xFF0000FF;
  *(_DWORD *)(a1 + 60) = result | (a2 << 8);
  return result;
}
