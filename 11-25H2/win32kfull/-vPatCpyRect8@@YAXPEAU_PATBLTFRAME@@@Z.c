/*
 * XREFs of ?vPatCpyRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1401688B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyPattern@@YAXPEAKJJJ@Z @ 0x140168C2C (-CopyPattern@@YAXPEAKJJJ@Z.c)
 *     vFetchShiftAndCopy @ 0x140168C9C (vFetchShiftAndCopy.c)
 */

void __fastcall vPatCpyRect8(struct _PATBLTFRAME *a1)
{
  _DWORD *v2; // rcx
  int v3; // r8d
  int v4; // r14d
  unsigned int v5; // edi
  char v6; // r10
  __int64 v7; // r8
  __int64 v8; // r10
  __int64 v9; // rdx
  unsigned int v10; // r14d
  bool v11; // sf
  unsigned int v12; // eax
  __int64 v13; // r9
  int v14; // r15d
  __int64 v15; // rdi
  int v16; // r11d
  int v17; // eax
  unsigned int v18; // esi
  int v19; // esi
  int v20; // r12d
  __int64 v21; // r11
  unsigned int v22; // r10d
  int v23; // r15d
  int v24; // eax
  int v25; // r14d
  __int64 v26; // rdx
  unsigned int *v27; // r13
  int v28; // eax
  int *v29; // r12
  __int64 v30; // rax
  unsigned int *v31; // rdx
  int *v32; // rcx
  int v33; // eax
  int *v34; // r8
  int v35; // r15d
  _DWORD *v36; // rdx
  __int64 v37; // r10
  int v38; // r13d
  int v39; // r10d
  int *v40; // r8
  unsigned int v41; // edx
  __int64 v42; // r9
  int v43; // [rsp+20h] [rbp-38h]
  __int128 v44; // [rsp+28h] [rbp-30h] BYREF
  __int128 v45; // [rsp+38h] [rbp-20h]
  __int64 v46; // [rsp+48h] [rbp-10h]
  unsigned int v47; // [rsp+A0h] [rbp+48h]
  unsigned int v48; // [rsp+B0h] [rbp+58h]
  int v49; // [rsp+B0h] [rbp+58h]
  int v50; // [rsp+B8h] [rbp+60h]

  v2 = (_DWORD *)*((_QWORD *)a1 + 3);
  v46 = 0LL;
  v3 = *v2 * *((_DWORD *)a1 + 12);
  v4 = v2[2] * *((_DWORD *)a1 + 12);
  v5 = *((_DWORD *)a1 + 10);
  v44 = 0LL;
  v6 = v3;
  v7 = v3 & 0xFFFFFFFC;
  v8 = v6 & 3;
  v9 = v4 & 3;
  v10 = v4 & 0xFFFFFFFC;
  v50 = v9;
  v11 = (int)v7 - *((_DWORD *)a1 + 8) < 0;
  v12 = v7 - *((_DWORD *)a1 + 8);
  v13 = dword_140355968[v8];
  v14 = ~dword_140355968[v9];
  v47 = v10;
  v43 = v14;
  v45 = 0LL;
  if ( v11 )
    LODWORD(v15) = v5 - ~v12 % v5 - 1;
  else
    LODWORD(v15) = v12 % v5;
  v16 = v2[1];
  v17 = v16 - *((_DWORD *)a1 + 9);
  v18 = *((_DWORD *)a1 + 11);
  if ( v17 < 0 )
    v19 = v18 - ~v17 % v18 - 1;
  else
    v19 = v17 % v18;
  if ( (_DWORD)v7 == v10 )
  {
    v13 = v14 & (unsigned int)v13;
    v20 = 1;
  }
  else
  {
    v20 = 0;
    if ( !(_DWORD)v8 )
    {
LABEL_7:
      v21 = (v10 - (unsigned int)v7) >> 2;
      DWORD2(v45) = v21;
      if ( (_DWORD)v21 )
      {
        v23 = v2[1];
        v48 = *((_DWORD *)a1 + 10);
        v22 = v48;
        v24 = *((_DWORD *)a1 + 4) * v23;
        v25 = v19;
        v15 = (unsigned int)v15 % v48;
        v26 = (unsigned int)v2[3];
        *(_QWORD *)&v45 = __PAIR64__(v48, v15);
        HIDWORD(v45) = v48;
        v27 = (unsigned int *)(*(_QWORD *)a1 + (unsigned int)v7 + (__int64)v24);
        v28 = *((_DWORD *)a1 + 5) * v19;
        *(_QWORD *)&v44 = v27;
        v29 = (int *)(*((_QWORD *)a1 + 1) + v28);
        *((_QWORD *)&v44 + 1) = v29;
        if ( (((unsigned __int8)v15 | (unsigned __int8)v48) & 3) != 0 )
        {
          if ( v23 < (int)v26 )
          {
            do
            {
              vFetchShiftAndCopy(&v44, v26, v7, v13);
              if ( ++v25 == *((_DWORD *)a1 + 11) )
              {
                v25 = 0;
                *((_QWORD *)&v44 + 1) = *((_QWORD *)a1 + 1);
              }
              else
              {
                *((_QWORD *)&v44 + 1) += *((int *)a1 + 5);
              }
              v2 = (_DWORD *)*((_QWORD *)a1 + 3);
              ++v23;
              *(_QWORD *)&v44 = *((int *)a1 + 4) + (_QWORD)v44;
              LODWORD(v45) = v15;
            }
            while ( v23 < v2[3] );
            LODWORD(v21) = DWORD2(v45);
          }
        }
        else if ( v23 < (int)v26 )
        {
          v30 = v15;
          do
          {
            v31 = v27;
            v32 = (int *)((char *)v29 + v30);
            if ( v22 == 8 )
            {
              v34 = v32 + 1;
              if ( (_DWORD)v15 )
                v34 = v29;
              CopyPattern(v27, v21, *v34, *v32);
              v22 = v48;
            }
            else
            {
              while ( v31 < &v27[v21] )
              {
                v33 = *v32++;
                *v31++ = v33;
                if ( v32 == (int *)((char *)v29 + v22) )
                  v32 = v29;
              }
            }
            if ( ++v25 == *((_DWORD *)a1 + 11) )
            {
              v29 = (int *)*((_QWORD *)a1 + 1);
              v25 = 0;
            }
            else
            {
              v29 = (int *)((char *)v29 + *((int *)a1 + 5));
            }
            ++v23;
            v2 = (_DWORD *)*((_QWORD *)a1 + 3);
            v27 = (unsigned int *)((char *)v27 + *((int *)a1 + 4));
            v30 = v15;
          }
          while ( v23 < v2[3] );
        }
        v10 = v47;
      }
      if ( v50 )
      {
        v39 = v2[1];
        v40 = (int *)(*(_QWORD *)a1 + v10 + (__int64)(*((_DWORD *)a1 + 4) * v39));
        v42 = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v19;
        if ( v39 < v2[3] )
        {
          v41 = (unsigned int)(v15 + 4 * v21) % *((_DWORD *)a1 + 10);
          do
          {
            ++v19;
            *v40 = *v40 & ~v43 | v43 & *(_DWORD *)(v41 + v42);
            if ( v19 == *((_DWORD *)a1 + 11) )
            {
              v42 = *((_QWORD *)a1 + 1);
              v19 = 0;
            }
            else
            {
              v42 += *((int *)a1 + 5);
            }
            ++v39;
            v40 = (int *)((char *)v40 + *((int *)a1 + 4));
          }
          while ( v39 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
        }
      }
      return;
    }
  }
  LODWORD(v45) = v15;
  v35 = v19;
  v36 = (_DWORD *)(*(_QWORD *)a1 + (unsigned int)v7 + (__int64)(*((_DWORD *)a1 + 4) * v16));
  v37 = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v19;
  while ( v16 < v2[3] )
  {
    v38 = v35 + 1;
    *v36 = *v36 & ~(_DWORD)v13 | v13 & *(_DWORD *)((unsigned int)v15 + v37);
    v49 = *((_DWORD *)a1 + 11);
    if ( v35 + 1 == v49 )
      v37 = *((_QWORD *)a1 + 1);
    else
      v37 += *((int *)a1 + 5);
    v35 = 0;
    v2 = (_DWORD *)*((_QWORD *)a1 + 3);
    v36 = (_DWORD *)((char *)v36 + *((int *)a1 + 4));
    ++v16;
    if ( v38 != v49 )
      v35 = v38;
  }
  if ( !v20 )
  {
    v7 = (unsigned int)(v7 + 4);
    LODWORD(v15) = v15 + 4;
    goto LABEL_7;
  }
}
