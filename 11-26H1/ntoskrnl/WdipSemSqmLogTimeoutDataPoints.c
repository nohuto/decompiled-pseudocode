/*
 * XREFs of WdipSemSqmLogTimeoutDataPoints @ 0x140827F6C
 * Callers:
 *     WdipSemLogTimeoutInformation @ 0x140AD56D8 (WdipSemLogTimeoutInformation.c)
 * Callees:
 *     WdipSemGetGuidKey @ 0x140827720 (WdipSemGetGuidKey.c)
 *     WdipSemSqmAddToStream @ 0x140827D00 (WdipSemSqmAddToStream.c)
 */

__int64 __fastcall WdipSemSqmLogTimeoutDataPoints(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+34h] [rbp+Ch]

  v4 = 0;
  if ( !a1 )
    return 3221225485LL;
  result = WdipSemGetGuidKey(a1, &v4);
  if ( (int)result >= 0 )
  {
    v5 = a2;
    return WdipSemSqmAddToStream((_DWORD *)0x41E, 2u, (__int64)&v4);
  }
  return result;
}
