/*
 * XREFs of sub_1400437BC @ 0x1400437BC
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_14000BCAC @ 0x14000BCAC (sub_14000BCAC.c)
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140072E88 @ 0x140072E88 (sub_140072E88.c)
 *     sub_14007985C @ 0x14007985C (sub_14007985C.c)
 */

__int64 __fastcall sub_1400437BC(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7)
{
  _QWORD *v7; // r14
  unsigned int v8; // r10d
  __int64 v9; // rdx
  char *v10; // rdi
  __int64 v11; // r12
  _DWORD *v12; // r13
  char v13; // r15
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  _DWORD *v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // rax
  __int64 v20; // r10
  __int64 v21; // rcx
  _QWORD *v22; // rbx
  __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // eax
  int v26; // eax
  unsigned int v27; // r11d
  __int64 v28; // rax
  int v29; // r11d
  int v30; // eax
  __int64 (__fastcall *v31)(); // r9
  __int64 v32; // r8
  _QWORD *v33; // rax
  unsigned int **v34; // rcx
  int v35; // ebx
  unsigned int v36; // eax
  unsigned int v37; // r15d
  unsigned int v38; // r8d
  _DWORD *v39; // r9
  __int64 v40; // r10
  __int64 i; // r11
  __int64 v42; // r9
  unsigned int v43; // edx
  unsigned int v44; // edx
  unsigned int v45; // edx
  int v46; // eax
  unsigned int v47; // r8d
  char *v48; // r15
  unsigned int v49; // ebx
  unsigned int v50; // r14d
  __int64 v51; // r8
  __int64 v52; // rdx
  unsigned int v53; // ecx
  int v54; // [rsp+38h] [rbp-18h]
  unsigned int *v55; // [rsp+40h] [rbp-10h] BYREF
  _DWORD *v56; // [rsp+48h] [rbp-8h]
  unsigned __int64 v59; // [rsp+A0h] [rbp+50h]
  unsigned int v60; // [rsp+A0h] [rbp+50h]

  v59 = a3;
  v7 = 0LL;
  v8 = a2;
  v55 = 0LL;
  v9 = a1;
  v56 = 0LL;
  if ( (a3 & 0x1000) != 0 )
  {
    if ( a4 && !a5 && a6 && (a3 & 0x80u) == 0LL )
    {
      v10 = 0LL;
      v11 = 0LL;
      v12 = 0LL;
      v13 = 1;
      goto LABEL_30;
    }
    return 3221225485LL;
  }
  v13 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( !a4 )
    return 3221225485LL;
  v14 = *a4;
  if ( !*a4 || !a5 || a6 || !(unsigned __int8)sub_14007985C(a5, v14) )
    return 3221225485LL;
  v15 = 48 * v14 + 56;
  v16 = (_DWORD *)(a5 + 24);
  v17 = v14;
  do
  {
    if ( !*(v16 - 1) )
      v15 += 16 * *v16;
    v16 += 10;
    --v17;
  }
  while ( v17 );
  v18 = (_DWORD *)sub_1400143E0(64LL, v15, 1330667858LL, a1);
  v56 = v18;
  v7 = v18;
  if ( !v18 )
    return 3221225626LL;
  v20 = 0LL;
  v21 = *a4;
  *v18 = v21;
  v22 = &v18[12 * v21 + 14];
  if ( *a4 )
  {
    do
    {
      v23 = a5 + 40 * v20;
      v24 = 6 * v20;
      v7[v24 + 3] = *(_QWORD *)(v23 + 8);
      HIDWORD(v7[v24 + 4]) = *(_DWORD *)(v23 + 20);
      v25 = 0;
      if ( *(_DWORD *)(v23 + 16) != 3 )
        v25 = *(_DWORD *)(v23 + 16);
      LODWORD(v7[6 * v20 + 4]) = v25;
      v26 = *(_DWORD *)(v23 + 20);
      if ( v26 )
      {
        if ( v26 == 1 )
        {
          v7[6 * v20 + 5] = *(_QWORD *)(v23 + 24);
          v7[6 * v20 + 6] = *(_QWORD *)(v23 + 32);
        }
      }
      else
      {
        v7[6 * v20 + 6] = v22;
        v27 = 0;
        for ( LODWORD(v7[6 * v20 + 5]) = *(_DWORD *)(v23 + 24); v27 < *(_DWORD *)(v23 + 24); v22 += 2 )
        {
          v28 = sub_140072E88(v23, v27);
          v27 = v29 + 1;
          v22[1] = *(_QWORD *)(v28 + 16);
          *v22 = *(_QWORD *)(v28 + 8);
        }
      }
      v20 = (unsigned int)(v20 + 1);
    }
    while ( (unsigned int)v20 < *a4 );
    v10 = 0LL;
    v13 = 0;
  }
  v8 = a2;
  v9 = a1;
  a3 = v59;
LABEL_30:
  v30 = **(_DWORD **)(v9 + 64);
  if ( v30 == 1431193940 )
  {
    v31 = StorPortFreeDeviceBase;
    v11 = *(_QWORD *)(v9 + 64);
  }
  else
  {
    if ( v30 != 1094997074 )
      goto LABEL_73;
    v12 = sub_14000BCAC(v9);
  }
  v32 = (a3 >> 7) & 1;
  if ( v13 )
  {
    v33 = 0LL;
    v34 = &v55;
  }
  else
  {
    v33 = v7;
    v34 = 0LL;
  }
  v54 = PoFxRegisterComponentPerfStates(a7, v8, v32, v31, v33, v34);
  v35 = v54;
  if ( v54 < 0 || !v13 || !v55 )
    goto LABEL_74;
  v36 = *v55;
  v37 = 0;
  v60 = 0;
  if ( !*v55 )
    goto LABEL_73;
  v38 = 40 * v36;
  v39 = v55 + 10;
  v40 = v36;
  do
  {
    if ( !*(v39 - 1) )
      v38 += 24 * *v39;
    v39 += 12;
    --v40;
  }
  while ( v40 );
  v10 = (char *)sub_1400143E0(64LL, v38, 1330667858LL, a1);
  if ( v10 )
  {
    for ( i = 0LL; (unsigned int)i < *v55; i = (unsigned int)(i + 1) )
    {
      v42 = 40 * i;
      *(_DWORD *)&v10[v42] = 1;
      *(_DWORD *)&v10[v42 + 4] = 40;
      *(_QWORD *)&v10[v42 + 8] = *(_QWORD *)&v55[12 * i + 6];
      v43 = v55[12 * i + 8];
      if ( v43 )
      {
        v44 = v43 - 1;
        if ( v44 )
        {
          if ( v44 != 1 )
            goto LABEL_67;
          *(_DWORD *)&v10[v42 + 16] = 2;
        }
        else
        {
          *(_DWORD *)&v10[v42 + 16] = 1;
        }
      }
      else
      {
        *(_DWORD *)&v10[v42 + 16] = 0;
      }
      v45 = v55[12 * i + 9];
      if ( v45 )
      {
        if ( v45 != 1 )
        {
LABEL_67:
          v35 = -1073741762;
          goto LABEL_74;
        }
        v46 = 1;
      }
      else
      {
        v46 = 0;
      }
      *(_DWORD *)&v10[v42 + 20] = v46;
      if ( v46 )
      {
        *(_QWORD *)&v10[v42 + 24] = *(_QWORD *)&v55[12 * i + 10];
        *(_QWORD *)&v10[v42 + 32] = *(_QWORD *)&v55[12 * i + 12];
      }
      else
      {
        v47 = v55[12 * i + 10];
        *(_DWORD *)&v10[v42 + 24] = v47;
        *(_DWORD *)&v10[v42 + 28] = 24 * v37 + 40 * (*v55 - i);
        v48 = &v10[24 * v37 + v42];
        if ( v47 )
        {
          v49 = 0;
          v50 = v60;
          do
          {
            v51 = v49;
            ++v50;
            ++v49;
            v52 = 3 * v51;
            v51 *= 2LL;
            *(_DWORD *)&v48[8 * v52] = 1;
            *(_DWORD *)&v48[8 * v52 + 4] = 24;
            *(_QWORD *)&v48[8 * v52 + 8] = *(_QWORD *)(*(_QWORD *)&v55[12 * i + 12] + 8 * v51);
            *(_QWORD *)&v48[8 * v52 + 16] = *(_QWORD *)(*(_QWORD *)&v55[12 * i + 12] + 8 * v51 + 8);
          }
          while ( v49 < *(_DWORD *)&v10[v42 + 24] );
          v35 = v54;
          v60 = v50;
          v7 = v56;
        }
        v37 = v60;
      }
    }
    if ( v11 )
    {
      *(_QWORD *)(*(_QWORD *)(v11 + 1872) + 176LL) = v10;
      *(_DWORD *)(*(_QWORD *)(v11 + 1872) + 168LL) = *v55;
      *a6 = *(_QWORD *)(*(_QWORD *)(v11 + 1872) + 176LL);
      v53 = *(_DWORD *)(*(_QWORD *)(v11 + 1872) + 168LL);
LABEL_72:
      *a4 = v53;
      goto LABEL_74;
    }
    if ( v12 )
    {
      *(_QWORD *)(*((_QWORD *)v12 + 620) + 112LL) = v10;
      *(_DWORD *)(*((_QWORD *)v12 + 620) + 104LL) = *v55;
      *a6 = *(_QWORD *)(*((_QWORD *)v12 + 620) + 112LL);
      v53 = *(_DWORD *)(*((_QWORD *)v12 + 620) + 104LL);
      goto LABEL_72;
    }
LABEL_73:
    v35 = -1073741823;
    goto LABEL_74;
  }
  v35 = -1073741670;
LABEL_74:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4F506152u);
  if ( v35 < 0 )
  {
    if ( v10 )
      ExFreePoolWithTag(v10, 0x4F506152u);
  }
  return (unsigned int)v35;
}
