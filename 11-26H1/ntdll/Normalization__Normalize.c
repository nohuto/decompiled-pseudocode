/*
 * XREFs of Normalization__Normalize @ 0x1800AE150
 * Callers:
 *     RtlpNormalizeStringWorker @ 0x1800ADF80 (RtlpNormalizeStringWorker.c)
 * Callees:
 *     Normalization__NormalizeCharacter @ 0x1800AE3FC (Normalization__NormalizeCharacter.c)
 *     Normalization__GuessCharCountBySize @ 0x1800AF3E4 (Normalization__GuessCharCountBySize.c)
 */

__int64 __fastcall Normalization__Normalize(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        _WORD *a4,
        int a5,
        _DWORD *a6)
{
  unsigned __int16 *v6; // r10
  unsigned int v8; // r11d
  unsigned __int64 v9; // rax
  __int64 v10; // r9
  unsigned int v11; // esi
  int v12; // ecx
  int v13; // r9d
  int v14; // r10d
  int v15; // eax
  __int64 v16; // r9
  unsigned int v18; // eax
  unsigned __int16 *v19; // [rsp+20h] [rbp-39h] BYREF
  unsigned __int16 *v20; // [rsp+28h] [rbp-31h]
  unsigned __int16 *v21; // [rsp+30h] [rbp-29h]
  _WORD *v22; // [rsp+38h] [rbp-21h]
  _WORD *v23; // [rsp+40h] [rbp-19h]
  _WORD *v24; // [rsp+48h] [rbp-11h]
  int v25; // [rsp+50h] [rbp-9h]
  int v26; // [rsp+54h] [rbp-5h]
  int v27; // [rsp+58h] [rbp-1h]
  int v28; // [rsp+5Ch] [rbp+3h]
  _WORD *v29; // [rsp+60h] [rbp+7h]
  __int16 v30; // [rsp+68h] [rbp+Fh]
  int v31; // [rsp+6Ah] [rbp+11h]
  __int16 v32; // [rsp+6Eh] [rbp+15h]
  _WORD *v33; // [rsp+70h] [rbp+17h]
  int v34; // [rsp+78h] [rbp+1Fh]
  __int16 v35; // [rsp+7Ch] [rbp+23h]
  __int128 v36; // [rsp+7Eh] [rbp+25h]
  __int16 v37; // [rsp+8Eh] [rbp+35h]
  __int64 v38; // [rsp+90h] [rbp+37h]

  v28 = 0;
  v6 = a2;
  v31 = 0;
  v32 = 0;
  v37 = 0;
  v36 = 0LL;
  if ( !a2 || !a4 || !a6 )
    return 3221225485LL;
  v8 = 0;
  v19 = a2;
  v26 = a3;
  v22 = a4;
  v21 = a2;
  v20 = &a2[(int)a3];
  v25 = a5;
  v27 = 0;
  v30 = 0;
  v23 = &a4[a5];
  v29 = a4 - 1;
  v33 = a4;
  v34 = 0;
  v35 = 0;
  v38 = a1;
  *a6 = 0;
LABEL_5:
  v24 = a4;
  while ( v6 != v20 )
  {
    if ( v8 )
      goto LABEL_25;
    v9 = *v6++;
    v21 = v6;
    if ( (int)v9 < *(_DWORD *)(a1 + 28)
      || (a3 = *(unsigned __int8 *)((v9 >> 7) + *(_QWORD *)(a1 + 32)), !(_BYTE)a3)
      || (_BYTE)a3 == 0xFB && *(_BYTE *)(a1 + 113) )
    {
      if ( a4 < v23 )
      {
        *a4 = v9;
        v6 = v21;
        a4 = v24 + 1;
        goto LABEL_5;
      }
      goto LABEL_11;
    }
    v18 = Normalization__NormalizeCharacter(a1, (unsigned int)v9, a3, &v19);
    a4 = v24;
    v8 = v18;
    v6 = v21;
  }
  if ( !v8 )
  {
    v16 = a4 - v22;
    goto LABEL_18;
  }
LABEL_25:
  if ( v8 != -1073741789 )
  {
    LODWORD(v16) = v6 - v19 - 1;
    goto LABEL_18;
  }
LABEL_11:
  v10 = a4 - v22;
  v11 = v20 - v6 + 1;
  if ( !(unsigned int)(v6 - v19) )
    v10 = (unsigned int)(*(_DWORD *)(a1 + 24) + v10);
  v12 = Normalization__GuessCharCountBySize(a1, v11, a3, v10);
  v15 = (int)(v11 * v13) / v14;
  if ( v15 <= v12 )
    v15 = v12;
  LODWORD(v16) = v15 + (v15 >> 3) + v13;
LABEL_18:
  *a6 = v16;
  return v8;
}
