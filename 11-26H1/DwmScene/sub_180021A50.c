/*
 * XREFs of sub_180021A50 @ 0x180021A50
 * Callers:
 *     sub_180021AE8 @ 0x180021AE8 (sub_180021AE8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800219C0 @ 0x1800219C0 (sub_1800219C0.c)
 *     sub_180021F34 @ 0x180021F34 (sub_180021F34.c)
 */

__int64 *__fastcall sub_180021A50(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  GUID v5; // [rsp+30h] [rbp-38h] BYREF
  GUID pguid; // [rsp+40h] [rbp-28h] BYREF

  v2 = sub_180021F34();
  *(_QWORD *)&pguid.Data1 = v2;
  v3 = v2;
  if ( v2 )
  {
    *(_QWORD *)(v2 + 152) = 64LL;
    pguid = 0LL;
    CoCreateGuid(&pguid);
    v5 = pguid;
    sub_1800219C0(v3, (__int128 *)&v5);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
