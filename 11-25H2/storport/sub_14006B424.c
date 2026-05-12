/*
 * XREFs of sub_14006B424 @ 0x14006B424
 * Callers:
 *     sub_140178190 @ 0x140178190 (sub_140178190.c)
 * Callees:
 *     <none>
 */

NTSTATUS sub_14006B424()
{
  NTSTATUS result; // eax

  if ( !RegHandle )
    return 0;
  result = EtwUnregister(RegHandle);
  RegHandle = 0LL;
  return result;
}
