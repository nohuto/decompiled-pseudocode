/*
 * XREFs of NVMeGetControllerInitiatedTelemetry @ 0x140025A3C
 * Callers:
 *     NVMeControllerInitPart3 @ 0x140006E40 (NVMeControllerInitPart3.c)
 * Callees:
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     NVMeGetControllerInitiatedTelemetryHeader @ 0x140025C58 (NVMeGetControllerInitiatedTelemetryHeader.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x140025D48 (NVMeGetControllerInitiatedTelemetryLog.c)
 */

__int64 __fastcall NVMeGetControllerInitiatedTelemetry(__int64 a1)
{
  unsigned int ControllerInitiatedTelemetryHeader; // ebx
  __int64 v4; // r9
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v9; // [rsp+C8h] [rbp+10h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  if ( *(_BYTE *)(a1 + 20) )
    return 3238002697LL;
  ControllerInitiatedTelemetryHeader = NVMeAllocateDmaBufferEx(a1, 0, 1, 0x200u, &v8, &v9);
  if ( ControllerInitiatedTelemetryHeader )
    goto LABEL_12;
  if ( v8 )
  {
    ControllerInitiatedTelemetryHeader = NVMeGetControllerInitiatedTelemetryHeader(a1, v8, &v9);
    if ( ControllerInitiatedTelemetryHeader )
      goto LABEL_12;
    v5 = v8;
    if ( v8 )
    {
      v6 = *(unsigned __int16 *)(v8 + 12);
      if ( !(_WORD)v6 )
      {
        ControllerInitiatedTelemetryHeader = -1056964599;
        goto LABEL_13;
      }
      ControllerInitiatedTelemetryHeader = NVMeGetControllerInitiatedTelemetryLog(a1, (unsigned int)((v6 + 1) << 9));
      if ( !ControllerInitiatedTelemetryHeader )
      {
        v5 = v8;
        if ( *(_BYTE *)(v8 + 383) != *(_BYTE *)(*(_QWORD *)(a1 + 3976) + 383LL) )
          ControllerInitiatedTelemetryHeader = -1056964607;
        goto LABEL_13;
      }
LABEL_12:
      v5 = v8;
LABEL_13:
      if ( v5 )
        NVMeFreeDmaBufferEx(a1, 0, 1, 512LL, &v8, v9);
    }
  }
  if ( ControllerInitiatedTelemetryHeader )
  {
    v7 = *(_QWORD *)(a1 + 3976);
    if ( v7 )
      StorPortExtendedFunction(1LL, a1, v7, v4);
    *(_OWORD *)(a1 + 3976) = 0LL;
    if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      StorPortExtendedFunction(86LL, a1, 0LL, 1LL);
  }
  return ControllerInitiatedTelemetryHeader;
}
