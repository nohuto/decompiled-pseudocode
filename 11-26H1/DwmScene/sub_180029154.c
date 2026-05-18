/*
 * XREFs of sub_180029154 @ 0x180029154
 * Callers:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     sub_180047740 @ 0x180047740 (sub_180047740.c)
 *     sub_180081DB0 @ 0x180081DB0 (sub_180081DB0.c)
 * Callees:
 *     sub_180028B4C @ 0x180028B4C (sub_180028B4C.c)
 */

char __fastcall sub_180029154(__int64 a1, unsigned int a2)
{
  __int64 *v2; // rbx
  unsigned int v3; // r11d
  char v4; // r10
  unsigned int v5; // r11d
  __int64 v6; // rdx
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = (__int64 *)(a1 + 80);
  v10 = a2;
  sub_180028B4C((__int64 *)(a1 + 80), v8, &v10);
  v4 = 0;
  if ( !*(_BYTE *)(v9 + 25) && v3 >= *(_DWORD *)(v9 + 28) && v9 != *v2 )
  {
    v10 = v3;
    sub_180028B4C(v2, v8, &v10);
    v6 = v9;
    if ( *(_BYTE *)(v9 + 25) != v4 || v5 < *(_DWORD *)(v9 + 28) )
      v6 = *v2;
    if ( *(_BYTE *)(v6 + 32) != v4 )
      return 1;
  }
  return v4;
}
