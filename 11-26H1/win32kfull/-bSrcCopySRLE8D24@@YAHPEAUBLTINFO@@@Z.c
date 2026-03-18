/*
 * XREFs of ?bSrcCopySRLE8D24@@YAHPEAUBLTINFO@@@Z @ 0x14033C070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE8D24(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r9
  unsigned __int8 *v2; // r11
  __int64 v3; // rbp
  unsigned int v4; // edi
  int v5; // r15d
  int v6; // esi
  int v7; // r8d
  int v8; // r14d
  int v9; // r13d
  int v10; // r12d
  int v11; // r10d
  unsigned int v12; // ecx
  int v14; // edx
  __int64 v15; // rbx
  unsigned int v16; // edi
  unsigned int v17; // r15d
  unsigned int v18; // eax
  __int64 v19; // r12
  int v20; // r14d
  __int64 v21; // r13
  __int64 v22; // rax
  int v23; // r8d
  __int64 v24; // rax
  unsigned __int8 *v25; // r11
  __int64 v26; // rax
  int v27; // ecx
  int v28; // r12d
  int v29; // r8d
  int v30; // ebx
  int v31; // r10d
  __int64 v32; // rbx
  int v33; // [rsp+0h] [rbp-68h]
  int v34; // [rsp+4h] [rbp-64h]
  int v35; // [rsp+8h] [rbp-60h]
  int v36; // [rsp+Ch] [rbp-5Ch]
  __int64 v37; // [rsp+10h] [rbp-58h]
  unsigned int v39; // [rsp+78h] [rbp+10h]
  int v40; // [rsp+80h] [rbp+18h]
  int v41; // [rsp+88h] [rbp+20h]

  v1 = a1;
  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 30);
  v5 = *((_DWORD *)a1 + 23);
  v6 = *((_DWORD *)a1 + 15);
  v7 = *((_DWORD *)a1 + 22);
  v8 = *((_DWORD *)a1 + 24);
  v9 = *((_DWORD *)a1 + 25);
  v10 = *((_DWORD *)a1 + 14);
  v11 = *((_DWORD *)a1 + 32);
  v40 = *((_DWORD *)a1 + 11);
  v34 = v7;
  v41 = v8;
  v33 = v5;
  v12 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v39 = v12;
  v36 = v9;
  v35 = v10;
  v37 = *(_QWORD *)(*(_QWORD *)v1 + 16LL);
  if ( v6 < v5 )
    return 1LL;
  while ( 1 )
  {
    v4 += 2;
    if ( v4 > v12 )
      return 0LL;
    v14 = *v2;
    v15 = v2[1];
    v2 += 2;
    if ( v14 )
    {
      if ( v6 >= v9 || v11 >= v8 || v14 + v11 <= v7 )
      {
        v11 += v14;
      }
      else
      {
        v28 = *(_DWORD *)(v37 + 4 * v15);
        if ( v11 < v7 )
        {
          v14 += v11 - v7;
          v11 = v7;
        }
        if ( v14 + v11 <= v8 )
        {
          v29 = 0;
        }
        else
        {
          v29 = v11 + v14 - v8;
          v14 = v8 - v11;
        }
        v30 = 3 * v11;
        v31 = v14 + v11;
        if ( v14 )
        {
          v32 = (unsigned int)(v30 + 2);
          do
          {
            *(_BYTE *)(v32 + v3) = BYTE2(v28);
            *(_BYTE *)((unsigned int)(v32 - 2) + v3) = v28;
            *(_BYTE *)((unsigned int)(v32 - 1) + v3) = BYTE1(v28);
            v32 = (unsigned int)(v32 + 3);
            --v14;
          }
          while ( v14 );
          v8 = v41;
          v12 = v39;
          v5 = v33;
        }
        v10 = v35;
        v11 = v29 + v31;
        v7 = v34;
      }
    }
    else if ( (_DWORD)v15 )
    {
      if ( (_DWORD)v15 == 1 )
        return 0LL;
      if ( (_DWORD)v15 == 2 )
      {
        v4 += 2;
        if ( v4 > v12 )
          return 0LL;
        v27 = v2[1];
        v11 += *v2;
        v2 += 2;
        v6 -= v27;
        v3 += v40 * v27;
        if ( v6 < v5 )
        {
          *((_DWORD *)v1 + 34) = v11;
          goto LABEL_44;
        }
        v12 = v39;
      }
      else
      {
        v16 = v15 + v4;
        if ( v16 > v12 )
          return 0LL;
        v17 = v15 & 1;
        if ( v6 >= v9 || v11 >= v8 || (int)v15 + v11 <= v7 )
        {
          v11 += v15;
          v25 = &v2[v15];
        }
        else
        {
          if ( v11 < v7 )
          {
            v18 = v7 - v11;
            v11 = v7;
            v2 += v18;
            LODWORD(v15) = v15 - v18;
          }
          v19 = (unsigned int)(3 * v11);
          if ( (int)v15 + v11 <= v8 )
          {
            v20 = 0;
          }
          else
          {
            v20 = v15 - v8 + v11;
            LODWORD(v15) = v15 - v20;
          }
          if ( (_DWORD)v15 )
          {
            v21 = (unsigned int)(v19 + 2);
            v11 += v15;
            do
            {
              v22 = *v2++;
              v23 = *(_DWORD *)(v37 + 4 * v22);
              *(_BYTE *)(v19 + v3) = v23;
              v24 = (unsigned int)(v21 - 1);
              v19 = (unsigned int)(v19 + 3);
              *(_BYTE *)(v21 + v3) = BYTE2(v23);
              v21 = (unsigned int)(v21 + 3);
              *(_BYTE *)(v24 + v3) = BYTE1(v23);
              LODWORD(v15) = v15 - 1;
            }
            while ( (_DWORD)v15 );
            v1 = a1;
            v7 = v34;
            v9 = v36;
          }
          v12 = v39;
          v10 = v35;
          v25 = &v2[v20];
          v11 += v20;
          v8 = v41;
        }
        v4 = v17 + v16;
        v26 = v17;
        v5 = v33;
        v2 = &v25[v26];
      }
    }
    else
    {
      --v6;
      v3 += v40;
      v11 = v10;
      if ( v6 < v5 )
      {
        *((_DWORD *)v1 + 34) = v10;
LABEL_44:
        *((_QWORD *)v1 + 14) = v3;
        *((_QWORD *)v1 + 13) = v2;
        *((_DWORD *)v1 + 31) = v4;
        *((_DWORD *)v1 + 33) = v6;
        return 1LL;
      }
    }
  }
}
