/*
 * XREFs of CreateEmptyRgnPublic @ 0x1400899B0
 * Callers:
 *     UserSetDCVisRgn @ 0x14008A8F0 (UserSetDCVisRgn.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     InitUserScreen @ 0x140167940 (InitUserScreen.c)
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x140015720 (GreCreateRectRgnIndirect.c)
 *     HmgSetOwner @ 0x140015EC0 (HmgSetOwner.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 CreateEmptyRgnPublic()
{
  __int64 RectRgnIndirect; // rbx
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  RectRgnIndirect = GreCreateRectRgnIndirect((struct REGION_CORE *)&v2);
  if ( RectRgnIndirect )
  {
    PsGetCurrentProcessId();
    HmgSetOwner(RectRgnIndirect, 0, 4);
  }
  return RectRgnIndirect;
}
