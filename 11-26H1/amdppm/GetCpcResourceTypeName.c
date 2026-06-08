/*
 * XREFs of GetCpcResourceTypeName @ 0x14002DAC8
 * Callers:
 *     ProcLibCpcResourcePriorityRundown @ 0x1400245EC (ProcLibCpcResourcePriorityRundown.c)
 *     DisplayCpcResourcePriorityRegisterDescriptor @ 0x14002BBF8 (DisplayCpcResourcePriorityRegisterDescriptor.c)
 * Callees:
 *     <none>
 */

const char *__fastcall GetCpcResourceTypeName(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return "Processor Boost";
  v2 = v1 - 1;
  if ( !v2 )
    return "Processor Throttle";
  v3 = v2 - 1;
  if ( !v3 )
    return "L2 Cache";
  v4 = v3 - 1;
  if ( !v4 )
    return "L3 Cache";
  if ( v4 == 1 )
    return "Memory Bandwith";
  return "Unknown";
}
