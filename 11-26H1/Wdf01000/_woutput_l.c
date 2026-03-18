/*
 * XREFs of _woutput_l @ 0x1400848F8
 * Callers:
 *     _vsnwprintf_l @ 0x1400847E8 (_vsnwprintf_l.c)
 * Callees:
 *     ?AddChildList@FxDeviceBase@@UEAAXPEAVFxChildList@@@Z @ 0x140076AE0 (-AddChildList@FxDeviceBase@@UEAAXPEAVFxChildList@@@Z.c)
 *     write_char @ 0x140085230 (write_char.c)
 *     write_multi_char @ 0x140085288 (write_multi_char.c)
 *     write_string @ 0x1400852E0 (write_string.c)
 *     _get_printf_count_output @ 0x140085354 (_get_printf_count_output.c)
 *     mbtowc @ 0x1400853C0 (mbtowc.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

__int64 __fastcall woutput_l(_iobuf *stream, wchar_t *format, localeinfo_struct *plocinfo, char *argptr)
{
  int v5; // edi
  int v6; // r14d
  $B4FF2100EA110D8CD0B9C89F852FB035 *p_buffer; // rbx
  char *v9; // rsi
  wchar_t v10; // r9
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
  char *j; // rcx
  int v29; // eax
  unsigned __int64 v30; // rdx
  char v31; // al
  wchar_t v32; // ax
  int v33; // r15d
  int v34; // r14d
  _iobuf *v35; // rsi
  const char *v36; // r15
  int v37; // esi
  int v38; // eax
  __int64 v39; // r12
  _WORD *v41; // rsi
  wchar_t v42; // cx
  int v43; // eax
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // eax
  int v47; // ecx
  int charsout; // [rsp+30h] [rbp-D0h] BYREF
  int len; // [rsp+34h] [rbp-CCh]
  int v50; // [rsp+38h] [rbp-C8h]
  wchar_t wchar; // [rsp+3Ch] [rbp-C4h] BYREF
  int v52; // [rsp+40h] [rbp-C0h]
  int v53; // [rsp+44h] [rbp-BCh]
  char *v54; // [rsp+48h] [rbp-B8h]
  char tempchar[4]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t prefix[2]; // [rsp+54h] [rbp-ACh] BYREF
  int v57; // [rsp+58h] [rbp-A8h]
  int v58; // [rsp+5Ch] [rbp-A4h]
  _iobuf *f; // [rsp+60h] [rbp-A0h]
  int v60; // [rsp+68h] [rbp-98h]
  const wchar_t *v61; // [rsp+70h] [rbp-90h]
  $B4FF2100EA110D8CD0B9C89F852FB035 buffer; // [rsp+80h] [rbp-80h] BYREF

  f = stream;
  v54 = argptr;
  v60 = 0;
  v5 = 0;
  v57 = 0;
  v6 = 0;
  v50 = 0;
  p_buffer = 0LL;
  len = 0;
  v58 = 0;
  v9 = argptr;
  memset(&buffer, 0, sizeof(buffer));
  wchar = 0;
  v52 = 0;
  if ( stream && format )
  {
    v10 = *format;
    v11 = 0;
    charsout = 0;
    LODWORD(v12) = 0;
    v13 = 0;
    if ( v10 )
    {
      do
      {
        v61 = ++format;
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( (unsigned __int16)(v10 - 32) > 0x5Au )
          v14 = 0;
        else
          v14 = _lookuptable[v10 - 32] & 0xF;
        v13 = _lookuptable[8 * v14 + v13] >> 4;
        v53 = v13;
        switch ( v13 )
        {
          case 0:
            goto $NORMAL_STATE;
          case 1:
            v6 = -1;
            v58 = 0;
            v50 = -1;
            v5 = 0;
            v57 = 0;
            len = 0;
            v52 = 0;
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
              v46 = *(_DWORD *)v9;
              v54 = v9 + 8;
              if ( v46 < 0 )
                v5 |= 4u;
              v47 = -v46;
              if ( v46 > 0 )
                v47 = v46;
            }
            else
            {
              v47 = v10 + 2 * (5 * v57 - 24);
            }
            v57 = v47;
            break;
          case 4:
            v6 = 0;
            v50 = 0;
            break;
          case 5:
            if ( v10 == 42 )
            {
              v6 = *(_DWORD *)v9;
              v54 = v9 + 8;
              v50 = v6;
              if ( v6 < 0 )
              {
                v6 = -1;
                v50 = -1;
              }
            }
            else
            {
              v6 = v10 + 2 * (5 * v6 - 24);
              v50 = v6;
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
                v42 = *format;
                if ( *format == 108 )
                  ++format;
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
                  if ( *format == 54 )
                  {
                    if ( format[1] == 52 )
                    {
                      format += 2;
                      goto LABEL_131;
                    }
                  }
                  else if ( *format == 51 && format[1] == 50 )
                  {
                    format += 2;
                    v5 &= ~0x8000u;
                    goto LABEL_131;
                  }
                }
                else if ( v10 == 106 )
                {
                  goto LABEL_131;
                }
                v44 = *format;
                if ( (_WORD)v44 == 100 )
                  goto LABEL_131;
                LOWORD(v44) = v44 - 88;
                if ( (unsigned __int16)v44 <= 0x20u )
                {
                  v45 = 0x120820001LL;
                  if ( _bittest64(&v45, v44) )
                    goto LABEL_131;
                }
                v53 = 0;
$NORMAL_STATE:
                v52 = 1;
                write_char(v10, f, &charsout);
LABEL_129:
                v11 = charsout;
LABEL_130:
                v13 = v53;
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
                    v54 = v9 + 8;
                    if ( v17 && (p_buffer = ($B4FF2100EA110D8CD0B9C89F852FB035 *)*((_QWORD *)v17 + 1)) != 0LL )
                    {
                      v18 = *v17;
                      if ( v17[1] < (unsigned __int16)v18 )
                        goto LABEL_190;
                      if ( (v5 & 0x800) != 0 )
                      {
                        if ( (v18 & 1) != 0 || ((unsigned __int8)p_buffer & 1) != 0 )
                          goto LABEL_190;
                        v52 = 1;
                        LODWORD(v12) = v18 >> 1;
                      }
                      else
                      {
                        v52 = 0;
                        LODWORD(v12) = v18;
                      }
                    }
                    else
                    {
                      p_buffer = ($B4FF2100EA110D8CD0B9C89F852FB035 *)"(null)";
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
                    if ( v58 )
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
                        prefix[0] = v32;
LABEL_112:
                        len = 1;
                      }
                      else if ( (v5 & 2) != 0 )
                      {
                        prefix[0] = 32;
                        goto LABEL_112;
                      }
                    }
                    v33 = len;
                    v34 = v57 - v12 - len;
                    if ( (v5 & 0xC) == 0 )
                      write_multi_char(0x20u, v34, f, &charsout);
                    write_string(prefix, v33, f, &charsout);
                    v35 = f;
                    if ( (v5 & 0xC) == 8 )
                      write_multi_char(0x30u, v34, f, &charsout);
                    if ( v52 || (int)v12 <= 0 )
                    {
                      write_string((wchar_t *)p_buffer, v12, v35, &charsout);
LABEL_125:
                      v11 = charsout;
                    }
                    else
                    {
                      v36 = (const char *)p_buffer;
                      v37 = v12;
                      while ( 1 )
                      {
                        v38 = mbtowc(&wchar, v36, _mb_cur_max);
                        v39 = v38;
                        v37 -= (v38 == 2) + 1;
                        if ( v38 <= 0 )
                          break;
                        write_char(wchar, f, &charsout);
                        v36 += v39;
                        if ( v37 <= 0 )
                        {
                          format = (wchar_t *)v61;
                          v35 = f;
                          goto LABEL_125;
                        }
                      }
                      format = (wchar_t *)v61;
                      v11 = -1;
                      v35 = f;
                      charsout = -1;
                    }
                    if ( v11 < 0 || (v5 & 4) == 0 )
                    {
                      v6 = v50;
LABEL_138:
                      v13 = v53;
                      break;
                    }
                    write_multi_char(0x20u, v34, v35, &charsout);
                    v6 = v50;
                    goto LABEL_129;
                  }
LABEL_52:
                  v21 = *(_WORD *)v9;
                  v52 = 1;
                  v54 = v9 + 8;
                  wchar = v21;
                  if ( (v5 & 0x20) != 0 )
                  {
                    tempchar[0] = v21;
                    tempchar[1] = 0;
                    if ( mbtowc((wchar_t *)&buffer, tempchar, _mb_cur_max) < 0 )
                      v58 = 1;
                  }
                  else
                  {
                    buffer.wz[0] = v21;
                  }
                  p_buffer = &buffer;
                  LODWORD(v12) = 1;
                  goto LABEL_103;
                }
LABEL_72:
                v22 = 7;
LABEL_73:
                v60 = v22;
                if ( (v5 & 0x80u) != 0 )
                {
                  len = 2;
                  prefix[0] = 48;
                  prefix[1] = v22 + 81;
                }
                v15 = 16LL;
                goto $COMMON_INT;
              }
              if ( (v5 & 0x830) == 0 )
                v5 |= 0x20u;
LABEL_41:
              p_buffer = *($B4FF2100EA110D8CD0B9C89F852FB035 **)v9;
              v19 = v6;
              if ( v6 == -1 )
                v19 = 0x7FFFFFFF;
              v54 = v9 + 8;
              if ( (v5 & 0x20) != 0 )
              {
                v20 = (const char *)p_buffer;
                if ( !p_buffer )
                {
                  p_buffer = ($B4FF2100EA110D8CD0B9C89F852FB035 *)"(null)";
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
                v52 = 1;
                v23 = L"(null)";
                if ( p_buffer )
                  v23 = (const wchar_t *)p_buffer;
                p_buffer = ($B4FF2100EA110D8CD0B9C89F852FB035 *)v23;
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
                v54 = v9 + 8;
                v41 = *(_WORD **)v9;
                if ( !(unsigned int)get_printf_count_output() )
                  goto LABEL_190;
                if ( (v5 & 0x20) != 0 )
                  *v41 = v11;
                else
                  *(_DWORD *)v41 = v11;
                v58 = 1;
                goto LABEL_138;
              case 'o':
                v15 = 8LL;
                if ( (v5 & 0x80u) != 0 )
                  v5 |= 0x200u;
                goto $COMMON_INT;
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
$COMMON_INT:
            v54 = v9 + 8;
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
              v26 = v60;
              len &= -(v25 != 0);
              v27 = len;
              for ( j = &buffer.sz[511]; ; --j )
              {
                v29 = v6--;
                if ( v29 <= 0 && !v25 )
                  break;
                v30 = v25 % v15;
                v25 /= v15;
                v31 = v30 + 48;
                if ( (int)v30 + 48 > 57 )
                  v31 = v30 + v26 + 48;
                *j = v31;
              }
              LODWORD(v12) = (unsigned int)&buffer.wz[64] + 383 - (_DWORD)j;
              v50 = v6;
              p_buffer = ($B4FF2100EA110D8CD0B9C89F852FB035 *)(j + 1);
              if ( (v5 & 0x200) != 0 )
              {
                if ( !(_DWORD)v12 || (len = v27, p_buffer->sz[0] != 48) )
                {
                  p_buffer = ($B4FF2100EA110D8CD0B9C89F852FB035 *)j;
                  LODWORD(v12) = v12 + 1;
                  len = v27;
                  *j = 48;
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
                v16 = *(unsigned int *)v9;
                goto LABEL_87;
              }
              v16 = *(int *)v9;
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
        v10 = *format;
        v9 = v54;
      }
      while ( *format );
    }
    return (unsigned int)v11;
  }
  else
  {
LABEL_190:
    FxDeviceBase::AddChildList(0LL);
    return 0xFFFFFFFFLL;
  }
}
