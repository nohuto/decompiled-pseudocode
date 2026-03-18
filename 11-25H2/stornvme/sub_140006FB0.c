/*
 * XREFs of sub_140006FB0 @ 0x140006FB0
 * Callers:
 *     sub_1400073E0 @ 0x1400073E0 (sub_1400073E0.c)
 * Callees:
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 */

__int64 __fastcall sub_140006FB0(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  char v3; // di
  unsigned __int8 v6; // cl
  __int64 v7; // rdx
  int v8; // eax

  result = *(_QWORD *)(a1 + 1560);
  v3 = 0;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    v6 = *(_BYTE *)(a1 + 46);
    if ( v6 == 0xFF )
    {
      v3 = *(_BYTE *)(result + 72);
    }
    else
    {
      if ( v6 <= 1u )
      {
LABEL_6:
        sub_140009580(a1, a1 + 1008);
        *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
        *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
        *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
        v7 = *(_QWORD *)(a1 + 1104);
        v8 = *(_DWORD *)(v7 + 4140);
        *(_BYTE *)(v7 + 4096) = 9;
        *(_BYTE *)(v7 + 4136) = 1;
        *(_DWORD *)(v7 + 4140) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)v3) & 7;
        sub_1400092F0(a1, a1 + 1016);
        return sub_140008130(a1, a1 + 1016, a2);
      }
      do
      {
        v6 >>= 1;
        ++v3;
      }
      while ( v6 > 1u );
    }
    if ( (unsigned __int8)v3 >= 7u )
      v3 = 7;
    goto LABEL_6;
  }
  return result;
}
