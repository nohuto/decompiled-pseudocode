/*
 * XREFs of PiMarkDeviceTreeForReenumeration @ 0x140AC8830
 * Callers:
 *     PiCollapseEnumRequests @ 0x1404D8E4C (PiCollapseEnumRequests.c)
 *     PiProcessReenumeration @ 0x140AC8764 (PiProcessReenumeration.c)
 * Callees:
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x1409AE8E0 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     PipForDeviceNodeSubtree @ 0x140AC8870 (PipForDeviceNodeSubtree.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumeration(__int64 a1, char a2)
{
  __int64 result; // rax

  result = PiMarkDeviceTreeForReenumerationWorker(a1);
  if ( a2 )
    return PipForDeviceNodeSubtree(a1, PiMarkDeviceTreeForReenumerationWorker, 0LL);
  return result;
}
