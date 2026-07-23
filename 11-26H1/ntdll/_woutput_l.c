/*
 * XREFs of _woutput_l @ 0x18012F110
 * Callers:
 *     _snwprintf @ 0x180128140 (_snwprintf.c)
 *     swprintf @ 0x180128780 (swprintf.c)
 *     _vswprintf_l @ 0x1801289D4 (_vswprintf_l.c)
 *     _vsnwprintf_l @ 0x180128BAC (_vsnwprintf_l.c)
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 *     write_char_0 @ 0x18012FA48 (write_char_0.c)
 *     write_multi_char_0 @ 0x18012FA9C (write_multi_char_0.c)
 *     write_string_0 @ 0x18012FAF4 (write_string_0.c)
 *     _get_printf_count_output @ 0x180132358 (_get_printf_count_output.c)
 *     mbtowc @ 0x1801324B0 (mbtowc.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall woutput_l(__int64 a1, unsigned __int16 *a2, __int64 a3, int *a4)
{
  int v5; // edi
  int v6; // r14d
  wchar_t *v7; // rbx
  int *v9; // rsi
  unsigned __int16 v10; // r9
  int v11; // r15d
  __int64 v12; // r13
  int v13; // r10d
  int v14; // ecx
  unsigned __int64 v15; // r10
  __int64 v16; // rax
  unsigned __int16 *v17; // rax
  unsigned int v18; // ecx
  int v19; // ecx
  const char *v20; // rax
  wchar_t v21; // ax
  int v22; // eax
  const wchar_t *v23; // rax
  const wchar_t *i; // r13
  unsigned __int64 v25; // r8
  char v26; // r11
  int v27; // r9d
  wchar_t *j; // rcx
  int v29; // eax
  unsigned __int64 v30; // rdx
  char v31; // al
  __int16 v32; // ax
  unsigned int v33; // r15d
  unsigned int v34; // r14d
  __int64 v35; // rsi
  const char *v36; // r15
  int v37; // esi
  int v38; // eax
  __int64 v39; // r12
  _WORD *v41; // rsi
  unsigned __int16 v42; // cx
  int v43; // eax
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // ecx
  int v47; // [rsp+30h] [rbp-D0h] BYREF
  int v48; // [rsp+34h] [rbp-CCh]
  int v49; // [rsp+38h] [rbp-C8h]
  wchar_t v50; // [rsp+3Ch] [rbp-C4h] BYREF
  int v51; // [rsp+40h] [rbp-C0h]
  int v52; // [rsp+44h] [rbp-BCh]
  int *v53; // [rsp+48h] [rbp-B8h]
  char SrcCh[4]; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v55[2]; // [rsp+54h] [rbp-ACh] BYREF
  int v56; // [rsp+58h] [rbp-A8h]
  int v57; // [rsp+5Ch] [rbp-A4h]
  __int64 v58; // [rsp+60h] [rbp-A0h]
  int v59; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v60; // [rsp+70h] [rbp-90h]
  wchar_t DstCh[64]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v62; // [rsp+100h] [rbp+0h] BYREF
  char v63; // [rsp+27Fh] [rbp+17Fh] BYREF

  v58 = a1;
  v53 = a4;
  v59 = 0;
  v5 = 0;
  v56 = 0;
  v6 = 0;
  v49 = 0;
  v7 = 0LL;
  v48 = 0;
  v57 = 0;
  v9 = a4;
  memset_thunk_772440563353939046(DstCh, 0, 0x400uLL);
  v50 = 0;
  v51 = 0;
  if ( a1 && a2 )
  {
    v10 = *a2;
    v11 = 0;
    v47 = 0;
    LODWORD(v12) = 0;
    v13 = 0;
    if ( v10 )
    {
      do
      {
        v60 = ++a2;
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( (unsigned __int16)(v10 - 32) > 0x5Au )
          v14 = 0;
        else
          v14 = _lookuptable[v10 - 32] & 0xF;
        v13 = _lookuptable[8 * v14 + v13] >> 4;
        v52 = v13;
        switch ( v13 )
        {
          case 0:
            goto LABEL_165;
          case 1:
            v6 = -1;
            v57 = 0;
            v49 = -1;
            v5 = 0;
            v56 = 0;
            v48 = 0;
            v51 = 0;
            break;
          case 2:
            switch ( v10 )
            {
              case ' ':
                v5 |= 2u;
                break;
              case '#':
                v5 |= 0x80u;
                break;
              case '+':
                v5 |= 1u;
                break;
              case '-':
                v5 |= 4u;
                break;
              case '0':
                v5 |= 8u;
                break;
            }
            break;
          case 3:
            if ( v10 == 42 )
            {
              v53 = v9 + 2;
              if ( *v9 < 0 )
                v5 |= 4u;
              v46 = -*v9;
              if ( *v9 > 0 )
                v46 = *v9;
            }
            else
            {
              v46 = v10 + 2 * (5 * v56 - 24);
            }
            v56 = v46;
            break;
          case 4:
            v6 = 0;
            v49 = 0;
            break;
          case 5:
            if ( v10 == 42 )
            {
              v6 = *v9;
              v53 = v9 + 2;
              v49 = v6;
              if ( v6 < 0 )
              {
                v6 = -1;
                v49 = -1;
              }
            }
            else
            {
              v6 = v10 + 2 * (5 * v6 - 24);
              v49 = v6;
            }
            break;
          case 6:
            switch ( v10 )
            {
              case 'I':
                goto LABEL_146;
              case 'h':
                v5 |= 0x20u;
                goto LABEL_131;
              case 'j':
                goto LABEL_146;
              case 'l':
                v42 = *a2;
                if ( *a2 == 108 )
                  ++a2;
                v43 = 4096;
                if ( v42 != 108 )
                  v43 = 16;
                v5 |= v43;
                goto LABEL_131;
              case 't':
                goto LABEL_146;
              case 'w':
                v5 |= 0x800u;
                goto LABEL_131;
              case 'z':
LABEL_146:
                v5 |= 0x8000u;
                if ( v10 == 73 )
                {
                  if ( *a2 == 54 )
                  {
                    if ( a2[1] == 52 )
                    {
                      a2 += 2;
                      goto LABEL_131;
                    }
                  }
                  else if ( *a2 == 51 && a2[1] == 50 )
                  {
                    a2 += 2;
                    v5 &= ~0x8000u;
                    goto LABEL_131;
                  }
                }
                else if ( v10 == 106 )
                {
                  goto LABEL_131;
                }
                v44 = *a2;
                if ( (_WORD)v44 == 100 )
                  goto LABEL_131;
                LOWORD(v44) = v44 - 88;
                if ( (unsigned __int16)v44 <= 0x20u )
                {
                  v45 = 0x120820001LL;
                  if ( _bittest64(&v45, v44) )
                    goto LABEL_131;
                }
                v52 = 0;
LABEL_165:
                v51 = 1;
                write_char_0(v10, v58, &v47);
LABEL_129:
                v11 = v47;
LABEL_130:
                v13 = v52;
                break;
            }
            break;
          case 7:
            if ( v10 <= 0x69u )
            {
              if ( v10 == 105 )
                goto LABEL_24;
              if ( v10 == 67 )
              {
                if ( (v5 & 0x830) == 0 )
                  v5 |= 0x20u;
                goto LABEL_52;
              }
              if ( v10 != 83 )
              {
                if ( v10 != 88 )
                {
                  if ( v10 == 90 )
                  {
                    v17 = *(unsigned __int16 **)v9;
                    v53 = v9 + 2;
                    if ( v17 && (v7 = (wchar_t *)*((_QWORD *)v17 + 1)) != 0LL )
                    {
                      v18 = *v17;
                      if ( v17[1] < (unsigned __int16)v18 )
                        goto LABEL_190;
                      if ( (v5 & 0x800) != 0 )
                      {
                        if ( (v18 & 1) != 0 || ((unsigned __int8)v7 & 1) != 0 )
                          goto LABEL_190;
                        v51 = 1;
                        LODWORD(v12) = v18 >> 1;
                      }
                      else
                      {
                        v51 = 0;
                        LODWORD(v12) = v18;
                      }
                    }
                    else
                    {
                      v7 = (wchar_t *)"(null)";
                      LODWORD(v12) = 6;
                    }
                    goto LABEL_103;
                  }
                  if ( v10 != 99 )
                  {
                    if ( v10 == 100 )
                    {
LABEL_24:
                      v5 |= 0x40u;
                      goto LABEL_25;
                    }
LABEL_103:
                    if ( v57 )
                      goto LABEL_130;
                    if ( (v5 & 0x40) != 0 )
                    {
                      if ( (v5 & 0x100) != 0 )
                      {
                        v32 = 45;
                        goto LABEL_107;
                      }
                      if ( (v5 & 1) != 0 )
                      {
                        v32 = 43;
LABEL_107:
                        v55[0] = v32;
LABEL_112:
                        v48 = 1;
                      }
                      else if ( (v5 & 2) != 0 )
                      {
                        v55[0] = 32;
                        goto LABEL_112;
                      }
                    }
                    v33 = v48;
                    v34 = v56 - v12 - v48;
                    if ( (v5 & 0xC) == 0 )
                      write_multi_char_0(32LL, v34, v58, &v47);
                    write_string_0(v55, v33, v58, &v47);
                    v35 = v58;
                    if ( (v5 & 0xC) == 8 )
                      write_multi_char_0(48LL, v34, v58, &v47);
                    if ( v51 || (int)v12 <= 0 )
                    {
                      write_string_0(v7, (unsigned int)v12, v35, &v47);
LABEL_125:
                      v11 = v47;
                    }
                    else
                    {
                      v36 = (const char *)v7;
                      v37 = v12;
                      while ( 1 )
                      {
                        v38 = mbtowc(&v50, v36, _mb_cur_max);
                        v39 = v38;
                        v37 -= (v38 == 2) + 1;
                        if ( v38 <= 0 )
                          break;
                        write_char_0(v50, v58, &v47);
                        v36 += v39;
                        if ( v37 <= 0 )
                        {
                          a2 = v60;
                          v35 = v58;
                          goto LABEL_125;
                        }
                      }
                      a2 = v60;
                      v11 = -1;
                      v35 = v58;
                      v47 = -1;
                    }
                    if ( v11 < 0 || (v5 & 4) == 0 )
                    {
                      v6 = v49;
LABEL_138:
                      v13 = v52;
                      break;
                    }
                    write_multi_char_0(32LL, v34, v35, &v47);
                    v6 = v49;
                    goto LABEL_129;
                  }
LABEL_52:
                  v21 = *(_WORD *)v9;
                  v51 = 1;
                  v53 = v9 + 2;
                  v50 = v21;
                  if ( (v5 & 0x20) != 0 )
                  {
                    SrcCh[0] = v21;
                    SrcCh[1] = 0;
                    if ( mbtowc(DstCh, SrcCh, _mb_cur_max) < 0 )
                      v57 = 1;
                  }
                  else
                  {
                    DstCh[0] = v21;
                  }
                  v7 = DstCh;
                  LODWORD(v12) = 1;
                  goto LABEL_103;
                }
LABEL_72:
                v22 = 7;
LABEL_73:
                v59 = v22;
                if ( (v5 & 0x80u) != 0 )
                {
                  v48 = 2;
                  v55[0] = 48;
                  v55[1] = v22 + 81;
                }
                v15 = 16LL;
                goto LABEL_26;
              }
              if ( (v5 & 0x830) == 0 )
                v5 |= 0x20u;
LABEL_41:
              v7 = *(wchar_t **)v9;
              v19 = v6;
              if ( v6 == -1 )
                v19 = 0x7FFFFFFF;
              v53 = v9 + 2;
              if ( (v5 & 0x20) != 0 )
              {
                v20 = (const char *)v7;
                if ( !v7 )
                {
                  v7 = (wchar_t *)"(null)";
                  v20 = "(null)";
                }
                LODWORD(v12) = 0;
                if ( v19 > 0 )
                {
                  do
                  {
                    if ( !*v20 )
                      break;
                    ++v20;
                    LODWORD(v12) = v12 + 1;
                  }
                  while ( (int)v12 < v19 );
                }
              }
              else
              {
                v51 = 1;
                v23 = L"(null)";
                if ( v7 )
                  v23 = v7;
                v7 = (wchar_t *)v23;
                for ( i = v23; v19; ++i )
                {
                  --v19;
                  if ( !*i )
                    break;
                }
                v12 = i - v23;
              }
              goto LABEL_103;
            }
            switch ( v10 )
            {
              case 'n':
                v53 = v9 + 2;
                v41 = *(_WORD **)v9;
                if ( !get_printf_count_output() )
                  goto LABEL_190;
                if ( (v5 & 0x20) != 0 )
                  *v41 = v11;
                else
                  *(_DWORD *)v41 = v11;
                v57 = 1;
                goto LABEL_138;
              case 'o':
                v15 = 8LL;
                if ( (v5 & 0x80u) != 0 )
                  v5 |= 0x200u;
                goto LABEL_26;
              case 'p':
                v6 = 16;
                v5 |= 0x8000u;
                goto LABEL_72;
              case 's':
                goto LABEL_41;
            }
            if ( v10 != 117 )
            {
              if ( v10 != 120 )
                goto LABEL_103;
              v22 = 39;
              goto LABEL_73;
            }
LABEL_25:
            v15 = 10LL;
LABEL_26:
            v53 = v9 + 2;
            if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
            {
              v16 = *(_QWORD *)v9;
              if ( (v5 & 0x40) != 0 )
                goto LABEL_84;
LABEL_87:
              v25 = (unsigned int)v16;
              if ( (v5 & 0x9000) != 0 )
                v25 = v16;
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
              v26 = v59;
              v48 &= -(v25 != 0);
              v27 = v48;
              for ( j = (wchar_t *)&v63; ; j = (wchar_t *)((char *)j - 1) )
              {
                v29 = v6--;
                if ( v29 <= 0 && !v25 )
                  break;
                v30 = v25 % v15;
                v25 /= v15;
                v31 = v30 + 48;
                if ( (int)v30 + 48 > 57 )
                  v31 = v30 + v26 + 48;
                *(_BYTE *)j = v31;
              }
              LODWORD(v12) = (unsigned int)&v62 + 383 - (_DWORD)j;
              v49 = v6;
              v7 = (wchar_t *)((char *)j + 1);
              if ( (v5 & 0x200) != 0 )
              {
                if ( !(_DWORD)v12 || (v48 = v27, *(_BYTE *)v7 != 48) )
                {
                  v7 = j;
                  LODWORD(v12) = v12 + 1;
                  v48 = v27;
                  *(_BYTE *)j = 48;
                }
              }
              goto LABEL_103;
            }
            if ( (v5 & 0x20) != 0 )
            {
              if ( (v5 & 0x40) == 0 )
              {
                v16 = *(unsigned __int16 *)v9;
                goto LABEL_87;
              }
              v16 = *(__int16 *)v9;
            }
            else
            {
              if ( (v5 & 0x40) == 0 )
              {
                v16 = (unsigned int)*v9;
                goto LABEL_87;
              }
              v16 = *v9;
            }
LABEL_84:
            if ( v16 < 0 )
            {
              v16 = -v16;
              v5 |= 0x100u;
            }
            goto LABEL_87;
        }
LABEL_131:
        v10 = *a2;
        v9 = v53;
      }
      while ( *a2 );
    }
    return (unsigned int)v11;
  }
  else
  {
LABEL_190:
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
}
