/*
 * XREFs of ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0AEBV12@00@Z @ 0x18008A090
 * Callers:
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z @ 0x18008A360 (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1800047D4 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x180004800 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 *     ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x18005BB00 (-_Grow@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA_N_K_N@Z.c)
 *     ?copy@?$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z @ 0x18005CF58 (-copy@-$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z.c)
 *     ?move@?$char_traits@G@std@@SAPEAGPEAGPEBG_K@Z @ 0x18005E9C8 (-move@-$char_traits@G@std@@SAPEAGPEAGPEBG_K@Z.c)
 */

_QWORD *__fastcall std::wstring::replace(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  _QWORD *v7; // r15
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r14
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r13
  unsigned __int64 v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // r8
  char *v26; // rdx
  char *v27; // rcx
  _QWORD *v28; // rdx
  _QWORD *v29; // rcx
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  unsigned __int64 v32; // r15
  _QWORD *v33; // rax
  _QWORD *v34; // rcx
  _QWORD *v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // r14
  _QWORD *v38; // rax
  _QWORD *v39; // rcx
  _QWORD *v40; // rdx
  _QWORD *v41; // rcx
  _QWORD *v42; // rax
  unsigned __int64 v44; // [rsp+50h] [rbp+8h]

  v7 = a4;
  v8 = a1[2];
  v9 = a3;
  if ( v8 < a2 || (v11 = a4[2], v12 = a5, v11 < a5) )
    std::_Xout_of_range("invalid string position");
  v13 = a6;
  if ( v8 - a2 < a3 )
    v9 = v8 - a2;
  v14 = v11 - a5;
  if ( v14 < a6 )
    v13 = v14;
  if ( ~v13 <= v8 - v9 )
    std::_Xlength_error("string too long");
  v15 = v8 - a2 - v9;
  v16 = v13 - v9;
  v44 = v8 + v13 - v9;
  if ( v8 < v44 )
    std::wstring::_Grow(a1, v8 + v13 - v9, 0);
  v17 = a1[3];
  if ( a1 == v7 )
  {
    if ( v13 > v9 )
    {
      if ( a5 > a2 )
      {
        v32 = a2 + v9;
        if ( a2 + v9 > a5 )
        {
          if ( v17 < 8 )
          {
            v35 = a1;
            v36 = a1;
          }
          else
          {
            v35 = (_QWORD *)*a1;
            v36 = (_QWORD *)*a1;
          }
          std::char_traits<unsigned short>::move((char *)v36 + 2 * a2, (char *)v35 + 2 * a5, v9);
          v37 = 2 * v32;
          if ( a1[3] < 8uLL )
          {
            v38 = a1;
            v39 = a1;
          }
          else
          {
            v38 = (_QWORD *)*a1;
            v39 = (_QWORD *)*a1;
          }
          std::char_traits<unsigned short>::move((char *)v39 + 2 * a2 + 2 * v13, (char *)v38 + v37, v15);
          if ( a1[3] < 8uLL )
          {
            v40 = a1;
            v41 = a1;
          }
          else
          {
            v40 = (_QWORD *)*a1;
            v41 = (_QWORD *)*a1;
          }
          v27 = (char *)v41 + v37;
          v26 = (char *)v40 + 2 * a5 + 2 * v13;
          v25 = v16;
          goto LABEL_55;
        }
        if ( v17 < 8 )
        {
          v33 = a1;
          v34 = a1;
        }
        else
        {
          v33 = (_QWORD *)*a1;
          v34 = (_QWORD *)*a1;
        }
        std::char_traits<unsigned short>::move((char *)v34 + 2 * a2 + 2 * v13, (char *)v33 + 2 * v32, v15);
        if ( a1[3] < 8uLL )
        {
          v30 = a1;
          v31 = a1;
        }
        else
        {
          v30 = (_QWORD *)*a1;
          v31 = (_QWORD *)*a1;
        }
        v12 = v13 + a5 - v9;
      }
      else
      {
        if ( v17 < 8 )
        {
          v28 = a1;
          v29 = a1;
        }
        else
        {
          v28 = (_QWORD *)*a1;
          v29 = (_QWORD *)*a1;
        }
        std::char_traits<unsigned short>::move((char *)v29 + 2 * a2 + 2 * v13, (char *)v28 + 2 * a2 + 2 * v9, v15);
        if ( a1[3] < 8uLL )
        {
          v30 = a1;
          v31 = a1;
        }
        else
        {
          v30 = (_QWORD *)*a1;
          v31 = (_QWORD *)*a1;
        }
      }
      v26 = (char *)v30 + 2 * v12;
      v25 = v13;
      v27 = (char *)v31 + 2 * a2;
    }
    else
    {
      if ( v17 < 8 )
      {
        v21 = a1;
        v22 = a1;
      }
      else
      {
        v21 = (_QWORD *)*a1;
        v22 = (_QWORD *)*a1;
      }
      std::char_traits<unsigned short>::move((char *)v22 + 2 * a2, (char *)v21 + 2 * a5, v13);
      if ( a1[3] < 8uLL )
      {
        v23 = a1;
        v24 = a1;
      }
      else
      {
        v23 = (_QWORD *)*a1;
        v24 = (_QWORD *)*a1;
      }
      v25 = v15;
      v26 = (char *)v23 + 2 * a2 + 2 * v9;
      v27 = (char *)v24 + 2 * a2 + 2 * v13;
    }
LABEL_55:
    std::char_traits<unsigned short>::move(v27, v26, v25);
    goto LABEL_56;
  }
  if ( v17 < 8 )
  {
    v18 = a1;
    v19 = a1;
  }
  else
  {
    v18 = (_QWORD *)*a1;
    v19 = (_QWORD *)*a1;
  }
  std::char_traits<unsigned short>::move((char *)v19 + 2 * a2 + 2 * v13, (char *)v18 + 2 * a2 + 2 * v9, v15);
  if ( v7[3] >= 8uLL )
    v7 = (_QWORD *)*v7;
  if ( a1[3] < 8uLL )
    v20 = a1;
  else
    v20 = (_QWORD *)*a1;
  std::char_traits<wchar_t>::copy((char *)v20 + 2 * a2, (char *)v7 + 2 * a5, v13);
LABEL_56:
  if ( a1[3] < 8uLL )
    v42 = a1;
  else
    v42 = (_QWORD *)*a1;
  a1[2] = v44;
  *((_WORD *)v42 + v44) = 0;
  return a1;
}
