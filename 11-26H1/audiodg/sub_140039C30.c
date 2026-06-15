/*
 * XREFs of sub_140039C30 @ 0x140039C30
 * Callers:
 *     sub_140039C24 @ 0x140039C24 (sub_140039C24.c)
 *     sub_140059318 @ 0x140059318 (sub_140059318.c)
 *     sub_1400800EC @ 0x1400800EC (sub_1400800EC.c)
 *     sub_14008041C @ 0x14008041C (sub_14008041C.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall sub_140039C30(void **a1)
{
  void *v1; // rcx
  HLOCAL result; // rax

  v1 = *a1;
  if ( v1 )
    return LocalFree(v1);
  return result;
}
