/*
 * XREFs of _winput_s @ 0x140541970
 * Callers:
 *     _swinput_s @ 0x14054189C (_swinput_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 *     iswctype @ 0x14053B358 (iswctype.c)
 *     ReadString_0 @ 0x1405414D8 (ReadString_0.c)
 *     ReadStringDelimited_0 @ 0x14054170C (ReadStringDelimited_0.c)
 *     _whiteout @ 0x140541918 (_whiteout.c)
 *     _fgetwc_nolock @ 0x1405423B8 (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x140542404 (_ungetwc_nolock.c)
 */

__int64 __fastcall winput_s(FILE *File, wint_t *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned __int16 *v4; // r15
  wint_t v5; // di
  FILE *v6; // r14
  wint_t v7; // cx
  int v8; // esi
  __int64 result; // rax
  wint_t v10; // ax
  int v11; // r10d
  int v12; // r9d
  char v13; // si
  char v14; // r8
  char v15; // r14
  char v16; // r12
  int v17; // r11d
  unsigned int v18; // edx
  unsigned __int16 v19; // ax
  unsigned __int16 *v20; // rax
  char v21; // r8
  unsigned __int64 Src; // r12
  _BYTE *v23; // rdx
  unsigned __int16 *v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  char v27; // r13
  unsigned int v28; // esi
  wint_t v29; // ax
  int v30; // eax
  char v31; // cl
  FILE *v32; // r12
  int v33; // r14d
  int v34; // r14d
  int v35; // r9d
  int v36; // r12d
  int v37; // r14d
  __int64 v38; // rcx
  wint_t v39; // ax
  wint_t v40; // ax
  wint_t v41; // dx
  wchar_t v42; // r8
  __int64 v43; // rcx
  wint_t v44; // ax
  __int64 v45; // rax
  int v46; // ecx
  wint_t v47; // dx
  wchar_t v48; // r8
  int v49; // ecx
  wint_t v50; // ax
  char v51; // al
  char v52; // cl
  char v53; // al
  int v54; // eax
  unsigned __int16 *v55; // rdx
  wint_t v56; // ax
  FILE *v57; // rdx
  int v58; // r12d
  int v59; // [rsp+50h] [rbp-39h] BYREF
  int v60; // [rsp+54h] [rbp-35h] BYREF
  char v61; // [rsp+58h] [rbp-31h]
  char v62; // [rsp+59h] [rbp-30h]
  char v63; // [rsp+5Ah] [rbp-2Fh]
  int v64; // [rsp+5Ch] [rbp-2Dh]
  int v65; // [rsp+60h] [rbp-29h]
  int v66; // [rsp+64h] [rbp-25h]
  int v67; // [rsp+68h] [rbp-21h]
  int v68; // [rsp+6Ch] [rbp-1Dh]
  __int64 v69; // [rsp+70h] [rbp-19h]
  unsigned int v70; // [rsp+7Ch] [rbp-Dh] BYREF
  int v71; // [rsp+80h] [rbp-9h]
  __int64 v72; // [rsp+88h] [rbp-1h] BYREF
  unsigned int *v73; // [rsp+90h] [rbp+7h]
  _BYTE *v74; // [rsp+98h] [rbp+Fh]
  unsigned __int16 *v76; // [rsp+F8h] [rbp+6Fh] BYREF
  unsigned int *v77; // [rsp+100h] [rbp+77h]
  char v78; // [rsp+108h] [rbp+7Fh]

  v77 = a3;
  v3 = 0;
  v4 = a2;
  v69 = 0LL;
  v5 = 0;
  v64 = 0;
  v6 = File;
  LOWORD(v59) = 0;
  v73 = 0LL;
  if ( !a2 || !File )
  {
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
  v7 = *a2;
  v8 = 0;
  v61 = 0;
  result = 0LL;
  v60 = 0;
  v70 = 0;
  if ( !v7 )
    return result;
  while ( 2 )
  {
    if ( iswctype(v7, 8u) )
    {
      v60 = v8 - 1;
      v10 = whiteout(&v60, v6);
      if ( v10 != 0xFFFF )
        ungetwc_nolock(v10, v6);
      do
        ++v4;
      while ( iswctype(*v4, 8u) );
      goto LABEL_196;
    }
    if ( *v4 != 37 )
      goto LABEL_192;
    if ( v4[1] == 37 )
    {
      ++v4;
LABEL_192:
      v60 = v8 + 1;
      LOWORD(v59) = fgetwc_nolock(v6);
      v5 = v59;
      v56 = *v4++;
      v64 = (unsigned __int16)v59;
      v55 = v4;
      if ( v56 == (_WORD)v59 )
        goto LABEL_193;
      if ( (_WORD)v59 == 0xFFFF )
        goto LABEL_214;
      v57 = v6;
LABEL_208:
      ungetwc_nolock(v5, v57);
      goto LABEL_209;
    }
    v66 = 0;
    v71 = 0;
    v11 = 0;
    v12 = 0;
    v62 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 1;
    v17 = 0;
    do
    {
      v76 = ++v4;
      v18 = *v4;
      if ( (v18 & 0xFF00) == 0 && (pctype[(unsigned __int8)v18] & 4) != 0 )
      {
        ++v11;
        v12 = v18 + 2 * (5 * v12 - 24);
        continue;
      }
      if ( v18 <= 0x68 )
      {
        switch ( v18 )
        {
          case 'h':
            --v16;
            --v15;
            continue;
          case '*':
            ++v13;
            continue;
          case 'F':
            continue;
          case 'I':
            v19 = v4[1];
            if ( v19 == 54 )
            {
              v20 = v4 + 2;
              if ( v4[2] == 52 )
                goto LABEL_26;
            }
            else if ( v19 == 51 )
            {
              v24 = v4 + 2;
              if ( v4[2] == 50 )
              {
                v4 += 2;
                v76 = v24;
                continue;
              }
            }
LABEL_41:
            v25 = v4[1];
            if ( (_WORD)v25 == 100 )
              goto LABEL_27;
            LOWORD(v25) = v25 - 88;
            if ( (unsigned __int16)v25 <= 0x20u )
            {
              v26 = 0x120820001LL;
              if ( _bittest64(&v26, v25) )
                goto LABEL_27;
            }
            ++v17;
            v69 = 0LL;
            break;
          case 'L':
            ++v16;
            continue;
          case 'N':
            continue;
        }
LABEL_45:
        ++v14;
        continue;
      }
      switch ( v18 )
      {
        case 'j':
          goto LABEL_27;
        case 'l':
          v20 = v4 + 1;
          if ( v4[1] == 108 )
          {
LABEL_26:
            v4 = v20;
            v76 = v20;
LABEL_27:
            v69 = 0LL;
            ++v17;
            continue;
          }
          ++v16;
          break;
        case 't':
          goto LABEL_41;
        case 'w':
          break;
        case 'z':
          goto LABEL_41;
        default:
          goto LABEL_45;
      }
      ++v15;
    }
    while ( !v14 );
    v5 = v64;
    v21 = v13;
    v78 = v16;
    Src = 0LL;
    v63 = v13;
    v68 = v17;
    v67 = v11;
    v65 = v12;
    if ( v13 )
    {
      v23 = 0LL;
      v74 = 0LL;
    }
    else
    {
      v23 = *(_BYTE **)v77;
      v73 = v77;
      v74 = v23;
      v77 += 2;
    }
    v72 = (__int64)v23;
    v27 = 0;
    if ( !v15 )
    {
      if ( *v4 == 83 || (v15 = 1, *v4 == 67) )
        v15 = -1;
    }
    v28 = *v4 | 0x20;
    if ( v28 == 110 )
    {
LABEL_61:
      if ( v11 && !v12 )
      {
        if ( v5 == 0xFFFF )
          goto LABEL_214;
        v57 = File;
        goto LABEL_208;
      }
      if ( !v21 && ((v28 - 99) & 0xFFFFFFE7) == 0 && v28 != 107 )
      {
        v73 += 2;
        v23 = (_BYTE *)*((_QWORD *)v73 - 1);
        Src = *v73;
        v74 = v23;
        v72 = (__int64)v23;
        v77 = v73 + 2;
        if ( !Src )
        {
          v58 = 0;
          if ( v15 <= 0 )
            *v23 = 0;
          else
            *(_WORD *)v23 = 0;
          goto LABEL_210;
        }
      }
      if ( v28 > 0x70 )
      {
        if ( v28 == 115 )
        {
          v31 = 32;
          goto LABEL_179;
        }
        if ( v28 == 117 )
          goto LABEL_74;
        if ( v28 != 120 )
        {
          if ( v28 != 123 )
          {
LABEL_88:
            if ( *v4 != v5 )
            {
              if ( v5 != 0xFFFF )
                ungetwc_nolock(v5, File);
              v58 = 1;
              goto LABEL_210;
            }
            --v61;
            if ( !v21 )
              v77 = v73;
            goto LABEL_190;
          }
          v31 = 64;
LABEL_179:
          v51 = v31 | 1;
          if ( !v11 )
            v51 = v31;
          v52 = v51 | 2;
          if ( v15 <= 0 )
            v52 = v51;
          v53 = v52 | 4;
          if ( !v21 )
            v53 = v52;
          if ( v28 == 123 )
          {
            v54 = ReadStringDelimited_0(v53, &v76, (wint_t *)&v59, &v60, (void **)&v72, v12, File, Src, &v70);
            v4 = v76;
          }
          else
          {
            v54 = ReadString_0(v53, 0LL, (wint_t *)&v59, &v60, (void **)&v72, v12, File, Src, &v70);
          }
          v5 = v59;
          if ( v54 )
            goto LABEL_209;
          v64 = (unsigned __int16)v59;
          goto LABEL_190;
        }
LABEL_79:
        switch ( v5 )
        {
          case '-':
            v62 = 1;
LABEL_93:
            v65 = v12 - 1;
            if ( v12 == 1 && v11 )
            {
              v27 = 1;
              goto LABEL_96;
            }
            v32 = File;
            v33 = ++v60;
            v5 = fgetwc_nolock(File);
            LOWORD(v59) = v5;
            v64 = v5;
            break;
          case '+':
            goto LABEL_93;
          case '0':
            v34 = v33 + 1;
            v60 = v34;
            v5 = fgetwc_nolock(v32);
            LOWORD(v59) = v5;
            v64 = v5;
            if ( ((v5 - 88) & 0xFFDF) == 0 )
            {
              v60 = v34 + 1;
              v39 = fgetwc_nolock(v32);
              v35 = v67;
              v5 = v39;
              v36 = v65;
              v64 = v39;
              LOWORD(v59) = v39;
              if ( v67 )
              {
                v36 = v65 - 2;
                if ( v65 - 2 < 1 )
                  ++v27;
              }
              v28 = 120;
              goto LABEL_110;
            }
            v71 = 1;
            if ( v28 != 120 )
            {
              v35 = v67;
              v36 = v65;
              if ( v67 )
              {
                v36 = v65 - 1;
                if ( v65 == 1 )
                  ++v27;
              }
              v28 = 111;
              goto LABEL_110;
            }
            v60 = v34 - 1;
            if ( v5 != 0xFFFF )
              ungetwc_nolock(v5, v32);
            v5 = 48;
            v64 = 48;
            LOWORD(v59) = 48;
            break;
          default:
LABEL_96:
            v32 = File;
            v33 = v60;
            break;
        }
        goto LABEL_108;
      }
      switch ( v28 )
      {
        case 'p':
          v78 = 1;
          v68 = v17 + 1;
          v69 = 0LL;
          goto LABEL_74;
        case 'c':
          v31 = 16;
          if ( !v11 )
          {
            v11 = 1;
            ++v12;
          }
          goto LABEL_179;
        case 'd':
          goto LABEL_74;
        case 'i':
          v28 = 100;
          goto LABEL_79;
      }
      if ( v28 != 110 )
      {
        if ( v28 != 111 )
          goto LABEL_88;
LABEL_74:
        if ( v5 == 45 )
        {
          v62 = 1;
LABEL_124:
          v65 = v12 - 1;
          if ( v12 == 1 && v11 )
          {
            v27 = 1;
            v36 = 0;
LABEL_109:
            v35 = v67;
LABEL_110:
            v37 = v60;
          }
          else
          {
            v37 = ++v60;
            v40 = fgetwc_nolock(File);
            v36 = v65;
            v5 = v40;
            v35 = v67;
            v64 = v40;
            LOWORD(v59) = v40;
          }
          if ( v68 )
          {
            if ( !v27 )
            {
              while ( 1 )
              {
                if ( ((v28 - 112) & 0xFFFFFFF7) != 0 )
                {
                  if ( (v5 & 0xFF00) != 0 || (pctype[(unsigned __int8)v5] & 4) == 0 )
                    goto LABEL_140;
                  v38 = v69;
                  if ( v28 == 111 )
                  {
                    if ( v5 >= 0x38u )
                    {
                      v27 = 1;
                      goto LABEL_136;
                    }
                    v38 = 8 * v69;
                  }
                  else
                  {
                    v38 = 10 * v69;
                  }
                  v69 = v38;
                }
                else
                {
                  if ( (v5 & 0xFF00) != 0 || (v41 = v5, v42 = pctype[(unsigned __int8)v5], (v42 & 0x80u) == 0) )
                  {
LABEL_140:
                    v60 = v37 - 1;
                    if ( v5 != 0xFFFF )
                      ungetwc_nolock(v5, File);
                    break;
                  }
                  v38 = 16 * v69;
                  v69 *= 16LL;
                  if ( (v42 & 4) == 0 )
                    v41 = (v5 & 0xFFDF) - 7;
                  v5 = v41;
                  LOWORD(v59) = v41;
                  v64 = v41;
                }
LABEL_136:
                if ( v27 )
                  goto LABEL_140;
                ++v71;
                v43 = v5 + v38 - 48;
                v69 = v43;
                if ( v35 )
                {
                  if ( !--v36 )
                    goto LABEL_143;
                }
                v60 = ++v37;
                v44 = fgetwc_nolock(File);
                v35 = v67;
                v5 = v44;
                v64 = v44;
                LOWORD(v59) = v44;
              }
            }
            v43 = v69;
LABEL_143:
            v45 = -v43;
            if ( !v62 )
              v45 = v43;
            v69 = v45;
            goto LABEL_170;
          }
          if ( v27 )
          {
LABEL_167:
            v49 = v66;
LABEL_168:
            if ( v62 )
              v66 = -v49;
LABEL_170:
            if ( !v71 )
            {
LABEL_209:
              v58 = 0;
LABEL_210:
              if ( v5 == 0xFFFF )
                goto LABEL_214;
              if ( v58 == 1 )
                xHalTimerWatchdogStop();
              return v70;
            }
            if ( v63 )
              goto LABEL_190;
            ++v70;
            v23 = v74;
            v30 = v66;
LABEL_173:
            if ( v68 )
            {
              *(_QWORD *)v23 = v69;
            }
            else if ( v78 )
            {
              *(_DWORD *)v23 = v30;
            }
            else
            {
              *(_WORD *)v23 = v30;
            }
            goto LABEL_190;
          }
          while ( 2 )
          {
            if ( ((v28 - 112) & 0xFFFFFFF7) != 0 )
            {
              if ( (v5 & 0xFF00) != 0 || (pctype[(unsigned __int8)v5] & 4) == 0 )
                goto LABEL_165;
              v46 = v66;
              if ( v28 == 111 )
              {
                if ( v5 < 0x38u )
                {
                  v46 = 8 * v66;
                  goto LABEL_155;
                }
                v27 = 1;
              }
              else
              {
                v46 = 10 * v66;
LABEL_155:
                v66 = v46;
              }
            }
            else
            {
              if ( (v5 & 0xFF00) != 0 || (v47 = v5, v48 = pctype[(unsigned __int8)v5], (v48 & 0x80u) == 0) )
              {
LABEL_165:
                v60 = v37 - 1;
                if ( v5 != 0xFFFF )
                  ungetwc_nolock(v5, File);
                goto LABEL_167;
              }
              v46 = 16 * v66;
              v66 *= 16;
              if ( (v48 & 4) == 0 )
                v47 = (v5 & 0xFFDF) - 7;
              v5 = v47;
              LOWORD(v59) = v47;
              v64 = v47;
            }
            if ( v27 )
              goto LABEL_165;
            ++v71;
            v49 = v5 + v46 - 48;
            v66 = v49;
            if ( v35 )
            {
              if ( !--v36 )
                goto LABEL_168;
            }
            v60 = ++v37;
            v50 = fgetwc_nolock(File);
            v35 = v67;
            v5 = v50;
            v64 = v50;
            LOWORD(v59) = v50;
            continue;
          }
        }
        if ( v5 == 43 )
          goto LABEL_124;
LABEL_108:
        v36 = v65;
        goto LABEL_109;
      }
      v30 = v60;
      if ( !v21 )
        goto LABEL_173;
LABEL_190:
      ++v61;
      v6 = File;
      v55 = ++v4;
LABEL_193:
      if ( v5 == 0xFFFF && (*v4 != 37 || v55[1] != 110) )
        goto LABEL_214;
LABEL_196:
      v7 = *v4;
      if ( !*v4 )
        goto LABEL_209;
      v8 = v60;
      continue;
    }
    break;
  }
  if ( v28 == 99 || v28 == 123 )
  {
    ++v60;
    v29 = fgetwc_nolock(File);
  }
  else
  {
    v29 = whiteout(&v60, File);
  }
  v5 = v29;
  LOWORD(v59) = v29;
  v64 = v29;
  if ( v29 != 0xFFFF )
  {
    v23 = v74;
    v12 = v65;
    v11 = v67;
    v17 = v68;
    v21 = v63;
    goto LABEL_61;
  }
LABEL_214:
  if ( v70 || v61 )
    return v70;
  return v3;
}
