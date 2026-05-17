/*
 * XREFs of RtlFreeSid @ 0x1800DBBC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 */

__int64 __fastcall RtlFreeSid(__int64 a1)
{
  if ( (unsigned int)RtlFreeHeap_0() )
    return 0LL;
  return a1;
}
