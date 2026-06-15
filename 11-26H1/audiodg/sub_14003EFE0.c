/*
 * XREFs of sub_14003EFE0 @ 0x14003EFE0
 * Callers:
 *     sub_140048778 @ 0x140048778 (sub_140048778.c)
 *     sub_140059318 @ 0x140059318 (sub_140059318.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_14003EFE0(SC_HANDLE *a1)
{
  SC_HANDLE v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return CloseServiceHandle(v1);
  return result;
}
