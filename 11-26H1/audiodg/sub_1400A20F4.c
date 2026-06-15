/*
 * XREFs of sub_1400A20F4 @ 0x1400A20F4
 * Callers:
 *     sub_1400A3650 @ 0x1400A3650 (sub_1400A3650.c)
 *     sub_1400A3730 @ 0x1400A3730 (sub_1400A3730.c)
 *     sub_1400A3810 @ 0x1400A3810 (sub_1400A3810.c)
 * Callees:
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     sub_14009E814 @ 0x14009E814 (sub_14009E814.c)
 */

char __fastcall sub_1400A20F4(_QWORD *a1, _QWORD *a2, char *a3)
{
  char v3; // bl
  unsigned int v6; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v7; // [rsp+34h] [rbp-Ch] BYREF
  __int64 v8; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+28h] BYREF

  v3 = 0;
  v9 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  sub_14009E814(a1, &v8, &v9, &v6, &v7, a3);
  if ( v9 != v6 )
  {
    if ( v9 < v7 )
    {
      v3 = 1;
      *a2 = v8 + ((unsigned __int64)v9 << 6);
    }
    else
    {
      sub_140048108();
      sub_140048108();
    }
  }
  return v3;
}
