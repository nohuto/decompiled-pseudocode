/*
 * XREFs of sub_14006B3E4 @ 0x14006B3E4
 * Callers:
 *     sub_14017B158 @ 0x14017B158 (sub_14017B158.c)
 * Callees:
 *     <none>
 */

NTSTATUS sub_14006B3E4()
{
  NTSTATUS result; // eax

  result = 0;
  if ( !RegHandle )
    return EtwRegister(&ProviderId, (PETWENABLECALLBACK)EnableCallback, &RegHandle, &RegHandle);
  return result;
}
