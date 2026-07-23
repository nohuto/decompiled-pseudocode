/*
 * XREFs of RtlCopyLuid @ 0x1800D9D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlCopyLuid(PLUID DestinationLuid, PLUID SourceLuid)
{
  *DestinationLuid = *SourceLuid;
}
