/*
 * XREFs of sub_1400EC4CC @ 0x1400EC4CC
 * Callers:
 *     sub_1400CD79C @ 0x1400CD79C (sub_1400CD79C.c)
 *     sub_1400EA590 @ 0x1400EA590 (sub_1400EA590.c)
 * Callees:
 *     sub_1400BDD84 @ 0x1400BDD84 (sub_1400BDD84.c)
 *     sub_1400F0DFC @ 0x1400F0DFC (sub_1400F0DFC.c)
 */

__int64 __fastcall sub_1400EC4CC(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // r10d
  int v4; // eax
  unsigned __int8 v5; // al
  unsigned __int16 v6; // cx
  int v8; // [rsp+40h] [rbp+8h]

  v8 = 0;
  if ( sub_1400BDD84(a1, 2u, 0) )
  {
    if ( *(_BYTE *)(v2 + 1728) == 1 )
    {
      sub_1400F0DFC(v2, 104LL, 4LL);
      sub_1400F0DFC(a1, 20LL, 4LL);
      v4 = 0;
    }
    else
    {
      v8 = *(_DWORD *)(*(_QWORD *)(v2 + 920) + 104LL);
      v4 = *(_DWORD *)(*(_QWORD *)(v2 + 920) + 20LL);
    }
    if ( (v4 & 0x1000000) != 0 )
    {
      v5 = BYTE2(v8);
      if ( HIWORD(v8) > 0xFFu )
      {
        v3 = HIWORD(v8);
        *(_QWORD *)(a1 + 584) |= 0xFF000000uLL;
        return (unsigned int)(500 * v3);
      }
      v6 = *(unsigned __int8 *)(a1 + 587);
      if ( v6 <= HIWORD(v8) )
        goto LABEL_14;
    }
    else
    {
      v5 = v8;
      if ( (unsigned __int16)v8 > 0xFFu )
      {
        v3 = (unsigned __int16)v8;
        *(_QWORD *)(a1 + 584) |= 0xFF000000uLL;
        return (unsigned int)(500 * v3);
      }
      v6 = *(unsigned __int8 *)(a1 + 587);
      if ( v6 <= (unsigned __int16)v8 )
      {
LABEL_14:
        v3 = v5;
        *(_BYTE *)(a1 + 587) = v5;
        return (unsigned int)(500 * v3);
      }
    }
    v5 = v6;
    goto LABEL_14;
  }
  return (unsigned int)(500 * v3);
}
