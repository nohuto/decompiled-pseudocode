/*
 * XREFs of VrpOutputBufferParameter @ 0x1409774A8
 * Callers:
 *     VrpPostEnumerateKey @ 0x140976950 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x140976F10 (VrpPostQueryKey.c)
 * Callees:
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 */

__int64 __fastcall VrpOutputBufferParameter(char a1, void *a2, unsigned int a3, void **a4)
{
  if ( a1 == 1 )
    RtlCopyToUser(a2, *a4, a3);
  return 0LL;
}
