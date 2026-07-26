/*
 * XREFs of NdisGroupMaxProcessorCount @ 0x1400D96B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall NdisGroupMaxProcessorCount(USHORT Group)
{
  return KeQueryMaximumProcessorCountEx(Group);
}
