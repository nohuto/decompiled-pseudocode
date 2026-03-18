/*
 * XREFs of GetImageTuple @ 0x1400A5444
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x140065848 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetImageTuple(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int16 v4; // ax
  int v5; // eax
  int v6; // r8d

  v4 = *(_WORD *)(MEMORY[0x14000003C] + 0x140000018LL);
  if ( v4 == 267 || v4 == 523 )
  {
    v5 = *(_DWORD *)(MEMORY[0x14000003C] + 0x140000050LL);
    v6 = *(_DWORD *)(MEMORY[0x14000003C] + 0x140000008LL);
  }
  else
  {
    v5 = 0;
    v6 = 0;
  }
  *a2 = v6;
  *a3 = v5;
  return 1LL;
}
