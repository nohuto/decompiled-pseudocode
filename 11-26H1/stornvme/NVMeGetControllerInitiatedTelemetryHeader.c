/*
 * XREFs of NVMeGetControllerInitiatedTelemetryHeader @ 0x140025C58
 * Callers:
 *     NVMeGetControllerInitiatedTelemetry @ 0x140025A3C (NVMeGetControllerInitiatedTelemetry.c)
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x140019C28 (BuildGetLogPageCommandForTelemetryLog.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeGetControllerInitiatedTelemetryHeader(__int64 a1, void *a2, unsigned __int64 *a3)
{
  __int64 v6; // rbx
  unsigned int v7; // r8d
  unsigned __int64 v8; // rax
  int v10; // [rsp+28h] [rbp-30h]

  memset(a2, 0, 0x200uLL);
  LocalCommandReuse(a1, a1 + 1008);
  v6 = *(_QWORD *)(a1 + 1072);
  LOBYTE(v7) = 8;
  *(_BYTE *)(v6 + 4225) |= 3u;
  *(_WORD *)(v6 + 4212) = 0;
  BuildGetLogPageCommandForTelemetryLog(a1, v6, v7, 0x200u, *a3, v10, 0LL, 1, 1u);
  v8 = *a3;
  *(_BYTE *)(v6 + 4225) |= 4u;
  *(_QWORD *)(v6 + 4168) = v8;
  *(_QWORD *)(v6 + 4160) = a2;
  *(_DWORD *)(v6 + 4208) = 512;
  ProcessCommand(a1, a1 + 1016);
  WaitForCommandComplete(a1, a1 + 1016, 1);
  return *(_BYTE *)(a1 + 1019) != 1 ? 0xC1000001 : 0;
}
