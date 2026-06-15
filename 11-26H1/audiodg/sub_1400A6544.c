/*
 * XREFs of sub_1400A6544 @ 0x1400A6544
 * Callers:
 *     sub_1400A5CC0 @ 0x1400A5CC0 (sub_1400A5CC0.c)
 *     sub_1400A93A8 @ 0x1400A93A8 (sub_1400A93A8.c)
 *     sub_1400AA1A8 @ 0x1400AA1A8 (sub_1400AA1A8.c)
 *     sub_1400AA844 @ 0x1400AA844 (sub_1400AA844.c)
 * Callees:
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_1400A5BFC @ 0x1400A5BFC (sub_1400A5BFC.c)
 */

__int64 *__fastcall sub_1400A6544(__int64 *a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_1400A5BFC(v9, a2);
  v4 = *v3;
  *v3 = *a1;
  v5 = a1[1];
  *a1 = v4;
  v6 = v3[1];
  v3[1] = v5;
  v7 = v9[1];
  a1[1] = v6;
  if ( v7 )
    sub_140007588(v7);
  return a1;
}
