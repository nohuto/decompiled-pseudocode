/*
 * XREFs of VrpInputBufferParameter @ 0x14093948C
 * Callers:
 *     VrpPostEnumerateKey @ 0x140938960 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x140938F20 (VrpPostQueryKey.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall VrpInputBufferParameter(char a1, void *a2, unsigned int a3, void **a4)
{
  if ( a1 == 1 )
    RtlCopyFromUser(*a4, a2, a3);
  return 0LL;
}
