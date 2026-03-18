/*
 * XREFs of ?BltLnkSrcCopyMsk1@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x140343AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?BltLnkReadPat1@@YAXPEAEKPEBEKKKK@Z @ 0x140204ED0 (-BltLnkReadPat1@@YAXPEAEKPEBEKKKK@Z.c)
 */

void __fastcall BltLnkSrcCopyMsk1(
        struct BLTINFO *a1,
        struct _BLTLNK_MASKINFO *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  int v4; // ebp
  __int64 v6; // rcx
  unsigned __int8 *v7; // r10
  const unsigned __int8 *v8; // r14
  __int64 v10; // r8
  int v11; // eax
  int v12; // edi
  unsigned int v13; // edx
  const unsigned __int8 *v14; // r15
  int v15; // ecx
  unsigned int v16; // eax
  _BYTE *v17; // rbx
  int v18; // r12d
  char v19; // r8
  char *v20; // rdx
  __int64 v21; // r15
  char v22; // cl
  int v23; // r9d
  char v24; // al
  char v25; // r8
  char *v26; // rdx
  char v27; // cl
  int v28; // r9d
  char v29; // al
  int v30; // [rsp+40h] [rbp-68h]
  __int64 v31; // [rsp+48h] [rbp-60h]
  __int64 v32; // [rsp+50h] [rbp-58h]
  char v33; // [rsp+B0h] [rbp+8h]
  unsigned int v34; // [rsp+B8h] [rbp+10h]

  v4 = *((_DWORD *)a2 + 5);
  v6 = *((_QWORD *)a1 + 1);
  v7 = a4;
  v8 = *(const unsigned __int8 **)a2;
  v32 = v6;
  v10 = *((_QWORD *)a1 + 2);
  v11 = *((_DWORD *)a1 + 8);
  v31 = v10;
  while ( v11 )
  {
    v12 = *((_DWORD *)a1 + 7);
    v13 = *((_DWORD *)a1 + 12) & 7;
    v14 = (const unsigned __int8 *)(v6 + ((__int64)*((int *)a1 + 12) >> 3));
    v30 = v11 - 1;
    v15 = *((_DWORD *)a1 + 14);
    v16 = *((_DWORD *)a2 + 7);
    v17 = (_BYTE *)(v10 + ((__int64)v15 >> 3));
    v33 = v15;
    v18 = v15 & 7;
    v34 = v16;
    if ( v13 != v18 )
    {
      BltLnkReadPat1(v7, v15 & 7, v14, v12, v13, v12);
      LOBYTE(v15) = v33;
      v16 = v34;
      v14 = a4;
    }
    BltLnkReadPat1(a3, v15, v8, *((_DWORD *)a2 + 6), v16, v12);
    if ( *((_BYTE *)a2 + 36) )
    {
      v25 = v33;
      *a3 |= -1 << (8 - v18);
      a3[(unsigned __int64)(unsigned int)(v18 + v12) >> 3] |= 255 >> ((v12 + v33) & 7);
      if ( v12 <= 0 )
        goto LABEL_26;
      v26 = (char *)(a3 - v17);
      while ( 2 )
      {
        v27 = v26[(_QWORD)v17];
        v28 = v12;
        if ( !v27 )
        {
          v29 = *v14;
          goto LABEL_22;
        }
        if ( v27 != -1 )
        {
          v29 = *v17 & v27 | *v14 & ~v26[(_QWORD)v17];
LABEL_22:
          *v17 = v29;
        }
        ++v14;
        ++v17;
        v12 -= 8;
        if ( (v25 & 7) != 0 )
        {
          v12 = v28 + (v25 & 7) - 8;
          v25 = 0;
        }
        if ( v12 <= 0 )
          goto LABEL_26;
        continue;
      }
    }
    if ( v12 > 0 )
    {
      v19 = v33;
      v20 = (char *)(a3 - v17);
      v21 = v14 - v17;
      while ( 1 )
      {
        v22 = v20[(_QWORD)v17];
        v23 = v12;
        if ( v22 == -1 )
          break;
        if ( v22 )
        {
          v24 = *v17 & ~v22 | v22 & v17[v21];
          goto LABEL_11;
        }
LABEL_12:
        ++v17;
        v12 -= 8;
        if ( (v19 & 7) != 0 )
        {
          v12 = v23 + (v19 & 7) - 8;
          v19 = 0;
        }
        if ( v12 <= 0 )
          goto LABEL_26;
      }
      v24 = v17[v21];
LABEL_11:
      *v17 = v24;
      goto LABEL_12;
    }
LABEL_26:
    v10 = *((int *)a1 + 11) + v31;
    v6 = *((int *)a1 + 10) + v32;
    v31 = v10;
    v32 = v6;
    if ( *((int *)a1 + 9) <= 0 )
    {
      if ( v4 )
      {
        --v4;
        v8 += *((int *)a2 + 8);
      }
      else
      {
        v4 = *((_DWORD *)a2 + 4) - 1;
        v8 = (const unsigned __int8 *)(*((_QWORD *)a2 + 1) + *((_DWORD *)a2 + 8) * v4);
      }
    }
    else
    {
      ++v4;
      v8 += *((int *)a2 + 8);
      if ( v4 >= *((_DWORD *)a2 + 4) )
      {
        v8 = (const unsigned __int8 *)*((_QWORD *)a2 + 1);
        v4 = 0;
      }
    }
    v11 = v30;
    v7 = a4;
  }
}
