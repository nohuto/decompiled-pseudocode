/*
 * XREFs of sub_1400219C8 @ 0x1400219C8
 * Callers:
 *     sub_140001810 @ 0x140001810 (sub_140001810.c)
 * Callees:
 *     sub_140002330 @ 0x140002330 (sub_140002330.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 */

__int64 __fastcall sub_1400219C8(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  __int64 v4; // r10
  _DWORD *v5; // rcx
  _DWORD *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v2 = sub_14000B900(a2, &v7);
  v5 = v7;
  if ( *v7 >= 0xBu )
  {
    *(_WORD *)v2 = v3;
    *(_DWORD *)(v2 + 3) = -2088763386;
    *(_WORD *)(v2 + 7) = -20048;
    *(_BYTE *)(v2 + 9) = -78;
    *v5 = 11;
    *(_BYTE *)(v4 + 3) = 1;
  }
  else
  {
    sub_140002330(v4, 6, 5, 0x24u);
    return (unsigned int)-1056964602;
  }
  return v3;
}
