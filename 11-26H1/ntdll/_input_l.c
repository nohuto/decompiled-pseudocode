/*
 * XREFs of _input_l @ 0x180131AA0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 *     isleadbyte @ 0x18012AA88 (isleadbyte.c)
 *     __pctype_func @ 0x18012E500 (__pctype_func.c)
 *     ReadString @ 0x180131738 (ReadString.c)
 *     ReadStringDelimited @ 0x180131910 (ReadStringDelimited.c)
 *     _inc @ 0x180131A68 (_inc.c)
 *     _ungetc_nolock @ 0x1801325A4 (_ungetc_nolock.c)
 */

__int64 __fastcall input_l(FILE *Stream, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  unsigned __int8 *v4; // r14
  FILE *v5; // r15
  int v6; // edi
  unsigned __int8 v7; // bl
  int v8; // r13d
  unsigned int v9; // esi
  unsigned int v10; // r12d
  int v11; // esi
  int v12; // ebx
  __int64 v13; // rbx
  int v14; // r15d
  char v15; // si
  char v16; // r13
  int v17; // edi
  __int64 v18; // rbx
  unsigned __int8 *v19; // rax
  unsigned __int8 v20; // al
  char v21; // r9
  __int64 v22; // rax
  unsigned __int8 v23; // al
  __int64 v24; // rcx
  char v25; // bl
  char v26; // si
  unsigned int v27; // r15d
  int v28; // edx
  int v29; // r8d
  int v30; // ecx
  char v31; // cl
  FILE *v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // rsi
  int v35; // ebx
  bool v36; // zf
  __int64 v37; // rax
  int v38; // ecx
  __int64 v39; // rsi
  int v40; // ebx
  const unsigned __int16 *v41; // rax
  int v42; // ecx
  char v43; // al
  char v44; // dl
  char v45; // cl
  int v46; // eax
  unsigned __int8 *v47; // rbx
  int v48; // eax
  int v49; // eax
  int v50; // ecx
  FILE *v51; // rdx
  char v53; // [rsp+48h] [rbp-29h]
  char v54; // [rsp+49h] [rbp-28h]
  char v55; // [rsp+4Ah] [rbp-27h]
  char v56; // [rsp+4Bh] [rbp-26h]
  char v57; // [rsp+4Ch] [rbp-25h]
  int v58; // [rsp+50h] [rbp-21h] BYREF
  int v59; // [rsp+54h] [rbp-1Dh] BYREF
  char v60; // [rsp+58h] [rbp-19h]
  int v61; // [rsp+5Ch] [rbp-15h]
  int Character; // [rsp+60h] [rbp-11h]
  int v63; // [rsp+64h] [rbp-Dh]
  int v64; // [rsp+68h] [rbp-9h]
  int v65; // [rsp+6Ch] [rbp-5h]
  __int64 v66; // [rsp+70h] [rbp-1h]
  int v67; // [rsp+78h] [rbp+7h]
  _DWORD v68[3]; // [rsp+7Ch] [rbp+Bh] BYREF
  __int64 v69; // [rsp+88h] [rbp+17h]
  char SrcCh[8]; // [rsp+90h] [rbp+1Fh] BYREF
  unsigned __int8 *v72; // [rsp+E0h] [rbp+6Fh] BYREF
  __int64 v73; // [rsp+F0h] [rbp+7Fh]

  v73 = a4;
  v4 = a2;
  v66 = 0LL;
  v5 = Stream;
  Character = 0;
  v6 = 0;
  v59 = 0;
  v69 = 0LL;
  if ( !a2 || !Stream )
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
  v7 = *a2;
  v8 = 0;
  v56 = 0;
  v9 = 0;
  v58 = 0;
  v68[0] = 0;
  if ( !v7 )
    return v9;
  v10 = -1;
  while ( 2 )
  {
    if ( (_pctype_func()[v7] & 8) != 0 )
    {
      v11 = v8;
      while ( 1 )
      {
        v58 = v11;
        v8 = v11;
        v12 = inc(v5);
        if ( v12 == -1 )
          break;
        ++v11;
        if ( (_pctype_func()[(unsigned __int8)v12] & 8) == 0 )
        {
          ungetc_nolock(v12, v5);
          goto LABEL_10;
        }
      }
      do
LABEL_10:
        v13 = *++v4;
      while ( (_pctype_func()[v13] & 8) != 0 );
      goto LABEL_192;
    }
    if ( *v4 != 37 )
      goto LABEL_186;
    if ( v4[1] == 37 )
    {
      ++v4;
LABEL_186:
      v58 = ++v8;
      v6 = inc(v5);
      Character = v6;
      v59 = v6;
      v48 = *v4++;
      v47 = v4;
      if ( v48 == v6 )
      {
        if ( !isleadbyte((unsigned __int8)v6) )
          goto LABEL_189;
        v49 = inc(v5);
        v50 = *v4++;
        v47 = v4;
        if ( v50 == v49 )
          goto LABEL_189;
        if ( v49 != -1 )
          ungetc_nolock(v49, v5);
      }
      if ( v6 == -1 )
        goto LABEL_202;
      v51 = v5;
      goto LABEL_200;
    }
    v14 = 0;
    v61 = 0;
    v57 = 0;
    v15 = 0;
    v53 = 0;
    v16 = 0;
    v67 = 0;
    v17 = 0;
    v65 = 0;
    v55 = 1;
    do
    {
      v72 = ++v4;
      v18 = *v4;
      v19 = (unsigned __int8 *)_pctype_func();
      if ( (v19[2 * v18] & 4) != 0 )
      {
        ++v65;
        v14 = v18 + 2 * (5 * v14 - 24);
        goto LABEL_30;
      }
      if ( (unsigned int)v18 > 0x68 )
      {
        switch ( (_DWORD)v18 )
        {
          case 'j':
            goto LABEL_29;
          case 'l':
            v19 = v4 + 1;
            if ( v4[1] == 108 )
            {
LABEL_28:
              v4 = v19;
              v72 = v19;
              goto LABEL_29;
            }
            ++v55;
            break;
          case 't':
            goto LABEL_44;
          case 'w':
            break;
          case 'z':
            goto LABEL_44;
          default:
LABEL_48:
            ++v15;
            goto LABEL_30;
        }
        ++v16;
        goto LABEL_30;
      }
      if ( (_DWORD)v18 == 104 )
      {
        --v55;
        --v16;
        goto LABEL_30;
      }
      if ( (_DWORD)v18 != 42 )
      {
        if ( (_DWORD)v18 == 70 )
          goto LABEL_30;
        if ( (_DWORD)v18 != 73 )
        {
          if ( (_DWORD)v18 == 76 )
          {
            ++v55;
          }
          else if ( (_DWORD)v18 != 78 )
          {
            goto LABEL_48;
          }
LABEL_30:
          v21 = v53;
          continue;
        }
        v20 = v4[1];
        if ( v20 == 54 )
        {
          v19 = v4 + 2;
          if ( v4[2] == 52 )
            goto LABEL_28;
        }
        else if ( v20 == 51 )
        {
          v19 = v4 + 2;
          if ( v4[2] == 50 )
          {
            v4 += 2;
            v72 = v19;
            goto LABEL_30;
          }
        }
LABEL_44:
        v23 = v4[1];
        if ( v23 != 100 )
        {
          LOBYTE(v19) = v23 - 88;
          if ( (unsigned __int8)v19 > 0x20u || (v24 = 0x120820001LL, !_bittest64(&v24, (unsigned __int64)v19)) )
          {
            ++v17;
            v66 = 0LL;
            goto LABEL_48;
          }
        }
LABEL_29:
        v66 = 0LL;
        ++v17;
        goto LABEL_30;
      }
      v21 = ++v53;
    }
    while ( !v15 );
    v64 = v17;
    v6 = Character;
    v60 = v16;
    v8 = v58;
    v63 = v14;
    if ( v21 )
    {
      v22 = 0LL;
    }
    else
    {
      v69 = v73;
      v73 += 8LL;
      v22 = *(_QWORD *)(v73 - 8);
    }
    v25 = v60;
    v26 = 0;
    *(_QWORD *)&v68[1] = v22;
    *(_QWORD *)SrcCh = v22;
    v54 = 0;
    if ( !v60 )
    {
      if ( *v4 == 83 || (v25 = -1, *v4 == 67) )
        v25 = 1;
    }
    v27 = *v4 | 0x20;
    if ( v27 != 110 )
    {
      if ( v27 == 99 || v27 == 123 )
      {
        v8 = ++v58;
        v6 = inc(Stream);
        Character = v6;
        v59 = v6;
      }
      else
      {
        do
        {
          ++v8;
          v6 = inc(Stream);
          Character = v6;
        }
        while ( v6 != -1 && (_pctype_func()[(unsigned __int8)v6] & 8) != 0 );
        v26 = 0;
        v58 = v8;
        v59 = v6;
      }
      if ( v6 == -1 )
        goto LABEL_202;
      v21 = v53;
    }
    v28 = v65;
    v29 = v63;
    if ( v65 && !v63 )
      goto LABEL_194;
    if ( v27 > 0x70 )
    {
      if ( v27 == 115 )
      {
        v31 = 32;
        goto LABEL_173;
      }
      if ( v27 != 117 )
      {
        if ( v27 == 120 )
          goto LABEL_80;
        if ( v27 != 123 )
          goto LABEL_89;
        v31 = 64;
        goto LABEL_173;
      }
    }
    else
    {
      if ( v27 != 112 )
      {
        if ( v27 != 99 )
        {
          if ( v27 == 100 )
            break;
          if ( v27 != 105 )
          {
            if ( v27 != 110 )
            {
              if ( v27 == 111 )
                break;
LABEL_89:
              if ( *v4 == v6 )
              {
                --v56;
                if ( !v21 )
                  v73 = v69;
                goto LABEL_184;
              }
LABEL_194:
              if ( v6 == -1 )
                goto LABEL_202;
              v51 = Stream;
LABEL_200:
              ungetc_nolock(v6, v51);
              goto LABEL_201;
            }
            v30 = v8;
            if ( !v21 )
            {
LABEL_167:
              if ( v64 )
              {
                **(_QWORD **)&v68[1] = v66;
              }
              else if ( v55 )
              {
                **(_DWORD **)&v68[1] = v30;
              }
              else
              {
                **(_WORD **)&v68[1] = v30;
              }
            }
LABEL_184:
            ++v56;
            v5 = Stream;
            v47 = ++v4;
LABEL_189:
            if ( v6 == -1 && (*v4 != 37 || v47[1] != 110) )
              goto LABEL_202;
LABEL_192:
            v7 = *v4;
            if ( !*v4 )
              goto LABEL_201;
            continue;
          }
          v27 = 100;
LABEL_80:
          switch ( v6 )
          {
            case '-':
              v57 = 1;
LABEL_94:
              --v63;
              if ( v29 == 1 && v65 )
              {
                v26 = 1;
                v54 = 1;
                goto LABEL_97;
              }
              v32 = Stream;
              v58 = ++v8;
              v6 = inc(Stream);
              Character = v6;
              v59 = v6;
              break;
            case '+':
              goto LABEL_94;
            case '0':
              v58 = ++v8;
              v6 = inc(v32);
              Character = v6;
              v59 = v6;
              if ( (((_BYTE)v6 - 88) & 0xDF) != 0 )
              {
                v67 = 1;
                if ( v27 == 120 )
                {
                  v58 = --v8;
                  if ( v6 != -1 )
                    ungetc_nolock(v6, v32);
                  v6 = 48;
                  Character = 48;
                  v59 = 48;
                }
                else
                {
                  if ( v65 )
                  {
                    if ( !--v63 )
                      v54 = ++v26;
                  }
                  v27 = 111;
                }
              }
              else
              {
                v58 = ++v8;
                v6 = inc(v32);
                Character = v6;
                v59 = v6;
                if ( v65 )
                {
                  v63 -= 2;
                  if ( v63 < 1 )
                    v54 = ++v26;
                }
                v27 = 120;
              }
              break;
            default:
LABEL_97:
              v32 = Stream;
              break;
          }
          goto LABEL_118;
        }
        v31 = 16;
        if ( !v65 )
        {
          v28 = 1;
          v29 = v63 + 1;
        }
LABEL_173:
        v43 = v31 | 1;
        if ( !v28 )
          v43 = v31;
        v44 = v43 | 2;
        if ( v25 <= 0 )
          v44 = v43;
        v45 = v44 | 4;
        if ( !v21 )
          v45 = v44;
        if ( v27 == 123 )
        {
          v46 = ReadStringDelimited(v45, &v72, &v59, &v58, SrcCh, v29, Stream, v68);
          v4 = v72;
        }
        else
        {
          v46 = ReadString(v45, 0LL, &v59, &v58, SrcCh, v29, Stream, v68);
        }
        v6 = v59;
        if ( !v46 )
        {
          v8 = v58;
          Character = v59;
          goto LABEL_184;
        }
        goto LABEL_201;
      }
      ++v64;
      v55 = 1;
      v66 = 0LL;
    }
    break;
  }
  if ( v6 == 45 )
  {
    v57 = 1;
  }
  else if ( v6 != 43 )
  {
    goto LABEL_118;
  }
  --v63;
  if ( v29 == 1 && v65 )
  {
    v26 = 1;
    v54 = 1;
  }
  else
  {
    v58 = ++v8;
    v6 = inc(Stream);
    Character = v6;
    v59 = v6;
  }
LABEL_118:
  if ( !v64 )
  {
    if ( v26 )
    {
LABEL_161:
      v42 = v61;
LABEL_162:
      if ( v57 )
        v61 = -v42;
      goto LABEL_164;
    }
    while ( 1 )
    {
      if ( ((v27 - 112) & 0xFFFFFFF7) != 0 )
      {
        if ( (_pctype_func()[(unsigned __int8)v6] & 4) == 0 )
          goto LABEL_159;
        v38 = v61;
        if ( v27 == 111 )
        {
          if ( v6 >= 56 )
          {
            v26 = 1;
            v54 = 1;
            goto LABEL_155;
          }
          v38 = 8 * v61;
        }
        else
        {
          v38 = 10 * v61;
        }
        v61 = v38;
      }
      else
      {
        v39 = (unsigned __int8)v6;
        if ( SLOBYTE(_pctype_func()[(unsigned __int8)v6]) >= 0 )
          goto LABEL_159;
        v61 *= 16;
        v40 = (char)v6;
        v41 = _pctype_func();
        v38 = v61;
        v6 = ((char)v6 & 0xFFFFFFDF) - 7;
        v36 = (v41[v39] & 4) == 0;
        v26 = v54;
        if ( !v36 )
          v6 = v40;
        Character = v6;
        v59 = v6;
      }
LABEL_155:
      if ( v26 )
      {
LABEL_159:
        v58 = --v8;
        if ( v6 != -1 )
          ungetc_nolock(v6, Stream);
        goto LABEL_161;
      }
      ++v67;
      v42 = v6 + v38 - 48;
      v61 = v42;
      if ( v65 )
      {
        if ( !--v63 )
          goto LABEL_162;
      }
      v58 = ++v8;
      v6 = inc(Stream);
      Character = v6;
      v59 = v6;
    }
  }
  if ( v26 )
    goto LABEL_139;
  v33 = v66;
  while ( 2 )
  {
    if ( ((v27 - 112) & 0xFFFFFFF7) != 0 )
    {
      if ( (_pctype_func()[(unsigned __int8)v6] & 4) == 0 )
        break;
      if ( v27 == 111 )
      {
        if ( v6 < 56 )
        {
          v33 *= 8LL;
          goto LABEL_128;
        }
        v26 = 1;
        v54 = 1;
      }
      else
      {
        v33 *= 10LL;
LABEL_128:
        v66 = v33;
      }
    }
    else
    {
      v34 = (unsigned __int8)v6;
      if ( SLOBYTE(_pctype_func()[(unsigned __int8)v6]) >= 0 )
        break;
      v66 = 16 * v33;
      v35 = (char)v6;
      v6 = ((char)v6 & 0xFFFFFFDF) - 7;
      v36 = (_pctype_func()[v34] & 4) == 0;
      v26 = v54;
      if ( !v36 )
        v6 = v35;
      v33 = v66;
      Character = v6;
      v59 = v6;
    }
    if ( !v26 )
    {
      ++v67;
      v33 += v6 - 48;
      v66 = v33;
      if ( v65 )
      {
        if ( !--v63 )
          goto LABEL_139;
      }
      v58 = ++v8;
      v6 = inc(Stream);
      Character = v6;
      v59 = v6;
      continue;
    }
    break;
  }
  v58 = --v8;
  if ( v6 != -1 )
    ungetc_nolock(v6, Stream);
LABEL_139:
  v37 = -v66;
  if ( !v57 )
    v37 = v66;
  v66 = v37;
LABEL_164:
  if ( v67 )
  {
    if ( !v53 )
    {
      ++v68[0];
      v30 = v61;
      goto LABEL_167;
    }
    goto LABEL_184;
  }
LABEL_201:
  if ( v6 != -1 )
    return v68[0];
LABEL_202:
  if ( v68[0] || v56 )
    return v68[0];
  return v10;
}
