/*
 * XREFs of ?bSrcCopySRLE4D24@@YAHPEAUBLTINFO@@@Z @ 0x14031A0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE4D24(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r10
  int v2; // r8d
  int v3; // r12d
  int v4; // r13d
  int v5; // r14d
  unsigned __int8 *v6; // r11
  __int64 v7; // rdi
  unsigned int v8; // ebp
  int v9; // r9d
  unsigned int v10; // r15d
  int v11; // eax
  int v12; // ecx
  __int64 result; // rax
  unsigned int v14; // edx
  unsigned __int8 *v15; // r11
  unsigned __int64 v16; // rbx
  unsigned int v17; // ebp
  BOOL v18; // ecx
  __int64 v19; // r15
  unsigned int v20; // ecx
  __int64 v21; // rax
  int v22; // r8d
  __int64 v23; // rax
  unsigned int v24; // r13d
  int v25; // r9d
  int v26; // eax
  unsigned int v27; // ebx
  __int64 v28; // r10
  __int64 v29; // r12
  unsigned __int64 v30; // rax
  int v31; // edx
  int v32; // r8d
  __int64 v33; // r15
  __int64 v34; // r12
  __int64 v35; // r10
  int v36; // r8d
  unsigned __int64 v37; // r11
  int v38; // eax
  unsigned __int8 *v39; // r11
  int v40; // ecx
  int v41; // eax
  int v42; // r8d
  __int64 v43; // r15
  __int64 v44; // rcx
  int v45; // r9d
  unsigned int v46; // edx
  int v47; // ebx
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // r13
  __int64 v51; // r15
  __int64 v52; // r13
  __int64 v53; // rcx
  int v54; // [rsp+0h] [rbp-88h]
  int v55; // [rsp+4h] [rbp-84h]
  BOOL v56; // [rsp+8h] [rbp-80h]
  int v57; // [rsp+Ch] [rbp-7Ch]
  int v58; // [rsp+10h] [rbp-78h]
  int v59; // [rsp+14h] [rbp-74h]
  unsigned int v60; // [rsp+18h] [rbp-70h]
  __int64 v61; // [rsp+20h] [rbp-68h]
  int v62; // [rsp+34h] [rbp-54h]
  int v64; // [rsp+98h] [rbp+10h]
  int v65; // [rsp+A0h] [rbp+18h]
  int v66; // [rsp+A8h] [rbp+20h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 23);
  v3 = *((_DWORD *)a1 + 22);
  v4 = *((_DWORD *)a1 + 24);
  v5 = *((_DWORD *)a1 + 15);
  v6 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v7 = *((_QWORD *)a1 + 2);
  v8 = *((_DWORD *)a1 + 30);
  v9 = *((_DWORD *)a1 + 32);
  v57 = *((_DWORD *)a1 + 11);
  v58 = v3;
  v66 = v4;
  v59 = v2;
  v10 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v60 = v10;
  v65 = v5;
  v61 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v11 = *((_DWORD *)a1 + 25);
  v12 = *((_DWORD *)a1 + 14);
  v55 = v12;
  v64 = v11;
  if ( v5 < v2 )
    return 1LL;
  while ( 1 )
  {
    v8 += 2;
    if ( v8 > v10 )
      return 0LL;
    v14 = *v6;
    v15 = v6 + 1;
    v16 = *v15;
    v6 = v15 + 1;
    if ( v14 )
    {
      if ( v5 < v11 && v9 < v4 )
      {
        if ( (int)(v14 + v9) > v3 )
        {
          if ( v9 < v3 )
          {
            v41 = v3 - v9;
            v9 = v3;
            v14 -= v41;
          }
          if ( (int)(v14 + v9) <= v4 )
          {
            v42 = 0;
          }
          else
          {
            v42 = v9 + v14 - v4;
            v14 = v4 - v9;
          }
          v43 = (unsigned int)(3 * v9);
          v44 = v16 & 0xF;
          v62 = v14 & 1;
          v45 = v14 + v9;
          v46 = v14 >> 1;
          v47 = *(_DWORD *)(v61 + 4 * (v16 >> 4));
          v48 = *(_DWORD *)(v61 + 4 * v44);
          if ( v46 )
          {
            v49 = (unsigned int)(v43 + 2);
            v50 = (unsigned int)(v43 + 1);
            do
            {
              *(_BYTE *)(v43 + v7) = v47;
              v51 = (unsigned int)(v43 + 3);
              *(_BYTE *)(v50 + v7) = BYTE1(v47);
              v52 = (unsigned int)(v50 + 3);
              *(_BYTE *)(v49 + v7) = BYTE2(v47);
              v53 = (unsigned int)(v49 + 3);
              *(_BYTE *)(v51 + v7) = v48;
              v43 = (unsigned int)(v51 + 3);
              *(_BYTE *)(v52 + v7) = BYTE1(v48);
              v50 = (unsigned int)(v52 + 3);
              *(_BYTE *)(v53 + v7) = BYTE2(v48);
              v49 = (unsigned int)(v53 + 3);
              --v46;
            }
            while ( v46 );
            v1 = a1;
            v5 = v65;
            v3 = v58;
            v4 = v66;
          }
          if ( v62 )
          {
            *(_BYTE *)(v43 + v7) = v47;
            *(_BYTE *)((unsigned int)(v43 + 1) + v7) = BYTE1(v47);
            *(_BYTE *)((unsigned int)(v43 + 2) + v7) = BYTE2(v47);
          }
          v10 = v60;
          v9 = v42 + v45;
          v2 = v59;
LABEL_50:
          v12 = v55;
          goto LABEL_51;
        }
        v11 = v64;
      }
      v9 += v14;
    }
    else
    {
      if ( (_DWORD)v16 )
      {
        if ( (_DWORD)v16 == 1 )
          return 0LL;
        if ( (_DWORD)v16 == 2 )
        {
          v8 += 2;
          if ( v8 > v10 )
            return 0LL;
          v38 = *v6;
          v39 = v6 + 1;
          v9 += v38;
          v40 = *v39;
          v6 = v39 + 1;
          v5 -= v40;
          v65 = v5;
          v7 += v40 * v57;
          if ( v5 < v2 )
          {
            *((_DWORD *)v1 + 34) = v9;
LABEL_32:
            *((_QWORD *)v1 + 14) = v7;
            result = 1LL;
            *((_QWORD *)v1 + 13) = v6;
            *((_DWORD *)v1 + 31) = v8;
            *((_DWORD *)v1 + 33) = v5;
            return result;
          }
        }
        else
        {
          v17 = ((unsigned int)(v16 + 1) >> 1) + v8;
          if ( v17 > v10 )
            return 0LL;
          v18 = (((_DWORD)v16 + 1) & 2) != 0;
          v56 = v18;
          if ( v5 >= v64 || v9 >= v4 || (int)v16 + v9 <= v3 )
          {
            v9 += v16;
            v37 = (unsigned __int64)&v6[(unsigned __int64)(unsigned int)(v16 + 1) >> 1];
          }
          else
          {
            if ( v9 >= v3 )
            {
              v19 = (unsigned int)(3 * v9);
            }
            else
            {
              v19 = (unsigned int)(3 * v3);
              v20 = v3 - v9;
              v9 = v3;
              LODWORD(v16) = v16 - v20;
              v6 += (unsigned __int64)v20 >> 1;
              if ( (v20 & 1) != 0 )
              {
                v9 = v3 + 1;
                v21 = *v6++ & 0xF;
                v22 = *(_DWORD *)(v61 + 4 * v21);
                *(_BYTE *)(v19 + v7) = v22;
                *(_BYTE *)((unsigned int)(v19 + 1) + v7) = BYTE1(v22);
                v23 = (unsigned int)(v19 + 2);
                v19 = (unsigned int)(v19 + 3);
                *(_BYTE *)(v23 + v7) = BYTE2(v22);
                LODWORD(v16) = v16 - 1;
              }
            }
            if ( (int)v16 + v9 <= v4 )
            {
              v24 = 0;
            }
            else
            {
              v24 = v9 + v16 - v66;
              LODWORD(v16) = v66 - v9;
            }
            v25 = v16 + v9;
            v26 = v16 & 1;
            v27 = (unsigned int)v16 >> 1;
            v54 = v26;
            if ( v27 )
            {
              v28 = (unsigned int)(v19 + 2);
              v29 = (unsigned int)(v19 + 1);
              do
              {
                v30 = *v6++;
                v31 = *(_DWORD *)(v61 + 4 * (v30 >> 4));
                v32 = *(_DWORD *)(v61 + 4 * (v30 & 0xF));
                *(_BYTE *)(v19 + v7) = v31;
                *(_BYTE *)(v29 + v7) = BYTE1(v31);
                *(_BYTE *)(v28 + v7) = BYTE2(v31);
                v33 = (unsigned int)(v19 + 3);
                v34 = (unsigned int)(v29 + 3);
                v35 = (unsigned int)(v28 + 3);
                *(_BYTE *)(v33 + v7) = v32;
                v19 = (unsigned int)(v33 + 3);
                *(_BYTE *)(v35 + v7) = BYTE2(v32);
                v28 = (unsigned int)(v35 + 3);
                *(_BYTE *)(v34 + v7) = BYTE1(v32);
                v29 = (unsigned int)(v34 + 3);
                --v27;
              }
              while ( v27 );
              v1 = a1;
              v5 = v65;
              v3 = v58;
              v26 = v54;
            }
            if ( v26 )
            {
              v36 = *(_DWORD *)(v61 + 4 * ((unsigned __int64)*v6 >> 4));
              *(_BYTE *)(v19 + v7) = v36;
              *(_BYTE *)((unsigned int)(v19 + 1) + v7) = BYTE1(v36);
              *(_BYTE *)((unsigned int)(v19 + 2) + v7) = BYTE2(v36);
              v37 = (unsigned __int64)&v6[((unsigned __int64)v24 >> 1) + 1];
            }
            else
            {
              v37 = (unsigned __int64)&v6[(unsigned __int64)(v24 + 1) >> 1];
            }
            v18 = v56;
            v9 = v24 + v25;
            v4 = v66;
            v2 = v59;
            v10 = v60;
          }
          v8 = v18 + v17;
          v6 = (unsigned __int8 *)(v18 + v37);
        }
        goto LABEL_50;
      }
      --v5;
      v7 += v57;
      v65 = v5;
      v9 = v12;
      if ( v5 < v2 )
      {
        *((_DWORD *)v1 + 34) = v12;
        goto LABEL_32;
      }
LABEL_51:
      v11 = v64;
    }
  }
}
