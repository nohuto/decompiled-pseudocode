/*
 * XREFs of NVMeDirectiveIdentifyEnableDirective @ 0x140024D74
 * Callers:
 *     NVMeInitStreams @ 0x1400182D4 (NVMeInitStreams.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 */

__int64 __fastcall NVMeDirectiveIdentifyEnableDirective(__int64 a1)
{
  __int64 v2; // rdx
  char v3; // al

  LocalCommandReuse(a1, a1 + 1008);
  v2 = *(_QWORD *)(a1 + 1104);
  v3 = *(_BYTE *)(v2 + 4225) & 0xFD;
  *(_BYTE *)(v2 + 4145) = 1;
  *(_DWORD *)(v2 + 4144) |= 1u;
  *(_BYTE *)(v2 + 4225) = v3 | 1;
  *(_QWORD *)(v2 + 4192) = NVMeDirectiveCompletion;
  *(_DWORD *)(v2 + 4100) = -1;
  *(_BYTE *)(v2 + 4096) = 25;
  *(_WORD *)(v2 + 4140) = 1;
  SrbAssignQueueId(a1, a1 + 1016);
  ProcessCommand(a1, a1 + 1016);
  WaitForCommandComplete(a1, a1 + 1016, 1);
  return *(_BYTE *)(a1 + 1019) != 1 ? 0xC1000001 : 0;
}
