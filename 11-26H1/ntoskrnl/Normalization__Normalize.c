/*
 * XREFs of Normalization__Normalize @ 0x14080DDE8
 * Callers:
 *     RtlpNormalizeStringWorker @ 0x14080E928 (RtlpNormalizeStringWorker.c)
 * Callees:
 *     NormBuffer__Append @ 0x140621E7C (NormBuffer__Append.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     Normalization__GuessCharCountBySize @ 0x14080D70C (Normalization__GuessCharCountBySize.c)
 *     Normalization__NormalizeCharacter @ 0x14080DFB8 (Normalization__NormalizeCharacter.c)
 */

__int64 __fastcall Normalization__Normalize(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, _DWORD *a6)
{
  __int64 v7; // r15
  __int64 v10; // r8
  unsigned int v11; // r11d
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // r10d
  __int64 v15; // rbx
  int v16; // ecx
  int v17; // r9d
  int v18; // r10d
  int v19; // eax
  __int64 v21; // [rsp+28h] [rbp-49h] BYREF
  __int64 v22; // [rsp+30h] [rbp-41h]
  __int64 v23; // [rsp+38h] [rbp-39h]
  __int64 v24; // [rsp+40h] [rbp-31h]
  __int64 v25; // [rsp+48h] [rbp-29h]
  __int64 v26; // [rsp+50h] [rbp-21h]
  int v27; // [rsp+58h] [rbp-19h]
  int v28; // [rsp+5Ch] [rbp-15h]
  int v29; // [rsp+60h] [rbp-11h]
  __int64 v30; // [rsp+68h] [rbp-9h]
  __int16 v31; // [rsp+70h] [rbp-1h]
  __int64 v32; // [rsp+78h] [rbp+7h]
  int v33; // [rsp+80h] [rbp+Fh]
  __int16 v34; // [rsp+84h] [rbp+13h]
  __int64 v35; // [rsp+98h] [rbp+27h]

  v7 = a3;
  memset_0(&v21, 0, 0x78uLL);
  if ( !a2 || !a4 || !a6 )
    return 3221225485LL;
  v22 = a2 + 2 * v7;
  v11 = 0;
  v27 = a5;
  v21 = a2;
  v28 = v7;
  v24 = a4;
  v30 = a4 - 2;
  v25 = a4 + 2LL * a5;
  v26 = a4;
  v23 = a2;
  v29 = 0;
  v31 = 0;
  v32 = a4;
  v33 = 0;
  v34 = 0;
  v35 = a1;
  *a6 = 0;
  while ( a2 != v22 )
  {
    if ( v11 )
      goto LABEL_17;
    v12 = *(unsigned __int16 *)a2;
    v13 = *(unsigned __int16 *)a2;
    v23 = a2 + 2;
    if ( (signed int)v12 < *(_DWORD *)(a1 + 28)
      || (LOBYTE(v10) = *(_BYTE *)(((unsigned __int64)v12 >> 7) + *(_QWORD *)(a1 + 32)), !(_BYTE)v10)
      || (_BYTE)v10 == 0xFB && *(_BYTE *)(a1 + 113) )
    {
      if ( !NormBuffer__Append((__int64)&v21, v13) )
      {
        a2 = v23;
        goto LABEL_18;
      }
    }
    else
    {
      v11 = Normalization__NormalizeCharacter(a1, v13, v10, &v21);
    }
    a2 = v23;
  }
  if ( !v11 )
  {
    a2 = (v26 - v24) >> 1;
    goto LABEL_24;
  }
LABEL_17:
  if ( v11 != -1073741789 )
  {
    LODWORD(a2) = ((a2 - v21) >> 1) - 1;
    goto LABEL_24;
  }
LABEL_18:
  v14 = ((v22 - a2) >> 1) + 1;
  v15 = (a2 - v21) >> 1;
  if ( !(_DWORD)v15 )
    LODWORD(v15) = 1;
  v16 = Normalization__GuessCharCountBySize(a1, v14);
  v19 = v18 * v17 / (int)v15;
  if ( v19 <= v16 )
    v19 = v16;
  LODWORD(a2) = v17 + v19 + (v19 >> 3);
LABEL_24:
  *a6 = a2;
  return v11;
}
