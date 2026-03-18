/*
 * XREFs of GetImageTuple @ 0x1400AB954
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x140083E80 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetImageTuple(_IMAGE_DOS_HEADER *Timestamp, unsigned int *SizeOfImage, unsigned int *ImageBase)
{
  __int16 v4; // ax
  unsigned int v5; // eax
  unsigned int v6; // r8d

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
  *SizeOfImage = v6;
  *ImageBase = v5;
  return 1LL;
}
