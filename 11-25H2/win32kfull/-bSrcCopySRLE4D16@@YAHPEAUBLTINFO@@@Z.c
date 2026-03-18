/*
 * XREFs of ?bSrcCopySRLE4D16@@YAHPEAUBLTINFO@@@Z @ 0x1401D87A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE4D16(struct BLTINFO *a1)
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
  unsigned int v12; // edx
  unsigned __int8 *v13; // r10
  unsigned __int64 v14; // rbx
  unsigned int v15; // edi
  BOOL v16; // r15d
  unsigned int v17; // ecx
  __int64 v18; // rax
  unsigned int v19; // esi
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // rax
  unsigned __int64 v23; // r10
  __int64 result; // rax
  __int64 v25; // rax
  _WORD *v26; // r12
  unsigned __int64 v27; // rax
  __int16 v28; // cx
  int v29; // eax
  unsigned __int8 *v30; // r10
  int v31; // ecx
  int v32; // eax
  int v33; // esi
  __int64 v34; // rcx
  int v35; // r15d
  unsigned int v36; // edx
  __int16 v37; // bx
  __int16 v38; // r12
  __int64 v39; // rax
  _WORD *v40; // rcx
  __int64 v41; // rax
  int v42; // [rsp+0h] [rbp-68h]
  int v43; // [rsp+4h] [rbp-64h]
  int v44; // [rsp+8h] [rbp-60h]
  int v45; // [rsp+Ch] [rbp-5Ch]
  __int64 v46; // [rsp+10h] [rbp-58h]
  unsigned int v48; // [rsp+78h] [rbp+10h]
  int v49; // [rsp+80h] [rbp+18h]
  int v50; // [rsp+88h] [rbp+20h]

  v1 = a1;
  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 30);
  v5 = *((_DWORD *)a1 + 23);
  v6 = *((_DWORD *)a1 + 15);
  v7 = *((_DWORD *)a1 + 24);
  v8 = *((int *)a1 + 22);
  v9 = *((_DWORD *)a1 + 32);
  v49 = *((_DWORD *)a1 + 11) / 2;
  v50 = *((_DWORD *)a1 + 25);
  v10 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v45 = *((_DWORD *)v1 + 14);
  v48 = v10;
  v11 = *(_QWORD *)(*(_QWORD *)v1 + 16LL);
  v46 = v11;
  v42 = v7;
  v43 = v5;
  if ( v6 < v5 )
    return 1LL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v4 += 2;
          if ( v4 > v10 )
            return 0LL;
          v12 = *v2;
          v13 = v2 + 1;
          v14 = *v13;
          v2 = v13 + 1;
          if ( !v12 )
            break;
          if ( v6 < v50 && v9 < v7 && (int)(v12 + v9) > (int)v8 )
          {
            if ( v9 < (int)v8 )
            {
              v32 = v8 - v9;
              v9 = v8;
              v12 -= v32;
            }
            if ( (int)(v12 + v9) <= v7 )
            {
              v33 = 0;
            }
            else
            {
              v33 = v9 + v12 - v7;
              v12 = v7 - v9;
            }
            v34 = v14 & 0xF;
            v35 = v12 & 1;
            v36 = v12 >> 1;
            v37 = *(_WORD *)(v46 + 4 * (v14 >> 4));
            v38 = *(_WORD *)(v46 + 4 * v34);
            if ( v36 )
            {
              v39 = v9;
              v9 += 2 * v36;
              v40 = (_WORD *)(v3 + 2 * v39);
              do
              {
                *v40 = v37;
                v40[1] = v38;
                v40 += 2;
                --v36;
              }
              while ( v36 );
            }
            if ( v35 )
            {
              v41 = v9++;
              *(_WORD *)(v3 + 2 * v41) = v37;
            }
            v7 = v42;
            v9 += v33;
            v11 = v46;
            goto LABEL_21;
          }
          v9 += v12;
        }
        if ( (_DWORD)v14 )
          break;
        --v6;
        v3 += 2LL * v49;
        v9 = v45;
        if ( v6 < v5 )
        {
          *((_DWORD *)v1 + 34) = v45;
          goto LABEL_52;
        }
      }
      if ( (_DWORD)v14 == 1 )
        return 0LL;
      if ( (_DWORD)v14 == 2 )
        break;
      v15 = ((unsigned int)(v14 + 1) >> 1) + v4;
      if ( v15 > v48 )
        return 0LL;
      v16 = (((_DWORD)v14 + 1) & 2) != 0;
      if ( v6 >= v50 || v9 >= v7 || (int)v14 + v9 <= (int)v8 )
      {
        v9 += v14;
        v23 = (unsigned __int64)&v2[(unsigned __int64)(unsigned int)(v14 + 1) >> 1];
      }
      else
      {
        if ( v9 < (int)v8 )
        {
          v17 = v8 - v9;
          v9 = v8;
          LODWORD(v14) = v14 - v17;
          v2 += (unsigned __int64)v17 >> 1;
          if ( (v17 & 1) != 0 )
          {
            v9 = v8 + 1;
            v18 = *v2++ & 0xF;
            LODWORD(v14) = v14 - 1;
            *(_WORD *)(v3 + 2 * v8) = *(_WORD *)(v11 + 4 * v18);
          }
        }
        if ( (int)v14 + v9 <= v7 )
        {
          v19 = 0;
        }
        else
        {
          v19 = v9 + v14 - v7;
          LODWORD(v14) = v7 - v9;
        }
        v20 = v14 & 1;
        v21 = (unsigned int)v14 >> 1;
        v44 = v20;
        if ( v21 )
        {
          v25 = v9;
          v9 += 2 * v21;
          v26 = (_WORD *)(v3 + 2 * v25);
          do
          {
            v27 = *v2++;
            v28 = *(_WORD *)(v46 + 4 * (v27 >> 4));
            v26[1] = *(_WORD *)(v46 + 4 * (v27 & 0xF));
            *v26 = v28;
            v26 += 2;
            --v21;
          }
          while ( v21 );
          v1 = a1;
          v20 = v44;
          v7 = v42;
        }
        if ( v20 )
        {
          v22 = v9++;
          *(_WORD *)(v3 + 2 * v22) = *(_WORD *)(v46 + 4 * ((unsigned __int64)*v2 >> 4));
          v23 = (unsigned __int64)&v2[((unsigned __int64)v19 >> 1) + 1];
        }
        else
        {
          v23 = (unsigned __int64)&v2[(unsigned __int64)(v19 + 1) >> 1];
        }
        v9 += v19;
        v11 = v46;
      }
      v4 = v16 + v15;
      v2 = (unsigned __int8 *)(v16 + v23);
LABEL_21:
      v10 = v48;
      v5 = v43;
    }
    v4 += 2;
    if ( v4 > v10 )
      return 0LL;
    v29 = *v2;
    v30 = v2 + 1;
    v9 += v29;
    v31 = *v30;
    v2 = v30 + 1;
    v6 -= v31;
    v3 += 2LL * v31 * v49;
    if ( v6 < v5 )
      break;
    v10 = v48;
  }
  *((_DWORD *)v1 + 34) = v9;
LABEL_52:
  *((_QWORD *)v1 + 14) = v3;
  result = 1LL;
  *((_QWORD *)v1 + 13) = v2;
  *((_DWORD *)v1 + 31) = v4;
  *((_DWORD *)v1 + 33) = v6;
  return result;
}
