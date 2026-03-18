/*
 * XREFs of ?bSrcCopySRLE8D8@@YAHPEAUBLTINFO@@@Z @ 0x140216090
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall bSrcCopySRLE8D8(struct BLTINFO *a1)
{
  unsigned __int8 *v2; // rsi
  __int64 v3; // r13
  unsigned int v4; // ebp
  int v5; // r11d
  int v6; // r15d
  int v7; // r8d
  int v8; // r9d
  int v9; // r12d
  int v10; // r10d
  int v11; // edi
  unsigned int v12; // ecx
  unsigned int v13; // r14d
  __int64 v14; // rdx
  unsigned int v15; // ebp
  unsigned int v16; // r10d
  int v17; // r8d
  _BYTE *v18; // r9
  __int64 v19; // rax
  unsigned __int8 *v20; // rsi
  __int64 v21; // rax
  int v22; // edx
  int v23; // r12d
  int v25; // ecx
  unsigned int v26; // eax
  int v27; // [rsp+20h] [rbp-68h]
  int v28; // [rsp+24h] [rbp-64h]
  int v29; // [rsp+28h] [rbp-60h]
  __int64 v30; // [rsp+30h] [rbp-58h]
  unsigned int v31; // [rsp+90h] [rbp+8h]
  int v32; // [rsp+98h] [rbp+10h]
  int v33; // [rsp+A0h] [rbp+18h]
  int v34; // [rsp+A8h] [rbp+20h]

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
  v32 = *((_DWORD *)a1 + 11);
  v33 = v7;
  v34 = v8;
  v28 = v5;
  v12 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v31 = v12;
  v29 = v9;
  v27 = v10;
  v30 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  if ( v6 < v5 )
    return 1LL;
  while ( 1 )
  {
    v4 += 2;
    if ( v4 > v12 )
      return 0LL;
    v13 = *v2;
    v14 = v2[1];
    v2 += 2;
    if ( v13 )
    {
      if ( v6 >= v9 || v11 >= v8 || (int)(v13 + v11) <= v7 )
      {
        v11 += v13;
      }
      else
      {
        v22 = *(_DWORD *)(v30 + 4 * v14);
        if ( v11 < v7 )
        {
          v13 += v11 - v7;
          v11 = v7;
        }
        if ( (int)(v13 + v11) > v8 )
        {
          v23 = v11 + v13 - v8;
          v13 = v8 - v11;
        }
        else
        {
          v23 = 0;
        }
        if ( v13 )
        {
          memset_0((void *)(v3 + v11), v22, v13);
          v7 = v33;
          v11 += v13;
          v8 = v34;
          v12 = v31;
          v10 = v27;
          v5 = v28;
        }
        v11 += v23;
        v9 = v29;
      }
    }
    else if ( (_DWORD)v14 )
    {
      if ( (_DWORD)v14 == 1 )
        return 0LL;
      if ( (_DWORD)v14 == 2 )
      {
        v4 += 2;
        if ( v4 > v12 )
          return 0LL;
        v25 = v2[1];
        v11 += *v2;
        v2 += 2;
        v6 -= v25;
        v3 += v32 * v25;
        if ( v6 < v5 )
        {
          *((_DWORD *)a1 + 34) = v11;
          goto LABEL_33;
        }
        v12 = v31;
      }
      else
      {
        v15 = v14 + v4;
        if ( v15 > v12 )
          return 0LL;
        v16 = v14 & 1;
        if ( v6 >= v9 || v11 >= v8 || (int)v14 + v11 <= v7 )
        {
          v11 += v14;
          v20 = &v2[v14];
        }
        else
        {
          if ( v11 < v7 )
          {
            v26 = v7 - v11;
            v11 = v7;
            v2 += v26;
            LODWORD(v14) = v14 - v26;
          }
          if ( (int)v14 + v11 > v8 )
          {
            v17 = v11 + v14 - v8;
            LODWORD(v14) = v8 - v11;
          }
          else
          {
            v17 = 0;
          }
          if ( (_DWORD)v14 )
          {
            v18 = (_BYTE *)(v3 + v11);
            v11 += v14;
            do
            {
              v19 = *v2++;
              *v18++ = *(_BYTE *)(v30 + 4 * v19);
              LODWORD(v14) = v14 - 1;
            }
            while ( (_DWORD)v14 );
            v8 = v34;
            v5 = v28;
          }
          v12 = v31;
          v20 = &v2[v17];
          v11 += v17;
          v7 = v33;
        }
        v4 = v16 + v15;
        v21 = v16;
        v10 = v27;
        v2 = &v20[v21];
      }
    }
    else
    {
      --v6;
      v3 += v32;
      v11 = v10;
      if ( v6 < v5 )
      {
        *((_DWORD *)a1 + 34) = v10;
LABEL_33:
        *((_QWORD *)a1 + 14) = v3;
        *((_QWORD *)a1 + 13) = v2;
        *((_DWORD *)a1 + 31) = v4;
        *((_DWORD *)a1 + 33) = v6;
        return 1LL;
      }
    }
  }
}
