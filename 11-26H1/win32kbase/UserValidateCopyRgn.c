/*
 * XREFs of UserValidateCopyRgn @ 0x140152810
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x14001E880 (GreCreateRectRgnIndirect.c)
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 *     GreDeleteObject @ 0x140082330 (GreDeleteObject.c)
 *     HmgValidHandle @ 0x1401528A0 (HmgValidHandle.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

struct HOBJ__ *__fastcall UserValidateCopyRgn(HRGN a1, __int64 a2)
{
  struct HOBJ__ *RectRgnIndirect; // rbx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  RectRgnIndirect = 0LL;
  if ( a1 )
  {
    LOBYTE(a2) = 4;
    if ( (unsigned int)HmgValidHandle(a1, a2) )
    {
      v5 = 0LL;
      RectRgnIndirect = GreCreateRectRgnIndirect((int *)&v5);
      if ( !(unsigned int)GreCombineRgn((HRGN)RectRgnIndirect, a1, 0LL, 5) )
      {
        GreDeleteObject(RectRgnIndirect);
        return 0LL;
      }
    }
  }
  return RectRgnIndirect;
}
