/*
 * XREFs of sub_18008A438 @ 0x18008A438
 * Callers:
 *     sub_180089BCC @ 0x180089BCC (sub_180089BCC.c)
 * Callees:
 *     sub_18008A56C @ 0x18008A56C (sub_18008A56C.c)
 */

__int64 __fastcall sub_18008A438(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18008A56C(v1);
  return result;
}
