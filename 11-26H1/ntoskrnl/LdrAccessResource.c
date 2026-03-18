/*
 * XREFs of LdrAccessResource @ 0x140A86CB0
 * Callers:
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140CBA31C (FindBitmapResource.c)
 * Callees:
 *     LdrpAccessResourceData @ 0x140A878C8 (LdrpAccessResourceData.c)
 */

__int64 __fastcall LdrAccessResource(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return LdrpAccessResourceData(a1, a2, a3, a4);
}
