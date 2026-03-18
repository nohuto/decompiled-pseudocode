/*
 * XREFs of ?BltLnkSrcCopyMsk4@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x140343D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkSrcCopyMsk4(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  __int64 v4; // r13
  __int64 v6; // rcx
  int v8; // esi
  __int64 v9; // r11
  int v10; // r12d
  unsigned int v11; // ebx
  int v12; // r14d
  unsigned int v13; // r15d
  char *v14; // r10
  unsigned __int8 *v15; // rdi
  char v16; // r8
  char v17; // cl
  unsigned __int8 v18; // dl
  int v19; // r14d
  int v20; // r12d
  unsigned int v21; // edx
  unsigned int v22; // r13d
  char v23; // bl
  char v24; // r8
  unsigned __int8 v25; // cl
  char v26; // al
  char v27; // al
  char v28; // al
  char v29; // al
  unsigned __int8 v30; // dl
  unsigned int v31; // eax
  char v32; // al
  unsigned __int8 v33; // cl
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
        v17 = *v14;
        v18 = *v15;
        if ( (v12 & 1) != 0 )
          *v14 = v17 ^ (v18 ^ v17) & 0xF;
        else
          *v14 = (v18 >> 4) | v17 & 0xF0;
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
        v22 = 0;
        v23 = v16;
        v24 = 2 * v16;
        if ( v21 + 1 != v20 )
          v22 = v21 + 1;
        if ( (v22 & 7) == 0 )
          v24 = *((_BYTE *)a2 + 36) ^ *(_BYTE *)(((unsigned __int64)v22 >> 3) + v9);
        if ( v23 < 0 )
          break;
        if ( v24 < 0 )
        {
          v25 = *v14;
          v30 = *v15;
          if ( !v19 )
          {
            v29 = v30 ^ v25;
LABEL_33:
            v27 = v25 ^ v29 & 0xF;
LABEL_34:
            *v14 = v27;
            goto LABEL_35;
          }
          *v14 = (v30 >> 4) | v25 & 0xF0;
        }
LABEL_35:
        v16 = 2 * v24;
        v11 = v22 + 1;
        ++v14;
        ++v15;
        v13 -= 2;
        if ( !--v37 )
        {
          v10 = v39;
          v4 = v38;
          goto LABEL_37;
        }
      }
      v25 = *v15;
      if ( v24 >= 0 )
      {
        v28 = *v14;
        if ( !v19 )
        {
          v29 = v25 ^ v28;
          goto LABEL_33;
        }
        v26 = v28 & 0xF;
      }
      else
      {
        if ( !v19 )
        {
          v27 = *v15;
          goto LABEL_34;
        }
        v26 = v15[1] >> 4;
      }
      v27 = (16 * v25) | v26;
      goto LABEL_34;
    }
LABEL_37:
    if ( v13 )
    {
      v31 = 0;
      if ( v11 != *((_DWORD *)a2 + 6) )
        v31 = v11;
      if ( (v31 & 7) == 0 )
        v16 = *((_BYTE *)a2 + 36) ^ *(_BYTE *)(((unsigned __int64)v31 >> 3) + v9);
      if ( v16 < 0 )
      {
        v32 = *v14;
        v33 = *v15;
        if ( v19 )
          v34 = (16 * v33) | v32 & 0xF;
        else
          v34 = v33 ^ (v33 ^ v32) & 0xF;
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
