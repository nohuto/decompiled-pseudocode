/*
 * XREFs of sub_140C88510 @ 0x140C88510
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalGate @ 0x1403CC9D0 (KeSignalGate.c)
 *     sub_140553DDC @ 0x140553DDC (sub_140553DDC.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

void __fastcall sub_140C88510(_DWORD *a1, __int64 a2, __int64 a3)
{
  void *v3; // rsi
  _DWORD *v4; // rbx
  __int64 v5; // rbp
  bool v6; // zf
  int v7; // ecx
  char **v8; // r14
  unsigned int v9; // esi
  __int64 v10; // rdi
  unsigned int v11; // r11d
  char **v12; // r15
  _DWORD *v13; // r12
  __int64 v14; // r14
  char *v15; // r9
  char *v16; // r10
  const char *v17; // rax
  int v18; // r13d
  __int64 i; // rbx
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  int v24; // ecx
  int v25; // eax
  unsigned __int64 j; // rax
  _DWORD *v27; // r12
  __int64 v28; // r13
  _DWORD *v29; // r9
  _QWORD *v30; // r10
  char *v31; // r11
  char *v32; // rcx
  _QWORD *v33; // rdx
  __int64 v34; // r15
  char v35; // al
  int v36; // ecx
  void *v37; // rcx
  unsigned int *v38; // rax
  int v39; // r11d
  __int64 v40; // r14
  _QWORD *v41; // rdi
  unsigned int v42; // r9d
  _QWORD *v43; // r10
  const char *v44; // rax
  unsigned __int64 v45; // rcx
  unsigned int v46; // esi
  __int64 v47; // rax
  __int64 v48; // r8
  unsigned __int64 v49; // rcx
  unsigned __int8 v50; // dl
  int v51; // edx
  unsigned int v52; // r9d
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int64 k; // rax
  void *v56; // [rsp+20h] [rbp-78h]
  __int64 v57; // [rsp+28h] [rbp-70h]
  _BYTE v58[104]; // [rsp+30h] [rbp-68h] BYREF
  int v60; // [rsp+A8h] [rbp+10h]
  __int64 v61; // [rsp+B0h] [rbp+18h]
  __int64 v62; // [rsp+B8h] [rbp+20h]

  v3 = a1;
  v4 = a1;
  v5 = **(_QWORD **)a1;
  v6 = a1 == (_DWORD *)(*(_QWORD *)a1 + 40LL);
  v7 = a1[10];
  if ( v6 )
    v3 = 0LL;
  v56 = v3;
  if ( v7 )
  {
    if ( v7 != 1 )
      goto LABEL_53;
    v8 = (char **)*((_QWORD *)v4 + 1);
    v9 = v4[8];
    v57 = (__int64)v8;
    v62 = *((_QWORD *)v4 + 3);
    v61 = *((_QWORD *)v4 + 2);
    if ( !v8 )
    {
      v8 = *(char ***)(v5 + 2768);
      v57 = (__int64)v8;
    }
    if ( v9 )
    {
      do
      {
        v10 = 8LL;
        v11 = 0;
        if ( v9 < 8 )
          v10 = v9;
        v12 = v8;
        v13 = v58;
        v14 = v61;
        do
        {
          v12[1] = (char *)4096;
          v15 = (char *)(v14 + (v11 << 12));
          *v12 = v15;
          v16 = v15;
          *(_DWORD *)(v5 + 2120) += 4096;
          v17 = v15;
          v18 = *(_DWORD *)(v5 + 2100);
          for ( i = *(_QWORD *)(v5 + 2104); v17 < v15 + 4096; v17 += 64 )
            _mm_prefetch(v17, 0);
          v20 = *(_QWORD *)(v5 + 2104);
          v60 = 32;
          do
          {
            v21 = 8LL;
            do
            {
              v22 = *((_QWORD *)v16 + 1) ^ __ROL8__(*(_QWORD *)v16 ^ v20, v18);
              v16 += 16;
              v20 = __ROL8__(v22, v18);
              --v21;
            }
            while ( v21 );
            v23 = __ROL8__(i ^ (v16 - v15), 17);
            v24 = --v60;
            v25 = ((unsigned __int8)v18 ^ (unsigned __int8)((((v23 ^ i ^ (unsigned __int64)&v16[-v14 + -4096 * v11])
                                                            * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v23 ^ i ^ ((_BYTE)v16 - v14))) & 0x3F;
            LOBYTE(v18) = 1;
            if ( v25 )
              LOBYTE(v18) = v25;
          }
          while ( v24 );
          v14 = v61;
          for ( j = v20 >> 31; j; j >>= 31 )
            LODWORD(v20) = j ^ v20;
          ++v11;
          *v13 = v20 & 0x7FFFFFFF;
          v12 += 6;
          ++v13;
        }
        while ( v11 < (unsigned int)v10 );
        v8 = (char **)v57;
        sub_140553DDC(v5, v57, v10);
        v27 = v58;
        v28 = (unsigned int)v10;
        v29 = (_DWORD *)(v62 + 16);
        v30 = (_QWORD *)v62;
        v31 = (char *)(v57 + 16);
        do
        {
          LODWORD(a3) = 16;
          v32 = v31;
          v33 = v30;
          v34 = 2LL;
          do
          {
            a3 = (unsigned int)(a3 - 8);
            *v33 = *(_QWORD *)v32;
            v32 += 8;
            ++v33;
            --v34;
          }
          while ( v34 );
          if ( (_DWORD)a3 )
          {
            do
            {
              v35 = *v32++;
              *(_BYTE *)v33 = v35;
              v33 = (_QWORD *)((char *)v33 + 1);
              v6 = (_DWORD)a3 == 1;
              a3 = (unsigned int)(a3 - 1);
            }
            while ( !v6 );
          }
          v31 += 48;
          v30 = (_QWORD *)((char *)v30 + 20);
          v36 = *v27++ ^ *v29;
          *v29 ^= v36 & 0x7FFFFFFF;
          v29 += 5;
          --v28;
        }
        while ( v28 );
        v9 -= v10;
        v61 += (unsigned int)((_DWORD)v10 << 12);
        *(_DWORD *)(v5 + 2120) += (_DWORD)v10 << 15;
        v62 += 20 * v10;
      }
      while ( v9 );
      v4 = a1;
    }
    v37 = (void *)*((_QWORD *)v4 + 1);
    if ( v37 )
    {
      ExFreePool(v37);
      *((_QWORD *)v4 + 1) = 0LL;
    }
  }
  else
  {
    if ( !v4[8] )
      goto LABEL_53;
    do
    {
      v38 = (unsigned int *)*((_QWORD *)v4 + 2);
      v39 = *(_DWORD *)(v5 + 2100);
      v40 = *(_QWORD *)(v5 + 2104);
      v41 = (_QWORD *)(*((_QWORD *)v4 + 1) + *v38);
      v42 = v38[1] - *v38;
      *(_DWORD *)(v5 + 2120) += v42;
      v43 = v41;
      v44 = (const char *)v41;
      v45 = (unsigned __int64)v41 + v42;
      if ( (unsigned __int64)v41 < v45 )
      {
        do
        {
          _mm_prefetch(v44, 0);
          v44 += 64;
        }
        while ( (unsigned __int64)v44 < v45 );
      }
      a3 = v40;
      v46 = v42 >> 7;
      if ( v42 >> 7 )
      {
        do
        {
          v47 = 8LL;
          do
          {
            v48 = v43[1] ^ __ROL8__(*v43 ^ a3, v39);
            v43 += 2;
            a3 = __ROL8__(v48, v39);
            --v47;
          }
          while ( v47 );
          v49 = __ROL8__(v40 ^ ((char *)v43 - (char *)v41), 17) ^ v40 ^ ((char *)v43 - (char *)v41);
          v50 = v39 ^ ((v49 * (unsigned __int128)0x7010008004002001uLL) >> 64);
          LOBYTE(v39) = 1;
          v51 = ((unsigned __int8)v49 ^ v50) & 0x3F;
          if ( v51 )
            LOBYTE(v39) = v51;
          --v46;
        }
        while ( v46 );
        v4 = a1;
      }
      v52 = v42 & 0x7F;
      if ( v52 >= 8 )
      {
        v53 = (unsigned __int64)v52 >> 3;
        do
        {
          a3 = __ROL8__(*v43++ ^ a3, v39);
          v52 -= 8;
          --v53;
        }
        while ( v53 );
      }
      for ( ; v52; --v52 )
      {
        v54 = *(unsigned __int8 *)v43;
        v43 = (_QWORD *)((char *)v43 + 1);
        a3 = __ROL8__(v54 ^ a3, v39);
      }
      for ( k = a3; ; a3 = (unsigned int)k ^ (unsigned int)a3 )
      {
        k >>= 31;
        if ( !k )
          break;
      }
      **((_DWORD **)v4 + 3) ^= (a3 ^ **((_DWORD **)v4 + 3)) & 0x7FFFFFFF;
      **((_DWORD **)v4 + 3) &= ~0x80000000;
      *((_QWORD *)v4 + 3) += 4LL;
      *((_QWORD *)v4 + 2) += 12LL;
      v6 = v4[8]-- == 1;
    }
    while ( !v6 );
  }
  v3 = v56;
LABEL_53:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)v4 + 32LL), 0xFFFFFFFF) == 1 )
    KeSignalGate(*(_QWORD *)v4 + 8LL, 1LL, a3);
  if ( v3 )
    ExFreePool(v3);
}
