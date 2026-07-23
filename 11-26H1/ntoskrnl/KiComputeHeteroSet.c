/*
 * XREFs of KiComputeHeteroSet @ 0x140453FC0
 * Callers:
 *     KiInstallSubNodeHeteroSets @ 0x140453E78 (KiInstallSubNodeHeteroSets.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeHeteroSet(int a1, int a2, int a3, __int64 *a4, _QWORD *a5, __int64 *a6)
{
  __int64 *v6; // r13
  __int64 v7; // rdi
  __int64 v8; // r10
  __int64 v9; // rbp
  _WORD *v10; // rax
  __int64 v11; // rcx
  _WORD *v12; // rax
  __int64 v13; // r12
  _WORD *v14; // rax
  __int64 v15; // r15
  _WORD *v16; // r11
  __int64 v17; // r11
  _WORD *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // r13
  __int64 v21; // r9
  __int64 v22; // rbp
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // r8d
  int v26; // r8d
  __int64 v27; // r11
  __int64 result; // rax
  unsigned __int16 *v29; // rdx
  unsigned __int16 v30; // cx
  unsigned __int16 v31; // r11
  int v32; // r8d
  _WORD *v33; // r11
  __int64 v34; // rbp
  __int64 v35; // rax
  _WORD *v36; // r11
  __int64 v37; // rsi
  _WORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // r9
  int v41; // r8d
  int v42; // r8d
  int v43; // r8d

  v6 = a4;
  v7 = *((unsigned __int16 *)a4 + 4);
  v8 = 0LL;
  if ( PpmHeteroMultiCoreClassesEnabled )
  {
    v33 = (_WORD *)a5[2 * a1 + 6 + a2];
    if ( (unsigned __int16)v7 >= *v33 )
      v34 = 0LL;
    else
      v34 = *(_QWORD *)&v33[4 * v7 + 4];
    v36 = (_WORD *)a5[2 * a1 + 34 + a2];
    if ( (unsigned __int16)v7 >= *v36 )
      v37 = 0LL;
    else
      v37 = *(_QWORD *)&v36[4 * v7 + 4];
    v38 = (_WORD *)a5[2 * a1 + 20 + a2];
    if ( (unsigned __int16)v7 >= *v38 )
      v39 = 0LL;
    else
      v39 = *(_QWORD *)&v38[4 * v7 + 4];
    v40 = *a4;
    v27 = v34 & v40;
    v24 = v37 & v40;
    v23 = v39 & v40;
    if ( a3 )
    {
      v41 = a3 - 1;
      if ( !v41 )
        goto LABEL_54;
      v42 = v41 - 1;
      if ( !v42 )
        goto LABEL_20;
      v43 = v42 - 1;
      if ( !v43 )
      {
LABEL_54:
        v27 = v39 & v40;
        goto LABEL_20;
      }
      if ( v43 == 1 )
        goto LABEL_20;
    }
    v27 = v40;
    v23 = v40;
    v24 = v40;
    goto LABEL_20;
  }
  if ( (unsigned __int16)v7 >= *(_WORD *)*a5 )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)(*a5 + 8 * v7 + 8);
  v10 = (_WORD *)a5[1];
  if ( (unsigned __int16)v7 >= *v10 )
    v11 = 0LL;
  else
    v11 = *(_QWORD *)&v10[4 * v7 + 4];
  v12 = (_WORD *)a5[2];
  if ( (unsigned __int16)v7 >= *v12 )
    v13 = 0LL;
  else
    v13 = *(_QWORD *)&v12[4 * v7 + 4];
  v14 = (_WORD *)a5[3];
  if ( (unsigned __int16)v7 >= *v14 )
    v15 = 0LL;
  else
    v15 = *(_QWORD *)&v14[4 * v7 + 4];
  v16 = (_WORD *)a5[4];
  if ( (unsigned __int16)v7 >= *v16 )
    v17 = 0LL;
  else
    v17 = *(_QWORD *)&v16[4 * v7 + 4];
  v18 = (_WORD *)a5[5];
  if ( (unsigned __int16)v7 >= *v18 )
    v19 = 0LL;
  else
    v19 = *(_QWORD *)&v18[4 * v7 + 4];
  v20 = *a4;
  v21 = v9 & *a4;
  v22 = v11 & v20;
  v23 = v13 & v20;
  v24 = v15 & v20;
  if ( !a3 )
    goto LABEL_29;
  v25 = a3 - 1;
  if ( !v25 )
  {
    v27 = v21;
    goto LABEL_18;
  }
  v26 = v25 - 1;
  if ( v26 )
  {
    v32 = v26 - 1;
    if ( !v32 )
    {
      v27 = v13 & v20;
      goto LABEL_19;
    }
    if ( v32 == 1 )
    {
      v27 = v20 & v17;
      goto LABEL_19;
    }
LABEL_29:
    v27 = v20;
    v23 = v20;
    v24 = v20;
    goto LABEL_19;
  }
  v27 = v20 & v19;
LABEL_18:
  v23 = v21;
  v24 = v22;
LABEL_19:
  v6 = a4;
LABEL_20:
  *a6 = v24;
  a6[1] = v23;
  a6[2] = v27;
  result = a2;
  v29 = (unsigned __int16 *)a5[2 * a1 + 48 + a2];
  v30 = 0;
  v31 = *v29;
  while ( v30 < v31 )
  {
    result = v30;
    if ( *(_QWORD *)&v29[4 * v30 + 4] )
    {
      v35 = *((unsigned __int16 *)v6 + 4);
      if ( (unsigned __int16)v35 < v31 )
        v8 = *(_QWORD *)&v29[4 * v35 + 4];
      result = a6[2] & v8;
      if ( result )
      {
        a6[1] &= v8;
        *a6 &= v8;
        a6[2] = result;
      }
      return result;
    }
    ++v30;
  }
  return result;
}
