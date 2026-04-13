/*
 * XREFs of ?_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z @ 0x180016374
 * Callers:
 *     ?do_put@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@GAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180018FB0 (-do_put@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$ostreamb.c)
 *     ?do_put@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@GO@Z @ 0x1800191E0 (-do_put@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA_ea_1800191E0.c)
 * Callees:
 *     ??$use_facet@V?$moneypunct@G$00@std@@@std@@YAAEBV?$moneypunct@G$00@0@AEBVlocale@0@@Z @ 0x18000FC6C (--$use_facet@V-$moneypunct@G$00@std@@@std@@YAAEBV-$moneypunct@G$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@G$0A@@std@@@std@@YAAEBV?$moneypunct@G$0A@@0@AEBVlocale@0@@Z @ 0x18000FDB8 (--$use_facet@V-$moneypunct@G$0A@@std@@@std@@YAAEBV-$moneypunct@G$0A@@0@AEBVlocale@0@@Z.c)
 *     ?_Put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@2@_K@Z @ 0x1800161F4 (-_Put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@CA-AV-$ostreambu.c)
 *     ?_Rep@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_W_K@Z @ 0x18001748C (-_Rep@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@CA-AV-$ostreambu.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z @ 0x18001AF78 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180021B5D (--3@YAXPEAX@Z_0.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18005A2B4 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall std::money_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::_Putmfld(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        char a4,
        __int64 a5,
        unsigned __int16 a6,
        char a7,
        __int64 a8,
        unsigned __int16 a9)
{
  __int128 *v9; // r14
  __int64 v10; // r13
  __int64 v11; // rbx
  struct std::_Facet_base *v12; // r12
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  int v15; // eax
  unsigned int v16; // ebx
  unsigned __int64 v17; // rsi
  void **v18; // rax
  void **v19; // rax
  unsigned __int16 v20; // r13
  void **v21; // rbx
  unsigned __int64 v22; // rsi
  char v23; // cl
  __int64 v24; // rax
  __int64 v25; // r8
  unsigned __int64 v26; // rax
  unsigned __int16 *i; // rdx
  char v28; // cl
  __int64 v29; // rcx
  __int64 v30; // r13
  unsigned __int64 v31; // r13
  int v32; // ebx
  unsigned __int64 v33; // rax
  char v34; // al
  unsigned __int64 v35; // r9
  unsigned __int16 *v36; // r8
  char *v37; // rcx
  __int128 *v38; // rax
  unsigned __int16 ***v39; // rbx
  unsigned __int16 ***v40; // rsi
  int *v41; // rax
  unsigned __int16 v42; // ax
  unsigned __int16 v43; // r8
  int *v44; // rax
  unsigned __int16 *v45; // rdx
  __int128 *v46; // rax
  unsigned __int16 *v47; // r8
  __int64 v48; // r9
  unsigned __int16 *v49; // r8
  unsigned __int16 v50; // r8
  __int64 v51; // rcx
  int *v52; // rax
  unsigned __int16 **v53; // rcx
  unsigned __int16 *v54; // rdx
  __int64 v55; // rdx
  void **v56; // r8
  __int64 v57; // rbx
  __int128 v59; // [rsp+38h] [rbp-D0h] BYREF
  __int128 *v60; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v61; // [rsp+50h] [rbp-B8h]
  int v62; // [rsp+54h] [rbp-B4h]
  unsigned __int64 v63; // [rsp+58h] [rbp-B0h]
  __int64 v64; // [rsp+60h] [rbp-A8h]
  __int128 v65; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v66; // [rsp+78h] [rbp-90h]
  __int64 v67; // [rsp+80h] [rbp-88h]
  char v68; // [rsp+88h] [rbp-80h] BYREF
  char v69[16]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v70; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v71; // [rsp+B8h] [rbp-50h] BYREF
  char v72; // [rsp+C8h] [rbp-40h] BYREF
  char v73; // [rsp+D8h] [rbp-30h] BYREF
  char v74; // [rsp+E8h] [rbp-20h] BYREF
  char v75[16]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v76; // [rsp+108h] [rbp+0h]
  void *v77[2]; // [rsp+110h] [rbp+8h] BYREF
  unsigned __int64 v78; // [rsp+120h] [rbp+18h]
  unsigned __int64 v79; // [rsp+128h] [rbp+20h]
  void *v80[2]; // [rsp+130h] [rbp+28h] BYREF
  unsigned __int64 v81; // [rsp+140h] [rbp+38h]
  unsigned __int64 v82; // [rsp+148h] [rbp+40h]
  void *v83[3]; // [rsp+150h] [rbp+48h] BYREF
  unsigned __int64 v84; // [rsp+168h] [rbp+60h]
  void *v85[3]; // [rsp+170h] [rbp+68h] BYREF
  unsigned __int64 v86; // [rsp+188h] [rbp+80h]

  v67 = -2LL;
  v9 = a3;
  v60 = a3;
  v66 = a2;
  v10 = a5;
  v64 = a5;
  v76 = a8;
  v11 = **(_QWORD **)(a5 + 64);
  if ( a4 )
  {
    *(_QWORD *)&v65 = **(_QWORD **)(a5 + 64);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = std::use_facet<std::moneypunct<unsigned short,1>>((__int64 *)&v65);
    if ( v11 )
    {
      v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      if ( v13 )
        (**v13)(v13, 1LL);
    }
  }
  else
  {
    *(_QWORD *)&v65 = **(_QWORD **)(a5 + 64);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = std::use_facet<std::moneypunct<unsigned short,0>>((__int64 *)&v65);
    if ( v11 )
    {
      v14 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      if ( v14 )
        (**v14)(v14, 1LL);
    }
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 40LL))(v12, v83);
  v15 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 72LL))(v12);
  v16 = -v15;
  if ( v15 > 0 )
    v16 = v15;
  v61 = v16;
  v17 = v16;
  v63 = v16;
  if ( *(_QWORD *)(a8 + 16) > (unsigned __int64)v16 )
  {
    v18 = v83;
    if ( v84 >= 0x10 )
      v18 = (void **)v83[0];
    if ( *(_BYTE *)v18 != 127 )
    {
      v19 = v83;
      if ( v84 >= 0x10 )
        v19 = (void **)v83[0];
      if ( *(char *)v19 > 0 )
      {
        v20 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 32LL))(v12);
        v21 = v83;
        if ( v84 >= 0x10 )
          v21 = (void **)v83[0];
        v22 = *(_QWORD *)(a8 + 16) - v63;
        v23 = *(_BYTE *)v21;
        if ( *(_BYTE *)v21 != 127 )
        {
          do
          {
            if ( v23 <= 0 || v23 >= v22 )
              break;
            v22 -= v23;
            std::wstring::insert(a8, v22, 1LL, v20);
            if ( *((char *)v21 + 1) > 0 )
              v21 = (void **)((char *)v21 + 1);
            v23 = *(_BYTE *)v21;
          }
          while ( *(_BYTE *)v21 != 127 );
          v9 = v60;
        }
        v16 = v61;
        v10 = v64;
        v17 = v63;
      }
    }
  }
  else
  {
    std::wstring::insert(a8, 0LL, v16 - *(_QWORD *)(a8 + 16) + 1LL, a9);
  }
  v79 = 7LL;
  v78 = 0LL;
  LOWORD(v77[0]) = 0;
  v24 = *(_QWORD *)v12;
  if ( a7 )
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, __int128 **))(v24 + 88))(v12, &v60);
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 64LL))(v12, v85);
    if ( v79 >= 8 )
      operator delete(v77[0]);
  }
  else
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, __int128 **))(v24 + 80))(v12, &v60);
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 56LL))(v12, v85);
    if ( v79 >= 8 )
      operator delete(v77[0]);
  }
  v79 = 7LL;
  v78 = 0LL;
  LOWORD(v77[0]) = 0;
  std::wstring::_Assign_rv(v77, v85);
  if ( v86 >= 8 )
    operator delete(v85[0]);
  v82 = 7LL;
  v81 = 0LL;
  LOWORD(v80[0]) = 0;
  if ( (*(_BYTE *)(v10 + 24) & 8) != 0 )
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 48LL))(v12, v85);
    if ( v82 >= 8 )
      operator delete(v80[0]);
    v82 = 7LL;
    v81 = 0LL;
    LOWORD(v80[0]) = 0;
    std::wstring::_Assign_rv(v80, v85);
    if ( v86 >= 8 )
      operator delete(v85[0]);
  }
  LOBYTE(v25) = 0;
  v26 = 0LL;
  for ( i = 0LL; (unsigned __int64)i < 4; i = (unsigned __int16 *)((char *)i + 1) )
  {
    v28 = *((_BYTE *)&v60 + (_QWORD)i);
    switch ( v28 )
    {
      case ' ':
        ++v26;
        break;
      case '$':
        v26 += v81;
        continue;
      case '+':
        v26 += v78;
        continue;
      case 'v':
        if ( *(_QWORD *)(a8 + 16) > v17 )
          v29 = 0LL;
        else
          v29 = v17 - *(_QWORD *)(a8 + 16) + 1;
        v26 += *(_QWORD *)(a8 + 16) + (v16 != 0) + v29;
        continue;
      case 'x':
        break;
      default:
        continue;
    }
    v25 = (unsigned __int8)v25;
    if ( i != (unsigned __int16 *)3 )
      v25 = 1LL;
  }
  v30 = *(_QWORD *)(v10 + 40);
  if ( v30 <= 0 || v30 <= v26 )
    v31 = 0LL;
  else
    v31 = v30 - v26;
  v32 = *(_DWORD *)(v64 + 24) & 0x1C0;
  v62 = v32;
  if ( v32 != 64 && (v32 != 256 || !(_BYTE)v25) )
  {
    v65 = *v9;
    *v9 = *(_OWORD *)std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Rep(&v59, &v65, a6, v31);
    v31 = 0LL;
  }
  v33 = 0LL;
  *(_QWORD *)&v65 = 0LL;
  while ( 2 )
  {
    v34 = *((_BYTE *)&v60 + v33);
    switch ( v34 )
    {
      case ' ':
        v59 = *v9;
        *v9 = *(_OWORD *)std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Rep(v75, &v59, a6, 1LL);
        goto LABEL_121;
      case '$':
        v36 = (unsigned __int16 *)v80;
        if ( v82 >= 8 )
          v36 = (unsigned __int16 *)v80[0];
        v35 = v81;
        v37 = &v74;
        goto LABEL_79;
      case '+':
        if ( !v78 )
          break;
        v36 = (unsigned __int16 *)v77;
        if ( v79 >= 8 )
          v36 = (unsigned __int16 *)v77[0];
        v35 = 1LL;
        v37 = &v73;
        goto LABEL_79;
      case 'v':
        v35 = *(_QWORD *)(a8 + 16);
        if ( v61 )
        {
          if ( v35 <= v17 )
          {
            v39 = (unsigned __int16 ***)*((_QWORD *)v9 + 1);
            v40 = v39 + 8;
            if ( !v39
              || (!**v40 || (v41 = (int *)v39[11], *v41 <= 0)
                ? (v42 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))(*v39)[3])(*((_QWORD *)v9 + 1), a9, v25))
                : (--*v41, i = **v40, **v40 = i + 1, v42 = a9, *i = a9),
                  v42 == 0xFFFF) )
            {
              *(_BYTE *)v9 = 1;
            }
            v43 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, unsigned __int16 *, __int64))(*(_QWORD *)v12 + 24LL))(
                    v12,
                    i,
                    v25);
            if ( !v39
              || (!**v40 || (v44 = (int *)v39[11], *v44 <= 0)
                ? (v43 = ((__int64 (__fastcall *)(unsigned __int16 ***, _QWORD))(*v39)[3])(v39, v43))
                : (--*v44, v45 = **v40, **v40 = v45 + 1, *v45 = v43),
                  v43 == 0xFFFF) )
            {
              *(_BYTE *)v9 = 1;
            }
            v59 = *v9;
            v17 = v63;
            v46 = (__int128 *)std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Rep(
                                v69,
                                &v59,
                                a9,
                                v63 - *(_QWORD *)(a8 + 16));
            if ( *(_QWORD *)(a8 + 24) < 8uLL )
              v47 = (unsigned __int16 *)a8;
            else
              v47 = *(unsigned __int16 **)a8;
            v59 = *v46;
            v38 = std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Put(
                    &v70,
                    (__int64)&v59,
                    v47,
                    *(_QWORD *)(a8 + 16));
            v32 = v62;
            goto LABEL_123;
          }
          v48 = v35 - v17;
          if ( *(_QWORD *)(a8 + 24) < 8uLL )
            v49 = (unsigned __int16 *)a8;
          else
            v49 = *(unsigned __int16 **)a8;
          v59 = *v9;
          *v9 = *std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Put(&v71, (__int64)&v59, v49, v48);
          v50 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 24LL))(v12);
          v51 = *((_QWORD *)v9 + 1);
          if ( !v51
            || (!**(_QWORD **)(v51 + 64) || (v52 = *(int **)(v51 + 88), *v52 <= 0)
              ? (v50 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v51 + 24LL))(v51, v50))
              : (--*v52, v53 = *(unsigned __int16 ***)(v51 + 64), v54 = *v53, ++*v53, *v54 = v50),
                v50 == 0xFFFF) )
          {
            *(_BYTE *)v9 = 1;
          }
          if ( *(_QWORD *)(a8 + 24) < 8uLL )
            v55 = a8;
          else
            v55 = *(_QWORD *)a8;
          v36 = (unsigned __int16 *)(v55 - 2 * v17 + 2LL * *(_QWORD *)(a8 + 16));
          v35 = v17;
          v37 = &v72;
        }
        else
        {
          if ( *(_QWORD *)(a8 + 24) < 8uLL )
            v36 = (unsigned __int16 *)a8;
          else
            v36 = *(unsigned __int16 **)a8;
          v37 = &v68;
        }
LABEL_79:
        v59 = *v9;
        v38 = std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Put(v37, (__int64)&v59, v36, v35);
LABEL_123:
        *v9 = *v38;
        break;
      case 'x':
LABEL_121:
        if ( v32 != 256 )
          break;
        v59 = *v9;
        v38 = (__int128 *)std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Rep(v85, &v59, a6, v31);
        v31 = 0LL;
        goto LABEL_123;
    }
    v33 = v65 + 1;
    *(_QWORD *)&v65 = v33;
    if ( v33 < 4 )
      continue;
    break;
  }
  if ( v78 > 1 )
  {
    v56 = v77;
    if ( v79 >= 8 )
      v56 = (void **)v77[0];
    v59 = *v9;
    *v9 = *std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Put(
             v85,
             (__int64)&v59,
             (unsigned __int16 *)v56 + 1,
             v78 - 1);
  }
  *(_QWORD *)(v64 + 40) = 0LL;
  v59 = *v9;
  v57 = v66;
  std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Rep(v66, &v59, a6, v31);
  if ( v82 >= 8 )
    operator delete(v80[0]);
  v82 = 7LL;
  v81 = 0LL;
  LOWORD(v80[0]) = 0;
  if ( v79 >= 8 )
    operator delete(v77[0]);
  v79 = 7LL;
  v78 = 0LL;
  LOWORD(v77[0]) = 0;
  if ( v84 >= 0x10 )
    operator delete(v83[0]);
  v84 = 15LL;
  v83[2] = 0LL;
  LOBYTE(v83[0]) = 0;
  if ( *(_QWORD *)(a8 + 24) >= 8uLL )
    operator delete(*(void **)a8);
  *(_QWORD *)(a8 + 24) = 7LL;
  *(_QWORD *)(a8 + 16) = 0LL;
  *(_WORD *)a8 = 0;
  return v57;
}
