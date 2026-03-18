/*
 * XREFs of ?vLoadAndConvert1ToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1401C9540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLoadAndConvert1ToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4, struct _XLATEOBJ *a5)
{
  char v6; // bp
  char v7; // bl
  unsigned __int8 *v8; // rsi
  int v9; // r8d
  unsigned __int64 v10; // rbx
  unsigned int v11; // r8d
  ULONG v12; // ecx
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rax
  ULONG v16; // ecx
  int v17; // ecx
  __int64 v18; // rax
  ULONG v19; // ecx
  int v20; // ecx
  __int64 v21; // rax
  ULONG v22; // ecx
  int v23; // ecx
  __int64 v24; // rax
  ULONG v25; // ecx
  int v26; // ecx
  __int64 v27; // rax
  ULONG v28; // ecx
  int v29; // ecx
  unsigned int v30; // eax
  ULONG v31; // ecx
  unsigned int v32; // r8d
  ULONG v33; // ecx
  int v34; // r8d
  __int64 v35; // rax
  ULONG v36; // ecx
  char v37; // di
  int v38; // ebx
  __int64 v39; // rax
  ULONG cEntries; // ecx

  if ( (a5->flXlate & 2) != 0 )
  {
    v6 = 7;
    v7 = a3 & 7;
    v8 = &a2[(__int64)a3 >> 3];
    v9 = -(a3 & 7) & 7;
    if ( a4 < v9 )
      v9 = a4;
    if ( v9 )
    {
      v37 = 7 - v7;
      v38 = *v8++;
      a4 -= v9;
      do
      {
        --v9;
        v39 = (unsigned int)((v38 & (1 << v37)) >> v37);
        cEntries = a5->cEntries;
        if ( (unsigned int)v39 > cEntries )
          v39 = (unsigned int)v39 % cEntries;
        --v37;
        *a1++ = *(&a5[3].cEntries + v39) | 0xFF000000;
      }
      while ( v9 );
    }
    if ( a4 >= 8 )
    {
      v10 = (unsigned __int64)(unsigned int)a4 >> 3;
      a4 -= 8 * ((unsigned int)a4 >> 3);
      do
      {
        v11 = *v8;
        v12 = a5->cEntries;
        v13 = v11 >> 7;
        if ( (unsigned int)v13 > v12 )
          v13 = (unsigned int)v13 % v12;
        v14 = *(&a5[3].cEntries + v13);
        v15 = (v11 >> 6) & 1;
        *a1 = v14 | 0xFF000000;
        v16 = a5->cEntries;
        if ( (unsigned int)v15 > v16 )
          v15 = (unsigned int)v15 % v16;
        v17 = *(&a5[3].cEntries + v15);
        v18 = (v11 >> 5) & 1;
        a1[1] = v17 | 0xFF000000;
        v19 = a5->cEntries;
        if ( (unsigned int)v18 > v19 )
          v18 = (unsigned int)v18 % v19;
        v20 = *(&a5[3].cEntries + v18);
        v21 = (v11 >> 4) & 1;
        a1[2] = v20 | 0xFF000000;
        v22 = a5->cEntries;
        if ( (unsigned int)v21 > v22 )
          v21 = (unsigned int)v21 % v22;
        v23 = *(&a5[3].cEntries + v21);
        v24 = (v11 >> 3) & 1;
        a1[3] = v23 | 0xFF000000;
        v25 = a5->cEntries;
        if ( (unsigned int)v24 > v25 )
          v24 = (unsigned int)v24 % v25;
        v26 = *(&a5[3].cEntries + v24);
        v27 = (v11 >> 2) & 1;
        a1[4] = v26 | 0xFF000000;
        v28 = a5->cEntries;
        if ( (unsigned int)v27 > v28 )
          v27 = (unsigned int)v27 % v28;
        v29 = *(&a5[3].cEntries + v27);
        v30 = (v11 >> 1) & 1;
        a1[5] = v29 | 0xFF000000;
        v31 = a5->cEntries;
        if ( v30 > v31 )
          v30 %= v31;
        v32 = v11 & 1;
        a1[6] = *(&a5[3].cEntries + v30) | 0xFF000000;
        v33 = a5->cEntries;
        if ( v32 > v33 )
          v32 %= v33;
        ++v8;
        a1[7] = *(&a5[3].cEntries + v32) | 0xFF000000;
        a1 += 8;
        --v10;
      }
      while ( v10 );
    }
    if ( a4 )
    {
      v34 = *v8;
      do
      {
        v35 = (unsigned int)((v34 & (1 << v6)) >> v6);
        v36 = a5->cEntries;
        if ( (unsigned int)v35 > v36 )
          v35 = (unsigned int)v35 % v36;
        --v6;
        *a1++ = *(&a5[3].cEntries + v35) | 0xFF000000;
        --a4;
      }
      while ( a4 );
    }
  }
}
