/*
 * XREFs of _woutput_s @ 0x180135DA8
 * Callers:
 *     _swoutput_s @ 0x180135C80 (_swoutput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 *     _safecrt_mbtowc @ 0x180134C94 (_safecrt_mbtowc.c)
 *     write_char_2 @ 0x1801366C4 (write_char_2.c)
 *     write_string_2 @ 0x180136714 (write_string_2.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall woutput_s(__int64 a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  int v5; // edi
  int v6; // esi
  wchar_t *v7; // rbx
  __int64 v8; // r11
  int v9; // r10d
  unsigned __int16 v10; // r9
  int v11; // r14d
  __int64 v12; // r12
  __int16 v13; // dx
  unsigned __int16 *v14; // r8
  int v15; // edx
  unsigned __int64 v16; // r10
  __int64 v17; // rax
  unsigned __int16 *v18; // rax
  unsigned int v19; // ecx
  int v20; // ecx
  const char *v21; // rax
  WCHAR v22; // ax
  int v23; // eax
  const wchar_t *v24; // rax
  const wchar_t *i; // r12
  unsigned __int64 v26; // r8
  char v27; // r11
  int v28; // r9d
  char *j; // rcx
  int v30; // eax
  unsigned __int64 v31; // rdx
  char v32; // al
  __int16 v33; // ax
  unsigned int v34; // r11d
  __int64 v35; // rdx
  int v36; // esi
  int v37; // r14d
  int v38; // r10d
  __int64 v39; // rdx
  int v40; // r11d
  int v41; // r10d
  UCHAR *v42; // r15
  int v43; // r14d
  int v44; // eax
  __int64 v45; // r10
  __int64 v46; // rcx
  unsigned __int16 v47; // cx
  int v48; // eax
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  int v51; // eax
  int v52; // edx
  int v54; // [rsp+30h] [rbp-D0h]
  int v55; // [rsp+34h] [rbp-CCh] BYREF
  int v56; // [rsp+38h] [rbp-C8h]
  int v57; // [rsp+3Ch] [rbp-C4h]
  WCHAR v58[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v59; // [rsp+44h] [rbp-BCh]
  UCHAR v60[4]; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v61[2]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v62; // [rsp+50h] [rbp-B0h]
  __int64 v63; // [rsp+58h] [rbp-A8h]
  int v64; // [rsp+60h] [rbp-A0h]
  int v65; // [rsp+64h] [rbp-9Ch]
  int v66; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v67; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v68; // [rsp+78h] [rbp-88h]
  WCHAR v69[64]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v70; // [rsp+100h] [rbp+0h] BYREF
  char v71; // [rsp+27Fh] [rbp+17Fh] BYREF

  v63 = a1;
  v64 = 0;
  v5 = 0;
  v62 = 0;
  v6 = 0;
  v57 = 0;
  v7 = 0LL;
  v56 = 0;
  v65 = 0;
  memset_thunk_772440563353939046(v69, 0, 0x400uLL);
  v8 = v63;
  v9 = 0;
  v58[0] = 0;
  v59 = 0;
  if ( !v63 || !a2 )
    goto LABEL_201;
  v10 = *a2;
  v11 = 0;
  v55 = 0;
  LODWORD(v12) = 0;
  if ( !v10 )
    return (unsigned int)v11;
  v13 = 32;
  do
  {
    ++a2;
    v14 = a3;
    v68 = a2;
    if ( v11 < 0 )
      break;
    if ( (unsigned __int16)(v10 - v13) > 0x5Au )
      v15 = 0;
    else
      v15 = _lookuptable_s[v10 - 32] & 0xF;
    v9 = _lookuptable_s[v15 + v9 + 8 * v15] >> 4;
    v54 = v9;
    if ( v9 == 8 )
      goto LABEL_201;
    if ( v9 )
    {
      switch ( v9 )
      {
        case 1:
          v6 = -1;
          v65 = 0;
          v57 = -1;
          v5 = 0;
          v62 = 0;
          v56 = 0;
          v59 = 0;
          goto LABEL_195;
        case 2:
          v13 = 32;
          if ( v10 == 32 )
          {
            v5 |= 2u;
          }
          else if ( v10 == 35 )
          {
            v5 |= 0x80u;
          }
          else if ( v10 == 43 )
          {
            v5 |= 1u;
          }
          else
          {
            if ( v10 != 45 )
            {
              if ( v10 == 48 )
                v5 |= 8u;
              goto LABEL_197;
            }
            v5 |= 4u;
          }
          goto LABEL_196;
        case 3:
          if ( v10 == 42 )
          {
            v51 = *(_DWORD *)a3;
            a3 += 4;
            if ( v51 < 0 )
              v5 |= 4u;
            v52 = -v51;
            if ( v51 > 0 )
              v52 = v51;
          }
          else
          {
            v52 = v10 + 2 * (5 * v62 - 24);
          }
          v62 = v52;
          goto LABEL_195;
        case 4:
          v6 = 0;
          v57 = 0;
          goto LABEL_195;
        case 5:
          if ( v10 == 42 )
          {
            v6 = *(_DWORD *)a3;
            a3 += 4;
            v13 = 32;
            v57 = v6;
            if ( v6 < 0 )
            {
              v6 = -1;
              v57 = -1;
            }
            goto LABEL_197;
          }
          v6 = v10 + 2 * (5 * v6 - 24);
          v57 = v6;
LABEL_195:
          v13 = 32;
LABEL_196:
          v9 = v54;
          goto LABEL_197;
      }
      if ( v9 != 6 )
      {
        if ( v9 != 7 )
          goto LABEL_195;
        if ( v10 <= 0x69u )
        {
          if ( v10 == 105 )
            goto LABEL_26;
          if ( v10 == 67 )
          {
            if ( (v5 & 0x830) == 0 )
              v5 |= 0x20u;
            goto LABEL_54;
          }
          if ( v10 != 83 )
          {
            if ( v10 != 88 )
            {
              if ( v10 == 90 )
              {
                v18 = *(unsigned __int16 **)a3;
                a3 += 4;
                if ( *(_QWORD *)v14 && (v7 = (wchar_t *)*((_QWORD *)v18 + 1)) != 0LL )
                {
                  v19 = *v18;
                  if ( v18[1] < (unsigned __int16)v19 )
                    goto LABEL_201;
                  if ( (v5 & 0x800) != 0 )
                  {
                    if ( (v19 & 1) != 0 || ((unsigned __int8)v7 & 1) != 0 )
                      goto LABEL_201;
                    v59 = 1;
                    LODWORD(v12) = v19 >> 1;
                  }
                  else
                  {
                    v59 = 0;
                    LODWORD(v12) = v19;
                  }
                }
                else
                {
                  v7 = (wchar_t *)"(null)";
                  LODWORD(v12) = 6;
                }
                goto LABEL_105;
              }
              if ( v10 != 99 )
              {
                if ( v10 == 100 )
                {
LABEL_26:
                  v5 |= 0x40u;
                  goto LABEL_27;
                }
LABEL_105:
                if ( v65 )
                {
                  v8 = v63;
                  goto LABEL_195;
                }
                if ( (v5 & 0x40) != 0 )
                {
                  if ( (v5 & 0x100) != 0 )
                  {
                    v33 = 45;
                    goto LABEL_111;
                  }
                  if ( (v5 & 1) != 0 )
                  {
                    v33 = 43;
LABEL_111:
                    v61[0] = v33;
LABEL_112:
                    v34 = 1;
                    v56 = 1;
LABEL_116:
                    v35 = v63;
                    v36 = v62 - v12 - v34;
                    v37 = v5 & 0xC;
                    LODWORD(v67) = v36;
                    v66 = v37;
                    if ( (v5 & 0xC) == 0 && v36 > 0 )
                    {
                      do
                        write_char_2(32LL, v35, &v55);
                      while ( v55 != -1 && v38 > 0 );
                      v37 = v66;
                      v34 = v56;
                    }
                    write_string_2(v61, v34, v35, &v55);
                    v39 = v63;
                    v40 = 0;
                    if ( v37 == 8 && v36 > 0 )
                    {
                      do
                        write_char_2(48LL, v39, &v55);
                      while ( v55 != -1 && v41 > 0 );
                      v36 = (int)v67;
                    }
                    if ( v59 == v40 && (int)v12 > 0 )
                    {
                      v42 = (UCHAR *)v7;
                      v43 = v12;
                      while ( 1 )
                      {
                        v44 = safecrt_mbtowc(v58, v42, _mb_cur_max);
                        v8 = v63;
                        v43 -= (v44 == 2) + 1;
                        if ( v44 <= 0 )
                          break;
                        write_char_2(v58[0], v63, &v55);
                        v42 += v45;
                        if ( v43 <= 0 )
                        {
                          a2 = v68;
                          goto LABEL_134;
                        }
                      }
                      a2 = v68;
                      v11 = -1;
                      v55 = -1;
                    }
                    else
                    {
                      write_string_2(v7, (unsigned int)v12, v39, &v55);
                      v8 = v63;
LABEL_134:
                      v11 = v55;
                    }
                    if ( v11 < 0 || (v5 & 4) == 0 || v36 <= 0 )
                    {
                      v6 = v57;
                      goto LABEL_195;
                    }
                    v46 = 32LL;
                    do
                    {
                      --v36;
                      write_char_2(v46, v8, &v55);
                      v11 = v55;
                    }
                    while ( v55 != -1 && v36 > 0 );
                    v6 = v57;
                    v13 = v46;
                    goto LABEL_196;
                  }
                  if ( (v5 & 2) != 0 )
                  {
                    v61[0] = 32;
                    goto LABEL_112;
                  }
                }
                v34 = v56;
                goto LABEL_116;
              }
LABEL_54:
              v22 = *a3;
              a3 += 4;
              v59 = 1;
              v58[0] = v22;
              if ( (v5 & 0x20) != 0 )
              {
                v60[0] = v22;
                v60[1] = 0;
                if ( (int)safecrt_mbtowc(v69, v60, _mb_cur_max) < 0 )
                  v65 = 1;
              }
              else
              {
                v69[0] = v22;
              }
              v7 = v69;
              LODWORD(v12) = 1;
              goto LABEL_105;
            }
LABEL_74:
            v23 = 7;
LABEL_75:
            v64 = v23;
            if ( (v5 & 0x80u) != 0 )
            {
              v56 = 2;
              v61[0] = 48;
              v61[1] = v23 + 81;
            }
            v16 = 16LL;
            goto LABEL_28;
          }
          if ( (v5 & 0x830) == 0 )
            v5 |= 0x20u;
LABEL_43:
          v7 = *(wchar_t **)a3;
          v20 = v6;
          if ( v6 == -1 )
            v20 = 0x7FFFFFFF;
          a3 += 4;
          if ( (v5 & 0x20) != 0 )
          {
            v21 = (const char *)v7;
            if ( !v7 )
            {
              v7 = (wchar_t *)"(null)";
              v21 = "(null)";
            }
            LODWORD(v12) = 0;
            if ( v20 > 0 )
            {
              do
              {
                if ( !*v21 )
                  break;
                ++v21;
                LODWORD(v12) = v12 + 1;
              }
              while ( (int)v12 < v20 );
            }
          }
          else
          {
            v59 = 1;
            v24 = L"(null)";
            if ( v7 )
              v24 = v7;
            v7 = (wchar_t *)v24;
            for ( i = v24; v20; ++i )
            {
              --v20;
              if ( !*i )
                break;
            }
            v12 = i - v24;
          }
          goto LABEL_105;
        }
        switch ( v10 )
        {
          case 'n':
            goto LABEL_201;
          case 'o':
            v16 = 8LL;
            if ( (v5 & 0x80u) != 0 )
              v5 |= 0x200u;
            goto LABEL_28;
          case 'p':
            v6 = 16;
            v5 |= 0x8000u;
            goto LABEL_74;
          case 's':
            goto LABEL_43;
        }
        if ( v10 != 117 )
        {
          if ( v10 != 120 )
            goto LABEL_105;
          v23 = 39;
          goto LABEL_75;
        }
LABEL_27:
        v16 = 10LL;
LABEL_28:
        v67 = a3 + 4;
        if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
        {
          v17 = *(_QWORD *)a3;
          if ( (v5 & 0x40) != 0 )
            goto LABEL_86;
LABEL_89:
          v26 = (unsigned int)v17;
          if ( (v5 & 0x9000) != 0 )
            v26 = v17;
          if ( v6 >= 0 )
          {
            v5 &= ~8u;
            if ( v6 > 512 )
              v6 = 512;
          }
          else
          {
            v6 = 1;
          }
          v27 = v64;
          v56 &= -(v26 != 0);
          v28 = v56;
          for ( j = &v71; ; --j )
          {
            v30 = v6--;
            if ( v30 <= 0 && !v26 )
              break;
            v31 = v26 % v16;
            v26 /= v16;
            v32 = v31 + 48;
            if ( (int)v31 + 48 > 57 )
              v32 = v31 + v27 + 48;
            *j = v32;
          }
          LODWORD(v12) = (unsigned int)&v70 + 383 - (_DWORD)j;
          v57 = v6;
          a3 = v67;
          v7 = (wchar_t *)(j + 1);
          if ( (v5 & 0x200) != 0 )
          {
            if ( !(_DWORD)v12 || (v56 = v28, *(_BYTE *)v7 != 48) )
            {
              v7 = (wchar_t *)j;
              v56 = v28;
              LODWORD(v12) = v12 + 1;
              a3 = v67;
              *j = 48;
            }
          }
          goto LABEL_105;
        }
        if ( (v5 & 0x20) != 0 )
        {
          if ( (v5 & 0x40) == 0 )
          {
            v17 = *a3;
            goto LABEL_89;
          }
          v17 = (__int16)*a3;
        }
        else
        {
          if ( (v5 & 0x40) == 0 )
          {
            v17 = *(unsigned int *)a3;
            goto LABEL_89;
          }
          v17 = *(int *)a3;
        }
LABEL_86:
        if ( v17 < 0 )
        {
          v17 = -v17;
          v5 |= 0x100u;
        }
        goto LABEL_89;
      }
      if ( v10 != 73 )
      {
        if ( v10 == 104 )
        {
          v13 = 32;
          v5 |= 0x20u;
          goto LABEL_196;
        }
        if ( v10 != 106 )
        {
          if ( v10 == 108 )
          {
            v47 = *a2;
            if ( *a2 == 108 )
              ++a2;
            v48 = 4096;
            if ( v47 != 108 )
              v48 = 16;
            v5 |= v48;
            goto LABEL_195;
          }
          if ( v10 != 116 )
          {
            if ( v10 == 119 )
            {
              v5 |= 0x800u;
              goto LABEL_195;
            }
            if ( v10 != 122 )
              goto LABEL_195;
          }
        }
      }
      v5 |= 0x8000u;
      if ( v10 == 73 )
      {
        if ( *a2 == 54 )
        {
          if ( a2[1] == 52 )
          {
            a2 += 2;
            goto LABEL_195;
          }
        }
        else if ( *a2 == 51 && a2[1] == 50 )
        {
          a2 += 2;
          v5 &= ~0x8000u;
          goto LABEL_195;
        }
      }
      else if ( v10 == 106 )
      {
        goto LABEL_195;
      }
      v49 = *a2;
      v13 = 32;
      if ( (_WORD)v49 == 100 )
        goto LABEL_196;
      LOWORD(v49) = v49 - 88;
      if ( (unsigned __int16)v49 <= 0x20u )
      {
        v50 = 0x120820001LL;
        if ( _bittest64(&v50, v49) )
          goto LABEL_196;
      }
    }
    v59 = 1;
    write_char_2(v10, v8, &v55);
    v11 = v55;
    v13 = 32;
LABEL_197:
    v10 = *a2;
  }
  while ( *a2 );
  if ( !v9 || v9 == 7 )
    return (unsigned int)v11;
LABEL_201:
  invalid_parameter();
  return 0xFFFFFFFFLL;
}
