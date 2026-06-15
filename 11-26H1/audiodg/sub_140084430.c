/*
 * XREFs of sub_140084430 @ 0x140084430
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000F65C @ 0x14000F65C (sub_14000F65C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_140084430(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v5; // r9d
  unsigned int *v6; // rsi
  __int64 v7; // rcx
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rdx
  float *v11; // rbp
  __int64 v12; // r14
  int v13; // ebx
  __int64 v14; // rdi
  int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rbp
  __int64 v19; // r14
  int v20; // r15d
  unsigned int j; // edx
  _QWORD *v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rcx
  float *v25; // rdi
  __int64 v26; // rbp
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // rdi
  int v31; // eax
  unsigned int i; // r8d
  __int64 v33; // rdi
  __int64 v34; // rbp
  _QWORD *v35; // rbx
  unsigned int v36; // r15d
  __int64 v37; // rbp
  unsigned int v38; // edi
  unsigned int *v39; // rbx
  unsigned int v40; // r8d
  unsigned int k; // edx
  unsigned int m; // edx
  __int64 v43; // r14
  unsigned int v44; // eax
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rbx
  __int64 v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // rdi

  v5 = *(_DWORD *)(a1 + 80);
  v6 = *(unsigned int **)(a1 + 1056);
  if ( v6[12] || v6[8] )
  {
    v7 = v6[4];
    v8 = 0;
    if ( v6[8] )
    {
      if ( (_DWORD)v7 )
      {
        do
        {
          v7 = v8;
          v9 = *(_QWORD *)(*((_QWORD *)v6 + 3) + 8LL * v8);
          *(_DWORD *)(v9 + 12) = 0;
          *(_DWORD *)(v9 + 32) = 0;
          ++v8;
        }
        while ( v8 < v6[4] );
      }
    }
    else if ( (_DWORD)v7 )
    {
      do
      {
        v7 = v8;
        v10 = *(_QWORD *)(*((_QWORD *)v6 + 3) + 8LL * v8);
        *(_DWORD *)(v10 + 12) = 2;
        *(_DWORD *)(v10 + 32) = 0;
        ++v8;
      }
      while ( v8 < v6[4] );
    }
    if ( v5 )
    {
      if ( v6[8] )
      {
        v25 = (float *)(*((_QWORD *)v6 + 5) + 16LL);
        v26 = v6[8];
        do
        {
          v27 = *((_QWORD *)v25 - 1);
          v28 = *((_QWORD *)v25 - 2);
          *(_DWORD *)(v28 + 8) = (int)((double)(int)*a2 * *v25 / 10000000.0 + 0.5);
          sub_1400B6010(v27);
          *(_QWORD *)(v28 + 24) = *(_QWORD *)(a3 + 24);
          v25 += 6;
          --v26;
        }
        while ( v26 );
      }
      if ( *v6 )
      {
        v29 = *((_QWORD *)v6 + 1) + 16LL;
        v30 = *v6;
        do
        {
          if ( *(_DWORD *)(v29 - 16) )
          {
            if ( *(_DWORD *)v29 )
            {
              v31 = sub_1400B6010(*(_QWORD *)(v29 + 16));
              for ( i = 0; i < *(_DWORD *)v29; ++i )
              {
                v7 = *(_QWORD *)(v29 + 8);
                *(_DWORD *)(*(_QWORD *)(v7 + 8LL * i) + 8LL) = v31;
              }
            }
          }
          v29 += 64LL;
          --v30;
        }
        while ( v30 );
      }
      v33 = *((_QWORD *)v6 + 7);
      if ( v6[12] )
      {
        v34 = v6[12];
        do
        {
          v35 = *(_QWORD **)v33;
          *v35 = sub_1400B6010(*(_QWORD *)(v33 + 8));
          v33 += 24LL;
          --v34;
        }
        while ( v34 );
      }
    }
    else
    {
      if ( v6[12] )
      {
        v11 = (float *)(*((_QWORD *)v6 + 7) + 16LL);
        v12 = v6[12];
        do
        {
          v13 = (int)(*v11 * (double)(int)*a2 / 10000000.0 + 0.5);
          v14 = *((_QWORD *)v11 - 2);
          *(_QWORD *)v14 = sub_1400B6010(*((_QWORD *)v11 - 1));
          *(_DWORD *)(v14 + 8) = v13;
          *(_QWORD *)(v14 + 24) = *(_QWORD *)(a3 + 24);
          v11 += 6;
          --v12;
        }
        while ( v12 );
      }
      v7 = *((_QWORD *)v6 + 1);
      v15 = *v6 - 1;
      if ( v15 >= 0 )
      {
        v16 = (__int64)v15 << 6;
        v17 = v16 + v7 + 24;
        v18 = v16 + v7 + 44;
        do
        {
          if ( *(_DWORD *)(v17 - 24) && *(_DWORD *)(v17 - 8) )
          {
            v19 = *(_QWORD *)(v17 + 8);
            if ( (byte_1400E8401 & 4) != 0 )
              sub_14000F65C(v7, (__int64)&unk_1400C53C0, *(_QWORD *)(v17 + 8), v18);
            v20 = sub_1400B6010(v19);
            if ( (byte_1400E8401 & 4) != 0 )
              sub_14000F65C(v7, (__int64)&unk_1400C53D0, v19, v18);
            for ( j = 0; j < *(_DWORD *)(v17 - 24); ++j )
            {
              v7 = *(_QWORD *)(*(_QWORD *)(v17 - 16) + 8LL * j);
              *(_DWORD *)(v7 + 8) = v20;
            }
          }
          v18 -= 64LL;
          v17 -= 64LL;
          --v15;
        }
        while ( v15 >= 0 );
      }
      v22 = (_QWORD *)*((_QWORD *)v6 + 5);
      if ( v6[8] )
      {
        v23 = v6[8];
        do
        {
          v24 = v22[1];
          *(_DWORD *)(*v22 + 16LL) = 1094930515;
          sub_1400B6010(v24);
          v22 += 3;
          --v23;
        }
        while ( v23 );
      }
    }
    v36 = *v6;
    v37 = *((_QWORD *)v6 + 1);
    v38 = 0;
    if ( *v6 )
    {
      v39 = (unsigned int *)(v37 + 16);
      do
      {
        v40 = v39[6];
        for ( k = 0; k < *(v39 - 4); ++k )
        {
          v7 = *(_QWORD *)(*((_QWORD *)v39 - 1) + 8LL * k);
          *(_DWORD *)(v7 + 16) = v40;
        }
        for ( m = 0; m < *v39; ++m )
        {
          v7 = *(_QWORD *)(*((_QWORD *)v39 + 1) + 8LL * m);
          *(_DWORD *)(v7 + 16) = v40;
        }
        v43 = *((_QWORD *)v39 + 2);
        if ( (byte_1400E8401 & 4) != 0 )
          sub_14000F65C(v7, (__int64)&unk_1400C53B0, *((_QWORD *)v39 + 2), v37 + ((unsigned __int64)v38 << 6) + 44);
        sub_1400B6010(v43);
        v44 = *v39;
        if ( *v39 >= *(v39 - 4) )
          v44 = *(v39 - 4);
        if ( v44 )
        {
          v7 = 0LL;
          v45 = v44;
          do
          {
            v46 = *(_QWORD *)(v7 + *((_QWORD *)v39 + 1));
            v47 = *(_QWORD *)(v7 + *((_QWORD *)v39 - 1));
            *(_QWORD *)(v46 + 24) = *(_QWORD *)(v47 + 24);
            if ( !*(_DWORD *)(v46 + 32) )
              *(_DWORD *)(v46 + 32) = *(_DWORD *)(v47 + 32);
            v7 += 8LL;
            --v45;
          }
          while ( v45 );
        }
        if ( (byte_1400E8401 & 4) != 0 )
          sub_14000F65C(v7, (__int64)&unk_1400C53A0, v43, v37 + ((unsigned __int64)v38 << 6) + 44);
        ++v38;
        v39 += 16;
      }
      while ( v38 < v36 );
    }
    v48 = *((_QWORD *)v6 + 7);
    if ( v6[12] )
    {
      v49 = v6[12];
      do
      {
        sub_1400B6010(*(_QWORD *)(v48 + 8));
        v48 += 24LL;
        --v49;
      }
      while ( v49 );
    }
    v50 = *((_QWORD *)v6 + 5);
    if ( v6[8] )
    {
      v51 = v6[8];
      do
      {
        sub_1400B6010(*(_QWORD *)(v50 + 8));
        v50 += 24LL;
        --v51;
      }
      while ( v51 );
    }
  }
}
