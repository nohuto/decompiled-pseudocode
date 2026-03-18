/*
 * XREFs of rimPenButtonsPolicyApply @ 0x140171B78
 * Callers:
 *     rimFinalizePointerFlags @ 0x1401AF8AC (rimFinalizePointerFlags.c)
 * Callees:
 *     RIMIsPenPointerDevice @ 0x14007611C (RIMIsPenPointerDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimPenButtonsPolicyApply(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // ecx
  int v6; // ecx

  if ( !(unsigned int)RIMIsPenPointerDevice(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1323LL);
  *(_DWORD *)(a2 + 2528) &= 0xFFFFFFF9;
  result = *(unsigned int *)(a2 + 32);
  if ( (result & 0x20) != 0 )
  {
    if ( *(_DWORD *)(a1 + 1044) <= 1u )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1331LL);
    *(_WORD *)(a2 + 2424) = *(_WORD *)(*(_QWORD *)(a1 + 1032) + 16LL);
    v6 = *(_DWORD *)(a2 + 2528) | 2;
    *(_DWORD *)(a2 + 2528) = v6;
    result = *(unsigned int *)(a2 + 2444);
    if ( (result & 4) != 0 )
      *(_DWORD *)(a2 + 2528) = v6 | 4;
  }
  v5 = *(_DWORD *)(a2 + 2444);
  if ( (v5 & 4) != 0 )
  {
    result = *(unsigned int *)(a2 + 32);
    if ( (result & 0x10) != 0 )
      *(_DWORD *)(a2 + 2444) = v5 & 0xFFFFFFCF | 0x20;
  }
  return result;
}
