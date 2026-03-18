/*
 * XREFs of sub_1400028E0 @ 0x1400028E0
 * Callers:
 *     sub_1400024C0 @ 0x1400024C0 (sub_1400024C0.c)
 * Callees:
 *     sub_140001040 @ 0x140001040 (sub_140001040.c)
 *     sub_1400012F0 @ 0x1400012F0 (sub_1400012F0.c)
 *     sub_140001580 @ 0x140001580 (sub_140001580.c)
 *     sub_140001940 @ 0x140001940 (sub_140001940.c)
 *     sub_140001B40 @ 0x140001B40 (sub_140001B40.c)
 *     sub_140001FD0 @ 0x140001FD0 (sub_140001FD0.c)
 *     sub_1400020E0 @ 0x1400020E0 (sub_1400020E0.c)
 *     sub_140002330 @ 0x140002330 (sub_140002330.c)
 *     sub_140003700 @ 0x140003700 (sub_140003700.c)
 *     sub_140004020 @ 0x140004020 (sub_140004020.c)
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140004AF0 @ 0x140004AF0 (sub_140004AF0.c)
 *     sub_140005770 @ 0x140005770 (sub_140005770.c)
 *     sub_14000BA00 @ 0x14000BA00 (sub_14000BA00.c)
 *     sub_1400217C8 @ 0x1400217C8 (sub_1400217C8.c)
 *     sub_140023450 @ 0x140023450 (sub_140023450.c)
 *     sub_1400235E4 @ 0x1400235E4 (sub_1400235E4.c)
 *     sub_1400240D8 @ 0x1400240D8 (sub_1400240D8.c)
 *     sub_14002438C @ 0x14002438C (sub_14002438C.c)
 *     sub_140025944 @ 0x140025944 (sub_140025944.c)
 *     sub_1400264A0 @ 0x1400264A0 (sub_1400264A0.c)
 *     sub_1400279C4 @ 0x1400279C4 (sub_1400279C4.c)
 *     sub_140027B40 @ 0x140027B40 (sub_140027B40.c)
 *     sub_1400282AC @ 0x1400282AC (sub_1400282AC.c)
 *     sub_14002A860 @ 0x14002A860 (sub_14002A860.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_1400028E0(__int64 a1, __int64 a2)
{
  char v2; // r14
  unsigned int v3; // edi
  char v4; // r8
  __int64 v7; // r9
  unsigned __int8 *v8; // rsi
  unsigned int v9; // eax
  unsigned int *v10; // r10
  __int64 v11; // r11
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int8 v14; // cl
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rcx
  _BYTE *v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // r8d
  unsigned int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int *v24; // rax
  _DWORD *v25; // r12
  __int64 v26; // r13
  __int64 *v27; // r8
  _DWORD *v28; // rdx
  __int64 *v29; // r9
  _DWORD *v30; // r10
  __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // r8
  unsigned __int8 v37; // r15
  __int64 v38; // r11
  char v39; // r9
  _BYTE *v40; // r10
  char v41; // r9
  char v42; // al
  unsigned int v43; // eax
  char v44; // r14
  __int64 v45; // r14
  int v46; // eax
  unsigned __int8 v47; // r15
  __int64 v48; // rax
  int v49; // eax
  char v50; // dl
  __int64 v51; // r14
  unsigned int v52; // r15d
  unsigned int *v53; // rcx
  char v54; // al
  unsigned __int8 v55; // al
  int v56; // ecx
  char v57; // dl
  unsigned int *v58; // rcx
  char v59; // al
  unsigned __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // r14
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned int v65; // eax
  unsigned __int8 v66; // cl
  char v67; // al
  _DWORD *v68; // rcx
  char v69; // r8
  unsigned __int8 v70; // r10
  unsigned __int8 v71; // cl
  __int64 v72; // rcx
  int v73; // r15d
  __int64 v74; // r14
  unsigned __int8 v75; // cl
  unsigned __int8 v76; // al
  unsigned int v77; // eax
  unsigned __int8 v79; // r9
  unsigned int v80; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a2 + 2);
  v3 = 0;
  v4 = 0;
  v7 = 0LL;
  v8 = 0LL;
  if ( v2 == 40 )
  {
    if ( *(_DWORD *)(a2 + 20) )
      goto LABEL_16;
    v9 = *(_DWORD *)(a2 + 56);
    if ( !v9 )
      goto LABEL_16;
    v10 = (unsigned int *)(a2 + 120);
    v11 = v9;
    do
    {
      v12 = *v10;
      if ( (unsigned int)v12 >= 0x80 && (unsigned int)v12 <= *(_DWORD *)(a2 + 16) )
      {
        v13 = a2 + v12;
        if ( *(_DWORD *)(a2 + v12) == 64 || *(_DWORD *)(a2 + v12) == 65 )
        {
          v7 = *(unsigned __int8 *)(v13 + 10);
          v4 = 1;
          if ( (_BYTE)v7 )
            v8 = (unsigned __int8 *)(v13 + 24);
        }
        else if ( *(_DWORD *)(a2 + v12) == 66 )
        {
          v7 = *(unsigned int *)(v13 + 12);
          v4 = 1;
          if ( (_DWORD)v7 )
            v8 = (unsigned __int8 *)(v13 + 32);
        }
      }
      ++v10;
      --v11;
    }
    while ( v11 );
    if ( !v4 )
      goto LABEL_16;
  }
  else
  {
    if ( v2 )
    {
LABEL_16:
      v7 = 0LL;
      goto LABEL_17;
    }
    v7 = *(unsigned __int8 *)(a2 + 10);
    if ( (_BYTE)v7 )
    {
      v8 = (unsigned __int8 *)(a2 + 72);
      LOBYTE(v80) = 0;
      goto LABEL_22;
    }
  }
LABEL_17:
  LOBYTE(v80) = 0;
  if ( v2 != 40 )
  {
LABEL_22:
    v14 = *(_BYTE *)(a2 + 7);
    goto LABEL_23;
  }
  v14 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
LABEL_23:
  if ( (unsigned int)v7 < 6 || !v8 )
  {
    v79 = 32;
    goto LABEL_225;
  }
  v15 = *v8;
  if ( (unsigned __int8)(v15 + 96) > 0x15u || (v16 = 2097157, !_bittest(&v16, v15 + 96)) )
  {
    v17 = *(_QWORD *)(a1 + 8LL * v14 + 1672);
    if ( !v17 || !*(_DWORD *)(v17 + 52) )
    {
      v79 = 37;
LABEL_225:
      sub_140002330(a2, 8, 5, v79);
      return 3238002695LL;
    }
  }
  switch ( *v8 )
  {
    case 0u:
    case 0x2Fu:
    case 0x8Fu:
LABEL_66:
      *(_BYTE *)(a2 + 3) = 1;
      goto LABEL_209;
    case 0x12u:
      if ( (v8[1] & 1) != 0 )
      {
        if ( v2 == 40 )
        {
          v23 = *(_QWORD *)(a2 + 64);
          v24 = (unsigned int *)(a2 + 60);
          v25 = (_DWORD *)(a2 + 60);
          v26 = a2 + 16;
        }
        else
        {
          v23 = *(_QWORD *)(a2 + 24);
          v24 = (unsigned int *)(a2 + 16);
          v26 = a2 + 16;
          v25 = (_DWORD *)(a2 + 60);
        }
        v27 = (__int64 *)(a2 + 64);
        v28 = v25;
        v29 = (__int64 *)(a2 + 24);
        v30 = (_DWORD *)v26;
        if ( v23 )
        {
          v31 = *v24;
          if ( (_DWORD)v31 )
          {
            if ( (v31 & 3) != 0 )
            {
              sub_140032C80(v23, 0LL, v31);
              v27 = (__int64 *)(a2 + 64);
              v28 = v25;
              v29 = (__int64 *)(a2 + 24);
              v30 = (_DWORD *)v26;
            }
            else
            {
              v32 = (unsigned int)v31 >> 2;
              if ( v32 )
                sub_140032C80(v23, 0LL, 4LL * v32);
              v27 = (__int64 *)(a2 + 64);
              v28 = (_DWORD *)(a2 + 60);
              v29 = (__int64 *)(a2 + 24);
              v30 = (_DWORD *)(a2 + 16);
            }
          }
        }
        switch ( v8[2] )
        {
          case 0u:
            if ( *(_BYTE *)(a2 + 2) != 40 )
            {
              v28 = v30;
              v27 = v29;
            }
            v33 = *v27;
            if ( *v28 < 0xBu )
              goto LABEL_73;
            *(_WORD *)v33 = 0;
            *(_DWORD *)(v33 + 3) = -2088763386;
            *(_WORD *)(v33 + 7) = -20048;
            *(_BYTE *)(v33 + 9) = -78;
            *v28 = 11;
            goto LABEL_66;
          case 0x80u:
            v3 = sub_1400217C8(a1, a2);
            goto LABEL_209;
          case 0x83u:
            v3 = sub_1400012F0(a1, a2);
            goto LABEL_209;
          case 0xB0u:
            v3 = sub_140001040(a1, a2);
            goto LABEL_209;
          case 0xB1u:
            if ( *(_BYTE *)(a2 + 2) != 40 )
            {
              v28 = v30;
              v27 = v29;
            }
            v34 = *v27;
            if ( *v28 < 8u )
              goto LABEL_73;
            *(_BYTE *)(v34 + 7) &= 0xF0u;
            *(_WORD *)v34 = -20224;
            *(_WORD *)(v34 + 3) = 60;
            *(_BYTE *)(v34 + 5) = 1;
            *(_BYTE *)(a2 + 3) = 1;
            goto LABEL_209;
          case 0xB2u:
            if ( *(_BYTE *)(a2 + 2) == 40 )
            {
              v35 = *v27;
              v36 = *v27;
              v37 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
            }
            else
            {
              v36 = *v29;
              v28 = v30;
              v37 = *(_BYTE *)(a2 + 7);
              v35 = *v29;
            }
            if ( *v28 < 8u )
              goto LABEL_73;
            *(_BYTE *)(v36 + 3) = 4;
            v38 = a1 + 1560;
            v39 = *(_BYTE *)(v36 + 5);
            v40 = (_BYTE *)(a1 + 4067);
            *(_WORD *)v36 = -19968;
            v41 = v39 & 0x98;
            *(_BYTE *)(v36 + 5) = v41;
            if ( (*(_DWORD *)(a1 + 56) & 1) == 0 && ((*(_BYTE *)(*(_QWORD *)v38 + 520LL) & 4) != 0 || *v40) )
              v42 = 0x80;
            else
              v42 = 0;
            *(_BYTE *)(v36 + 5) = v42 | v41 & 0x7F;
            if ( *(_BYTE *)(*(_QWORD *)(a1 + 8LL * v37 + 1672) + 65LL) )
            {
              *(_BYTE *)(v36 + 6) = *(_BYTE *)(v36 + 6) & 0xF8 | 2;
              *v28 = 8;
              *(_BYTE *)(a2 + 3) = 1;
            }
            else if ( (*(_DWORD *)(a1 + 56) & 1) == 0 && ((*(_BYTE *)(*(_QWORD *)v38 + 520LL) & 4) != 0 || *v40) )
            {
              *(_BYTE *)(v35 + 6) = *(_BYTE *)(v35 + 6) & 0xF8 | 1;
              *v28 = 8;
              *(_BYTE *)(a2 + 3) = 1;
            }
            else
            {
              *(_BYTE *)(v35 + 6) &= 0xF8u;
              *v28 = 8;
              *(_BYTE *)(a2 + 3) = 1;
            }
            goto LABEL_209;
          default:
            goto LABEL_73;
        }
      }
      if ( v8[2] )
        goto LABEL_73;
      v3 = sub_140001B40(a1, a2);
      goto LABEL_209;
    case 0x15u:
    case 0x55u:
      v3 = sub_1400279C4(a1, a2, v8);
      goto LABEL_209;
    case 0x1Au:
    case 0x5Au:
      v3 = sub_140005770(a1, a2, v8);
      goto LABEL_209;
    case 0x1Bu:
      if ( *(_BYTE *)(a2 + 2) == 40 )
        v45 = *(_QWORD *)(a2 + 104);
      else
        v45 = *(_QWORD *)(a2 + 56);
      if ( (v45 & 0xFFF) != 0 )
        v45 = v45 - (v45 & 0xFFF) + 4096;
      if ( (v8[1] & 1) != 0 )
        goto LABEL_73;
      if ( (v8[4] & 1) != 0 )
      {
        v46 = *(_DWORD *)(a1 + 24);
        if ( (v46 & 0x200) != 0 )
        {
          *(_BYTE *)(a2 + 3) = 1;
          goto LABEL_209;
        }
        *(_DWORD *)(a1 + 228) = 0;
        *(_DWORD *)(a1 + 24) = v46 | 0x200;
        v47 = 0;
      }
      else
      {
        if ( ++*(_DWORD *)(a1 + 228) < *(_DWORD *)(a1 + 212) )
        {
          *(_BYTE *)(a2 + 3) = 1;
          goto LABEL_209;
        }
        v48 = *(_QWORD *)(a1 + 1560);
        *(_DWORD *)(a1 + 24) &= ~0x200u;
        v47 = *(_BYTE *)(v48 + 263);
      }
      *(_BYTE *)(v45 + 4225) = *(_BYTE *)(v45 + 4225) & 0xFC | 1;
      sub_1400042C0(a1, a2);
      v49 = *(_DWORD *)(v45 + 4140);
      *(_BYTE *)(v45 + 4096) = 9;
      *(_BYTE *)(v45 + 4136) = 2;
      *(_DWORD *)(v45 + 4140) = v49 ^ ((unsigned __int8)v49 ^ v47) & 0x1F;
      goto LABEL_209;
    case 0x25u:
    case 0x9Eu:
      v3 = sub_140001940(a1, a2, v8, v7);
      goto LABEL_209;
    case 0x28u:
    case 0x2Au:
    case 0x88u:
    case 0x8Au:
      v43 = sub_140003700(a1, a2, (_DWORD)v8, v7, (__int64)&v80);
      v44 = v80;
      v3 = v43;
      goto LABEL_210;
    case 0x35u:
      v3 = sub_14000BA00(a1, a2);
      goto LABEL_209;
    case 0x3Bu:
      v67 = v8[1] & 0x1F;
      if ( v67 == 14 )
      {
        v3 = sub_1400020E0(a1, a2);
        goto LABEL_209;
      }
      if ( v67 != 15 )
        goto LABEL_73;
      v3 = sub_140001FD0(a1, a2, (__int64)v8, v7);
      goto LABEL_209;
    case 0x42u:
      v3 = sub_140004020(a1, a2, v8);
      goto LABEL_209;
    case 0x48u:
      v3 = sub_140001580(a1, a2);
      goto LABEL_209;
    case 0x4Du:
      if ( (v8[1] & 1) != 0 )
        goto LABEL_73;
      v60 = v8[2];
      if ( (v60 & 0xC0) != 0x40 )
        goto LABEL_73;
      LOBYTE(v60) = v60 & 0x3F;
      if ( (unsigned __int8)v60 > 0x2Fu )
        goto LABEL_73;
      v61 = 0x800000002001LL;
      if ( !_bittest64(&v61, v60) || v8[3] )
        goto LABEL_73;
      if ( (_BYTE)v60 )
      {
        if ( (_BYTE)v60 != 13 )
        {
          if ( (_BYTE)v60 == 47 )
          {
            v3 = sub_140023450(a1, a2);
            goto LABEL_209;
          }
LABEL_73:
          sub_140002330(a2, 6, 5, 0x24u);
          v3 = -1056964602;
          goto LABEL_209;
        }
        v3 = sub_1400235E4(a1, a2);
      }
      else
      {
        if ( *(_BYTE *)(a2 + 2) == 40 )
        {
          v62 = *(_QWORD *)(a2 + 64);
          v63 = 60LL;
        }
        else
        {
          v62 = *(_QWORD *)(a2 + 24);
          v63 = 16LL;
        }
        if ( !v62 )
          goto LABEL_73;
        v64 = *(unsigned int *)(a2 + v63);
        if ( (unsigned int)v64 < 7 )
          goto LABEL_73;
        if ( (v64 & 3) != 0 )
        {
          sub_140032C80(v62, 0LL, v64);
        }
        else
        {
          v65 = (unsigned int)v64 >> 2;
          if ( v65 )
            sub_140032C80(v62, 0LL, 4LL * v65);
        }
        *(_DWORD *)v62 = 50331648;
        *(_WORD *)(v62 + 4) = 3328;
        *(_BYTE *)(v62 + 6) = 47;
        *(_BYTE *)(a2 + 3) = 1;
      }
LABEL_209:
      v44 = 0;
LABEL_210:
      if ( !*(_BYTE *)(a2 + 3) )
      {
        v3 = sub_140004AF0(a1, a2);
        if ( v3 )
        {
          *(_BYTE *)(a2 + 3) = 4;
        }
        else if ( v44 )
        {
          sub_1400264A0(a1, a2);
        }
        if ( (*(_DWORD *)(a1 + 4056) & 0x10000) != 0 )
        {
          v76 = *v8;
          if ( *v8 == 40 || v76 == 0x88 || v76 == 42 || v76 == 0x8A )
          {
            v77 = sub_14002A860(a1, a2, 0LL);
            v3 = v77;
            if ( v77 )
              *(_BYTE *)(a2 + 3) = sub_1400282AC(v77);
          }
        }
      }
      return v3;
    case 0x5Eu:
      v68 = (_DWORD *)(a2 + 60);
      v69 = *(_BYTE *)(a2 + 2);
      BYTE1(v80) = v8[7];
      LOBYTE(v80) = v8[8];
      if ( v69 != 40 )
        v68 = (_DWORD *)(a2 + 16);
      if ( *v68 >= (unsigned int)(unsigned __int16)v80 )
      {
        v70 = v8[1];
        if ( (v70 & 0x1F) == 2 )
        {
          if ( (unsigned __int16)v80 >= 8u )
          {
            if ( v69 == 40 )
              v71 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
            else
              v71 = *(_BYTE *)(a2 + 7);
            if ( (unsigned int)v71 < *(_DWORD *)(a1 + 224) && (v72 = *(_QWORD *)(a1 + 8LL * v71 + 1672)) != 0 )
              v73 = *(_DWORD *)(v72 + 16);
            else
              v73 = 0;
            if ( v69 == 40 )
              v74 = *(_QWORD *)(a2 + 104);
            else
              v74 = *(_QWORD *)(a2 + 56);
            if ( (v74 & 0xFFF) != 0 )
              v74 = v74 - (v74 & 0xFFF) + 4096;
            *(_BYTE *)(v74 + 4225) = *(_BYTE *)(v74 + 4225) & 0xFC | 1;
            sub_1400042C0(a1, a2);
            *(_BYTE *)(v74 + 4096) = 10;
            *(_QWORD *)(v74 + 4192) = sub_140025810;
            *(_DWORD *)(v74 + 4100) = v73;
            *(_BYTE *)(v74 + 4136) = -125;
          }
          else
          {
            v3 = -1056964604;
            *(_BYTE *)(a2 + 3) = 6;
          }
        }
        else if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 520LL) & 0x20) != 0 )
        {
          if ( (v70 & 0x1C) != 0 || (v70 & 0x1F) == 2 )
          {
            v3 = -1056964602;
            sub_140002330(a2, 6, 5, 0x24u);
          }
          else
          {
            if ( v69 == 40 )
              v75 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
            else
              v75 = *(_BYTE *)(a2 + 7);
            if ( *(_BYTE *)(*(_QWORD *)(a1 + 8LL * v75 + 1672) + 112LL) )
            {
              v3 = sub_140025944(a1, a2, v70 & 0x1F, (unsigned __int16)v80, 0);
            }
            else
            {
              v3 = -1056964602;
              *(_BYTE *)(a2 + 3) = 6;
            }
          }
        }
        else
        {
          v3 = -1056964602;
          *(_BYTE *)(a2 + 3) = 6;
        }
      }
      else
      {
        v3 = -1056964604;
        *(_BYTE *)(a2 + 3) = 6;
      }
      goto LABEL_209;
    case 0x5Fu:
      v3 = sub_140027B40(a1, a2, v8);
      goto LABEL_209;
    case 0x9Bu:
      if ( (v8[1] & 0x1F) != 0x1C )
        goto LABEL_170;
      v66 = v8[14];
      if ( !v66 )
      {
        v3 = sub_14002438C(a1, a2);
        goto LABEL_209;
      }
      if ( (unsigned __int8)(v66 - 16) > 0xDFu )
        goto LABEL_170;
      if ( v66 == *(_BYTE *)(a1 + 4044) )
      {
        LOBYTE(v7) = 1;
      }
      else
      {
        if ( v66 != *(_BYTE *)(a1 + 4045) )
        {
LABEL_170:
          *(_BYTE *)(a2 + 3) = 6;
LABEL_208:
          v3 = -1056964601;
          goto LABEL_209;
        }
        v7 = 0LL;
      }
      v3 = sub_1400240D8(a1, a2, v8, v7);
      goto LABEL_209;
    case 0xA0u:
      *(_BYTE *)(a2 + 3) = 1;
      if ( ((*(_DWORD *)(a1 + 128) & 0x10) != 0 || (*(_DWORD *)(a1 + 24) & 0x2000) == 0)
        && *(_WORD *)(a1 + 332)
        && *(_WORD *)(a1 + 330) )
      {
        if ( v2 == 40 )
        {
          v18 = *(_BYTE **)(a2 + 64);
          v19 = 60LL;
        }
        else
        {
          v18 = *(_BYTE **)(a2 + 24);
          v19 = 16LL;
        }
        v20 = 8 * *(_DWORD *)(a1 + 224);
        if ( *(unsigned int *)(v19 + a2) >= (unsigned __int64)v20 + 8 )
        {
          v18[3] = v20;
          v21 = 0;
          *v18 = HIBYTE(v20);
          v18[1] = BYTE2(v20);
          for ( v18[2] = BYTE1(v20); v21 < *(_DWORD *)(a1 + 224); ++v21 )
          {
            v22 = *(_QWORD *)(a1 + 8LL * v21 + 1672);
            if ( v22 && *(_QWORD *)(v22 + 56) && *(_DWORD *)(v22 + 52) && (*(_DWORD *)(v22 + 20) & 4) == 0 )
            {
              v18[8 * v21 + 8] = 0;
              v18[8 * v21 + 9] = v21;
              *(_DWORD *)&v18[8 * v21 + 10] = 0;
              *(_WORD *)&v18[8 * v21 + 14] = 0;
            }
          }
        }
        else
        {
          *(_BYTE *)(a2 + 3) = 18;
          if ( *(_DWORD *)(v19 + a2) >= 4u )
          {
            v18[3] = v20;
            *v18 = HIBYTE(v20);
            v18[1] = BYTE2(v20);
            v18[2] = BYTE1(v20);
          }
        }
      }
      goto LABEL_209;
    case 0xA2u:
      v50 = *(_BYTE *)(a2 + 2);
      if ( v50 == 40 )
        v51 = *(_QWORD *)(a2 + 104);
      else
        v51 = *(_QWORD *)(a2 + 56);
      if ( (v51 & 0xFFF) != 0 )
        v51 = v51 - (v51 & 0xFFF) + 4096;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 256LL) & 1) == 0 )
        goto LABEL_73;
      HIBYTE(v80) = v8[6];
      BYTE2(v80) = v8[7];
      BYTE1(v80) = v8[8];
      LOBYTE(v80) = v8[9];
      v52 = v80;
      if ( (v8[4] & 0x80u) != 0 )
        v52 = v80 << 9;
      v53 = (unsigned int *)(a2 + 60);
      BYTE1(v80) = v8[2];
      LOBYTE(v80) = v8[3];
      if ( v50 != 40 )
        v53 = (unsigned int *)(a2 + 16);
      if ( *v53 < v52 )
        goto LABEL_73;
      v54 = 0;
      if ( v52 )
        v54 = 2;
      *(_BYTE *)(v51 + 4225) = v54 | *(_BYTE *)(v51 + 4225) & 0xFC | 1;
      sub_1400042C0(a1, a2);
      v55 = v8[1];
      *(_BYTE *)(v51 + 4096) = -126;
      goto LABEL_125;
    case 0xB5u:
      v57 = *(_BYTE *)(a2 + 2);
      if ( v57 == 40 )
        v51 = *(_QWORD *)(a2 + 104);
      else
        v51 = *(_QWORD *)(a2 + 56);
      if ( (v51 & 0xFFF) != 0 )
        v51 = v51 - (v51 & 0xFFF) + 4096;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 256LL) & 1) == 0 )
        goto LABEL_73;
      HIBYTE(v80) = v8[6];
      BYTE2(v80) = v8[7];
      BYTE1(v80) = v8[8];
      LOBYTE(v80) = v8[9];
      v52 = v80;
      if ( (v8[4] & 0x80u) != 0 )
        v52 = v80 << 9;
      v58 = (unsigned int *)(a2 + 60);
      BYTE1(v80) = v8[2];
      LOBYTE(v80) = v8[3];
      if ( v57 != 40 )
        v58 = (unsigned int *)(a2 + 16);
      if ( *v58 < v52 )
        goto LABEL_73;
      v59 = 0;
      if ( v52 )
        v59 = 2;
      *(_BYTE *)(v51 + 4225) = v59 | *(_BYTE *)(v51 + 4225) & 0xFC | 1;
      sub_1400042C0(a1, a2);
      v55 = v8[1];
      *(_BYTE *)(v51 + 4096) = -127;
LABEL_125:
      v56 = (unsigned __int16)v80;
      *(_BYTE *)(v51 + 4139) = v55;
      *(_DWORD *)(v51 + 4136) = *(_DWORD *)(v51 + 4136) & 0xFF0000FF | (v56 << 8);
      *(_DWORD *)(v51 + 4140) = v52;
      goto LABEL_209;
    default:
      sub_140002330(a2, 6, 5, 0x20u);
      goto LABEL_208;
  }
}
