/*
 * XREFs of sub_14002DDDC @ 0x14002DDDC
 * Callers:
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 *     sub_14000FB60 @ 0x14000FB60 (sub_14000FB60.c)
 * Callees:
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_1400066B0 @ 0x1400066B0 (sub_1400066B0.c)
 *     sub_140008590 @ 0x140008590 (sub_140008590.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 */

__int64 __fastcall sub_14002DDDC(__int64 a1, char a2)
{
  unsigned int v2; // edi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  int i; // edx
  __int64 v9; // r8
  unsigned __int64 v11; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 *v12; // [rsp+80h] [rbp+40h] BYREF
  __int64 v13; // [rsp+88h] [rbp+48h]

  v2 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( a2 )
  {
    v5 = a1 + 1408;
    if ( *(_BYTE *)(a1 + 1408) )
    {
      v2 = -1056964596;
LABEL_22:
      *(_BYTE *)(a1 + 1408) = 0;
      return v2;
    }
    if ( !*(_QWORD *)(a1 + 1536) || !*(_QWORD *)(a1 + 1544) )
    {
      v2 = -1056964605;
      goto LABEL_22;
    }
    sub_140009580(a1, a1 + 1408);
    *(_QWORD *)(*(_QWORD *)(v5 + 96) + 4200LL) = v5;
    v12 = (unsigned __int64 *)(*(_QWORD *)(a1 + 1536) + 0x2000LL);
    v13 = *(_QWORD *)(a1 + 1544) + 0x2000LL;
  }
  else
  {
    sub_140006100(a1, 8u);
    if ( !v12 )
      return (unsigned int)-1056964605;
    v5 = a1 + 1008;
    sub_140009580(a1, a1 + 1008);
  }
  StorPortQuerySystemTime(&v11, v6, v7);
  *v12 = (v11 / 0x2710 - 11644473600000LL) & 0xFFFFFFFFFFFFLL;
  if ( !(unsigned int)sub_1400066B0(a1, *(_QWORD *)(v5 + 96), v13, 8u) )
  {
    v2 = -1056964607;
    if ( a2 )
      goto LABEL_22;
    goto LABEL_18;
  }
  for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(v5 + 96) + 4225LL) |= i )
    ++i;
  *(_BYTE *)(*(_QWORD *)(v5 + 96) + 4225LL) |= 4u;
  sub_1400042C0(a1, v5 + 8);
  *(_DWORD *)(*(_QWORD *)(v5 + 96) + 4100LL) = -1;
  *(_BYTE *)(*(_QWORD *)(v5 + 96) + 4096LL) = 9;
  *(_BYTE *)(*(_QWORD *)(v5 + 96) + 4136LL) = 14;
  if ( a2 )
  {
    v2 = StorPortExtendedFunction(49LL, a1, 0LL, 0LL);
    if ( v2 )
      goto LABEL_22;
  }
  sub_1400092F0(a1, v5 + 8);
  if ( !a2 )
  {
    LOBYTE(v9) = 1;
    sub_140008590(a1, v5 + 8, v9, 0x989680u);
    v2 = *(_BYTE *)(v5 + 11) != 1 ? 0xC1000001 : 0;
LABEL_18:
    if ( v12 )
      sub_14000CF50(a1, 8LL, (__int64 *)&v12, v13);
  }
  return v2;
}
