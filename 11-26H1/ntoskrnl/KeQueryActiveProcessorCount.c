/*
 * XREFs of KeQueryActiveProcessorCount @ 0x1404AFE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryActiveProcessorCount(PKAFFINITY ActiveProcessors)
{
  ULONG result; // eax
  unsigned __int64 v2; // rax

  result = 0;
  if ( ActiveProcessors )
  {
    v2 = *(unsigned __int64 *)((char *)&stru_140FC11F0.116 + 4);
    *ActiveProcessors = *(KAFFINITY *)((char *)&stru_140FC11F0.116 + 4);
    return __popcnt(v2);
  }
  if ( KiActiveGroups )
  {
    v2 = *(unsigned __int64 *)((char *)&stru_140FC11F0.116 + 4);
    return __popcnt(v2);
  }
  return result;
}
