/*
 * XREFs of sub_14001F138 @ 0x14001F138
 * Callers:
 *     sub_14000FB60 @ 0x14000FB60 (sub_14000FB60.c)
 * Callees:
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_140032980 @ 0x140032980 (sub_140032980.c)
 */

char __fastcall sub_14001F138(__int64 a1)
{
  unsigned __int8 v1; // dl
  char v3; // si
  int i; // edx
  char v5; // bl
  __int64 v6; // r8
  int v7; // eax
  int v8; // ecx
  __int64 v9; // r8
  _OWORD *v11; // [rsp+90h] [rbp+8h] BYREF
  __int64 v12; // [rsp+98h] [rbp+10h]

  v1 = *(_BYTE *)(a1 + 4016);
  v11 = 0LL;
  v12 = 0LL;
  v3 = 0;
  if ( (v1 & 1) == 0 )
    goto LABEL_12;
  if ( ((v1 >> 1) & ((*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 96LL) & 1) != 0)) != 0 )
    *(_BYTE *)(a1 + 4016) = v1 | 8;
  sub_140009580(a1, a1 + 1008);
  for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= ++i )
    ;
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 4u;
  *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
  v5 = *(_BYTE *)(a1 + 4016) & 8;
  sub_140006100(a1, 0x10u);
  if ( !v11 )
    goto LABEL_12;
  *v11 = 0LL;
  sub_140032980(v11, a1 + 4017, v5 != 0 ? 16LL : 8LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4160LL) = v11;
  *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4168LL) = v12;
  *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4208LL) = 16;
  v6 = *(_QWORD *)(a1 + 1104);
  v7 = *(_DWORD *)(v6 + 4140);
  v8 = ((unsigned __int8)v7 ^ (*(_BYTE *)(a1 + 4016) >> 3)) & 1;
  *(_QWORD *)(v6 + 4120) = *(_QWORD *)(v6 + 4168);
  *(_BYTE *)(v6 + 4096) = 9;
  *(_DWORD *)(v6 + 4140) = v7 ^ v8;
  *(_BYTE *)(v6 + 4136) = -127;
  sub_1400092F0(a1, a1 + 1016);
  LOBYTE(v9) = 1;
  sub_140008130(a1, a1 + 1016, v9);
  if ( *(_BYTE *)(a1 + 1019) == 1 )
  {
    *(_BYTE *)(a1 + 4016) |= 4u;
    v3 = 1;
  }
  if ( v11 )
    sub_14000CF50(a1, 16LL, (__int64 *)&v11, v12);
  if ( !v3 )
  {
LABEL_12:
    if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
      StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
  }
  return v3;
}
