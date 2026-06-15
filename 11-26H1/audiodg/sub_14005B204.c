/*
 * XREFs of sub_14005B204 @ 0x14005B204
 * Callers:
 *     sub_14005B080 @ 0x14005B080 (sub_14005B080.c)
 * Callees:
 *     sub_14003E740 @ 0x14003E740 (sub_14003E740.c)
 *     sub_140073954 @ 0x140073954 (sub_140073954.c)
 */

__int64 sub_14005B204(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  sub_14003E740((__int64 *)va);
  return 0LL;
}
