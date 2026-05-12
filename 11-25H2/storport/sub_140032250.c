/*
 * XREFs of sub_140032250 @ 0x140032250
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14008D9B8 @ 0x14008D9B8 (sub_14008D9B8.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

void __fastcall sub_140032250(__int64 a1, _DWORD *a2, unsigned int a3, char *a4)
{
  int v6; // r15d
  int v7; // r12d
  int v8; // r13d
  int v9; // r14d
  char *Pool2; // rax
  char *v11; // r14
  unsigned int v12; // r9d
  unsigned int v13; // esi
  char *v14; // r8
  __int64 v15; // rcx
  __int64 *v16; // rdi
  _QWORD *v17; // rbx
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  int v22; // ebx
  int v23; // esi
  int v24; // r14d
  int v25; // edx
  int v26; // r8d
  int v27; // r10d
  int v28; // r11d
  int v29; // eax
  int v30; // eax
  int v31; // eax
  char *v32; // r14
  char v33; // r8
  char *v34; // r15
  unsigned int v35; // ecx
  __int64 v36; // rdx
  __int64 v37; // rax
  unsigned int i; // edx
  void *v39; // rax
  unsigned int v40; // r11d
  char *v41; // r10
  __int64 v42; // r9
  _QWORD *v43; // rdi
  char v44; // [rsp+30h] [rbp-79h]
  char *v45; // [rsp+40h] [rbp-69h]
  __int64 v46; // [rsp+48h] [rbp-61h]
  unsigned int v47; // [rsp+48h] [rbp-61h]
  __int64 v48; // [rsp+50h] [rbp-59h] BYREF
  __int64 v49; // [rsp+58h] [rbp-51h] BYREF
  __int64 v50; // [rsp+60h] [rbp-49h] BYREF
  __int64 v51; // [rsp+68h] [rbp-41h] BYREF
  __int64 v52; // [rsp+70h] [rbp-39h] BYREF
  __int64 v53; // [rsp+78h] [rbp-31h] BYREF
  __int64 v54; // [rsp+80h] [rbp-29h] BYREF
  __int64 v55; // [rsp+88h] [rbp-21h] BYREF
  __int64 v56; // [rsp+90h] [rbp-19h] BYREF
  __int64 v57; // [rsp+98h] [rbp-11h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v60; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v61; // [rsp+B8h] [rbp+Fh] BYREF
  PVOID P; // [rsp+C0h] [rbp+17h]
  PVOID v63; // [rsp+C8h] [rbp+1Fh]
  char v65; // [rsp+120h] [rbp+77h]

  v50 = 0LL;
  v6 = 0;
  v51 = 0LL;
  v7 = 0;
  v52 = 0LL;
  v8 = 0;
  v49 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v48 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v63 = 0LL;
  P = 0LL;
  if ( a3 < 0x108 )
    return;
  memset_0(a2, 0, a3);
  v44 = *a4;
  v65 = a4[8];
  if ( !*(_QWORD *)(a1 + 2376) )
    return;
  v9 = Size;
  v46 = *(_QWORD *)(a1 + 8);
  Pool2 = (char *)ExAllocatePool2(264LL, (unsigned int)Size, 1700028754LL);
  v45 = Pool2;
  if ( Pool2 )
  {
    v11 = Pool2;
    memmove(Pool2, *(const void **)(a1 + 2376), (unsigned int)Size);
    if ( *(_QWORD *)(a1 + 2416) )
    {
      P = (PVOID)sub_1400143E0(264LL, (unsigned int)dword_140169194, 1700028754LL, *(_QWORD *)(a1 + 8));
      if ( P )
        memmove(P, *(const void **)(a1 + 2416), (unsigned int)dword_140169194);
    }
    if ( *(_QWORD *)(a1 + 2384) )
    {
      v39 = (void *)sub_1400143E0(264LL, (unsigned int)dword_140169184, 1700028754LL, *(_QWORD *)(a1 + 8));
      v63 = v39;
      if ( v39 )
        memmove(v39, *(const void **)(a1 + 2384), (unsigned int)dword_140169184);
    }
    v12 = dword_140168DB0;
    v13 = 0;
    v47 = 0;
    if ( dword_140168DB0 )
    {
      do
      {
        v14 = &v11[(unsigned int)dword_140169178 * v13];
        v15 = 0LL;
        do
        {
          switch ( v15 )
          {
            case 0LL:
              v16 = &v50;
              v17 = a2 + 16;
              break;
            case 1LL:
              v16 = &v51;
              v17 = a2 + 18;
              break;
            case 2LL:
              v16 = &v52;
              v17 = a2 + 20;
              break;
            case 3LL:
              v16 = &v49;
              v17 = a2 + 22;
              break;
            case 4LL:
              v16 = &v53;
              v17 = a2 + 24;
              break;
            case 5LL:
              v16 = &v54;
              v17 = a2 + 26;
              break;
            case 6LL:
              v16 = &v55;
              v17 = a2 + 28;
              break;
            case 7LL:
              v16 = &v56;
              v17 = a2 + 30;
              break;
            case 8LL:
              v16 = &v57;
              v17 = a2 + 32;
              break;
            case 9LL:
              v16 = &v58;
              v17 = a2 + 34;
              break;
            case 10LL:
              v16 = &v59;
              v17 = a2 + 36;
              break;
            case 11LL:
              v16 = &v48;
              v17 = a2 + 38;
              break;
            case 12LL:
              v16 = &v60;
              v17 = a2 + 40;
              break;
            case 13LL:
              v16 = &v61;
              v17 = a2 + 42;
              break;
          }
          if ( v44 )
          {
            v18 = 3LL * (unsigned int)v15 * (unsigned __int16)qword_1401690E0;
            *v16 += *(_QWORD *)&v14[24 * (unsigned int)v15 * (unsigned __int16)qword_1401690E0]
                  + *(_QWORD *)&v14[24 * (unsigned int)v15 * (unsigned __int16)qword_1401690E0 + 8];
            v19 = (__int64)((unsigned __int128)(*(__int64 *)&v14[8 * v18 + 16] * (__int128)0x6666666666666667LL) >> 64) >> 2;
            *v17 += (v19 >> 63) + v19;
          }
          if ( v65 )
          {
            v20 = 3LL * ((unsigned int)v15 * (unsigned __int16)qword_1401690E0 + 1);
            *v16 += *(_QWORD *)&v14[24 * (unsigned int)v15 * (unsigned __int16)qword_1401690E0 + 24]
                  + *(_QWORD *)&v14[24 * (unsigned int)v15 * (unsigned __int16)qword_1401690E0 + 32];
            v21 = (__int64)((unsigned __int128)(*(__int64 *)&v14[8 * v20 + 16] * (__int128)0x6666666666666667LL) >> 64) >> 2;
            *v17 += (v21 >> 63) + v21;
          }
          v15 = (unsigned int)(v15 + 1);
        }
        while ( (unsigned int)v15 < 0xE );
        v12 = dword_140168DB0;
        v13 = v47 + 1;
        v11 = v45;
        v47 = v13;
      }
      while ( v13 < dword_140168DB0 );
      v6 = v50;
      v7 = v51;
      v8 = v52;
    }
    v22 = v57;
    v23 = v58;
    v24 = v59;
    v25 = v53;
    v26 = v54;
    v27 = v55;
    v28 = v56;
    a2[3] = v49;
    a2[8] = v22;
    a2[9] = v23;
    a2[10] = v24;
    *a2 = v6;
    a2[1] = v7;
    a2[2] = v8;
    a2[4] = v25;
    a2[5] = v26;
    a2[6] = v27;
    a2[7] = v28;
    a2[11] = v48;
    v29 = v60;
    a2[12] = v60;
    v30 = v61 + v29;
    a2[13] = v61;
    v31 = v24 + v48 + v30;
    v32 = (char *)P;
    a2[14] = v6 + v7 + v8 + v49 + v25 + v26 + v27 + v28 + v22 + v23 + v31;
    *((_QWORD *)a2 + 22) = *((_QWORD *)a2 + 8)
                         + *((_QWORD *)a2 + 9)
                         + *((_QWORD *)a2 + 10)
                         + *((_QWORD *)a2 + 11)
                         + *((_QWORD *)a2 + 12)
                         + *((_QWORD *)a2 + 13)
                         + *((_QWORD *)a2 + 14)
                         + *((_QWORD *)a2 + 15)
                         + *((_QWORD *)a2 + 16)
                         + *((_QWORD *)a2 + 17)
                         + *((_QWORD *)a2 + 18)
                         + *((_QWORD *)a2 + 19)
                         + *((_QWORD *)a2 + 20)
                         + *((_QWORD *)a2 + 21);
    if ( v32 )
    {
      v35 = 0;
      if ( v12 )
      {
        if ( !v44 )
        {
          v33 = v65;
          for ( i = 0; i < v12; ++i )
          {
            if ( v65 )
              *((_QWORD *)a2 + 23) += *(_QWORD *)&v32[dword_140169190 * i + 16];
          }
          goto LABEL_20;
        }
        v36 = *((_QWORD *)a2 + 23);
        do
        {
          v37 = dword_140169190 * v35;
          v36 += *(_QWORD *)&v32[v37 + 8];
          *((_QWORD *)a2 + 23) = v36;
          if ( v65 )
          {
            v36 += *(_QWORD *)&v32[v37 + 16];
            *((_QWORD *)a2 + 23) = v36;
          }
          ++v35;
        }
        while ( v35 < v12 );
      }
    }
    v33 = v65;
LABEL_20:
    v34 = (char *)v63;
    if ( v63 )
    {
      v40 = 0;
      if ( v12 )
      {
        do
        {
          v41 = &v34[(unsigned int)dword_14016917C * v40];
          v42 = 0LL;
          do
          {
            switch ( v42 )
            {
              case 0LL:
                v43 = a2 + 48;
                break;
              case 1LL:
                v43 = a2 + 50;
                break;
              case 2LL:
                v43 = a2 + 52;
                break;
              case 3LL:
                v43 = a2 + 54;
                break;
              case 4LL:
                v43 = a2 + 56;
                break;
              case 5LL:
                v43 = a2 + 58;
                break;
              case 6LL:
                v43 = a2 + 60;
                break;
              case 7LL:
                v43 = a2 + 62;
                break;
              case 8LL:
                v43 = a2 + 64;
                break;
            }
            if ( v44 )
              *v43 += *(_QWORD *)&v41[16 * (unsigned int)v42 * (unsigned __int16)xmmword_140169140];
            if ( v33 )
              *v43 += *(_QWORD *)&v41[16 * (unsigned int)v42 * (unsigned __int16)xmmword_140169140 + 16];
            if ( v44 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140];
            if ( v33 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140
                                    + 16];
            if ( v44 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + 2 * WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140];
            if ( v33 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + 2 * WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140
                                    + 16];
            if ( v44 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + 2 * WORD1(xmmword_140169140) + WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140];
            if ( v33 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + 2 * WORD1(xmmword_140169140) + WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140
                                    + 16];
            if ( v44 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + 4 * WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140];
            if ( v33 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + 4 * WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140
                                    + 16];
            if ( v44 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + 4 * WORD1(xmmword_140169140) + WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140];
            if ( v33 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + 4 * WORD1(xmmword_140169140) + WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140
                                    + 16];
            if ( v44 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + 6 * WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140];
            if ( v33 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + 6 * WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140
                                    + 16];
            if ( v44 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + 7 * WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140];
            if ( v33 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + 7 * WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140
                                    + 16];
            if ( v44 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + 8 * WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140];
            if ( v33 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + 8 * WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140
                                    + 16];
            if ( v44 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + 8 * WORD1(xmmword_140169140) + WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140];
            if ( v33 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + 8 * WORD1(xmmword_140169140) + WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140
                                    + 16];
            if ( v44 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + 10 * WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140];
            if ( v33 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + 10 * WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140
                                    + 16];
            if ( v44 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + 11 * WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140];
            if ( v33 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + 11 * WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140
                                    + 16];
            if ( v44 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + 12 * WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140];
            if ( v33 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + 12 * WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140
                                    + 16];
            if ( v44 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + 13 * WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140];
            if ( v33 )
              *v43 += *(_QWORD *)&v41[16
                                    * ((_DWORD)v42 + 13 * WORD1(xmmword_140169140))
                                    * (unsigned __int16)xmmword_140169140
                                    + 16];
            v42 = (unsigned int)(v42 + 1);
          }
          while ( (unsigned int)v42 < 9 );
          ++v40;
        }
        while ( v40 < dword_140168DB0 );
      }
      ExFreePoolWithTag(v34, 0x65546152u);
    }
    if ( v32 )
      ExFreePoolWithTag(v32, 0x65546152u);
    ExFreePoolWithTag(v45, 0x65546152u);
    return;
  }
  if ( v46 )
    sub_14008D9B8(v46, 264, v9, 1700028754, 0x80000000);
}
