/*
 * XREFs of LdrFindResource_U @ 0x140A86CD0
 * Callers:
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140CBA31C (FindBitmapResource.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x140A86DB4 (LdrpSearchResourceSection_U.c)
 */

__int64 __fastcall LdrFindResource_U(int a1, int a2, int a3, __int64 a4)
{
  return LdrpSearchResourceSection_U(a1, a2, a3, 0, a4);
}
