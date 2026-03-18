/*
 * XREFs of PiMarkDeviceTreeForReenumerationWorker @ 0x14090C7B0
 * Callers:
 *     PiMarkDeviceTreeForReenumeration @ 0x140AC6C40 (PiMarkDeviceTreeForReenumeration.c)
 * Callees:
 *     PipSetDevNodeFlags @ 0x14090DD60 (PipSetDevNodeFlags.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumerationWorker(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 300) == 778 )
    PipSetDevNodeFlags(a1, 8LL);
  return 0LL;
}
