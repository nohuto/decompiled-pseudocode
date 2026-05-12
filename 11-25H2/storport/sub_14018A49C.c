/*
 * XREFs of sub_14018A49C @ 0x14018A49C
 * Callers:
 *     sub_14018C298 @ 0x14018C298 (sub_14018C298.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400CBACC @ 0x1400CBACC (sub_1400CBACC.c)
 *     sub_1400D10FC @ 0x1400D10FC (sub_1400D10FC.c)
 *     sub_1400D8AD8 @ 0x1400D8AD8 (sub_1400D8AD8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14018A49C(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  int v3; // ebx
  __int64 v4; // r12
  unsigned __int16 v7; // cx
  int v8; // edi
  _QWORD *v9; // r11
  __int64 v10; // rbp
  __int16 v11; // ax
  _DWORD *v12; // r14
  _DWORD *v13; // rcx
  __int64 v14; // rdx
  __int128 *v15; // rcx
  __int64 v16; // r8
  _OWORD *v17; // rax
  __int128 v18; // xmm0
  _OWORD *v19; // rax
  __int128 *v20; // rcx
  __int128 v21; // xmm0
  bool v22; // zf
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  int *v25; // rax
  const EVENT_DESCRIPTOR *v26; // rdx
  __int64 v27; // rdx
  char v28; // r15
  _BYTE *v29; // r9
  unsigned __int8 v30; // r10
  char v31; // r11
  char v32; // bp
  char v33; // r13
  char *v34; // r14
  unsigned int v35; // r12d
  unsigned __int64 v36; // rbp
  __int64 v37; // r8
  int v38; // ecx
  char v39; // cl
  char v40; // r8
  _BYTE *v41; // rax
  unsigned int v42; // eax
  unsigned __int64 v43; // r8
  char v44; // al
  __int64 v46; // [rsp+20h] [rbp-A8h]
  __int64 v47; // [rsp+28h] [rbp-A0h]
  __int64 v48; // [rsp+30h] [rbp-98h]
  __int64 v49; // [rsp+38h] [rbp-90h]
  __int64 v50; // [rsp+40h] [rbp-88h]
  __int64 v51; // [rsp+48h] [rbp-80h]
  char v52; // [rsp+60h] [rbp-68h]
  char v53; // [rsp+61h] [rbp-67h]
  __int64 v54; // [rsp+68h] [rbp-60h] BYREF
  GUID v55; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v54 = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v2
    && *(_DWORD *)(v4 + 16) >= 0x238u
    && *(_WORD *)v2 == 1
    && *(_WORD *)(v2 + 2) >= 0x238u
    && (*(_BYTE *)(v2 + 4) & 6) != 6
    && *(_BYTE *)(v2 + 280)
    && (v7 = *(_WORD *)(v2 + 18), (unsigned __int16)(v7 - 1) > 0x1Eu)
    && v7 < 0x1001u )
  {
    if ( *(_DWORD *)(v4 + 8) >= 0x238u )
    {
      v9 = sub_1400D10FC(a1, (_QWORD *)(*(_QWORD *)(v2 + 8) ^ a1));
      if ( v9 )
      {
        v8 = sub_1400CBACC(
               (__int64)v9,
               0,
               (_OWORD *)(v2 + 24),
               v2 + 280,
               (_OWORD *)(v2 + 536),
               *(_WORD *)(v2 + 16),
               1,
               *(_DWORD *)(v2 + 4) & 1,
               (*(_DWORD *)(v2 + 4) & 2) != 0,
               (*(_DWORD *)(v2 + 4) & 4) != 0,
               &v54);
        if ( v8 >= 0 )
        {
          v10 = v54;
          *(_WORD *)(v54 + 6) = *(_WORD *)(v2 + 18);
          v11 = *(_WORD *)(v2 + 20);
          if ( v11 )
            *(_WORD *)(v10 + 56) = v11;
          v12 = *(_DWORD **)(a2 + 24);
          memset_0(v12, 0, *(unsigned int *)(v4 + 8));
          v8 = sub_1400D8AD8(v10);
          if ( v8 >= 0 )
          {
            *v12 = 37224449;
            v13 = v12 + 1;
            v14 = 2LL;
            if ( (*(_BYTE *)(v10 + 32) & 1) != 0 )
              *v13 |= 2u;
            if ( (*(_BYTE *)(v10 + 32) & 2) != 0 )
              *v13 |= 1u;
            if ( (*(_BYTE *)(v10 + 32) & 4) != 0 )
              *v13 |= 4u;
            v15 = (__int128 *)(v10 + 60);
            *((_QWORD *)v12 + 1) = v10 ^ a1;
            v16 = 2LL;
            *((_WORD *)v12 + 8) = *(_WORD *)(v10 + 4);
            v17 = v12 + 5;
            do
            {
              v18 = *v15;
              v15 += 8;
              *v17 = v18;
              v17 += 8;
              *(v17 - 7) = *(v15 - 7);
              *(v17 - 6) = *(v15 - 6);
              *(v17 - 5) = *(v15 - 5);
              *(v17 - 4) = *(v15 - 4);
              *(v17 - 3) = *(v15 - 3);
              *(v17 - 2) = *(v15 - 2);
              *(v17 - 1) = *(v15 - 1);
              --v16;
            }
            while ( v16 );
            v19 = v12 + 69;
            v20 = (__int128 *)(v10 + 316);
            do
            {
              v21 = *v20;
              v20 += 8;
              *v19 = v21;
              v19 += 8;
              *(v19 - 7) = *(v20 - 7);
              *(v19 - 6) = *(v20 - 6);
              *(v19 - 5) = *(v20 - 5);
              *(v19 - 4) = *(v20 - 4);
              *(v19 - 3) = *(v20 - 3);
              *(v19 - 2) = *(v20 - 2);
              *(v19 - 1) = *(v20 - 1);
              --v14;
            }
            while ( v14 );
            *(_OWORD *)(v12 + 133) = *(_OWORD *)(v10 + 572);
            *(_OWORD *)(v12 + 137) = *(_OWORD *)(v10 + 588);
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v10 + 40));
            *(_QWORD *)(a2 + 56) = *((unsigned __int16 *)v12 + 1);
          }
        }
      }
      else
      {
        v8 = -1073741275;
      }
    }
    else
    {
      v8 = -1073741789;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  v22 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v22 )
    goto LABEL_94;
  v55 = 0LL;
  IoGetActivityIdIrp(a2, &v55);
  v24 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v24 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_94;
    v26 = &stru_140148B18;
    goto LABEL_93;
  }
  if ( *(_BYTE *)v24 != 15 )
  {
    if ( *(_BYTE *)v24 != 27 )
      goto LABEL_94;
    if ( *(_BYTE *)(v24 + 1) == 7 && !*(_DWORD *)(v24 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v25 = *(int **)(a2 + 56);
        if ( v25 )
          v3 = *v25;
        LODWORD(v47) = *(_DWORD *)(a2 + 48);
        LODWORD(v46) = v3;
        sub_140056AB0(v23, v24, &v55, a2, v46, v47);
      }
      goto LABEL_94;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_94;
    v26 = &stru_140149FE8;
LABEL_93:
    LODWORD(v46) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v23, v26, &v55, a2, v46);
    goto LABEL_94;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_94;
  v27 = *(_QWORD *)(v24 + 8);
  v28 = 0;
  v29 = 0LL;
  v52 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  if ( *(_BYTE *)(v27 + 2) != 40 )
  {
    v39 = *(_BYTE *)(v27 + 72);
    v29 = *(_BYTE **)(v27 + 32);
    v30 = *(_BYTE *)(v27 + 11);
    v28 = *(_BYTE *)(v27 + 4);
    if ( !*(_BYTE *)(v27 + 2) )
      goto LABEL_70;
    goto LABEL_94;
  }
  v34 = 0LL;
  v53 = 0;
  if ( *(_DWORD *)(v27 + 20) )
    goto LABEL_94;
  v35 = 0;
  LODWORD(v54) = *(_DWORD *)(v27 + 56);
  if ( !(_DWORD)v54 )
    goto LABEL_67;
  while ( 1 )
  {
    v23 = *(unsigned int *)(v27 + 4LL * v35 + 120);
    if ( (unsigned int)v23 >= 0x80 )
    {
      v36 = *(unsigned int *)(v27 + 16);
      if ( (unsigned int)v23 < (unsigned int)v36 )
        break;
    }
LABEL_60:
    if ( ++v35 >= (unsigned int)v54 )
      goto LABEL_66;
  }
  v37 = (unsigned int)v23;
  v38 = *(_DWORD *)(v23 + v27) - 64;
  if ( v38 )
  {
    v23 = (unsigned int)(v38 - 1);
    if ( (_DWORD)v23 )
    {
      if ( (_DWORD)v23 == 1 )
      {
        v23 = v37 + 40;
        if ( v37 + 40 <= v36 )
        {
          if ( *(_DWORD *)(v37 + v27 + 12) )
            v34 = (char *)(v37 + v27 + 32);
          v29 = *(_BYTE **)(v37 + v27 + 24);
          goto LABEL_65;
        }
      }
    }
    else
    {
      v23 = v37 + 56;
      if ( v37 + 56 <= v36 )
      {
        v53 = 1;
        if ( *(_BYTE *)(v37 + v27 + 10) )
          v34 = (char *)(v37 + v27 + 24);
        v28 = *(_BYTE *)(v37 + v27 + 8);
        v29 = *(_BYTE **)(v37 + v27 + 16);
        v30 = *(_BYTE *)(v37 + v27 + 9);
      }
    }
    goto LABEL_59;
  }
  v23 = v37 + 40;
  if ( v37 + 40 > v36 )
  {
LABEL_59:
    if ( v53 )
      goto LABEL_66;
    goto LABEL_60;
  }
  if ( *(_BYTE *)(v37 + v27 + 10) )
    v34 = (char *)(v37 + v27 + 24);
  v29 = *(_BYTE **)(v37 + v27 + 16);
LABEL_65:
  v30 = *(_BYTE *)(v37 + v27 + 9);
  v28 = *(_BYTE *)(v37 + v27 + 8);
LABEL_66:
  v32 = 0;
LABEL_67:
  if ( v34 )
  {
    v39 = *v34;
LABEL_70:
    LOBYTE(v23) = v39 - 8;
    if ( (v23 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v27 + 3) == 1 || !v29 || !v30 )
        goto LABEL_89;
      v40 = 0;
      v23 = (unsigned __int64)&v29[v30];
      v41 = v29 + 8;
      if ( (unsigned __int8)((*v29 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v41 <= v23 )
        {
          v40 = 1;
          v32 = v29[2];
          v31 = v29[1] & 0xF;
          v33 = v29[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v41 <= v23 )
        {
          v31 = v29[2] & 0xF;
          v42 = v30;
          if ( (unsigned int)(unsigned __int8)v29[7] + 8 <= v30 )
            v42 = (unsigned __int8)v29[7] + 8;
          v23 = (unsigned __int64)(v29 + 13);
          v43 = (unsigned __int64)&v29[v42];
          if ( (unsigned __int64)(v29 + 13) > v43 )
            v52 = 0;
          else
            v52 = v29[12];
          if ( (unsigned __int64)(v29 + 14) <= v43 )
            v33 = *(_BYTE *)v23;
          v40 = 1;
        }
        v32 = v52;
      }
      if ( v40 )
      {
        LOBYTE(v3) = v32;
        v44 = v33;
      }
      else
      {
LABEL_89:
        v31 = 0;
        v44 = 0;
      }
      LOBYTE(v51) = v44;
      LOBYTE(v50) = v3;
      LOBYTE(v49) = v31;
      LOBYTE(v48) = v28;
      LOBYTE(v47) = *(_BYTE *)(v27 + 3);
      LODWORD(v46) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v23, v27, &v55, a2, v46, v47, v48, v49, v50, v51, a2);
    }
  }
LABEL_94:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v8;
}
