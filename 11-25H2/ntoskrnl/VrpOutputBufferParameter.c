/*
 * XREFs of VrpOutputBufferParameter @ 0x1409490B4
 * Callers:
 *     VrpPostQueryKey @ 0x140948380 (VrpPostQueryKey.c)
 *     VrpPostEnumerateKey @ 0x140948938 (VrpPostEnumerateKey.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall VrpOutputBufferParameter(char a1, void *a2, unsigned int a3, const void **a4)
{
  if ( a1 == 1 )
    memmove(a2, *a4, a3);
  return 0LL;
}
