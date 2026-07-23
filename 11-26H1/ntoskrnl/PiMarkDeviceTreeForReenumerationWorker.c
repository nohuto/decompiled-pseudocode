/*
 * XREFs of PiMarkDeviceTreeForReenumerationWorker @ 0x1409AE8E0
 * Callers:
 *     PiMarkDeviceTreeForReenumeration @ 0x140AC8830 (PiMarkDeviceTreeForReenumeration.c)
 * Callees:
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumerationWorker(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 300) == 778 )
    PipSetDevNodeFlags(a1, 8LL);
  return 0LL;
}
