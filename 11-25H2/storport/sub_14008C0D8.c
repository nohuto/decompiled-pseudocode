/*
 * XREFs of sub_14008C0D8 @ 0x14008C0D8
 * Callers:
 *     sub_140087A3C @ 0x140087A3C (sub_140087A3C.c)
 *     sub_14008E20C @ 0x14008E20C (sub_14008E20C.c)
 * Callees:
 *     sub_14008A0B0 @ 0x14008A0B0 (sub_14008A0B0.c)
 *     sub_14008C28C @ 0x14008C28C (sub_14008C28C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14008C0D8(struct _DEVICE_OBJECT *a1)
{
  __int64 result; // rax
  int v2; // [rsp+30h] [rbp-38h] BYREF
  __int128 v3; // [rsp+38h] [rbp-30h]
  __int64 v4; // [rsp+48h] [rbp-20h]

  v2 = 24;
  v3 = 0LL;
  v4 = 0LL;
  result = sub_14008C28C(a1, (__int64)&v2);
  if ( (int)result >= 0 )
    return sub_14008A0B0((unsigned __int16)v4);
  return result;
}
