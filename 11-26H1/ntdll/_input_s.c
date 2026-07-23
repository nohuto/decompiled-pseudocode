/*
 * XREFs of _input_s @ 0x180135328
 * Callers:
 *     _sinput_s @ 0x180135C08 (_sinput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 *     _ungetc_nolock @ 0x1801325A4 (_ungetc_nolock.c)
 *     ReadString_0 @ 0x180134FE8 (ReadString_0.c)
 *     ReadStringDelimited_0 @ 0x180135190 (ReadStringDelimited_0.c)
 *     _inc_0 @ 0x1801352F8 (_inc_0.c)
 */

__int64 __fastcall input_s(FILE *a1, unsigned __int8 *a2, unsigned int *a3)
{
  int v3; // r12d
  unsigned __int8 *v4; // r14
  int v5; // ebx
  __int64 v6; // r11
  unsigned __int8 v7; // cl
  int v8; // esi
  unsigned int v9; // edi
  unsigned int v10; // r9d
  unsigned __int64 v11; // rax
  int v12; // edi
  int v13; // eax
  int v14; // edi
  int v15; // r13d
  char v16; // r10
  char v17; // dl
  char v18; // r15
  char v19; // r11
  __int64 v20; // rcx
  unsigned __int8 v21; // al
  char v22; // cl
  __int64 v23; // r10
  FILE *v24; // r11
  _BYTE *v25; // rdx
  unsigned __int8 v26; // al
  __int64 v27; // rcx
  char v28; // r12
  unsigned int v29; // edi
  int v30; // eax
  int v31; // r8d
  int v32; // eax
  char v33; // cl
  int v34; // eax
  __int64 v35; // rdx
  unsigned __int16 v36; // cx
  int v37; // eax
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rax
  int v41; // edx
  unsigned __int16 v42; // cx
  int v43; // eax
  int v44; // edx
  int v45; // eax
  char v46; // al
  char v47; // cl
  char v48; // al
  int v49; // eax
  unsigned __int8 *v50; // rcx
  int v51; // eax
  bool v52; // cc
  int v53; // r15d
  char v55; // [rsp+50h] [rbp-39h]
  char v56; // [rsp+51h] [rbp-38h]
  char v57; // [rsp+52h] [rbp-37h]
  int v58; // [rsp+54h] [rbp-35h] BYREF
  int v59; // [rsp+58h] [rbp-31h] BYREF
  int v60; // [rsp+5Ch] [rbp-2Dh]
  int v61; // [rsp+60h] [rbp-29h]
  int v62; // [rsp+64h] [rbp-25h]
  __int64 v63; // [rsp+68h] [rbp-21h]
  int v64; // [rsp+70h] [rbp-19h]
  unsigned int v65; // [rsp+74h] [rbp-15h] BYREF
  int v66; // [rsp+78h] [rbp-11h]
  unsigned int *v67; // [rsp+80h] [rbp-9h]
  _BYTE *v68; // [rsp+88h] [rbp-1h]
  __int64 v69; // [rsp+90h] [rbp+7h] BYREF
  __int64 v70; // [rsp+98h] [rbp+Fh]
  unsigned __int8 *v72; // [rsp+F8h] [rbp+6Fh] BYREF
  unsigned int *v73; // [rsp+100h] [rbp+77h]
  char v74; // [rsp+108h] [rbp+7Fh]

  v73 = a3;
  v3 = 0;
  v4 = a2;
  v63 = 0LL;
  v5 = 0;
  v59 = 0;
  v6 = (__int64)a1;
  v64 = 0;
  v67 = 0LL;
  if ( !a2 || !a1 )
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
  v7 = *a2;
  v8 = 0;
  v56 = 0;
  v9 = 0;
  v58 = 0;
  v65 = 0;
  if ( !v7 )
    return v9;
  v10 = -1;
  while ( 2 )
  {
    v11 = v7;
    if ( (pctype[v7] & 8) != 0 )
    {
      v12 = v8;
      while ( 1 )
      {
        v58 = v12;
        v8 = v12;
        v13 = inc_0(v6);
        v10 = -1;
        if ( v13 == -1 )
          break;
        ++v12;
        v6 = (__int64)a1;
        if ( (pctype[(unsigned __int8)v13] & 8) == 0 )
        {
          ungetc_nolock(v13, a1);
          v10 = -1;
          goto LABEL_10;
        }
      }
      do
LABEL_10:
        ++v4;
      while ( (pctype[*v4] & 8) != 0 );
      goto LABEL_197;
    }
    if ( v7 != 37 )
      goto LABEL_193;
    if ( v4[1] == 37 )
    {
      ++v4;
LABEL_193:
      v58 = ++v8;
      v5 = inc_0(v6);
      v59 = v5;
      v51 = *v4++;
      v50 = v4;
      if ( v51 == v5 )
        goto LABEL_194;
      v10 = -1;
      if ( v5 == -1 )
        goto LABEL_214;
      ungetc_nolock(v5, a1);
      goto LABEL_209;
    }
    v60 = 0;
    v14 = 0;
    v66 = 0;
    v15 = 0;
    v70 = 0LL;
    v16 = 0;
    v57 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 1;
    do
    {
      v72 = ++v4;
      v20 = *v4;
      if ( (pctype[v20] & 4) != 0 )
      {
        ++v14;
        v15 = v20 + 2 * (5 * v15 - 24);
        continue;
      }
      if ( (unsigned int)v20 <= 0x68 )
      {
        switch ( (_DWORD)v20 )
        {
          case 'h':
            --v19;
            --v18;
            continue;
          case '*':
            ++v16;
            continue;
          case 'F':
            continue;
          case 'I':
            v21 = v4[1];
            if ( v21 == 54 )
            {
              v11 = (unsigned __int64)(v4 + 2);
              if ( v4[2] == 52 )
                goto LABEL_28;
            }
            else if ( v21 == 51 )
            {
              v11 = (unsigned __int64)(v4 + 2);
              if ( v4[2] == 50 )
              {
                v4 += 2;
                v72 = (unsigned __int8 *)v11;
                continue;
              }
            }
LABEL_43:
            v26 = v4[1];
            if ( v26 == 100 )
              goto LABEL_29;
            LOBYTE(v11) = v26 - 88;
            if ( (unsigned __int8)v11 <= 0x20u )
            {
              v27 = 0x120820001LL;
              if ( _bittest64(&v27, v11) )
                goto LABEL_29;
            }
            ++v3;
            v63 = 0LL;
            break;
          case 'L':
            ++v19;
            continue;
          case 'N':
            continue;
        }
LABEL_47:
        ++v17;
        continue;
      }
      switch ( (_DWORD)v20 )
      {
        case 'j':
          goto LABEL_29;
        case 'l':
          v11 = (unsigned __int64)(v4 + 1);
          if ( v4[1] == 108 )
          {
LABEL_28:
            v4 = (unsigned __int8 *)v11;
            v72 = (unsigned __int8 *)v11;
LABEL_29:
            v63 = 0LL;
            ++v3;
            continue;
          }
          ++v19;
          break;
        case 't':
          goto LABEL_43;
        case 'w':
          break;
        case 'z':
          goto LABEL_43;
        default:
          goto LABEL_47;
      }
      ++v18;
    }
    while ( !v17 );
    v74 = v16;
    v22 = v16;
    v23 = v70;
    v55 = v19;
    v24 = a1;
    v62 = v3;
    v61 = v14;
    if ( v22 )
    {
      v25 = 0LL;
    }
    else
    {
      v67 = v73;
      v73 += 2;
      v25 = (_BYTE *)*((_QWORD *)v73 - 1);
    }
    v68 = v25;
    v28 = 0;
    v69 = (__int64)v25;
    if ( !v18 )
    {
      if ( *v4 == 83 || (v18 = -1, *v4 == 67) )
        v18 = 1;
    }
    v29 = *v4 | 0x20;
    if ( v29 == 110 )
    {
LABEL_65:
      v31 = v61;
      if ( v61 && !v15 )
      {
        if ( v5 == -1 )
          goto LABEL_214;
        ungetc_nolock(v5, v24);
        v10 = -1;
        goto LABEL_210;
      }
      if ( !v22 && (v29 == 99 || v29 == 115 || v29 == 123) )
      {
        v67 += 2;
        v25 = (_BYTE *)*((_QWORD *)v67 - 1);
        v23 = *v67;
        v68 = v25;
        v69 = (__int64)v25;
        v73 = v67 + 2;
        if ( !v23 )
        {
          v52 = v18 <= 0;
          v53 = 0;
          if ( v52 )
            *v25 = 0;
          else
            *(_WORD *)v25 = 0;
          goto LABEL_211;
        }
      }
      if ( v29 > 0x70 )
      {
        if ( v29 == 115 )
        {
          v33 = 32;
          goto LABEL_179;
        }
        if ( v29 == 117 )
          goto LABEL_88;
        if ( v29 != 120 )
        {
          if ( v29 != 123 )
            goto LABEL_94;
          v33 = 64;
LABEL_179:
          v3 = 0;
LABEL_180:
          v46 = v33 | 1;
          if ( !v31 )
            v46 = v33;
          v47 = v46 | 2;
          if ( v18 <= 0 )
            v47 = v46;
          v48 = v47 | 4;
          if ( !v74 )
            v48 = v47;
          if ( v29 == 123 )
          {
            v49 = ReadStringDelimited_0(v48, &v72, &v59, &v58, (_WORD **)&v69, v15, v24, v23, &v65);
            v4 = v72;
          }
          else
          {
            v49 = ReadString_0(v48, 0LL, &v59, &v58, (_WORD **)&v69, v15, v24, v23, &v65);
          }
          v5 = v59;
          if ( !v49 )
          {
            v8 = v58;
            goto LABEL_191;
          }
LABEL_209:
          v10 = -1;
          goto LABEL_210;
        }
      }
      else
      {
        switch ( v29 )
        {
          case 'p':
            ++v62;
            v55 = 1;
            v63 = 0LL;
LABEL_88:
            if ( v5 == 45 )
            {
              v57 = 1;
            }
            else if ( v5 != 43 )
            {
              goto LABEL_124;
            }
            if ( !--v15 && v61 )
            {
              v28 = 1;
              goto LABEL_124;
            }
            v58 = ++v8;
            v5 = inc_0((__int64)v24);
            v59 = v5;
LABEL_123:
            v31 = v61;
            goto LABEL_124;
          case 'c':
            v3 = 0;
            v33 = 16;
            if ( !v61 )
            {
              v31 = 1;
              ++v15;
            }
            goto LABEL_180;
          case 'd':
            goto LABEL_88;
        }
        if ( v29 != 105 )
        {
          if ( v29 == 110 )
          {
            v3 = 0;
            v32 = v8;
            if ( !v74 )
              goto LABEL_173;
            goto LABEL_191;
          }
          if ( v29 != 111 )
          {
            v22 = v74;
LABEL_94:
            if ( *v4 != v5 )
            {
              if ( v5 != -1 )
              {
                ungetc_nolock(v5, v24);
                v10 = -1;
              }
              v53 = 1;
              goto LABEL_211;
            }
            --v56;
            v3 = 0;
            if ( !v22 )
              v73 = v67;
            goto LABEL_191;
          }
          goto LABEL_88;
        }
        v29 = 100;
      }
      if ( v5 == 45 )
      {
        v57 = 1;
      }
      else if ( v5 != 43 )
      {
LABEL_103:
        if ( v5 != 48 )
          goto LABEL_123;
        v58 = ++v8;
        v5 = inc_0((__int64)a1);
        v59 = v5;
        if ( (((_BYTE)v5 - 88) & 0xDF) != 0 )
        {
          v66 = 1;
          if ( v29 == 120 )
          {
            v58 = --v8;
            if ( v5 != -1 )
              ungetc_nolock(v5, a1);
            v31 = v61;
            v5 = 48;
            v59 = 48;
          }
          else
          {
            v31 = v61;
            if ( v61 )
            {
              if ( !--v15 )
                ++v28;
            }
            v29 = 111;
          }
        }
        else
        {
          v58 = ++v8;
          v34 = inc_0((__int64)a1);
          v31 = v61;
          v59 = v34;
          v5 = v34;
          if ( v61 )
          {
            v15 -= 2;
            if ( v15 < 1 )
              ++v28;
          }
          v29 = 120;
        }
LABEL_124:
        if ( !v62 )
        {
          if ( v28 )
          {
LABEL_167:
            v44 = v60;
LABEL_168:
            v3 = 0;
            if ( v57 )
              v60 = -v44;
            goto LABEL_170;
          }
          while ( 1 )
          {
            if ( ((v29 - 112) & 0xFFFFFFF7) != 0 )
            {
              if ( (pctype[(unsigned __int8)v5] & 4) == 0 )
                goto LABEL_165;
              v41 = v60;
              if ( v29 == 111 )
              {
                if ( v5 >= 56 )
                {
                  v28 = 1;
                  goto LABEL_161;
                }
                v41 = 8 * v60;
              }
              else
              {
                v41 = 10 * v60;
              }
            }
            else
            {
              v42 = pctype[(unsigned __int8)v5];
              if ( (v42 & 0x80u) == 0 )
                goto LABEL_165;
              v43 = (char)v5;
              v41 = 16 * v60;
              v5 = ((char)v5 & 0xFFFFFFDF) - 7;
              if ( (v42 & 4) != 0 )
                v5 = v43;
              v59 = v5;
            }
            v60 = v41;
LABEL_161:
            if ( v28 )
            {
LABEL_165:
              v58 = --v8;
              if ( v5 != -1 )
                ungetc_nolock(v5, a1);
              goto LABEL_167;
            }
            ++v66;
            v44 = v5 + v41 - 48;
            v60 = v44;
            if ( v31 )
            {
              if ( !--v15 )
                goto LABEL_168;
            }
            v58 = ++v8;
            v45 = inc_0((__int64)a1);
            v31 = v61;
            v5 = v45;
            v59 = v45;
          }
        }
        if ( !v28 )
        {
          while ( 1 )
          {
            if ( ((v29 - 112) & 0xFFFFFFF7) != 0 )
            {
              if ( (pctype[(unsigned __int8)v5] & 4) == 0 )
                goto LABEL_142;
              v35 = v63;
              if ( v29 == 111 )
              {
                if ( v5 >= 56 )
                {
                  v28 = 1;
                  goto LABEL_138;
                }
                v35 = 8 * v63;
              }
              else
              {
                v35 = 10 * v63;
              }
            }
            else
            {
              v36 = pctype[(unsigned __int8)v5];
              if ( (v36 & 0x80u) == 0 )
                goto LABEL_142;
              v37 = (char)v5;
              v35 = 16 * v63;
              v5 = ((char)v5 & 0xFFFFFFDF) - 7;
              if ( (v36 & 4) != 0 )
                v5 = v37;
              v59 = v5;
            }
            v63 = v35;
LABEL_138:
            if ( v28 )
            {
LABEL_142:
              v58 = --v8;
              if ( v5 != -1 )
                ungetc_nolock(v5, a1);
              break;
            }
            ++v66;
            v38 = v5 - 48 + v35;
            v63 = v38;
            if ( v31 )
            {
              if ( !--v15 )
                goto LABEL_145;
            }
            v58 = ++v8;
            v39 = inc_0((__int64)a1);
            v31 = v61;
            v5 = v39;
            v59 = v39;
          }
        }
        v38 = v63;
LABEL_145:
        v3 = 0;
        v40 = -v38;
        if ( !v57 )
          v40 = v38;
        v63 = v40;
LABEL_170:
        if ( !v66 )
          goto LABEL_209;
        if ( !v74 )
        {
          ++v65;
          v25 = v68;
          v32 = v60;
LABEL_173:
          if ( v62 )
          {
            *(_QWORD *)v25 = v63;
          }
          else if ( v55 )
          {
            *(_DWORD *)v25 = v32;
          }
          else
          {
            *(_WORD *)v25 = v32;
          }
        }
LABEL_191:
        ++v56;
        v50 = ++v4;
LABEL_194:
        v10 = -1;
        if ( v5 == -1 && (*v4 != 37 || v50[1] != 110) )
          goto LABEL_214;
LABEL_197:
        v7 = *v4;
        if ( !*v4 )
        {
LABEL_210:
          v53 = v64;
LABEL_211:
          if ( v5 == -1 )
            goto LABEL_214;
          if ( v53 == 1 )
          {
            invalid_parameter();
            return v65;
          }
          return v65;
        }
        v6 = (__int64)a1;
        continue;
      }
      if ( --v15 || !v61 )
      {
        v58 = ++v8;
        v5 = inc_0((__int64)v24);
        v59 = v5;
      }
      else
      {
        v28 = 1;
      }
      goto LABEL_103;
    }
    break;
  }
  if ( v29 == 99 || v29 == 123 )
  {
    v58 = ++v8;
    v5 = inc_0((__int64)a1);
    v59 = v5;
    v10 = -1;
  }
  else
  {
    do
    {
      ++v8;
      v30 = inc_0((__int64)v24);
      v10 = -1;
      v5 = v30;
      if ( v30 == -1 )
        break;
      v24 = a1;
    }
    while ( (pctype[(unsigned __int8)v30] & 8) != 0 );
    v58 = v8;
    v59 = v30;
  }
  if ( v5 != -1 )
  {
    v25 = v68;
    v23 = v70;
    v24 = a1;
    v22 = v74;
    goto LABEL_65;
  }
LABEL_214:
  if ( v65 || v56 )
    return v65;
  return v10;
}
