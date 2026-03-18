/*
 * XREFs of PiMarkDeviceTreeForReenumeration @ 0x140AC6C40
 * Callers:
 *     PiCollapseEnumRequests @ 0x1404DF76C (PiCollapseEnumRequests.c)
 *     PiProcessReenumeration @ 0x140AC6B74 (PiProcessReenumeration.c)
 * Callees:
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x14090C7B0 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     PipForDeviceNodeSubtree @ 0x140AC6C80 (PipForDeviceNodeSubtree.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumeration(__int64 a1, char a2)
{
  __int64 result; // rax

  result = PiMarkDeviceTreeForReenumerationWorker(a1);
  if ( a2 )
    return PipForDeviceNodeSubtree(a1, PiMarkDeviceTreeForReenumerationWorker, 0LL);
  return result;
}
