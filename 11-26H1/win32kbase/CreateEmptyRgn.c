/*
 * XREFs of CreateEmptyRgn @ 0x140134410
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x14001E880 (GreCreateRectRgnIndirect.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

struct HOBJ__ *CreateEmptyRgn()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  return GreCreateRectRgnIndirect((int *)&v1);
}
