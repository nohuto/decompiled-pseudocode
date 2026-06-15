/*
 * XREFs of sub_140072640 @ 0x140072640
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140072640(__int64 a1)
{
  __int64 v1; // rbx
  __int128 v3; // [rsp+40h] [rbp-48h] BYREF

  v1 = a1;
  v3 = *(_OWORD *)(a1 + 104);
  EtwEventActivityIdControl(4LL, &v3);
  LODWORD(v1) = sub_1400B6010(*(_QWORD *)(v1 + 184));
  EtwEventActivityIdControl(4LL, &v3);
  return (unsigned int)v1;
}
