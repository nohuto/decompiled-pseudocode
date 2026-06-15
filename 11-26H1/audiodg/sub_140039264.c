/*
 * XREFs of sub_140039264 @ 0x140039264
 * Callers:
 *     sub_14003B610 @ 0x14003B610 (sub_14003B610.c)
 * Callees:
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_1400234EC @ 0x1400234EC (sub_1400234EC.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 */

__int64 __fastcall sub_140039264(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp+8h]

  *a1 = 0LL;
  v2 = a1[1];
  a1[1] = 0LL;
  if ( v2 )
    sub_140007588(v2);
  if ( !*a1 )
  {
    v6 = sub_1400492F4(24LL);
    *(_OWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 8) = 1;
    *(_DWORD *)(v6 + 12) = 1;
    *(_QWORD *)v6 = off_1400BAED8;
    *(_QWORD *)(v6 + 16) = 0LL;
    v4 = v6 + 16;
    v5 = v6;
    sub_1400234EC(a1, &v4);
    if ( v5 )
      sub_140007588(v5);
  }
  return *a1;
}
