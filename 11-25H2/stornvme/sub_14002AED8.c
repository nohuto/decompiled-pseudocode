/*
 * XREFs of sub_14002AED8 @ 0x14002AED8
 * Callers:
 *     sub_14001E95C @ 0x14001E95C (sub_14001E95C.c)
 * Callees:
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_1400187E0 @ 0x1400187E0 (sub_1400187E0.c)
 *     sub_14001942C @ 0x14001942C (sub_14001942C.c)
 *     sub_140029568 @ 0x140029568 (sub_140029568.c)
 *     sub_14002ACA4 @ 0x14002ACA4 (sub_14002ACA4.c)
 *     sub_14002B350 @ 0x14002B350 (sub_14002B350.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_14002AED8(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // r13d
  __int64 v3; // rax
  bool v5; // al
  int v6; // r9d
  __int64 v7; // r11
  bool v8; // r10
  bool v9; // al
  char v10; // bl
  unsigned int v11; // esi
  __int64 v12; // r15
  int v13; // ecx
  int i; // edx
  __int64 v15; // rcx
  __int64 v16; // r8
  bool v17; // al
  __int64 v18; // rdx
  __int64 result; // rax
  __int64 v20; // [rsp+38h] [rbp-30h] BYREF
  __int64 v21; // [rsp+40h] [rbp-28h]
  __int64 v22; // [rsp+48h] [rbp-20h]
  __int64 v23; // [rsp+50h] [rbp-18h]
  __int64 v24; // [rsp+58h] [rbp-10h]
  int v25; // [rsp+B0h] [rbp+48h]
  bool v26; // [rsp+B8h] [rbp+50h]
  int v27; // [rsp+C0h] [rbp+58h]

  v1 = *(_QWORD *)(a1 + 1560);
  v2 = 1;
  v3 = *(_QWORD *)(a1 + 3984);
  v24 = v1;
  v23 = v3;
  v5 = sub_1400187E0(a1, 1u, 1u);
  v6 = *(_DWORD *)(a1 + 56);
  v7 = 0LL;
  v26 = v5;
  v8 = v5;
  v20 = 0LL;
  v22 = 0LL;
  if ( (v6 & 0x100000) != 0 || (v9 = sub_1400187E0(a1, 2u, 0), v10 = v7, v9) )
    v10 = 1;
  if ( *(_BYTE *)(a1 + 20) == (_BYTE)v7 && v8 && (v6 & 0x40000) == 0 )
  {
    sub_140006100(a1, 0x1000u);
    v7 = 0LL;
  }
  v11 = *(_DWORD *)(v1 + 516);
  v12 = *(_QWORD *)(a1 + 1656);
  v13 = v7;
  if ( v11 > 0xFF )
    v11 = 255;
  v27 = v7;
  if ( !v11 )
    goto LABEL_34;
  while ( 1 )
  {
    if ( *(_BYTE *)(a1 + 20) == (_BYTE)v7 || *(_DWORD *)(a1 + 216) == v2 )
    {
      sub_140009580(a1, a1 + 1008);
      for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= i )
        ++i;
      *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
      v15 = *(_QWORD *)(a1 + 1104);
      *(_QWORD *)(v15 + 4120) = *(_QWORD *)(a1 + 1664);
      *(_BYTE *)(v15 + 4136) = v2 == 0;
      *(_BYTE *)(v15 + 4096) = 6;
      *(_DWORD *)(v15 + 4100) = v2;
      sub_1400092F0(a1, a1 + 1016);
      LOBYTE(v16) = 1;
      sub_140008130(a1, a1 + 1016, v16);
      v17 = sub_14001942C(a1);
      v7 = 0LL;
      if ( v17 )
      {
        HIBYTE(v25) = *(_BYTE *)(v12 + 384);
        BYTE2(v25) = *(_BYTE *)(v12 + 385);
        BYTE1(v25) = *(_BYTE *)(v12 + 386);
        LOBYTE(v25) = *(_BYTE *)(v12 + 387);
        if ( v25 != -559038737 && v2 == 1 )
        {
          sub_140032C80(v12, 0LL, 4096LL);
          v7 = 0LL;
          *(_QWORD *)v12 = 67108336LL;
          *(_BYTE *)(v12 + 130) = 9;
          *(_QWORD *)(v12 + 8) = 67108336LL;
          *(_QWORD *)(v12 + 16) = 67108336LL;
        }
      }
      if ( *(_BYTE *)(a1 + 1019) != 1 )
        goto LABEL_31;
      if ( !v26 || *(_BYTE *)(v12 + 4LL * (*(_BYTE *)(v12 + 26) & 0xF) + 130) || *(_QWORD *)v12 )
        goto LABEL_28;
      if ( (!v10 || *(_BYTE *)(a1 + 20)) && (v11 <= 1 || *(_BYTE *)(a1 + 20)) )
        break;
    }
LABEL_32:
    if ( v2++ >= v11 )
      goto LABEL_33;
  }
  *(_DWORD *)(a1 + 4056) |= 0x40u;
LABEL_28:
  v21 = 0LL;
  if ( *(_BYTE *)(a1 + 20) )
  {
    v18 = *(_QWORD *)(a1 + 1576);
    v21 = v18;
    *(_QWORD *)(a1 + 1576) = v18 + 424;
    sub_14002B350(a1, v12, v24, v23, v2, v18);
    ++v27;
    v7 = 0LL;
    *(_QWORD *)(a1 + 8LL * (v2 - 1) + 1672) = v21;
    *(_DWORD *)(a1 + 224) = (unsigned __int16)v2;
LABEL_31:
    if ( *(_BYTE *)(a1 + 20) )
      goto LABEL_33;
    goto LABEL_32;
  }
  StorPortExtendedFunction(0LL, a1, 424LL, 1701672526LL);
  v7 = 0LL;
LABEL_33:
  v13 = v27;
LABEL_34:
  *(_DWORD *)(a1 + 212) = v13;
  result = *(unsigned int *)(a1 + 4056);
  if ( (result & 0x60) != 0 )
  {
    result = sub_14002ACA4(a1, 0, 0, 0xC1000002);
    v7 = 0LL;
  }
  if ( v20 != v7 )
    return sub_14000CF50(a1, 4096LL, &v20, v22);
  return result;
}
