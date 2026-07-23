/*
 * XREFs of PspSubtractAccountingValues @ 0x140B66D1C
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x1409FEEF8 (PspRemoveProcessFromJobChain.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PspSubtractAccountingValues(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  bool v9; // cc
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 result; // rax

  v3 = *a2;
  v5 = a1[1];
  v6 = *a1 - v3;
  if ( v3 > *a1 )
    v6 = 0LL;
  *a1 = v6;
  v7 = a2[1];
  v8 = v5 - v7;
  v9 = v7 <= v5;
  v10 = a1[3];
  v11 = a2[3];
  if ( !v9 )
    v8 = 0LL;
  a1[1] = v8;
  v12 = v10 - v11;
  v9 = v11 <= v10;
  v13 = a1[5];
  v14 = a2[5];
  if ( !v9 )
    v12 = 0LL;
  a1[3] = v12;
  v15 = v13 - v14;
  v9 = v14 <= v13;
  v16 = a1[6];
  v17 = a2[6];
  if ( !v9 )
    v15 = 0LL;
  a1[5] = v15;
  v18 = v16 - v17;
  v9 = v17 <= v16;
  v19 = a1[7];
  v20 = a2[7];
  if ( !v9 )
    v18 = 0LL;
  a1[6] = v18;
  v21 = v19 - v20;
  v9 = v20 <= v19;
  v22 = a1[8];
  v23 = a2[8];
  if ( !v9 )
    v21 = 0LL;
  a1[7] = v21;
  v24 = v22 - v23;
  v9 = v23 <= v22;
  v25 = a1[9];
  v26 = a2[9];
  if ( !v9 )
    v24 = 0LL;
  a1[8] = v24;
  v27 = v25 - v26;
  v9 = v26 <= v25;
  v28 = a1[10];
  v29 = a2[10];
  if ( !v9 )
    v27 = 0LL;
  a1[9] = v27;
  result = v28 - v29;
  if ( v29 > v28 )
    result = 0LL;
  a1[10] = result;
  return result;
}
