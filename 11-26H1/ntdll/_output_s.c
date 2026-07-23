/*
 * XREFs of _output_s @ 0x18013444C
 * Callers:
 *     _soutput_s @ 0x180134DCC (_soutput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 *     _safecrt_wctomb_s @ 0x180134CE8 (_safecrt_wctomb_s.c)
 *     write_char_1 @ 0x180134ECC (write_char_1.c)
 *     write_multi_char_1 @ 0x180134F1C (write_multi_char_1.c)
 *     write_string_1 @ 0x180134F74 (write_string_1.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall output_s(__int64 a1, char *a2, unsigned __int16 *a3)
{
  __int64 v3; // rsi
  int v5; // edi
  int v6; // r14d
  const char *v7; // rbx
  char v9; // r9
  __int64 v10; // r12
  int v11; // r10d
  int *v12; // r8
  __int64 v13; // rcx
  int v14; // edx
  unsigned __int64 v15; // rax
  __int64 i; // rcx
  unsigned __int64 v17; // r11
  __int64 v18; // rax
  unsigned __int16 *v19; // rax
  const wchar_t *v20; // r12
  int v21; // eax
  int v22; // eax
  const char *v23; // rax
  unsigned __int64 v24; // r9
  char v25; // si
  int v26; // r10d
  int v27; // eax
  unsigned __int64 v28; // rdx
  char v29; // r8
  int v30; // eax
  bool v31; // zf
  unsigned int v32; // eax
  unsigned int v33; // r14d
  __int64 v34; // rcx
  __int64 v35; // rsi
  unsigned __int16 *v36; // r15
  int v37; // esi
  __int64 v38; // r9
  __int64 v39; // rcx
  char v40; // cl
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // edx
  _BYTE v46[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v47; // [rsp+34h] [rbp-CCh]
  int v48; // [rsp+38h] [rbp-C8h] BYREF
  int v49; // [rsp+3Ch] [rbp-C4h]
  int v50; // [rsp+40h] [rbp-C0h] BYREF
  int v51; // [rsp+44h] [rbp-BCh]
  int v52; // [rsp+48h] [rbp-B8h]
  int v53; // [rsp+4Ch] [rbp-B4h]
  __int64 v54; // [rsp+50h] [rbp-B0h]
  int v55; // [rsp+58h] [rbp-A8h]
  int v56; // [rsp+5Ch] [rbp-A4h]
  unsigned __int16 *v57; // [rsp+60h] [rbp-A0h] BYREF
  char *v58; // [rsp+68h] [rbp-98h]
  _BYTE v59[144]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v60; // [rsp+100h] [rbp+0h] BYREF
  char v61; // [rsp+26Fh] [rbp+16Fh] BYREF
  char v62[8]; // [rsp+270h] [rbp+170h] BYREF

  v3 = a1;
  v54 = a1;
  v55 = 0;
  v5 = 0;
  v53 = 0;
  v6 = 0;
  v49 = 0;
  v7 = 0LL;
  v47 = 0;
  v56 = 0;
  memset_thunk_772440563353939046(v59, 0, 0x200uLL);
  v51 = 0;
  if ( !v3 || !a2 )
    goto LABEL_190;
  v9 = *a2;
  LODWORD(v10) = 0;
  v48 = 0;
  v11 = 0;
  v50 = 0;
  if ( !v9 )
    return (unsigned int)v48;
  do
  {
    ++a2;
    v12 = (int *)a3;
    v58 = a2;
    if ( v48 < 0 )
      break;
    v13 = v9;
    if ( (unsigned __int8)(v9 - 32) > 0x5Au )
      v14 = 0;
    else
      v14 = _lookuptable_s[v9 - 32] & 0xF;
    v15 = (unsigned int)(v14 + v11 + 8 * v14);
    v11 = _lookuptable_s[v15] >> 4;
    v52 = v11;
    switch ( v11 )
    {
      case 8:
        goto LABEL_190;
      case 0:
        goto LABEL_158;
      case 1:
        v6 = -1;
        v56 = 0;
        v49 = -1;
        v5 = 0;
        v53 = 0;
        v47 = 0;
        v51 = 0;
        break;
      case 2:
        switch ( v9 )
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
        if ( v9 == 42 )
        {
          v42 = *(_DWORD *)a3;
          v43 = v5 | 4;
          a3 += 4;
          if ( v42 >= 0 )
            v43 = v5;
          v44 = -*v12;
          v5 = v43;
          if ( *v12 > 0 )
            v44 = v42;
        }
        else
        {
          v44 = v9 + 2 * (5 * v53 - 24);
        }
        v53 = v44;
        break;
      case 4:
        v6 = 0;
        v49 = 0;
        break;
      case 5:
        if ( v9 != 42 )
        {
          v6 = v9 + 2 * (5 * v6 - 24);
          goto LABEL_163;
        }
        v6 = *(_DWORD *)a3;
        a3 += 4;
        v49 = v6;
        if ( v6 < 0 )
        {
          v6 = -1;
LABEL_163:
          v49 = v6;
        }
        break;
      case 6:
        switch ( v9 )
        {
          case 'I':
            goto LABEL_139;
          case 'h':
            v5 |= 0x20u;
            goto LABEL_186;
          case 'j':
            goto LABEL_139;
          case 'l':
            v40 = *a2;
            if ( *a2 == 108 )
              ++a2;
            v41 = 4096;
            if ( v40 != 108 )
              v41 = 16;
            v5 |= v41;
            goto LABEL_186;
          case 't':
            goto LABEL_139;
          case 'w':
            v5 |= 0x800u;
            goto LABEL_186;
          case 'z':
LABEL_139:
            v5 |= 0x8000u;
            if ( v9 == 73 )
            {
              if ( *a2 == 54 )
              {
                if ( a2[1] != 52 )
                  goto LABEL_154;
                a2 += 2;
              }
              else
              {
                if ( *a2 != 51 || a2[1] != 50 )
                {
LABEL_154:
                  if ( *a2 == 100 )
                    goto LABEL_186;
                  LOBYTE(v15) = *a2 - 88;
                  if ( (unsigned __int8)v15 <= 0x20u )
                  {
                    v13 = 0x120820001LL;
                    if ( _bittest64(&v13, v15) )
                      goto LABEL_186;
                  }
                  v52 = 0;
LABEL_158:
                  v51 = 0;
                  LOBYTE(v13) = v9;
                  write_char_1(v13, v3, &v48);
LABEL_185:
                  v11 = v52;
                  goto LABEL_186;
                }
                a2 += 2;
                v5 &= ~0x8000u;
              }
            }
            else if ( v9 != 106 )
            {
              goto LABEL_154;
            }
            break;
        }
        break;
      case 7:
        if ( v9 <= 105 )
        {
          if ( v9 == 105 )
            goto LABEL_25;
          i = (unsigned int)(v9 - 67);
          if ( v9 == 67 )
          {
            if ( (v5 & 0x830) == 0 )
              v5 |= 0x800u;
            goto LABEL_50;
          }
          if ( v9 != 83 )
          {
            if ( v9 != 88 )
            {
              i = (unsigned int)(v9 - 90);
              if ( v9 != 90 )
              {
                i = (unsigned int)(v9 - 99);
                if ( v9 != 99 )
                {
                  if ( v9 == 100 )
                  {
LABEL_25:
                    v5 |= 0x40u;
                    goto LABEL_26;
                  }
LABEL_106:
                  if ( v56 )
                    goto LABEL_185;
                  if ( (v5 & 0x40) != 0 )
                  {
                    if ( (v5 & 0x100) != 0 )
                    {
                      v46[0] = 45;
                      goto LABEL_114;
                    }
                    if ( (v5 & 1) != 0 )
                    {
                      v46[0] = 43;
                      goto LABEL_114;
                    }
                    if ( (v5 & 2) != 0 )
                    {
                      v46[0] = 32;
LABEL_114:
                      v47 = 1;
                    }
                  }
                  v32 = v47;
                  v33 = v53 - v10 - v47;
                  if ( (v5 & 0xC) == 0 )
                  {
                    LOBYTE(i) = 32;
                    write_multi_char_1(i, v33, v54, &v48);
                    v32 = v47;
                  }
                  write_string_1(v46, v32, v54, &v48);
                  v35 = v54;
                  if ( (v5 & 0xC) == 8 )
                  {
                    LOBYTE(v34) = 48;
                    write_multi_char_1(v34, v33, v54, &v48);
                  }
                  if ( v51 && (int)v10 > 0 )
                  {
                    LODWORD(v57) = 0;
                    v36 = (unsigned __int16 *)v7;
                    v37 = v10;
                    while ( 1 )
                    {
                      v38 = *v36++;
                      --v37;
                      if ( (unsigned int)safecrt_wctomb_s(&v57, v62, 6LL, v38) || !(_DWORD)v57 )
                        break;
                      write_string_1(v62, (unsigned int)v57, v54, &v48);
                      if ( !v37 )
                        goto LABEL_127;
                    }
                    v48 = -1;
LABEL_127:
                    a2 = v58;
                    v35 = v54;
                  }
                  else
                  {
                    write_string_1(v7, (unsigned int)v10, v35, &v48);
                  }
                  if ( v48 >= 0 && (v5 & 4) != 0 )
                  {
                    LOBYTE(v39) = 32;
                    write_multi_char_1(v39, v33, v35, &v48);
                    v6 = v49;
                  }
                  else
                  {
                    v6 = v49;
                  }
                  goto LABEL_185;
                }
LABEL_50:
                if ( (v5 & 0x810) != 0 )
                {
                  v21 = safecrt_wctomb_s(&v50, v59, 512LL, *a3);
                  LODWORD(v10) = v50;
                  if ( v21 )
                    v56 = 1;
                }
                else
                {
                  LODWORD(v10) = 1;
                  v59[0] = *(_BYTE *)a3;
                  v50 = 1;
                }
                v7 = v59;
                a3 += 4;
                goto LABEL_106;
              }
              v19 = *(unsigned __int16 **)a3;
              a3 += 4;
              if ( *(_QWORD *)v12 && (v7 = (const char *)*((_QWORD *)v19 + 1)) != 0LL )
              {
                i = *v19;
                if ( v19[1] < (unsigned __int16)i )
                  goto LABEL_190;
                if ( (v5 & 0x800) != 0 )
                {
                  if ( (i & 1) != 0 || ((unsigned __int8)v7 & 1) != 0 )
                    goto LABEL_190;
                  v51 = 1;
                  LODWORD(v10) = (unsigned int)i >> 1;
                }
                else
                {
                  v51 = 0;
                  LODWORD(v10) = i;
                }
              }
              else
              {
                v7 = "(null)";
                LODWORD(v10) = 6;
              }
LABEL_105:
              v50 = v10;
              goto LABEL_106;
            }
LABEL_74:
            v22 = 7;
LABEL_75:
            v55 = v22;
            if ( (v5 & 0x80u) != 0 )
            {
              v46[0] = 48;
              v46[1] = v22 + 81;
              v47 = 2;
            }
            v17 = 16LL;
            goto LABEL_27;
          }
          if ( (v5 & 0x830) == 0 )
            v5 |= 0x800u;
LABEL_42:
          v7 = *(const char **)a3;
          i = (unsigned int)v6;
          if ( v6 == -1 )
            i = 0x7FFFFFFFLL;
          a3 += 4;
          if ( (v5 & 0x810) != 0 )
          {
            v20 = *(const wchar_t **)v12;
            if ( !v7 )
            {
              v7 = (const char *)L"(null)";
              v20 = L"(null)";
            }
            v51 = 1;
            while ( (_DWORD)i )
            {
              i = (unsigned int)(i - 1);
              if ( !*v20 )
                break;
              ++v20;
            }
            v10 = ((char *)v20 - v7) >> 1;
          }
          else
          {
            v23 = "(null)";
            if ( v7 )
              v23 = *(const char **)v12;
            v7 = v23;
            while ( (_DWORD)i )
            {
              i = (unsigned int)(i - 1);
              if ( !*v23 )
                break;
              ++v23;
            }
            LODWORD(v10) = (_DWORD)v23 - (_DWORD)v7;
          }
          goto LABEL_105;
        }
        switch ( v9 )
        {
          case 'n':
            goto LABEL_190;
          case 'o':
            v17 = 8LL;
            if ( (v5 & 0x80u) != 0 )
              v5 |= 0x200u;
            goto LABEL_27;
          case 'p':
            v6 = 16;
            v5 |= 0x8000u;
            goto LABEL_74;
          case 's':
            goto LABEL_42;
        }
        i = (unsigned int)(v9 - 117);
        if ( v9 != 117 )
        {
          if ( v9 != 120 )
            goto LABEL_106;
          v22 = 39;
          goto LABEL_75;
        }
LABEL_26:
        v17 = 10LL;
LABEL_27:
        v57 = a3 + 4;
        if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
        {
          v18 = *(_QWORD *)a3;
          if ( (v5 & 0x40) != 0 )
            goto LABEL_86;
LABEL_89:
          v24 = (unsigned int)v18;
          if ( (v5 & 0x9000) != 0 )
            v24 = v18;
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
          v25 = v55;
          v47 &= -(v24 != 0);
          v26 = v47;
          for ( i = (__int64)&v61; ; --i )
          {
            v27 = v6--;
            if ( v27 <= 0 && !v24 )
              break;
            v28 = v24 % v17;
            v24 /= v17;
            v29 = v28 + 48;
            if ( (int)v28 + 48 > 57 )
              v29 = v28 + v25 + 48;
            *(_BYTE *)i = v29;
          }
          v30 = (unsigned int)&v60 + 367 - i;
          v49 = v6;
          v50 = v30;
          v7 = (const char *)(i + 1);
          LODWORD(v10) = v30;
          a3 = v57;
          if ( (v5 & 0x200) == 0 )
            goto LABEL_106;
          if ( v30 )
          {
            v31 = *v7 == 48;
            v47 = v26;
            if ( v31 )
              goto LABEL_106;
          }
          v7 = (const char *)i;
          v47 = v26;
          LODWORD(v10) = v30 + 1;
          a3 = v57;
          *(_BYTE *)i = 48;
          goto LABEL_105;
        }
        if ( (v5 & 0x20) != 0 )
        {
          if ( (v5 & 0x40) == 0 )
          {
            v18 = *a3;
            goto LABEL_89;
          }
          v18 = (__int16)*a3;
        }
        else
        {
          if ( (v5 & 0x40) == 0 )
          {
            v18 = *(unsigned int *)a3;
            goto LABEL_89;
          }
          v18 = *(int *)a3;
        }
LABEL_86:
        if ( v18 < 0 )
        {
          v18 = -v18;
          v5 |= 0x100u;
        }
        goto LABEL_89;
    }
LABEL_186:
    v9 = *a2;
    v3 = v54;
  }
  while ( *a2 );
  if ( !v11 || v11 == 7 )
    return (unsigned int)v48;
LABEL_190:
  invalid_parameter();
  return 0xFFFFFFFFLL;
}
