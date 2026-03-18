/*
 * XREFs of ?bSrcCopySRLE4D24@@YAHPEAUBLTINFO@@@Z @ 0x14033D080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE4D24(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r10
  unsigned __int8 *v2; // r11
  __int64 v3; // rdi
  unsigned int v4; // ebp
  int v5; // r15d
  int v6; // r14d
  int v7; // r12d
  int v8; // edx
  int v9; // r9d
  unsigned int v10; // ecx
  __int64 v11; // r13
  __int64 result; // rax
  unsigned int v13; // r8d
  unsigned __int8 *v14; // r11
  unsigned __int64 v15; // rbx
  unsigned int v16; // ebp
  BOOL v17; // r13d
  __int64 v18; // r15
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  int v21; // r8d
  __int64 v22; // rax
  int v23; // r9d
  int v24; // eax
  unsigned int v25; // ebx
  __int64 v26; // r10
  __int64 v27; // r14
  unsigned int v28; // ecx
  int v29; // r8d
  int v30; // edx
  __int64 v31; // r15
  __int64 v32; // r14
  __int64 v33; // r10
  int v34; // r8d
  unsigned int v35; // edx
  unsigned __int8 *v36; // r11
  int v37; // eax
  unsigned __int8 *v38; // r11
  int v39; // ecx
  int v40; // eax
  __int64 v41; // r15
  __int64 v42; // rcx
  int v43; // r9d
  unsigned int v44; // r8d
  int v45; // ebx
  unsigned int v46; // r13d
  __int64 v47; // r10
  __int64 v48; // r12
  unsigned int v49; // r11d
  unsigned int v50; // r13d
  __int64 v51; // r15
  __int64 v52; // r12
  __int64 v53; // r10
  int v54; // [rsp+0h] [rbp-88h]
  int v55; // [rsp+8h] [rbp-80h]
  int v56; // [rsp+Ch] [rbp-7Ch]
  int v57; // [rsp+10h] [rbp-78h]
  int v58; // [rsp+14h] [rbp-74h]
  __int64 v59; // [rsp+18h] [rbp-70h]
  int v60; // [rsp+20h] [rbp-68h]
  int v61; // [rsp+28h] [rbp-60h]
  char v62; // [rsp+34h] [rbp-54h]
  unsigned __int8 *v63; // [rsp+38h] [rbp-50h]
  int v65; // [rsp+98h] [rbp+10h]
  unsigned int v66; // [rsp+A0h] [rbp+18h]
  unsigned int v67; // [rsp+A8h] [rbp+20h]
  int v68; // [rsp+A8h] [rbp+20h]

  v1 = a1;
  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 30);
  v5 = *((_DWORD *)a1 + 23);
  v6 = *((_DWORD *)a1 + 15);
  v7 = *((_DWORD *)a1 + 22);
  v8 = *((_DWORD *)a1 + 24);
  v9 = *((_DWORD *)a1 + 32);
  v55 = *((_DWORD *)a1 + 11);
  v57 = v7;
  v54 = v8;
  v58 = v5;
  v10 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v66 = v10;
  v65 = v6;
  v11 = *(_QWORD *)(*(_QWORD *)v1 + 16LL);
  v56 = *((_DWORD *)v1 + 25);
  v60 = *((_DWORD *)v1 + 14);
  v59 = v11;
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
    v63 = v2;
    if ( v13 )
    {
      if ( v6 < v56 && v9 < v8 && (int)(v13 + v9) > v7 )
      {
        if ( v9 < v7 )
        {
          v40 = v7 - v9;
          v9 = v7;
          v13 -= v40;
        }
        if ( (int)(v13 + v9) <= v8 )
        {
          v68 = 0;
        }
        else
        {
          v68 = v13 - v8 + v9;
          v13 = v8 - v9;
        }
        v41 = (unsigned int)(3 * v9);
        v61 = v13 & 1;
        v42 = v15 & 0xF;
        v43 = v13 + v9;
        v44 = v13 >> 1;
        v45 = *(_DWORD *)(v11 + 4 * (v15 >> 4));
        v46 = *(_DWORD *)(v11 + 4 * v42);
        v62 = v46;
        if ( v44 )
        {
          v47 = (unsigned int)(v41 + 2);
          v48 = (unsigned int)(v41 + 1);
          v49 = v46 >> 8;
          v50 = HIWORD(v46);
          do
          {
            *(_BYTE *)(v41 + v3) = v45;
            v51 = (unsigned int)(v41 + 3);
            *(_BYTE *)(v48 + v3) = BYTE1(v45);
            v52 = (unsigned int)(v48 + 3);
            *(_BYTE *)(v47 + v3) = BYTE2(v45);
            v53 = (unsigned int)(v47 + 3);
            *(_BYTE *)(v51 + v3) = v62;
            v41 = (unsigned int)(v51 + 3);
            *(_BYTE *)(v52 + v3) = v49;
            v48 = (unsigned int)(v52 + 3);
            *(_BYTE *)(v53 + v3) = v50;
            v47 = (unsigned int)(v53 + 3);
            --v44;
          }
          while ( v44 );
          v1 = a1;
          v2 = v63;
          v6 = v65;
          v7 = v57;
        }
        if ( v61 )
        {
          *(_BYTE *)(v41 + v3) = v45;
          *(_BYTE *)((unsigned int)(v41 + 1) + v3) = BYTE1(v45);
          *(_BYTE *)((unsigned int)(v41 + 2) + v3) = BYTE2(v45);
        }
        v9 = v68 + v43;
        v8 = v54;
        v5 = v58;
LABEL_50:
        v11 = v59;
        goto LABEL_51;
      }
      v9 += v13;
    }
    else if ( (_DWORD)v15 )
    {
      if ( (_DWORD)v15 == 1 )
        return 0LL;
      if ( (_DWORD)v15 != 2 )
      {
        v16 = ((unsigned int)(v15 + 1) >> 1) + v4;
        if ( v16 > v66 )
          return 0LL;
        v17 = (((_DWORD)v15 + 1) & 2) != 0;
        if ( v6 >= v56 || v9 >= v8 || (int)v15 + v9 <= v7 )
        {
          v9 += v15;
          v36 = &v2[(unsigned __int64)(unsigned int)(v15 + 1) >> 1];
        }
        else
        {
          if ( v9 >= v7 )
          {
            v18 = (unsigned int)(3 * v9);
          }
          else
          {
            v18 = (unsigned int)(3 * v7);
            v19 = (unsigned int)(v7 - v9);
            v9 = v7;
            LODWORD(v15) = v15 - v19;
            v2 += v19 >> 1;
            if ( (v19 & 1) != 0 )
            {
              v9 = v7 + 1;
              v20 = *v2++ & 0xF;
              v21 = *(_DWORD *)(v59 + 4 * v20);
              *(_BYTE *)(v18 + v3) = v21;
              *(_BYTE *)((unsigned int)(v18 + 1) + v3) = BYTE1(v21);
              v22 = (unsigned int)(v18 + 2);
              v8 = v54;
              v18 = (unsigned int)(v18 + 3);
              LODWORD(v15) = v15 - 1;
              *(_BYTE *)(v22 + v3) = BYTE2(v21);
            }
          }
          if ( (int)v15 + v9 <= v8 )
          {
            v67 = 0;
          }
          else
          {
            v67 = v9 + v15 - v8;
            LODWORD(v15) = v8 - v9;
          }
          v23 = v15 + v9;
          v24 = v15 & 1;
          v25 = (unsigned int)v15 >> 1;
          if ( v25 )
          {
            v26 = (unsigned int)(v18 + 2);
            v27 = (unsigned int)(v18 + 1);
            do
            {
              v28 = *v2++;
              v29 = *(_DWORD *)(v59 + 4LL * (v28 & 0xF));
              v30 = *(_DWORD *)(v59 + 4 * ((unsigned __int64)v28 >> 4));
              *(_BYTE *)(v18 + v3) = v30;
              v31 = (unsigned int)(v18 + 3);
              *(_BYTE *)(v27 + v3) = BYTE1(v30);
              v32 = (unsigned int)(v27 + 3);
              *(_BYTE *)(v26 + v3) = BYTE2(v30);
              v33 = (unsigned int)(v26 + 3);
              *(_BYTE *)(v31 + v3) = v29;
              v18 = (unsigned int)(v31 + 3);
              *(_BYTE *)(v32 + v3) = BYTE1(v29);
              v27 = (unsigned int)(v32 + 3);
              *(_BYTE *)(v33 + v3) = BYTE2(v29);
              v26 = (unsigned int)(v33 + 3);
              --v25;
            }
            while ( v25 );
            v1 = a1;
            v6 = v65;
            v7 = v57;
          }
          if ( v24 )
          {
            v34 = *(_DWORD *)(v59 + 4 * ((unsigned __int64)*v2 >> 4));
            *(_BYTE *)(v18 + v3) = v34;
            *(_BYTE *)((unsigned int)(v18 + 1) + v3) = BYTE1(v34);
            v35 = v67;
            *(_BYTE *)((unsigned int)(v18 + 2) + v3) = BYTE2(v34);
            v36 = &v2[((unsigned __int64)v67 >> 1) + 1];
          }
          else
          {
            v35 = v67;
            v36 = &v2[(unsigned __int64)(v67 + 1) >> 1];
          }
          v5 = v58;
          v9 = v35 + v23;
          v8 = v54;
        }
        v4 = v17 + v16;
        v2 = &v36[v17];
        goto LABEL_50;
      }
      v4 += 2;
      if ( v4 > v10 )
        return 0LL;
      v37 = *v2;
      v38 = v2 + 1;
      v9 += v37;
      v39 = *v38;
      v2 = v38 + 1;
      v6 -= v39;
      v65 = v6;
      v3 += v55 * v39;
      if ( v6 < v5 )
      {
        *((_DWORD *)v1 + 34) = v9;
LABEL_32:
        *((_QWORD *)v1 + 14) = v3;
        result = 1LL;
        *((_QWORD *)v1 + 13) = v2;
        *((_DWORD *)v1 + 31) = v4;
        *((_DWORD *)v1 + 33) = v6;
        return result;
      }
LABEL_51:
      v10 = v66;
    }
    else
    {
      --v6;
      v3 += v55;
      v65 = v6;
      v9 = v60;
      if ( v6 < v5 )
      {
        *((_DWORD *)v1 + 34) = v60;
        goto LABEL_32;
      }
    }
  }
}
