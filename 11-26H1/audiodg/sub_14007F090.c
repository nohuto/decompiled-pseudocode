/*
 * XREFs of sub_14007F090 @ 0x14007F090
 * Callers:
 *     sub_140079924 @ 0x140079924 (sub_140079924.c)
 *     sub_14007CD34 @ 0x14007CD34 (sub_14007CD34.c)
 *     sub_14007E6CC @ 0x14007E6CC (sub_14007E6CC.c)
 * Callees:
 *     sub_140038A9C @ 0x140038A9C (sub_140038A9C.c)
 */

void __fastcall sub_14007F090(__int64 a1, int a2)
{
  __int16 *v2; // r8
  char v3; // al
  size_t v4; // r9
  size_t v5; // rdx
  __int16 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = (__int16 *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 4) != a2 )
  {
    v3 = *(_BYTE *)(a1 + 2);
    *(_DWORD *)v2 = a2;
    if ( v3 == 1 )
    {
      v4 = 2LL;
      v6 = a2;
      v2 = &v6;
      v5 = 2LL;
    }
    else
    {
      if ( v3 != 2 )
        return;
      v5 = 4LL;
      v4 = 4LL;
    }
    sub_140038A9C(*(void **)(a1 + 16), v5, v2, v4);
  }
}
