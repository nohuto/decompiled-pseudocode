/*
 * XREFs of RtlpHpPgContextFree @ 0x1801015B4
 * Callers:
 *     RtlpHpSegFreeInternal @ 0x180005E18 (RtlpHpSegFreeInternal.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x18005BB90 (RtlCaptureStackBackTrace.c)
 *     RtlpHpEnvProtectVA @ 0x180101AC8 (RtlpHpEnvProtectVA.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpPgContextFree(unsigned __int64 a1, PVOID *a2, __int64 a3, PVOID *a4)
{
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  PVOID *v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r9
  __int64 v14; // rax
  int v15; // ecx
  unsigned __int8 v16; // r10
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // r14
  __int64 v19; // r15
  unsigned __int64 v20; // r8
  unsigned int i; // eax
  unsigned __int64 v22; // r8
  unsigned int j; // edx
  char *v24; // r9
  unsigned int k; // eax
  int v26; // r8d
  __int64 v27; // rdx
  unsigned __int8 v29; // r10
  unsigned __int64 v30; // r11
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rbp
  unsigned int m; // eax
  unsigned __int64 v36; // r8
  unsigned int n; // edx
  unsigned int ii; // eax
  unsigned int v39; // ebp
  PVOID *v40; // rsi
  unsigned __int8 v41; // r13
  char *v42; // r11
  char *v43; // r15
  unsigned __int64 v44; // r14
  unsigned int jj; // eax
  unsigned int kk; // edx
  unsigned int mm; // eax
  __int64 v48; // rdx
  unsigned int v49; // eax
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // r10
  unsigned int nn; // ecx
  unsigned int i1; // eax
  unsigned __int64 v54; // [rsp+30h] [rbp-68h]
  char *v55; // [rsp+38h] [rbp-60h]
  unsigned __int64 v56; // [rsp+40h] [rbp-58h]
  __int64 v58; // [rsp+A0h] [rbp+8h]
  unsigned int v60; // [rsp+B0h] [rbp+18h]
  __int16 v61; // [rsp+B8h] [rbp+20h] BYREF
  unsigned __int8 v62; // [rsp+BAh] [rbp+22h]

  v60 = a3;
  v61 = 0;
  v62 = 0;
  v7 = a1;
  ((void (__fastcall *)(_QWORD, PVOID *, __int16 *, __int64, int))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 56)))(
    *(_QWORD *)a1,
    a4,
    &v61,
    3LL,
    1);
  if ( (v61 & 0x100) != 0 )
    v8 = 512LL;
  else
    v8 = 2 * ((unsigned int)v62 + 256);
  v9 = &a2[v8];
  if ( a4 == v9 )
  {
    if ( (v61 & 0x100) != 0 )
    {
      v10 = 0LL;
      v11 = (HIBYTE(v61) >> 4) + 16 * (unsigned int)v62;
    }
    else
    {
      v10 = 16 * (unsigned int)v62;
      v11 = (unsigned __int64)HIBYTE(v61) >> 4;
    }
    v12 = (unsigned __int64)a4 >> 12;
    v13 = (unsigned __int64)a4 + a3 - 16 * (unsigned int)v62 - ((unsigned __int64)HIBYTE(v61) >> 4) - 0x2000;
    v56 = a3 - 16 * (unsigned int)v62 - ((unsigned __int64)HIBYTE(v61) >> 4);
    v54 = v13;
    v14 = (__int64)a4 - v10;
    v15 = 7;
    v55 = (char *)a4 - v10;
    if ( v10 )
    {
      v16 = *(_BYTE *)(v7 + 84) ^ v12;
      if ( v10 < 8 )
      {
        v17 = 0LL;
        v20 = 0LL;
        v19 = 0LL;
        v18 = 0LL;
      }
      else
      {
        v17 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        v18 = (unsigned __int8)a4 & 7;
        v19 = (__int64)a4 - v18;
        v20 = v19 - v17;
        v10 = v17 - v14;
      }
      for ( i = 0; i < v10; ++i )
      {
        v24 = &v55[i];
        v7 = a1;
        if ( *v24 != v16 )
        {
LABEL_18:
          v26 = (int)a4;
          v27 = *(_QWORD *)(v7 + 64);
          goto LABEL_19;
        }
      }
      v22 = v20 >> 3;
      for ( j = 0; j < (unsigned int)v22; ++j )
      {
        v24 = (char *)(v17 + 8LL * j);
        if ( *(_QWORD *)v24 != 0x101010101010101LL * v16 )
          goto LABEL_18;
      }
      for ( k = 0; k < v18; ++k )
      {
        LODWORD(v24) = k + v19;
        if ( *(_BYTE *)(k + v19) != v16 )
          goto LABEL_18;
      }
      v13 = (unsigned __int64)a4 + a3 - 16 * (unsigned int)v62 - ((unsigned __int64)HIBYTE(v61) >> 4) - 0x2000;
    }
    if ( v11 )
    {
      v29 = *(_BYTE *)(v7 + 84) ^ v12;
      if ( v11 < 8 )
      {
        v30 = 0LL;
        v32 = 0LL;
        v33 = v11;
        v31 = 0LL;
        v34 = 0LL;
      }
      else
      {
        v30 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        v31 = (v11 + v13) & 0xFFFFFFFFFFFFFFF8uLL;
        v32 = v31 - v30;
        v33 = v30 - v13;
        v34 = v11 + v13 - v31;
      }
      for ( m = 0; m < v33; ++m )
      {
        v24 = (char *)(v54 + m);
        v7 = a1;
        if ( *v24 != v29 )
        {
LABEL_38:
          v15 = 6;
          goto LABEL_18;
        }
      }
      v36 = v32 >> 3;
      for ( n = 0; n < (unsigned int)v36; ++n )
      {
        v24 = (char *)(v30 + 8LL * n);
        if ( *(_QWORD *)v24 != 0x101010101010101LL * v29 )
          goto LABEL_38;
      }
      for ( ii = 0; ii < v34; ++ii )
      {
        LODWORD(v24) = v31 + ii;
        if ( *(_BYTE *)(v31 + ii) != v29 )
          goto LABEL_38;
      }
    }
    if ( (v61 & 0x200) != 0 )
    {
      v41 = *(_BYTE *)(v7 + 84) ^ v12;
      v42 = v55 - 4096;
      v43 = &v55[-((unsigned __int8)v55 & 7)];
      v58 = 0x101010101010101LL * v41;
      v44 = (unsigned __int64)(v55 - 4089) & 0xFFFFFFFFFFFFFFF8uLL;
      for ( jj = 0; jj < ((unsigned __int64)(v55 - 4089) & 0xFFFFFFFFFFFFFFF8uLL) - (unsigned __int64)(v55 - 4096); ++jj )
      {
        LODWORD(v24) = jj + (_DWORD)v42;
        if ( v42[jj] != v41 )
        {
LABEL_54:
          v26 = (int)a4;
          v27 = *(_QWORD *)(v7 + 64);
          goto LABEL_19;
        }
      }
      for ( kk = 0; kk < (unsigned int)((unsigned __int64)&v55[-((unsigned __int8)v55 & 7) - v44] >> 3); ++kk )
      {
        v24 = (char *)(v44 + 8LL * kk);
        if ( *(_QWORD *)v24 != v58 )
          goto LABEL_54;
      }
      for ( mm = 0; mm < (unsigned __int64)((unsigned __int8)v55 & 7); ++mm )
      {
        LODWORD(v24) = (_DWORD)v43 + mm;
        if ( v43[mm] != v41 )
          goto LABEL_54;
      }
      v49 = 0;
      v50 = (v11 + v54 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v51 = (v11 + v54 + 4096) & 0xFFFFFFFFFFFFFFF8uLL;
      while ( v49 < v50 - (v11 + v54) )
      {
        v24 = (char *)(v11 + v54 + v49);
        if ( *v24 != v41 )
        {
LABEL_67:
          v15 = 6;
          goto LABEL_54;
        }
        ++v49;
      }
      for ( nn = 0; nn < (unsigned int)((((v11 + v54 + 4096) & 0xFFFFFFFFFFFFFFF8uLL) - v50) >> 3); ++nn )
      {
        v24 = (char *)(v50 + 8LL * nn);
        if ( *(_QWORD *)v24 != v58 )
          goto LABEL_67;
      }
      for ( i1 = 0; i1 < v11 + v54 + 4096 - v51; ++i1 )
      {
        LODWORD(v24) = v51 + i1;
        if ( *(_BYTE *)(v51 + i1) != v41 )
          goto LABEL_67;
      }
      memset_thunk_772440563353939046(v55, v41, (v56 - 4097) & 0xFFFFFFFFFFFFF000uLL);
      v40 = a2;
      v39 = v60;
    }
    else
    {
      v39 = v60;
      v40 = a2;
      ((void (__fastcall *)(_QWORD, PVOID *, _QWORD))(v7 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v7 + 32)))(
        *(_QWORD *)v7,
        a2,
        v60);
    }
    if ( ((int (__fastcall *)(_QWORD, PVOID *, __int64, _QWORD))(v7 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v7 + 24)))(
           *(_QWORD *)v7,
           v40,
           4096LL,
           0LL) >= 0 )
    {
      RtlCaptureStackBackTrace(0, 0x200u, v40, 0LL);
      if ( (v61 & 0x200) == 0 )
        RtlpHpEnvProtectVA(v40, v48, 2LL);
    }
    ((void (__fastcall *)(_QWORD, PVOID *, _QWORD, __int64))(v7 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v7 + 16)))(
      *(_QWORD *)v7,
      v40,
      v39,
      1LL);
    return 1LL;
  }
  else
  {
    v27 = *(_QWORD *)(v7 + 64);
    LODWORD(v24) = (_DWORD)a4;
    v26 = (int)v9;
    v15 = 9;
LABEL_19:
    RtlpLogHeapFailure(v15, v27, v26, (_DWORD)v24, 0LL, 0LL);
    return 0LL;
  }
}
