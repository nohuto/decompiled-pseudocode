/*
 * XREFs of UserValidateCopyRgn @ 0x14006EC40
 * Callers:
 *     <none>
 * Callees:
 *     GreCombineRgn @ 0x14000DFC0 (GreCombineRgn.c)
 *     GreCreateRectRgnIndirect @ 0x140015720 (GreCreateRectRgnIndirect.c)
 *     HmgValidHandle @ 0x14006ECD0 (HmgValidHandle.c)
 *     GreDeleteObject @ 0x14008B860 (GreDeleteObject.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

HRGN __fastcall UserValidateCopyRgn(HRGN a1, __int64 a2)
{
  HRGN RectRgnIndirect; // rbx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  RectRgnIndirect = 0LL;
  if ( a1 )
  {
    LOBYTE(a2) = 4;
    if ( (unsigned int)HmgValidHandle(a1, a2) )
    {
      v5 = 0LL;
      RectRgnIndirect = (HRGN)GreCreateRectRgnIndirect((struct REGION_CORE *)&v5);
      if ( !(unsigned int)GreCombineRgn(RectRgnIndirect, a1, 0LL, 5) )
      {
        GreDeleteObject((HBRUSH)RectRgnIndirect);
        return 0LL;
      }
    }
  }
  return RectRgnIndirect;
}
