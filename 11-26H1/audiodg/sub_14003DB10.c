/*
 * XREFs of sub_14003DB10 @ 0x14003DB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_14003DB10(__int64 a1, void *a2)
{
  BOOL result; // eax

  if ( a2 )
    return HeapFree(*(HANDLE *)(a1 + 8), 0, a2);
  return result;
}
