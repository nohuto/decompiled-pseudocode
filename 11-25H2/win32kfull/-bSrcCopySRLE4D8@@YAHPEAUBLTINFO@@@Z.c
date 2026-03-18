/*
 * XREFs of ?bSrcCopySRLE4D8@@YAHPEAUBLTINFO@@@Z @ 0x14031A590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE4D8(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r9
  unsigned __int8 *v2; // r10
  __int64 v3; // r14
  unsigned int v4; // edi
  int v5; // r15d
  int v6; // ebp
  int v7; // r12d
  __int64 v8; // r13
  int v9; // r8d
  unsigned int v10; // ecx
  __int64 v11; // rsi
  __int64 result; // rax
  unsigned int v13; // edx
  unsigned __int8 *v14; // r10
  unsigned __int64 v15; // rbx
  unsigned int v16; // edi
  BOOL v17; // r15d
  unsigned int v18; // ecx
  __int64 v19; // rax
  unsigned int v20; // esi
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // r12
  _BYTE *v24; // r12
  unsigned __int64 v25; // rax
  char v26; // cl
  __int64 v27; // rcx
  unsigned __int64 v28; // r10
  int v29; // eax
  unsigned __int8 *v30; // r10
  int v31; // ecx
  int v32; // esi
  __int64 v33; // rcx
  int v34; // r15d
  unsigned int v35; // edx
  char v36; // bl
  char v37; // r12
  __int64 v38; // rcx
  _BYTE *v39; // rcx
  __int64 v40; // rax
  int v41; // [rsp+0h] [rbp-68h]
  int v42; // [rsp+4h] [rbp-64h]
  int v43; // [rsp+8h] [rbp-60h]
  int v44; // [rsp+Ch] [rbp-5Ch]
  __int64 v45; // [rsp+10h] [rbp-58h]
  unsigned int v47; // [rsp+78h] [rbp+10h]
  int v48; // [rsp+80h] [rbp+18h]
  int v49; // [rsp+88h] [rbp+20h]

  v1 = a1;
  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 30);
  v5 = *((_DWORD *)a1 + 23);
  v6 = *((_DWORD *)a1 + 15);
  v7 = *((_DWORD *)a1 + 24);
  v8 = *((int *)a1 + 22);
  v9 = *((_DWORD *)a1 + 32);
  v48 = *((_DWORD *)a1 + 11);
  v41 = v7;
  v42 = v5;
  v10 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v47 = v10;
  v11 = *(_QWORD *)(*(_QWORD *)v1 + 16LL);
  v49 = *((_DWORD *)v1 + 25);
  v44 = *((_DWORD *)v1 + 14);
  v45 = v11;
  if ( v6 < v5 )
    return 1LL;
  while ( 1 )
  {
    v4 += 2;
    if ( v4 > v10 )
      return 0LL;
    v13 = *v2;
    v14 = v2 + 1;
    v15 = *v14;
    v2 = v14 + 1;
    if ( v13 )
    {
      if ( v6 < v49 && v9 < v7 && (int)(v13 + v9) > (int)v8 )
      {
        if ( v9 < (int)v8 )
        {
          v13 += v9 - v8;
          v9 = v8;
        }
        if ( (int)(v13 + v9) <= v7 )
        {
          v32 = 0;
        }
        else
        {
          v32 = v9 + v13 - v7;
          v13 = v7 - v9;
        }
        v33 = v15 & 0xF;
        v34 = v13 & 1;
        v35 = v13 >> 1;
        v36 = *(_BYTE *)(v45 + 4 * (v15 >> 4));
        v37 = *(_BYTE *)(v45 + 4 * v33);
        if ( v35 )
        {
          v38 = v9;
          v9 += 2 * v35;
          v39 = (_BYTE *)(v3 + v38);
          do
          {
            *v39 = v36;
            v39[1] = v37;
            v39 += 2;
            --v35;
          }
          while ( v35 );
        }
        if ( v34 )
        {
          v40 = v9++;
          *(_BYTE *)(v40 + v3) = v36;
        }
        v7 = v41;
        v9 += v32;
        v11 = v45;
        goto LABEL_47;
      }
      v9 += v13;
    }
    else if ( (_DWORD)v15 )
    {
      if ( (_DWORD)v15 == 1 )
        return 0LL;
      if ( (_DWORD)v15 == 2 )
      {
        v4 += 2;
        if ( v4 > v10 )
          return 0LL;
        v29 = *v2;
        v30 = v2 + 1;
        v9 += v29;
        v31 = *v30;
        v2 = v30 + 1;
        v6 -= v31;
        v3 += v31 * v48;
        if ( v6 < v5 )
        {
          *((_DWORD *)v1 + 34) = v9;
          goto LABEL_50;
        }
        v10 = v47;
      }
      else
      {
        v16 = ((unsigned int)(v15 + 1) >> 1) + v4;
        if ( v16 > v47 )
          return 0LL;
        v17 = (((_DWORD)v15 + 1) & 2) != 0;
        if ( v6 >= v49 || v9 >= v7 || (int)v15 + v9 <= (int)v8 )
        {
          v9 += v15;
          v28 = (unsigned __int64)&v2[(unsigned __int64)(unsigned int)(v15 + 1) >> 1];
        }
        else
        {
          if ( v9 < (int)v8 )
          {
            v18 = v8 - v9;
            v9 = v8;
            LODWORD(v15) = v15 - v18;
            v2 += (unsigned __int64)v18 >> 1;
            if ( (v18 & 1) != 0 )
            {
              v9 = v8 + 1;
              v19 = *v2++ & 0xF;
              LODWORD(v15) = v15 - 1;
              *(_BYTE *)(v8 + v3) = *(_BYTE *)(v11 + 4 * v19);
            }
          }
          if ( (int)v15 + v9 <= v7 )
          {
            v20 = 0;
          }
          else
          {
            v20 = v9 + v15 - v7;
            LODWORD(v15) = v7 - v9;
          }
          v21 = v15 & 1;
          v22 = (unsigned int)v15 >> 1;
          v43 = v21;
          if ( v22 )
          {
            v23 = v9;
            v9 += 2 * v22;
            v24 = (_BYTE *)(v3 + v23);
            do
            {
              v25 = *v2++;
              v26 = *(_BYTE *)(v45 + 4 * (v25 >> 4));
              v24[1] = *(_BYTE *)(v45 + 4 * (v25 & 0xF));
              *v24 = v26;
              v24 += 2;
              --v22;
            }
            while ( v22 );
            v1 = a1;
            v21 = v43;
            v7 = v41;
          }
          if ( v21 )
          {
            v27 = v9++;
            *(_BYTE *)(v27 + v3) = *(_BYTE *)(v45 + 4 * ((unsigned __int64)*v2 >> 4));
            v28 = (unsigned __int64)&v2[((unsigned __int64)v20 >> 1) + 1];
          }
          else
          {
            v28 = (unsigned __int64)&v2[(unsigned __int64)(v20 + 1) >> 1];
          }
          v9 += v20;
          v11 = v45;
        }
        v4 = v17 + v16;
        v2 = (unsigned __int8 *)(v17 + v28);
LABEL_47:
        v10 = v47;
        v5 = v42;
      }
    }
    else
    {
      --v6;
      v3 += v48;
      v9 = v44;
      if ( v6 < v5 )
      {
        *((_DWORD *)v1 + 34) = v44;
LABEL_50:
        *((_QWORD *)v1 + 14) = v3;
        result = 1LL;
        *((_QWORD *)v1 + 13) = v2;
        *((_DWORD *)v1 + 31) = v4;
        *((_DWORD *)v1 + 33) = v6;
        return result;
      }
    }
  }
}
