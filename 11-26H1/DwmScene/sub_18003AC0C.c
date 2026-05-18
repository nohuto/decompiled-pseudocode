/*
 * XREFs of sub_18003AC0C @ 0x18003AC0C
 * Callers:
 *     sub_1800675A0 @ 0x1800675A0 (sub_1800675A0.c)
 *     sub_18006DE14 @ 0x18006DE14 (sub_18006DE14.c)
 *     sub_18007DD3C @ 0x18007DD3C (sub_18007DD3C.c)
 *     sub_18008022C @ 0x18008022C (sub_18008022C.c)
 *     sub_18008E8B0 @ 0x18008E8B0 (sub_18008E8B0.c)
 *     sub_180095500 @ 0x180095500 (sub_180095500.c)
 *     sub_180095530 @ 0x180095530 (sub_180095530.c)
 *     sub_180095868 @ 0x180095868 (sub_180095868.c)
 *     sub_180095970 @ 0x180095970 (sub_180095970.c)
 *     sub_180096D50 @ 0x180096D50 (sub_180096D50.c)
 *     sub_1800973C0 @ 0x1800973C0 (sub_1800973C0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

_QWORD *__fastcall sub_18003AC0C(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  v5 = a2[1];
  *a1 = *a2;
  v6 = a1[1];
  a1[1] = v5;
  if ( v6 )
    sub_180010EC8(v6);
  return a1;
}
