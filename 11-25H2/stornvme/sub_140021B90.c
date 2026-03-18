/*
 * XREFs of sub_140021B90 @ 0x140021B90
 * Callers:
 *     sub_140003520 @ 0x140003520 (sub_140003520.c)
 * Callees:
 *     sub_1400079D0 @ 0x1400079D0 (sub_1400079D0.c)
 *     sub_140008090 @ 0x140008090 (sub_140008090.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 *     sub_140021AD8 @ 0x140021AD8 (sub_140021AD8.c)
 *     sub_14002CDD0 @ 0x14002CDD0 (sub_14002CDD0.c)
 *     sub_14002D24C @ 0x14002D24C (sub_14002D24C.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_140021B90(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // r11
  __int64 v4; // r15
  unsigned int v5; // esi
  unsigned __int16 v6; // ax
  char v7; // r10
  unsigned __int16 *v8; // rbx
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int16 v12; // ax
  __int64 v13; // r13
  int v14; // ecx
  __int16 v15; // r12
  unsigned int v16; // ecx
  unsigned __int16 v17; // r12
  __int16 v18; // ax
  unsigned __int16 v19; // cx
  __int64 v20; // rax
  int v21; // r8d
  __int16 v22; // ax
  unsigned __int16 v23; // bp
  unsigned __int64 v24; // r13
  __int64 v25; // rax
  _OWORD *v26; // rdx
  int v28; // [rsp+20h] [rbp-118h]
  __int64 v29; // [rsp+D0h] [rbp-68h]
  __int64 v30; // [rsp+D8h] [rbp-60h]
  __int64 v31; // [rsp+E0h] [rbp-58h]
  unsigned int *v33; // [rsp+150h] [rbp+18h] BYREF
  int v34; // [rsp+158h] [rbp+20h]

  LOBYTE(v2) = 0;
  v33 = 0LL;
  v4 = a2;
  v5 = 0;
  v6 = *(_WORD *)(a1 + 982);
  v7 = 4;
  if ( !v6 || *(_WORD *)(a1 + 954) >= v6 || (v8 = (unsigned __int16 *)(a1 + 952), *(_WORD *)(a1 + 952) >= v6) )
  {
    *(_BYTE *)(a2 + 3) = 6;
    goto LABEL_38;
  }
  v9 = sub_14000B900(a2, &v33);
  v29 = v9;
  v10 = *v33;
  if ( (unsigned int)v10 < 0xD4 )
  {
    v5 = -1056964602;
LABEL_6:
    *(_BYTE *)(v4 + 3) = 18;
LABEL_39:
    if ( *(_BYTE *)(v4 + 3) == (_BYTE)v2 )
      *(_BYTE *)(v4 + 3) = v7;
    if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
    return v5;
  }
  v11 = *(unsigned __int16 *)(v9 + 72);
  v31 = v9 + *(unsigned int *)(v9 + 36) + 28LL;
  if ( v10 < 80 * v11 + 132 )
  {
    v5 = -1056964604;
    goto LABEL_6;
  }
  if ( *(unsigned int *)(v9 + 40) < (unsigned __int64)((v11 << 6) + 56) )
  {
    v5 = -1056964604;
    goto LABEL_39;
  }
  v12 = sub_140021AD8(a1);
  v13 = v12;
  if ( v12 == 0xFFFF
    || (v14 = *(unsigned __int16 *)(a1 + 332),
        v15 = v14 + v12,
        v16 = *(unsigned __int16 *)(a1 + 982) + v14,
        v17 = v15 + 1,
        v34 = v17,
        v17 > v16) )
  {
    v7 = 4;
LABEL_38:
    v5 = -1056964601;
    goto LABEL_39;
  }
  v18 = sub_14002CDD0(a1, v17, v4);
  LOBYTE(v2) = 0;
  v19 = 0;
  if ( v18 )
  {
    *(_DWORD *)(a1 + 28) = 18;
    v5 = -1056964607;
LABEL_16:
    v7 = 4;
    goto LABEL_39;
  }
  v20 = v29;
  LOWORD(v33) = 0;
  v21 = (unsigned __int16)v13;
  LOWORD(v21) = *(_WORD *)(a1 + 330) + v13 + 1;
  v30 = *(_QWORD *)(a1 + 968) + 48 * v13;
  while ( 1 )
  {
    if ( v19 >= *(_WORD *)(v20 + 72) )
    {
      *(_BYTE *)(v4 + 3) = 1;
      return v5;
    }
    LOWORD(v28) = v13;
    v22 = sub_14002D24C(a1, v4, v21, v17, v28, v19);
    v2 = 0;
    if ( v22 )
      break;
    LOWORD(v33) = (_WORD)v33 + 1;
    v19 = (unsigned __int16)v33;
    ++*(_WORD *)(v30 + 34);
    v20 = v29;
    if ( v19 < *(_WORD *)(v29 + 72) )
    {
      LOWORD(v13) = sub_140021AD8(a1);
      if ( (_WORD)v13 == 0xFFFF )
        goto LABEL_26;
      v20 = v29;
      v19 = (unsigned __int16)v33;
    }
    v21 = (unsigned __int16)v13;
    LOWORD(v21) = *(_WORD *)(a1 + 330) + v13 + 1;
  }
  *(_DWORD *)(a1 + 28) = 18;
  v5 = -1056964607;
LABEL_26:
  if ( v17 )
  {
    if ( v2 < *v8 )
    {
      v23 = v2;
      do
      {
        v24 = (unsigned __int64)v23 << 6;
        if ( *(_WORD *)(*(_QWORD *)(a1 + 960) + v24 + 46) == v17 )
        {
          sub_140008090(a1, *(_WORD *)(a1 + 330) + v23 + 1);
          v25 = *(_QWORD *)(a1 + 960);
          *(_OWORD *)(v25 + ((unsigned __int64)v23 << 6)) = 0LL;
          *(_OWORD *)(v25 + v24 + 16) = 0LL;
          *(_OWORD *)(v25 + v24 + 32) = 0LL;
          *(_OWORD *)(v25 + v24 + 48) = 0LL;
        }
        ++v23;
      }
      while ( v23 < *v8 );
      v4 = a2;
    }
    sub_1400079D0(a1, v17);
    v26 = (_OWORD *)(*(_QWORD *)(a1 + 968) + 48LL * (v34 - *(unsigned __int16 *)(a1 + 332) - 1));
    *v26 = 0LL;
    v26[1] = 0LL;
    v26[2] = 0LL;
    sub_140032C80(v31, 0LL, 120LL);
    LOBYTE(v2) = 0;
  }
  if ( v5 )
    goto LABEL_16;
  return v5;
}
