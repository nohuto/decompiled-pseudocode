/*
 * XREFs of sub_14008D884 @ 0x14008D884
 * Callers:
 *     sub_14008D830 @ 0x14008D830 (sub_14008D830.c)
 *     sub_14008E414 @ 0x14008E414 (sub_14008E414.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_14008D884(void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 != (void *)-1LL )
  {
    if ( v1 )
      return CloseHandle(v1);
  }
  return result;
}
