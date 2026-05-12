/*
 * XREFs of sub_140180F28 @ 0x140180F28
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140180F28(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // ebx
  int *v4; // r14
  size_t v7; // rdx
  int v8; // esi
  unsigned int v9; // r15d
  int *v10; // r13
  __int64 v11; // rax
  int v12; // ecx
  int v13; // r12d
  int v14; // ecx
  int v15; // ecx
  const wchar_t *v16; // rax
  _OWORD *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  size_t v20; // r8
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  _OWORD *v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int16 v26; // ax
  bool v27; // zf
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  int *v30; // rax
  const EVENT_DESCRIPTOR *v31; // rdx
  unsigned __int64 v32; // rdx
  char v33; // r12
  _BYTE *v34; // r9
  unsigned __int8 v35; // r10
  char v36; // r11
  char v37; // r14
  char v38; // r13
  char *v39; // r14
  unsigned int v40; // r8d
  unsigned int *v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // r15
  char v44; // cl
  char v45; // r8
  _BYTE *v46; // rax
  unsigned int v47; // eax
  char v48; // al
  int v50; // [rsp+20h] [rbp-59h]
  char v51; // [rsp+60h] [rbp-19h]
  char v52; // [rsp+61h] [rbp-18h]
  const wchar_t *v53; // [rsp+68h] [rbp-11h]
  int v54; // [rsp+68h] [rbp-11h]
  unsigned __int16 v55; // [rsp+70h] [rbp-9h]
  unsigned __int64 v57; // [rsp+78h] [rbp-1h]
  __int128 Src; // [rsp+80h] [rbp+7h] BYREF
  __int16 v59; // [rsp+90h] [rbp+17h]

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v4 = *(int **)(a2 + 24);
  v7 = *(unsigned int *)(v2 + 8);
  v59 = 0;
  v8 = 0;
  v9 = 0;
  v53 = L"Failure found while processing operation parameters";
  v10 = 0LL;
  v11 = -1LL;
  Src = xmmword_14014E010;
  do
    ++v11;
  while ( *((_WORD *)&Src + v11) );
  v55 = v11;
  *(_QWORD *)&Src = 0x7300790073002ELL;
  WORD4(Src) = 0;
  if ( *(_DWORD *)(v2 + 16) >= 0x18u )
  {
    if ( *v4 != 24 )
    {
      v8 = -1073741637;
      goto LABEL_45;
    }
    v12 = v4[2];
    v13 = 2;
    if ( (unsigned int)(v12 - 1) > 2 )
    {
LABEL_8:
      v8 = -1073741811;
      goto LABEL_45;
    }
    if ( (unsigned int)v7 < 8 )
    {
      v8 = -1073741789;
      goto LABEL_45;
    }
    v14 = v12 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
      {
        v9 = 24;
        goto LABEL_18;
      }
      if ( v15 != 1 )
        goto LABEL_8;
      v13 = 3;
    }
    else
    {
      v13 = 1;
    }
    v9 = 352;
    v10 = v4 + 6;
LABEL_18:
    if ( (unsigned int)v7 < v9 )
    {
      memset_0(v4, 0, v7);
      v4[1] = v9;
      v9 = 8;
      *v4 = 352;
      goto LABEL_45;
    }
    if ( *(_BYTE *)(a2 + 64) )
    {
      v8 = -1073741790;
      v16 = L"Access denied, operation not supported from user mode";
    }
    else if ( (*(_DWORD *)(a1 + 1952) & 0x40) != 0 )
    {
      if ( v13 == 1 || (unsigned int)(v13 - 2) < 2 )
        goto LABEL_28;
      v8 = -1073741811;
      v16 = L"Invalid operation";
    }
    else
    {
      v8 = -1073741637;
      v16 = L"Bypass IO not supported";
    }
    v53 = v16;
LABEL_28:
    if ( v9 == 24 )
    {
      memset_0(v4, 0, v7);
      *v4 = 352;
      v4[1] = 24;
      v4[2] = v13;
    }
    else
    {
      memset_0(v4, 0, v7);
      *v4 = 352;
      v4[1] = 352;
      v4[2] = v13;
      if ( v8 < 0 )
      {
        *v10 = v8;
        v17 = (_OWORD *)((char *)v10 + 6);
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
        v19 = *(unsigned __int16 *)(v18 + 56);
        v20 = v19 - 16;
        v21 = *(_QWORD *)(v18 + 64);
        if ( (unsigned __int64)(v19 - 8) >= 0x40 )
        {
          v24 = (_OWORD *)(v21 + 2LL * v55);
          if ( v20 >= 0x40 )
          {
            *v17 = *v24;
            *(_OWORD *)((char *)v10 + 22) = v24[1];
            *(_OWORD *)((char *)v10 + 38) = v24[2];
            *(_OWORD *)((char *)v10 + 54) = v24[3];
          }
          else
          {
            memmove((char *)v10 + 6, (const void *)(v21 + 2LL * v55), v20);
            v25 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 56LL);
            memmove((char *)v10 + 2 * ((v25 >> 1) - v55) + 6, &Src, 80 - v25);
          }
          v22 = -1LL;
          LOWORD(v23) = 32;
        }
        else
        {
          memmove((char *)v10 + 6, (const void *)(v21 + 2LL * v55), v20);
          v22 = -1LL;
          *(_QWORD *)((char *)v10
                    + 2
                    * (((unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 56LL) >> 1)
                     - v55)
                    + 6) = Src;
          v23 = -1LL;
          do
            ++v23;
          while ( *((_WORD *)v17 + v23) );
        }
        *((_WORD *)v10 + 2) = v23;
        do
          ++v22;
        while ( v53[v22] );
        v26 = 128;
        if ( v22 < 0x80 )
          v26 = v22;
        *((_WORD *)v10 + 35) = v26;
        memmove(v10 + 18, v53, 2LL * v26);
      }
    }
    v8 = 0;
    goto LABEL_45;
  }
  v8 = -1073741820;
LABEL_45:
  v27 = byte_140168DAA == 0;
  *(_QWORD *)(a2 + 56) = v9;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v27 )
    goto LABEL_111;
  Src = 0LL;
  IoGetActivityIdIrp(a2, &Src);
  v29 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v29 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_111;
    v50 = *(_DWORD *)(a2 + 48);
    v31 = &stru_140148B18;
    goto LABEL_110;
  }
  if ( *(_BYTE *)v29 != 15 )
  {
    if ( *(_BYTE *)v29 != 27 )
      goto LABEL_111;
    if ( *(_BYTE *)(v29 + 1) == 7 && !*(_DWORD *)(v29 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v30 = *(int **)(a2 + 56);
        if ( v30 )
          v3 = *v30;
        sub_140056AB0(v28, v29, (const GUID *)&Src, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_111;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_111;
    v31 = &stru_140149FE8;
    v50 = *(_DWORD *)(a2 + 48);
LABEL_110:
    sub_140052F3C(v28, v31, (const GUID *)&Src, a2, v50);
    goto LABEL_111;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_111;
  v32 = *(_QWORD *)(v29 + 8);
  v33 = 0;
  v34 = 0LL;
  v51 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  if ( *(_BYTE *)(v32 + 2) != 40 )
  {
    v44 = *(_BYTE *)(v32 + 72);
    v34 = *(_BYTE **)(v32 + 32);
    v35 = *(_BYTE *)(v32 + 11);
    v33 = *(_BYTE *)(v32 + 4);
    if ( !*(_BYTE *)(v32 + 2) )
      goto LABEL_87;
    goto LABEL_111;
  }
  v39 = 0LL;
  v52 = 0;
  if ( *(_DWORD *)(v32 + 20) )
    goto LABEL_111;
  v28 = 0LL;
  v54 = 0;
  if ( !*(_DWORD *)(v32 + 56) )
    goto LABEL_84;
  v40 = *(_DWORD *)(v32 + 56);
  v41 = (unsigned int *)(v32 + 120);
  v57 = v32 + 120;
  while ( 1 )
  {
    v42 = *v41;
    if ( (unsigned int)v42 >= 0x80 )
    {
      v43 = *(unsigned int *)(v32 + 16);
      if ( (unsigned int)v42 < (unsigned int)v43 )
        break;
    }
LABEL_78:
    v28 = (unsigned int)(v28 + 1);
    v41 = (unsigned int *)(v57 + 4);
    v54 = v28;
    v57 += 4LL;
    if ( (unsigned int)v28 >= v40 )
      goto LABEL_84;
  }
  if ( *(_DWORD *)(v42 + v32) != 64 )
  {
    v28 = (unsigned int)(*(_DWORD *)(v42 + v32) - 65);
    if ( *(_DWORD *)(v42 + v32) == 65 )
    {
      v28 = v42 + 56;
      if ( v42 + 56 <= v43 )
      {
        v52 = 1;
        if ( *(_BYTE *)(v42 + v32 + 10) )
          v39 = (char *)(v42 + v32 + 24);
        v33 = *(_BYTE *)(v42 + v32 + 8);
        v34 = *(_BYTE **)(v42 + v32 + 16);
        v35 = *(_BYTE *)(v42 + v32 + 9);
      }
    }
    else if ( *(_DWORD *)(v42 + v32) == 66 )
    {
      v28 = v42 + 40;
      if ( v42 + 40 <= v43 )
      {
        if ( *(_DWORD *)(v42 + v32 + 12) )
          v39 = (char *)(v42 + v32 + 32);
        v34 = *(_BYTE **)(v42 + v32 + 24);
        goto LABEL_83;
      }
    }
    goto LABEL_76;
  }
  v28 = v42 + 40;
  if ( v42 + 40 > v43 )
  {
LABEL_76:
    if ( v52 )
      goto LABEL_84;
    LODWORD(v28) = v54;
    v40 = *(_DWORD *)(v32 + 56);
    goto LABEL_78;
  }
  if ( *(_BYTE *)(v42 + v32 + 10) )
    v39 = (char *)(v42 + v32 + 24);
  v34 = *(_BYTE **)(v42 + v32 + 16);
LABEL_83:
  v35 = *(_BYTE *)(v42 + v32 + 9);
  v33 = *(_BYTE *)(v42 + v32 + 8);
LABEL_84:
  if ( v39 )
  {
    v44 = *v39;
    v37 = 0;
LABEL_87:
    LOBYTE(v28) = v44 - 8;
    if ( (v28 & 0x5D) == 0 )
    {
      v45 = *(_BYTE *)(v32 + 3);
      if ( v45 == 1 || !v34 || !v35 )
        goto LABEL_106;
      LOBYTE(v32) = 0;
      v28 = (unsigned __int64)&v34[v35];
      v46 = v34 + 8;
      if ( (unsigned __int8)((*v34 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v46 <= v28 )
        {
          LOBYTE(v32) = 1;
          v37 = v34[2];
          v36 = v34[1] & 0xF;
          v38 = v34[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v46 <= v28 )
        {
          v36 = v34[2] & 0xF;
          v47 = v35;
          if ( (unsigned int)(unsigned __int8)v34[7] + 8 <= v35 )
            v47 = (unsigned __int8)v34[7] + 8;
          v28 = (unsigned __int64)(v34 + 13);
          v32 = (unsigned __int64)&v34[v47];
          if ( (unsigned __int64)(v34 + 13) > v32 )
            v51 = 0;
          else
            v51 = v34[12];
          if ( (unsigned __int64)(v34 + 14) <= v32 )
            v38 = *(_BYTE *)v28;
          LOBYTE(v32) = 1;
        }
        v37 = v51;
      }
      if ( (_BYTE)v32 )
      {
        LOBYTE(v3) = v37;
        v48 = v38;
      }
      else
      {
LABEL_106:
        v36 = 0;
        v48 = 0;
      }
      sub_140052E64(v28, v32, (const GUID *)&Src, a2, *(_DWORD *)(a2 + 48), v45, v33, v36, v3, v48, a2);
    }
  }
LABEL_111:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v8;
}
