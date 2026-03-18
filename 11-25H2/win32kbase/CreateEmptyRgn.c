/*
 * XREFs of CreateEmptyRgn @ 0x1400EBA70
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x140015720 (GreCreateRectRgnIndirect.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 CreateEmptyRgn()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  return GreCreateRectRgnIndirect((struct REGION_CORE *)&v1);
}
