/*
 * XREFs of ShrinkDIB_CX @ 0x14016B8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ShrinkDIB_CX(__int64 a1, unsigned __int8 *a2, _BYTE *a3, __int64 a4, int a5)
{
  int v8; // eax
  int v9; // edi
  int v10; // r15d
  int v11; // esi
  unsigned __int16 v12; // ax
  __int64 v13; // r10
  int v14; // ecx
  _WORD *v15; // r13
  unsigned int v16; // eax
  __int64 v17; // r14
  int v18; // eax
  int v19; // r9d
  int v20; // edx
  int v21; // r11d
  __int128 v22; // xmm0
  int v23; // ecx
  int v24; // r8d
  unsigned int i; // eax
  __int64 v26; // rdx
  __int64 v27; // r10
  int v28; // eax
  int v29; // r14d
  int v30; // eax
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  int v35; // ecx
  int v36; // [rsp+0h] [rbp-40h]
  unsigned __int16 v37; // [rsp+4h] [rbp-3Ch]
  int v38; // [rsp+4h] [rbp-3Ch]
  __int64 v39; // [rsp+8h] [rbp-38h]
  _BYTE v40[28]; // [rsp+10h] [rbp-30h]
  __int64 v41; // [rsp+2Ch] [rbp-14h]
  __int64 v42; // [rsp+2Ch] [rbp-14h]
  int v43; // [rsp+88h] [rbp+48h]
  __int64 v44; // [rsp+98h] [rbp+58h]

  v44 = a4;
  if ( a2 )
  {
    v8 = *(unsigned __int16 *)(a1 + 14);
    if ( *(_WORD *)(a1 + 14) )
    {
      v10 = v8 * a2[2];
      v11 = v8 * a2[1];
      v9 = v8 * *a2;
      a2 += 2 * *(unsigned __int16 *)(a1 + 10) + *(unsigned __int16 *)(a1 + 10);
    }
    else
    {
      v9 = 0;
      v10 = 0;
      v11 = 0;
    }
    v12 = *(_WORD *)(a1 + 12);
    v13 = *(_QWORD *)(a1 + 24);
    v14 = v12;
    v15 = *(_WORD **)(a1 + 40);
    v39 = *(_QWORD *)(a1 + 24);
    v37 = *(_WORD *)(a1 + 12);
    v36 = v37;
    if ( v37 )
    {
      do
      {
        v16 = (unsigned __int16)*v15++;
        v17 = v13 + ((v16 >> 5) & 0x400);
        if ( (v16 & 0x4000) != 0 )
        {
          v18 = v16 & 0x3FFF;
          v19 = v18 * a2[1];
          v20 = v18 * *a2;
          v21 = v18 * a2[2];
          LODWORD(v41) = v19 + v11;
          v13 = v39;
          v11 = *(_DWORD *)(v17 + 4LL * a2[1]) - v19;
          HIDWORD(v41) = v20 + v9;
          v9 = *(_DWORD *)(v17 + 4LL * *a2) - v20;
          *(_DWORD *)&v40[24] = v21 + v10;
          v22 = *(_OWORD *)&v40[12];
          v10 = *(_DWORD *)(v17 + 4LL * a2[2]) - v21;
          *(_QWORD *)&v40[16] = v41;
          v14 = --v36;
          *(_OWORD *)v40 = v22;
        }
        else
        {
          v10 += *(_DWORD *)(v17 + 4LL * a2[2]);
          v11 += *(_DWORD *)(v17 + 4LL * a2[1]);
          v9 += *(_DWORD *)(v17 + 4LL * *a2);
        }
        a2 += 3;
      }
      while ( v14 );
      a4 = v44;
      v12 = v37;
    }
    v23 = *(_DWORD *)&v40[20];
    if ( v12 == 1 )
    {
      v24 = *(_DWORD *)&v40[20];
      *(_QWORD *)v40 = *(_QWORD *)&v40[12];
    }
    else
    {
      v24 = *(_DWORD *)&v40[8];
    }
    for ( i = (unsigned __int16)*v15; *v15; v13 = v39 )
    {
      ++v15;
      v26 = v13 + ((i >> 5) & 0x400);
      v27 = a2[2];
      if ( (i & 0x4000) != 0 )
      {
        v28 = i & 0x3FFF;
        v29 = v28 * v27;
        v43 = v28 * a2[1];
        v38 = v28 * *a2;
        v30 = (6 * v23 - v24 - (v38 + v9)) >> 15;
        if ( (v30 & 0xFF00) != 0 )
          LOBYTE(v30) = ~HIBYTE(v30);
        *a3 = v30;
        v31 = (6 * *(_DWORD *)&v40[16] - *(_DWORD *)&v40[4] - (v11 + v43)) >> 15;
        if ( (v31 & 0xFF00) != 0 )
          LOBYTE(v31) = ~HIBYTE(v31);
        a3[1] = v31;
        v32 = (6 * *(_DWORD *)&v40[12] - *(_DWORD *)v40 - (v29 + v10)) >> 15;
        if ( (v32 & 0xFF00) != 0 )
          LOBYTE(v32) = ~HIBYTE(v32);
        a3[2] = v32;
        a3 += a5;
        *(_DWORD *)&v40[24] = v29 + v10;
        *(_OWORD *)v40 = *(_OWORD *)&v40[12];
        v10 = *(_DWORD *)(v26 + 4LL * a2[2]) - v29;
        HIDWORD(v42) = v38 + v9;
        LODWORD(v42) = v11 + v43;
        *(_QWORD *)&v40[16] = v42;
        v23 = v38 + v9;
        v24 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v40, 8));
        v11 = *(_DWORD *)(v26 + 4LL * a2[1]) - v43;
        v9 = *(_DWORD *)(v26 + 4LL * *a2) - v38;
      }
      else
      {
        v10 += *(_DWORD *)(v26 + 4 * v27);
        v11 += *(_DWORD *)(v26 + 4LL * a2[1]);
        v9 += *(_DWORD *)(v26 + 4LL * *a2);
      }
      i = (unsigned __int16)*v15;
      a2 += 3;
    }
    if ( a3 == (_BYTE *)(a4 - a5) )
    {
      v33 = (5 * v23 - v24) >> 15;
      if ( (v33 & 0xFF00) != 0 )
        LOBYTE(v33) = ~HIBYTE(v33);
      *a3 = v33;
      v34 = (5 * *(_DWORD *)&v40[16] - *(_DWORD *)&v40[4]) >> 15;
      if ( (v34 & 0xFF00) != 0 )
        LOBYTE(v34) = ~HIBYTE(v34);
      a3[1] = v34;
      v35 = (5 * *(_DWORD *)&v40[12] - *(_DWORD *)v40) >> 15;
      if ( (v35 & 0xFF00) != 0 )
        LOBYTE(v35) = ~HIBYTE(v35);
      a3[2] = v35;
    }
  }
}
