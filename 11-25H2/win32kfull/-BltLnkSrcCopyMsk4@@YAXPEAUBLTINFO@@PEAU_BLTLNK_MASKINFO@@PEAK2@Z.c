/*
 * XREFs of ?BltLnkSrcCopyMsk4@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x140321440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkSrcCopyMsk4(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  __int64 v4; // r12
  __int64 v6; // rcx
  int v8; // ebp
  __int64 v9; // rbx
  int v10; // r15d
  unsigned int v11; // r11d
  int v12; // esi
  unsigned int v13; // r13d
  char *v14; // r10
  unsigned __int8 *v15; // rdi
  char v16; // r8
  unsigned __int8 v17; // dl
  char v18; // cl
  int v19; // esi
  int v20; // r15d
  unsigned int v21; // edx
  char v22; // r12
  unsigned int v23; // r11d
  char v24; // r8
  unsigned __int8 v25; // al
  char v26; // cl
  char v27; // cl
  char v28; // cl
  unsigned __int8 v29; // dl
  char v30; // cl
  unsigned int v31; // eax
  unsigned __int8 v32; // cl
  char v33; // al
  char v34; // al
  int v35; // ecx
  int v36; // eax
  unsigned __int64 v37; // [rsp+0h] [rbp-48h]
  __int64 v38; // [rsp+8h] [rbp-40h]
  int v39; // [rsp+50h] [rbp+8h]
  __int64 v40; // [rsp+58h] [rbp+10h]

  v4 = *((_QWORD *)a1 + 1);
  v6 = *((_QWORD *)a1 + 2);
  v8 = *((_DWORD *)a2 + 5);
  v9 = *(_QWORD *)a2;
  v10 = *((_DWORD *)a1 + 8);
  v38 = v4;
  v40 = v6;
  while ( v10 )
  {
    --v10;
    v11 = *((_DWORD *)a2 + 7);
    v12 = *((_DWORD *)a1 + 12);
    v13 = *((_DWORD *)a1 + 7);
    v14 = (char *)(v6 + ((__int64)*((int *)a1 + 14) >> 1));
    v39 = v10;
    v15 = (unsigned __int8 *)(v4 + ((__int64)v12 >> 1));
    v16 = (*((_BYTE *)a2 + 36) ^ *(_BYTE *)(((unsigned __int64)v11 >> 3) + v9)) << (v11 & 7);
    if ( (*((_DWORD *)a1 + 14) & 1) != 0 )
    {
      if ( v16 < 0 )
      {
        v17 = *v15;
        v18 = *v14;
        if ( (v12 & 1) != 0 )
          *v14 = v18 ^ (v17 ^ v18) & 0xF;
        else
          *v14 = (v17 >> 4) | v18 & 0xF0;
      }
      ++v14;
      LOBYTE(v12) = v12 + 1;
      if ( (v12 & 1) == 0 )
        ++v15;
      v16 *= 2;
      ++v11;
      --v13;
    }
    v19 = v12 & 1;
    if ( v13 >= 2 )
    {
      v37 = (unsigned __int64)v13 >> 1;
      while ( 1 )
      {
        v20 = *((_DWORD *)a2 + 6);
        v21 = 0;
        if ( v11 != v20 )
          v21 = v11;
        if ( (v21 & 7) == 0 )
          v16 = *((_BYTE *)a2 + 36) ^ *(_BYTE *)(((unsigned __int64)v21 >> 3) + v9);
        v22 = v16;
        v23 = v21 + 1;
        v24 = 2 * v16;
        if ( v21 + 1 == v20 )
        {
          v23 = 0;
        }
        else if ( (v23 & 7) != 0 )
        {
          goto LABEL_20;
        }
        v24 = *((_BYTE *)a2 + 36) ^ *(_BYTE *)(((unsigned __int64)v23 >> 3) + v9);
LABEL_20:
        if ( v22 >= 0 )
        {
          if ( v24 < 0 )
          {
            v29 = *v15;
            v30 = *v14;
            if ( v19 )
              *v14 = (v29 >> 4) | v30 & 0xF0;
            else
              *v14 = v30 ^ (v29 ^ v30) & 0xF;
          }
          goto LABEL_34;
        }
        if ( v24 >= 0 )
        {
          v25 = *v15;
          v28 = *v14;
          if ( !v19 )
          {
            v27 = v25 ^ (v25 ^ v28) & 0xF;
            goto LABEL_29;
          }
          v26 = v28 & 0xF;
        }
        else
        {
          if ( !v19 )
          {
            v27 = *v15;
            goto LABEL_29;
          }
          v25 = *v15;
          v26 = v15[1] >> 4;
        }
        v27 = (16 * v25) | v26;
LABEL_29:
        *v14 = v27;
LABEL_34:
        v16 = 2 * v24;
        v11 = v23 + 1;
        ++v14;
        ++v15;
        v13 -= 2;
        if ( !--v37 )
        {
          v10 = v39;
          v4 = v38;
          break;
        }
      }
    }
    if ( v13 )
    {
      v31 = 0;
      if ( v11 != *((_DWORD *)a2 + 6) )
        v31 = v11;
      if ( (v31 & 7) == 0 )
        v16 = *((_BYTE *)a2 + 36) ^ *(_BYTE *)(((unsigned __int64)v31 >> 3) + v9);
      if ( v16 < 0 )
      {
        v32 = *v15;
        v33 = *v14;
        if ( v19 )
          v34 = (16 * v32) | v33 & 0xF;
        else
          v34 = v32 ^ (v32 ^ v33) & 0xF;
        *v14 = v34;
      }
    }
    v6 = *((int *)a1 + 11) + v40;
    v4 += *((int *)a1 + 10);
    v40 = v6;
    v38 = v4;
    if ( *((int *)a1 + 9) <= 0 )
    {
      if ( v8 )
      {
        --v8;
        v9 += *((int *)a2 + 8);
      }
      else
      {
        v8 = *((_DWORD *)a2 + 4) - 1;
        v9 = *((_QWORD *)a2 + 1) + *((_DWORD *)a2 + 8) * v8;
      }
    }
    else
    {
      v35 = v8 + 1;
      v9 += *((int *)a2 + 8);
      v36 = *((_DWORD *)a2 + 4);
      if ( v8 + 1 >= v36 )
        v9 = *((_QWORD *)a2 + 1);
      v8 = 0;
      if ( v35 < v36 )
        v8 = v35;
      v6 = v40;
    }
  }
}
