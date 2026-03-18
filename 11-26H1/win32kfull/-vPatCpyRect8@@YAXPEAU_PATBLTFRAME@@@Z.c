/*
 * XREFs of ?vPatCpyRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x140199820
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyPattern@@YAXPEAKJJJ@Z @ 0x140199BA0 (-CopyPattern@@YAXPEAKJJJ@Z.c)
 *     vFetchShiftAndCopy @ 0x140199C10 (vFetchShiftAndCopy.c)
 */

void __fastcall vPatCpyRect8(struct _PATBLTFRAME *a1)
{
  int v1; // r15d
  _DWORD *v3; // rcx
  int v4; // r8d
  int v5; // r15d
  __int64 v6; // r10
  __int64 v7; // r9
  unsigned int v8; // r15d
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rdi
  int v12; // r11d
  int v13; // eax
  int v14; // esi
  int v15; // r12d
  __int64 v16; // r11
  unsigned int v17; // r10d
  __int64 v18; // rcx
  int v19; // r15d
  int v20; // r14d
  int v21; // eax
  __int64 v22; // rdx
  unsigned int *v23; // r13
  int v24; // eax
  int *v25; // r12
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int *v28; // rdx
  int *v29; // rcx
  int v30; // eax
  int *v31; // r8
  int v32; // r14d
  _DWORD *v33; // rdx
  __int64 v34; // r10
  int v35; // ecx
  int v36; // r13d
  __int64 v37; // rcx
  int v38; // r10d
  int *v39; // r8
  unsigned int v40; // edx
  __int64 v41; // r9
  __int64 v42; // [rsp+20h] [rbp-38h]
  __int128 v43; // [rsp+28h] [rbp-30h] BYREF
  __int128 v44; // [rsp+38h] [rbp-20h]
  __int64 v45; // [rsp+48h] [rbp-10h]
  unsigned int v46; // [rsp+A0h] [rbp+48h]
  unsigned int v47; // [rsp+B0h] [rbp+58h]
  int v48; // [rsp+B8h] [rbp+60h]

  v1 = *((_DWORD *)a1 + 12);
  v45 = 0LL;
  v3 = (_DWORD *)*((_QWORD *)a1 + 3);
  v43 = 0LL;
  v44 = 0LL;
  v4 = *v3 * v1;
  v5 = v3[2] * v1;
  v6 = v4 & 3;
  v42 = v5 & 3;
  v7 = dword_1403625F0[v6];
  v8 = v5 & 0xFFFFFFFC;
  v9 = v4 & 0xFFFFFFFC;
  v46 = v8;
  v10 = v9 - *((_DWORD *)a1 + 8);
  v48 = ~dword_1403625F0[v42];
  if ( v10 < 0 )
    LODWORD(v11) = *((_DWORD *)a1 + 10) - (unsigned int)~v10 % *((_DWORD *)a1 + 10) - 1;
  else
    LODWORD(v11) = (unsigned int)v10 % *((_DWORD *)a1 + 10);
  v12 = v3[1];
  v13 = v12 - *((_DWORD *)a1 + 9);
  if ( v13 < 0 )
    v14 = *((_DWORD *)a1 + 11) - (unsigned int)~v13 % *((_DWORD *)a1 + 11) - 1;
  else
    v14 = (unsigned int)v13 % *((_DWORD *)a1 + 11);
  if ( (_DWORD)v9 == v8 )
  {
    v7 = ~dword_1403625F0[v42] & (unsigned int)v7;
    v15 = 1;
  }
  else
  {
    v15 = 0;
    if ( !(_DWORD)v6 )
    {
LABEL_7:
      v16 = (v8 - (unsigned int)v9) >> 2;
      DWORD2(v44) = v16;
      if ( (_DWORD)v16 )
      {
        v18 = *((_QWORD *)a1 + 3);
        v19 = v14;
        v47 = *((_DWORD *)a1 + 10);
        v17 = v47;
        v20 = *(_DWORD *)(v18 + 4);
        v21 = *((_DWORD *)a1 + 4) * v20;
        v11 = (unsigned int)v11 % v47;
        v22 = *(unsigned int *)(v18 + 12);
        *(_QWORD *)&v44 = __PAIR64__(v47, v11);
        HIDWORD(v44) = v47;
        v23 = (unsigned int *)(*(_QWORD *)a1 + (unsigned int)v9 + (__int64)v21);
        v24 = *((_DWORD *)a1 + 5) * v14;
        *(_QWORD *)&v43 = v23;
        v25 = (int *)(*((_QWORD *)a1 + 1) + v24);
        *((_QWORD *)&v43 + 1) = v25;
        if ( (((unsigned __int8)v11 | (unsigned __int8)v47) & 3) != 0 )
        {
          if ( v20 < (int)v22 )
          {
            do
            {
              vFetchShiftAndCopy(&v43, v22, v9, v7);
              if ( ++v19 == *((_DWORD *)a1 + 11) )
              {
                v19 = 0;
                *((_QWORD *)&v43 + 1) = *((_QWORD *)a1 + 1);
              }
              else
              {
                *((_QWORD *)&v43 + 1) += *((int *)a1 + 5);
              }
              ++v20;
              *(_QWORD *)&v43 = *((int *)a1 + 4) + (_QWORD)v43;
              v26 = *((_QWORD *)a1 + 3);
              LODWORD(v44) = v11;
            }
            while ( v20 < *(_DWORD *)(v26 + 12) );
            LODWORD(v16) = DWORD2(v44);
          }
        }
        else if ( v20 < (int)v22 )
        {
          v27 = v11;
          do
          {
            v28 = v23;
            v29 = (int *)((char *)v25 + v27);
            if ( v17 == 8 )
            {
              v31 = v29 + 1;
              if ( (_DWORD)v11 )
                v31 = v25;
              CopyPattern(v23, v16, *v31, *v29);
              v17 = v47;
            }
            else
            {
              while ( v28 < &v23[v16] )
              {
                v30 = *v29++;
                *v28++ = v30;
                if ( v29 == (int *)((char *)v25 + v17) )
                  v29 = v25;
              }
            }
            if ( ++v19 == *((_DWORD *)a1 + 11) )
            {
              v25 = (int *)*((_QWORD *)a1 + 1);
              v19 = 0;
            }
            else
            {
              v25 = (int *)((char *)v25 + *((int *)a1 + 5));
            }
            ++v20;
            v23 = (unsigned int *)((char *)v23 + *((int *)a1 + 4));
            v27 = v11;
          }
          while ( v20 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
        }
        v8 = v46;
      }
      if ( (_DWORD)v42 )
      {
        v37 = *((_QWORD *)a1 + 3);
        v38 = *(_DWORD *)(v37 + 4);
        v39 = (int *)(*(_QWORD *)a1 + v8 + (__int64)(*((_DWORD *)a1 + 4) * v38));
        v41 = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v14;
        if ( v38 < *(_DWORD *)(v37 + 12) )
        {
          v40 = (unsigned int)(v11 + 4 * v16) % *((_DWORD *)a1 + 10);
          do
          {
            ++v14;
            *v39 = *v39 & ~v48 | v48 & *(_DWORD *)(v40 + v41);
            if ( v14 == *((_DWORD *)a1 + 11) )
            {
              v41 = *((_QWORD *)a1 + 1);
              v14 = 0;
            }
            else
            {
              v41 += *((int *)a1 + 5);
            }
            ++v38;
            v39 = (int *)((char *)v39 + *((int *)a1 + 4));
          }
          while ( v38 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
        }
      }
      return;
    }
  }
  v32 = v14;
  v33 = (_DWORD *)(*(_QWORD *)a1 + (unsigned int)v9 + (__int64)(*((_DWORD *)a1 + 4) * v12));
  v34 = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v14;
  if ( v12 < v3[3] )
  {
    do
    {
      *v33 = *v33 & ~(_DWORD)v7 | v7 & *(_DWORD *)((unsigned int)v11 + v34);
      v35 = v32 + 1;
      v36 = *((_DWORD *)a1 + 11);
      if ( v32 + 1 == v36 )
        v34 = *((_QWORD *)a1 + 1);
      else
        v34 += *((int *)a1 + 5);
      v32 = 0;
      v33 = (_DWORD *)((char *)v33 + *((int *)a1 + 4));
      ++v12;
      if ( v35 != v36 )
        v32 = v35;
    }
    while ( v12 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
  }
  if ( !v15 )
  {
    v9 = (unsigned int)(v9 + 4);
    LODWORD(v11) = v11 + 4;
    goto LABEL_7;
  }
}
