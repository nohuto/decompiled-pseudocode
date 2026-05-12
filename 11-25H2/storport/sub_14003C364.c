/*
 * XREFs of sub_14003C364 @ 0x14003C364
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_14001F350 @ 0x14001F350 (sub_14001F350.c)
 *     sub_14003C424 @ 0x14003C424 (sub_14003C424.c)
 *     sub_14003C734 @ 0x14003C734 (sub_14003C734.c)
 *     sub_1400B0998 @ 0x1400B0998 (sub_1400B0998.c)
 *     sub_1400B0CAC @ 0x1400B0CAC (sub_1400B0CAC.c)
 */

__int64 __fastcall sub_14003C364(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 *v4; // rax
  __int64 v5; // r14
  int v11; // [rsp+58h] [rbp+20h]

  v4 = 0LL;
  v5 = 0LL;
  HIBYTE(v11) = 0;
  if ( a2 && *(_WORD *)a2 == 1 && *(_DWORD *)(a2 + 4) >= 4u )
  {
    v5 = a2;
    LOWORD(v11) = *(_WORD *)(a2 + 8);
    BYTE2(v11) = *(_BYTE *)(a2 + 10);
    v4 = sub_14001F350(a1, v11);
  }
  if ( a4 == 1 )
  {
    if ( a2 )
      return sub_1400B0CAC(a1, v4, v5, a3);
    else
      return sub_1400B0998(a1, a3);
  }
  else if ( a2 )
  {
    return sub_14003C734(a1, v4, v5, a3);
  }
  else
  {
    return sub_14003C424(a1, a3);
  }
}
