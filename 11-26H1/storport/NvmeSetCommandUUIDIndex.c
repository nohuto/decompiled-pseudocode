/*
 * XREFs of NvmeSetCommandUUIDIndex @ 0x140121F70
 * Callers:
 *     NvmeQueryProtocolInfoIdentifyData @ 0x14012113C (NvmeQueryProtocolInfoIdentifyData.c)
 * Callees:
 *     NvmeControllerSupportsUUIDList @ 0x1400C6630 (NvmeControllerSupportsUUIDList.c)
 */

char __fastcall NvmeSetCommandUUIDIndex(__int64 a1, __int64 a2, _DWORD *a3)
{
  char result; // al
  int v5; // r11d

  result = NvmeControllerSupportsUUIDList(a1);
  if ( !result || !v5 )
    v5 = 0;
  *a3 = v5;
  return result;
}
