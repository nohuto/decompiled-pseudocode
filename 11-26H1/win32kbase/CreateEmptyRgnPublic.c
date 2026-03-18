/*
 * XREFs of CreateEmptyRgnPublic @ 0x140081A30
 * Callers:
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x140082180 (UserSetDCVisRgn.c)
 *     InitUserScreen @ 0x1401D1E4C (InitUserScreen.c)
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x14001E880 (GreCreateRectRgnIndirect.c)
 *     GreSetRegionOwner @ 0x14001EE60 (GreSetRegionOwner.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

struct HOBJ__ *CreateEmptyRgnPublic()
{
  struct HOBJ__ *RectRgnIndirect; // rax
  struct HOBJ__ *v1; // rbx
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  RectRgnIndirect = GreCreateRectRgnIndirect((int *)&v3);
  v1 = RectRgnIndirect;
  if ( RectRgnIndirect )
    GreSetRegionOwner((__int64)RectRgnIndirect, 0);
  return v1;
}
