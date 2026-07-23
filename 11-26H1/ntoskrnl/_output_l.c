/*
 * XREFs of _output_l @ 0x14053BDF0
 * Callers:
 *     _vsnprintf_l @ 0x140537970 (_vsnprintf_l.c)
 *     _snprintf @ 0x1405384C0 (_snprintf.c)
 *     sprintf @ 0x140539BC0 (sprintf.c)
 *     _vsprintf_l @ 0x14053A298 (_vsprintf_l.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 *     wctomb_s @ 0x14053AF94 (wctomb_s.c)
 *     write_char_0 @ 0x14053C630 (write_char_0.c)
 *     write_multi_char_0 @ 0x14053C680 (write_multi_char_0.c)
 *     write_string_0 @ 0x14053C6D8 (write_string_0.c)
 *     _get_printf_count_output @ 0x14053CED4 (_get_printf_count_output.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall output_l(__int64 a1, char *a2, __int64 a3, wchar_t *a4)
{
  int v6; // edi
  int v7; // esi
  int v8; // r14d
  char *v9; // rbx
  char v11; // r9
  int v12; // r15d
  unsigned int v13; // r10d
  wchar_t *v14; // r8
  int v15; // ecx
  __int64 *v16; // rax
  __int64 i; // rcx
  unsigned __int64 v18; // r10
  wchar_t *v19; // r11
  __int64 v20; // rax
  unsigned __int16 *v21; // rax
  __int64 v22; // rax
  const wchar_t *v23; // rax
  int v24; // eax
  unsigned __int64 v25; // r8
  int v26; // ecx
  char v27; // r14
  int v28; // r9d
  int v29; // eax
  unsigned __int64 v30; // rdx
  char v31; // al
  int v32; // eax
  unsigned int v33; // r15d
  unsigned int v34; // r14d
  __int64 v35; // rcx
  __int64 v36; // r15
  int v37; // esi
  wchar_t *v38; // r15
  wchar_t v39; // r9
  __int64 v40; // rcx
  _WORD *v41; // rsi
  char v42; // cl
  int v43; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // r8d
  int v48; // r8d
  int v49; // [rsp+30h] [rbp-D0h]
  int v50; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v51[4]; // [rsp+38h] [rbp-C8h] BYREF
  int v52; // [rsp+3Ch] [rbp-C4h]
  int SizeConverted; // [rsp+40h] [rbp-C0h] BYREF
  int v54; // [rsp+44h] [rbp-BCh]
  unsigned int v55; // [rsp+48h] [rbp-B8h]
  int v56; // [rsp+4Ch] [rbp-B4h]
  int v57; // [rsp+50h] [rbp-B0h]
  int v58; // [rsp+54h] [rbp-ACh]
  __int64 v59; // [rsp+58h] [rbp-A8h]
  int v60[4]; // [rsp+60h] [rbp-A0h] BYREF
  char MbCh[144]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v62; // [rsp+100h] [rbp+0h] BYREF
  char v63; // [rsp+26Fh] [rbp+16Fh] BYREF
  char v64[8]; // [rsp+270h] [rbp+170h] BYREF

  v59 = a1;
  v58 = 0;
  v6 = 0;
  v56 = 0;
  v7 = 0;
  v52 = 0;
  v8 = 0;
  v49 = 0;
  v9 = 0LL;
  v57 = 0;
  memset_0(MbCh, 0, 0x200uLL);
  v54 = 0;
  if ( a1 && a2 )
  {
    v11 = *a2;
    v12 = 0;
    v50 = 0;
    v13 = 0;
    SizeConverted = 0;
    if ( v11 )
    {
      do
      {
        ++a2;
        v14 = a4;
        if ( v12 < 0 )
          return (unsigned int)v12;
        if ( (unsigned __int8)(v11 - 32) > 0x5Au )
          v15 = 0;
        else
          v15 = *((_BYTE *)&_lookuptable[-4] + v11) & 0xF;
        v16 = _lookuptable;
        v13 = *((char *)_lookuptable + (int)(v13 + 8 * v15)) >> 4;
        v55 = v13;
        i = v13;
        switch ( v13 )
        {
          case 0u:
            goto LABEL_164;
          case 1u:
            v7 = -1;
            v57 = 0;
            v52 = -1;
            v8 = 0;
            v56 = 0;
            v6 = 0;
            v49 = 0;
            v54 = 0;
            break;
          case 2u:
            switch ( v11 )
            {
              case ' ':
                v6 |= 2u;
                break;
              case '#':
                v6 |= 0x80u;
                break;
              case '+':
                v6 |= 1u;
                break;
              case '-':
                v6 |= 4u;
                break;
              case '0':
                v6 |= 8u;
                break;
            }
            break;
          case 3u:
            if ( v11 == 42 )
            {
              v45 = *(_DWORD *)a4;
              v46 = v6 | 4;
              a4 += 4;
              v47 = *(_DWORD *)v14;
              if ( v45 >= 0 )
                v46 = v6;
              v48 = -v47;
              v6 = v46;
              if ( v48 < 0 )
                v48 = v45;
              v56 = v48;
            }
            else
            {
              v56 = v11 + 2 * (5 * v56 - 24);
            }
            break;
          case 4u:
            v7 = 0;
            v52 = 0;
            break;
          case 5u:
            if ( v11 != 42 )
            {
              v7 = v11 + 2 * (5 * v7 - 24);
              goto LABEL_173;
            }
            v7 = *(_DWORD *)a4;
            a4 += 4;
            v52 = v7;
            if ( v7 < 0 )
            {
              v7 = -1;
LABEL_173:
              v52 = v7;
            }
            break;
          default:
            i = v13 - 6;
            if ( v13 == 6 )
            {
              switch ( v11 )
              {
                case 'I':
                  goto LABEL_145;
                case 'h':
                  v6 |= 0x20u;
                  goto LABEL_167;
                case 'j':
                  goto LABEL_145;
                case 'l':
                  v42 = *a2;
                  if ( *a2 == 108 )
                    ++a2;
                  v43 = 4096;
                  if ( v42 != 108 )
                    v43 = 16;
                  v6 |= v43;
                  goto LABEL_167;
                case 't':
                  goto LABEL_145;
                case 'w':
                  v6 |= 0x800u;
                  goto LABEL_167;
                case 'z':
LABEL_145:
                  v6 |= 0x8000u;
                  if ( v11 == 73 )
                  {
                    if ( *a2 == 54 )
                    {
                      if ( a2[1] != 52 )
                        goto LABEL_160;
                      a2 += 2;
                    }
                    else
                    {
                      if ( *a2 != 51 || a2[1] != 50 )
                      {
LABEL_160:
                        if ( *a2 == 100 )
                          goto LABEL_167;
                        LOBYTE(v16) = *a2 - 88;
                        if ( (unsigned __int8)v16 <= 0x20u )
                        {
                          i = 0x120820001LL;
                          if ( _bittest64(&i, (unsigned __int64)v16) )
                            goto LABEL_167;
                        }
                        v55 = 0;
LABEL_164:
                        LOBYTE(i) = v11;
                        v54 = 0;
                        write_char_0(i, v59, &v50);
LABEL_165:
                        v12 = v50;
                        goto LABEL_166;
                      }
                      a2 += 2;
                      v6 &= ~0x8000u;
                    }
                  }
                  else if ( v11 != 106 )
                  {
                    goto LABEL_160;
                  }
                  break;
              }
            }
            else if ( v13 == 7 )
            {
              if ( v11 <= 105 )
              {
                if ( v11 == 105 )
                  goto LABEL_24;
                if ( v11 == 67 )
                {
                  if ( (v6 & 0x830) == 0 )
                    v6 |= 0x800u;
                  goto LABEL_50;
                }
                if ( v11 != 83 )
                {
                  if ( v11 != 88 )
                  {
                    if ( v11 != 90 )
                    {
                      if ( v11 != 99 )
                      {
                        if ( v11 == 100 )
                        {
LABEL_24:
                          v6 |= 0x40u;
                          goto LABEL_25;
                        }
LABEL_105:
                        if ( v57 )
                          goto LABEL_166;
                        if ( (v6 & 0x40) == 0 )
                          goto LABEL_114;
                        if ( (v6 & 0x100) != 0 )
                        {
                          v51[0] = 45;
                          goto LABEL_111;
                        }
                        if ( (v6 & 1) != 0 )
                        {
                          v51[0] = 43;
                          goto LABEL_111;
                        }
                        if ( (v6 & 2) != 0 )
                        {
                          v51[0] = 32;
LABEL_111:
                          v33 = 1;
                          v49 = 1;
                        }
                        else
                        {
LABEL_114:
                          v33 = v49;
                        }
                        v34 = v56 - SizeConverted - v33;
                        if ( (v6 & 0xC) == 0 )
                        {
                          LOBYTE(i) = 32;
                          write_multi_char_0(i, v34, v59, &v50);
                        }
                        write_string_0(v51, v33, v59, &v50);
                        v36 = v59;
                        if ( (v6 & 0xC) == 8 )
                        {
                          LOBYTE(v35) = 48;
                          write_multi_char_0(v35, v34, v59, &v50);
                        }
                        v37 = SizeConverted;
                        if ( v54 && SizeConverted > 0 )
                        {
                          v60[0] = 0;
                          v38 = (wchar_t *)v9;
                          while ( 1 )
                          {
                            v39 = *v38++;
                            --v37;
                            if ( wctomb_s(v60, v64, 6uLL, v39) || !v60[0] )
                              break;
                            write_string_0(v64, (unsigned int)v60[0], v59, &v50);
                            if ( !v37 )
                              goto LABEL_128;
                          }
                          v12 = -1;
                          v50 = -1;
                        }
                        else
                        {
                          write_string_0(v9, (unsigned int)SizeConverted, v36, &v50);
LABEL_128:
                          v12 = v50;
                        }
                        if ( v12 >= 0 && (v6 & 4) != 0 )
                        {
                          LOBYTE(v40) = 32;
                          write_multi_char_0(v40, v34, v59, &v50);
                          v7 = v52;
                          v8 = v49;
                          goto LABEL_165;
                        }
                        v7 = v52;
                        v8 = v49;
LABEL_166:
                        v13 = v55;
                        break;
                      }
LABEL_50:
                      if ( (v6 & 0x810) != 0 )
                      {
                        if ( wctomb_s(&SizeConverted, MbCh, 0x200uLL, *a4) )
                          v57 = 1;
                      }
                      else
                      {
                        MbCh[0] = *(_BYTE *)a4;
                        SizeConverted = 1;
                      }
                      v9 = MbCh;
                      a4 += 4;
                      goto LABEL_105;
                    }
                    v21 = *(unsigned __int16 **)a4;
                    a4 += 4;
                    if ( *(_QWORD *)v14 && (v9 = (char *)*((_QWORD *)v21 + 1)) != 0LL )
                    {
                      i = *v21;
                      if ( v21[1] < (unsigned __int16)i )
                        goto LABEL_193;
                      if ( (v6 & 0x800) != 0 )
                      {
                        if ( (i & 1) != 0 || ((unsigned __int8)v9 & 1) != 0 )
                          goto LABEL_193;
                        v54 = 1;
                        LODWORD(v22) = (unsigned int)i >> 1;
                      }
                      else
                      {
                        v54 = 0;
                        LODWORD(v22) = i;
                      }
                    }
                    else
                    {
                      v9 = "(null)";
                      LODWORD(v22) = 6;
                    }
LABEL_39:
                    SizeConverted = v22;
                    goto LABEL_105;
                  }
LABEL_74:
                  v24 = 7;
LABEL_75:
                  v58 = v24;
                  if ( (v6 & 0x80u) != 0 )
                  {
                    v51[0] = 48;
                    v51[1] = v24 + 81;
                    v8 = 2;
                  }
                  v18 = 16LL;
                  goto LABEL_26;
                }
                if ( (v6 & 0x830) == 0 )
                  v6 |= 0x800u;
LABEL_42:
                v9 = *(char **)a4;
                i = (unsigned int)v7;
                if ( v7 == -1 )
                  i = 0x7FFFFFFFLL;
                a4 += 4;
                if ( (v6 & 0x810) != 0 )
                {
                  v23 = *(const wchar_t **)v14;
                  if ( !v9 )
                  {
                    v9 = (char *)L"(null)";
                    v23 = L"(null)";
                  }
                  v54 = 1;
                  while ( (_DWORD)i )
                  {
                    i = (unsigned int)(i - 1);
                    if ( !*v23 )
                      break;
                    ++v23;
                  }
                  v22 = ((char *)v23 - v9) >> 1;
                }
                else
                {
                  v22 = (__int64)"(null)";
                  if ( v9 )
                    v22 = *(_QWORD *)v14;
                  v9 = (char *)v22;
                  while ( (_DWORD)i )
                  {
                    i = (unsigned int)(i - 1);
                    if ( !*(_BYTE *)v22 )
                      break;
                    ++v22;
                  }
                  LODWORD(v22) = v22 - (_DWORD)v9;
                }
                goto LABEL_39;
              }
              switch ( v11 )
              {
                case 'n':
                  v41 = *(_WORD **)a4;
                  a4 += 4;
                  if ( !get_printf_count_output() )
                    goto LABEL_193;
                  if ( (v6 & 0x20) != 0 )
                    *v41 = v12;
                  else
                    *(_DWORD *)v41 = v12;
                  v7 = v52;
                  v57 = 1;
                  goto LABEL_166;
                case 'o':
                  v18 = 8LL;
                  if ( (v6 & 0x80u) != 0 )
                    v6 |= 0x200u;
                  goto LABEL_26;
                case 'p':
                  v7 = 16;
                  v6 |= 0x8000u;
                  goto LABEL_74;
                case 's':
                  goto LABEL_42;
              }
              if ( v11 != 117 )
              {
                if ( v11 != 120 )
                  goto LABEL_105;
                v24 = 39;
                goto LABEL_75;
              }
LABEL_25:
              v18 = 10LL;
LABEL_26:
              v19 = a4 + 4;
              if ( (v6 & 0x8000) != 0 || (v6 & 0x1000) != 0 )
              {
                v20 = *(_QWORD *)a4;
                if ( (v6 & 0x40) != 0 )
                  goto LABEL_86;
LABEL_89:
                v25 = (unsigned int)v20;
                if ( (v6 & 0x9000) != 0 )
                  v25 = v20;
                if ( v7 >= 0 )
                {
                  v6 &= ~8u;
                  if ( v7 > 512 )
                    v7 = 512;
                }
                else
                {
                  v7 = 1;
                }
                v26 = v25 != 0 ? v8 : 0;
                v27 = v58;
                v49 = v26;
                v28 = v26;
                for ( i = (__int64)&v63; ; --i )
                {
                  v29 = v7--;
                  if ( v29 <= 0 && !v25 )
                    break;
                  v30 = v25 % v18;
                  v25 /= v18;
                  v31 = v30 + 48;
                  if ( (int)v30 + 48 > 57 )
                    v31 = v30 + v27 + 48;
                  *(_BYTE *)i = v31;
                }
                v52 = v7;
                v32 = (unsigned int)&v62 + 367 - i;
                v9 = (char *)(i + 1);
                SizeConverted = v32;
                a4 += 4;
                v8 = v28;
                if ( (v6 & 0x200) != 0 )
                {
                  if ( !v32 || (v49 = v28, *v9 != 48) )
                  {
                    v9 = (char *)i;
                    v49 = v28;
                    a4 = v19;
                    SizeConverted = v32 + 1;
                    v8 = v28;
                    *(_BYTE *)i = 48;
                  }
                }
                goto LABEL_105;
              }
              if ( (v6 & 0x20) != 0 )
              {
                if ( (v6 & 0x40) == 0 )
                {
                  v20 = *a4;
                  goto LABEL_89;
                }
                v20 = (__int16)*a4;
              }
              else
              {
                if ( (v6 & 0x40) == 0 )
                {
                  v20 = *(unsigned int *)a4;
                  goto LABEL_89;
                }
                v20 = *(int *)a4;
              }
LABEL_86:
              if ( v20 < 0 )
              {
                v20 = -v20;
                v6 |= 0x100u;
              }
              goto LABEL_89;
            }
            break;
        }
LABEL_167:
        v11 = *a2;
      }
      while ( *a2 );
    }
    return (unsigned int)v12;
  }
  else
  {
LABEL_193:
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
}
