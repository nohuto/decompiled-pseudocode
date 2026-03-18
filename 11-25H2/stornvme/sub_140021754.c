/*
 * XREFs of sub_140021754 @ 0x140021754
 * Callers:
 *     sub_140001810 @ 0x140001810 (sub_140001810.c)
 * Callees:
 *     sub_140002330 @ 0x140002330 (sub_140002330.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 */

__int64 __fastcall sub_140021754(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // r9d
  __int64 v4; // r10
  _DWORD *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = sub_14000B900(a2, &v6);
  if ( *v6 >= 8u )
  {
    *(_BYTE *)(v2 + 7) &= 0xF0u;
    *(_WORD *)v2 = -20224;
    *(_WORD *)(v2 + 3) = 60;
    *(_BYTE *)(v2 + 5) = 1;
    *(_BYTE *)(v4 + 3) = 1;
  }
  else
  {
    sub_140002330(v4, 6, 5, 0x24u);
    return (unsigned int)-1056964602;
  }
  return v3;
}
