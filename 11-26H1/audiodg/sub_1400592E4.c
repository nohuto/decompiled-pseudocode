/*
 * XREFs of sub_1400592E4 @ 0x1400592E4
 * Callers:
 *     sub_140036058 @ 0x140036058 (sub_140036058.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_1400592E4(void **a1)
{
  void *v2; // rcx
  BOOL result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = CloseHandle(v2);
    *a1 = 0LL;
  }
  return result;
}
