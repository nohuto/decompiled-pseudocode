/*
 * XREFs of BuildGetLogPageCommandForTelemetryLog @ 0x140019C28
 * Callers:
 *     NVMeGetDeviceTelemetryData @ 0x14001DA38 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x14001DCFC (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x14001E3D0 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeGetControllerInitiatedTelemetryHeader @ 0x140025C58 (NVMeGetControllerInitiatedTelemetryHeader.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x140025D48 (NVMeGetControllerInitiatedTelemetryLog.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x14000F760 (BuildGetLogPageCommand.c)
 */

__int64 __fastcall BuildGetLogPageCommandForTelemetryLog(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        unsigned __int8 a9)
{
  char v9; // di
  __int64 result; // rax

  v9 = a3;
  BuildGetLogPageCommand(a1, a2, a3, a4, a5, -1, a7, 0);
  if ( a8 && v9 == 7 )
    *(_DWORD *)(a2 + 4136) = *(_DWORD *)(a2 + 4136) & 0xFFFFF0FF | 0x100;
  result = *(unsigned int *)(a2 + 4136);
  *(_DWORD *)(a2 + 4136) = result ^ ((unsigned __int16)result ^ (unsigned __int16)(a9 << 15)) & 0x8000;
  return result;
}
