/*
 * XREFs of sub_140064214 @ 0x140064214
 * Callers:
 *     sub_140063688 @ 0x140063688 (sub_140063688.c)
 * Callees:
 *     <none>
 */

const char *__fastcall sub_140064214(int a1)
{
  int v1; // ecx
  int v2; // ecx

  if ( !a1 )
    return "Render";
  v1 = a1 - 1;
  if ( !v1 )
    return "Capture";
  v2 = v1 - 1;
  if ( !v2 )
    return "Loopback";
  if ( v2 == 1 )
    return "PostVolumeLoopback";
  return "Unknown";
}
