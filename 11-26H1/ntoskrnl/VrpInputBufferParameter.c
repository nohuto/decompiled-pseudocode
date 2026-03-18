/*
 * XREFs of VrpInputBufferParameter @ 0x14097747C
 * Callers:
 *     VrpPostEnumerateKey @ 0x140976950 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x140976F10 (VrpPostQueryKey.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 */

__int64 __fastcall VrpInputBufferParameter(char a1, void *a2, unsigned int a3, void **a4)
{
  if ( a1 == 1 )
    RtlCopyFromUser(*a4, a2, a3);
  return 0LL;
}
