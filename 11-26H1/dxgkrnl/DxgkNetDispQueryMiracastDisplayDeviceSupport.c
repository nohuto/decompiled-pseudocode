/*
 * XREFs of DxgkNetDispQueryMiracastDisplayDeviceSupport @ 0x1401B7730
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1403E7368 (DxgkMiracastQueryMiracastSupportInternal.c)
 */

__int64 __fastcall DxgkNetDispQueryMiracastDisplayDeviceSupport(void *a1)
{
  int v2; // ebx
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  __int64 Src; // [rsp+38h] [rbp-20h] BYREF
  int v6; // [rsp+40h] [rbp-18h]

  Src = 0LL;
  v6 = 0;
  v4 = 0LL;
  v2 = DxgkMiracastQueryMiracastSupportInternal(&v4);
  if ( v2 >= 0 )
  {
    HIDWORD(Src) = DWORD1(v4);
    LOBYTE(Src) = v4;
    LOBYTE(v6) = BYTE8(v4);
    RtlCopyToUser(a1, &Src, 0xCuLL);
  }
  return (unsigned int)v2;
}
