/*
 * XREFs of sub_1400B19A0 @ 0x1400B19A0
 * Callers:
 *     sub_140115650 @ 0x140115650 (sub_140115650.c)
 * Callees:
 *     sub_1400AAB7C @ 0x1400AAB7C (sub_1400AAB7C.c)
 */

int __fastcall sub_1400B19A0(__int64 a1, int *a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned int v5; // r12d
  unsigned int v6; // edi
  __int64 v7; // r15
  unsigned __int64 v10; // rbx
  int v11; // eax
  int v12; // ebp
  signed __int64 UnbiasedInterruptTime; // rax
  __int64 v14; // r13
  const char *v15; // rbp
  int v16; // esi
  char v17; // r14
  __int64 v18; // r15
  int v19; // r14d
  int v20; // r9d
  _QWORD *v21; // rcx
  int v22; // r11d
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // esi
  __int64 v26; // rax
  _QWORD *v27; // rcx
  unsigned int v28; // eax
  signed __int64 *v29; // r8
  _QWORD *v30; // rcx
  unsigned int v31; // ebp
  int v32; // edx
  __int64 *v33; // rax
  signed __int64 *v34; // rcx
  __m128i *v35; // rdx
  __int64 v36; // rdx
  int v38; // [rsp+B0h] [rbp-68h]
  int v39; // [rsp+B4h] [rbp-64h]
  int v40; // [rsp+B8h] [rbp-60h]
  __int64 v41; // [rsp+C0h] [rbp-58h]
  unsigned int v42; // [rsp+120h] [rbp+8h]
  unsigned int v45; // [rsp+138h] [rbp+20h]

  v5 = 0;
  v6 = (unsigned __int8)*a2;
  v7 = a3;
  v42 = 0;
  LOBYTE(v41) = 0;
  v10 = 0LL;
  if ( v6 <= 0x19 && (v11 = 33554742, _bittest(&v11, v6)) )
  {
    if ( v6 == 2 || (v38 = 1, v12 = 1, v6 == 5) )
    {
      v40 = 1;
      v12 = 1;
      v38 = 1;
      goto LABEL_8;
    }
  }
  else
  {
    v12 = 0;
    v38 = 0;
  }
  v40 = 0;
LABEL_8:
  if ( v6 != 9 || (v39 = 1, (a2[11] & 4) == 0) )
    v39 = 0;
  v45 = a4 >> 31;
  if ( v12 )
  {
    v41 = *((_QWORD *)a2 + 5);
    v42 = *(_DWORD *)(a3 + 64) * (unsigned __int16)a2[12];
  }
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  if ( UnbiasedInterruptTime > *(_QWORD *)(a1 + 64) )
    v10 = UnbiasedInterruptTime - *(_QWORD *)(a1 + 64);
  if ( v10 >= qword_140168428 )
  {
    UnbiasedInterruptTime = *(_QWORD *)(v7 + 608);
    if ( _InterlockedIncrement((volatile signed __int32 *)UnbiasedInterruptTime) <= 128 && (byte_1401694FA & 0x40) != 0 )
    {
      v14 = *(_QWORD *)(v7 + 16);
      v15 = (const char *)&dword_140149108;
      v16 = *a2;
      v17 = 20;
      if ( (*(_BYTE *)(v14 + 136) & 2) == 0 )
        v17 = 17;
      if ( *(_QWORD *)(v14 + 752) )
        v15 = *(const char **)(v14 + 752);
      v18 = *(_QWORD *)(v14 + 128);
      LODWORD(UnbiasedInterruptTime) = sub_1400AAB7C(
                                         (unsigned int)(qword_140168428 / 0x2710uLL),
                                         v18 + 1032,
                                         a3 + 160,
                                         *(_DWORD *)(v18 + 56),
                                         v18 + 1032,
                                         *(const wchar_t **)(v18 + 1016),
                                         *(const char **)(v14 + 792),
                                         *(_WORD *)(v14 + 4),
                                         *(_DWORD *)(a3 + 56),
                                         *(_BYTE *)(v14 + 744),
                                         v15,
                                         (const char *)(v14 + 800),
                                         (const char *)(v14 + 841),
                                         a3 + 160,
                                         v17,
                                         qword_140168428 / 0x2710uLL,
                                         (char)v10 / 16,
                                         v16,
                                         BYTE1(v16) & 3,
                                         *((_WORD *)a2 + 1),
                                         v42,
                                         v41);
      v12 = v38;
      v7 = a3;
    }
  }
  if ( v12 )
  {
    v19 = v40;
    v20 = 13;
    v21 = *(&xmmword_1401690E8 + 1);
    v22 = v40 ^ 1;
    v23 = 0;
    while ( (signed __int64)v10 > *v21 )
    {
      ++v23;
      ++v21;
      if ( v23 >= 0xD )
        goto LABEL_29;
    }
    v20 = v23;
LABEL_29:
    v24 = (unsigned int)dword_14016910C;
    v25 = v39;
    v26 = v22 + v20 * (unsigned int)(unsigned __int16)qword_1401690E0;
  }
  else
  {
    v25 = v39;
    if ( !v39 && v6 )
      return UnbiasedInterruptTime;
    v27 = xmmword_140169120;
    v20 = 4;
    v28 = 0;
    while ( (signed __int64)v10 > *v27 )
    {
      ++v28;
      ++v27;
      if ( v28 >= 4 )
        goto LABEL_37;
    }
    v20 = v28;
LABEL_37:
    v22 = v39;
    v24 = *((unsigned int *)&xmmword_140169130 + 3);
    v19 = v40;
    v26 = v39 + v20 * (unsigned int)(unsigned __int16)xmmword_140169110;
  }
  v29 = (signed __int64 *)(v7 + 608);
  v30 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 608) + 8LL) + (unsigned int)(dword_140169178 * a5) + 24 * (v26 + v24));
  if ( (_BYTE)v45 )
    ++v30[1];
  else
    ++*v30;
  v30[2] += v10;
  LODWORD(UnbiasedInterruptTime) = *(_DWORD *)(v7 + 112);
  if ( (UnbiasedInterruptTime & 0x100) == 0 )
    goto LABEL_50;
  if ( !v12 )
    goto LABEL_58;
  if ( (_BYTE)v45 )
  {
LABEL_50:
    v34 = (signed __int64 *)(v7 + 608);
    if ( !v12 )
      goto LABEL_58;
    v31 = v42;
  }
  else
  {
    v31 = v42;
    v32 = 8;
    v33 = (__int64 *)xmmword_140169150;
    while ( v42 > *v33 )
    {
      ++v5;
      ++v33;
      if ( v5 >= 8 )
        goto LABEL_49;
    }
    v32 = v5;
LABEL_49:
    v34 = (signed __int64 *)(v7 + 608);
    v35 = (__m128i *)(*(_QWORD *)(*(_QWORD *)(v7 + 608) + 16LL)
                    + (unsigned int)(dword_14016917C * a5)
                    + 16
                    * (*((unsigned int *)&xmmword_140169160 + 3)
                     + (unsigned __int64)(v22
                                        + (unsigned __int16)xmmword_140169140
                                        * (v20 * (unsigned int)WORD1(xmmword_140169140) + v32))));
    *v35 = _mm_add_epi64(_mm_unpacklo_epi64((__m128i)1uLL, (__m128i)v10), _mm_loadu_si128(v35));
  }
  UnbiasedInterruptTime = *v34;
  v29 = v34;
  v36 = *(_QWORD *)(*v34 + 48);
  if ( v36 )
  {
    UnbiasedInterruptTime = v36 + (unsigned int)(dword_140169190 * a5);
    if ( *(_QWORD *)UnbiasedInterruptTime < v10 )
      *(_QWORD *)UnbiasedInterruptTime = v10;
    if ( v19 )
      *(_QWORD *)(UnbiasedInterruptTime + 8) += v31;
    else
      *(_QWORD *)(UnbiasedInterruptTime + 16) += v31;
    return UnbiasedInterruptTime;
  }
LABEL_58:
  if ( v6 )
  {
    if ( v25 )
    {
      UnbiasedInterruptTime = *v29;
      if ( *(_QWORD *)(*v29 + 96) < v10 )
        *(_QWORD *)(UnbiasedInterruptTime + 96) = v10;
    }
  }
  else
  {
    UnbiasedInterruptTime = *v29;
    if ( *(_QWORD *)(*v29 + 88) < v10 )
      *(_QWORD *)(UnbiasedInterruptTime + 88) = v10;
  }
  return UnbiasedInterruptTime;
}
