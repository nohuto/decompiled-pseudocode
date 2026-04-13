/*
 * XREFs of ?_Putmfld@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@D1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@D@Z @ 0x18001E524
 * Callers:
 *     ?do_put@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@DAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x1800201A0 (-do_put@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$ostreamb.c)
 *     ?do_put@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@DO@Z @ 0x1800203D0 (-do_put@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA_ea_1800203D0.c)
 * Callees:
 *     ??4?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@QEAAAEAV01@D@Z @ 0x180006BAC (--4-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@QEAAAEAV01@D@Z.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x18000BB20 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     ??$use_facet@V?$moneypunct@D$00@std@@@std@@YAAEBV?$moneypunct@D$00@0@AEBVlocale@0@@Z @ 0x18001B988 (--$use_facet@V-$moneypunct@D$00@std@@@std@@YAAEBV-$moneypunct@D$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@D$0A@@std@@@std@@YAAEBV?$moneypunct@D$0A@@0@AEBVlocale@0@@Z @ 0x18001BAD4 (--$use_facet@V-$moneypunct@D$0A@@std@@@std@@YAAEBV-$moneypunct@D$0A@@0@AEBVlocale@0@@Z.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180021B5D (--3@YAXPEAX@Z_0.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800680E0 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
_OWORD *__fastcall std::money_put<char,std::ostreambuf_iterator<char>>::_Putmfld(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        char a4,
        __int64 a5,
        unsigned __int8 a6,
        char a7,
        unsigned __int8 *a8,
        char a9)
{
  __int64 v10; // r14
  unsigned __int8 *v11; // rdi
  __int64 v12; // rbx
  struct std::_Facet_base *v13; // r13
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  void (__fastcall ***v15)(_QWORD, __int64); // rax
  int v16; // eax
  unsigned int v17; // r15d
  unsigned __int64 v18; // rbx
  void **v19; // rax
  void **v20; // rax
  char v21; // r15
  void **v22; // rbx
  unsigned __int64 v23; // r14
  char v24; // cl
  __int64 v25; // rax
  __int64 v26; // r8
  unsigned __int64 v27; // rcx
  unsigned __int64 i; // rdx
  char v29; // al
  unsigned __int64 v30; // rax
  __int64 v31; // r15
  unsigned __int64 v32; // r15
  int v33; // ebx
  __int128 v34; // xmm0
  unsigned __int64 v35; // rax
  char v36; // al
  unsigned __int8 v37; // r14
  __int128 v38; // xmm0
  void **v39; // rbx
  unsigned __int8 *v40; // rbx
  unsigned __int64 v41; // r14
  unsigned __int64 v42; // r14
  unsigned __int8 *v43; // rbx
  unsigned __int64 v44; // rbx
  unsigned __int8 v45; // al
  unsigned __int64 v46; // rbx
  __int64 v47; // r14
  unsigned __int8 *v48; // rbx
  unsigned __int64 v49; // r14
  unsigned __int8 *v50; // rbx
  __int128 v51; // xmm0
  unsigned __int8 v52; // al
  unsigned __int8 *v53; // rbx
  unsigned __int8 *v54; // rbx
  unsigned __int64 v55; // r14
  unsigned __int8 *v56; // rdx
  unsigned __int8 *v57; // rbx
  __int64 v58; // r14
  __int128 v59; // xmm0
  _OWORD *v60; // rbx
  int v62; // [rsp+2Ch] [rbp-D5h] BYREF
  int v63; // [rsp+30h] [rbp-D1h]
  unsigned int v64; // [rsp+34h] [rbp-CDh]
  unsigned __int64 v65; // [rsp+38h] [rbp-C9h]
  unsigned __int8 *v66; // [rsp+40h] [rbp-C1h]
  __int128 v67; // [rsp+48h] [rbp-B9h] BYREF
  __int64 v68; // [rsp+58h] [rbp-A9h]
  _OWORD *v69; // [rsp+60h] [rbp-A1h]
  __int64 v70; // [rsp+68h] [rbp-99h]
  unsigned __int8 *v71; // [rsp+70h] [rbp-91h]
  void *v72[2]; // [rsp+78h] [rbp-89h] BYREF
  unsigned __int64 v73; // [rsp+90h] [rbp-71h]
  void *v74[2]; // [rsp+98h] [rbp-69h] BYREF
  unsigned __int64 v75; // [rsp+A8h] [rbp-59h]
  unsigned __int64 v76; // [rsp+B0h] [rbp-51h]
  void *v77[3]; // [rsp+B8h] [rbp-49h] BYREF
  unsigned __int64 v78; // [rsp+D0h] [rbp-31h]
  void *v79[2]; // [rsp+D8h] [rbp-29h] BYREF
  __int64 v80; // [rsp+E8h] [rbp-19h]
  unsigned __int64 v81; // [rsp+F0h] [rbp-11h]

  v70 = -2LL;
  v69 = a2;
  v10 = a5;
  v68 = a5;
  v11 = a8;
  v66 = a8;
  v71 = a8;
  v12 = **(_QWORD **)(a5 + 64);
  if ( a4 )
  {
    *(_QWORD *)&v67 = **(_QWORD **)(a5 + 64);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v13 = std::use_facet<std::moneypunct<char,1>>((__int64 *)&v67);
    if ( v12 )
    {
      v14 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      if ( v14 )
        (**v14)(v14, 1LL);
    }
  }
  else
  {
    *(_QWORD *)&v67 = **(_QWORD **)(a5 + 64);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v13 = std::use_facet<std::moneypunct<char,0>>((__int64 *)&v67);
    if ( v12 )
    {
      v15 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      if ( v15 )
        (**v15)(v15, 1LL);
    }
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 40LL))(v13, v77);
  v16 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v13 + 72LL))(v13);
  v17 = -v16;
  if ( v16 > 0 )
    v17 = v16;
  v64 = v17;
  v18 = v17;
  v65 = v17;
  if ( *((_QWORD *)a8 + 2) > (unsigned __int64)v17 )
  {
    v19 = v77;
    if ( v78 >= 0x10 )
      v19 = (void **)v77[0];
    if ( *(_BYTE *)v19 != 127 )
    {
      v20 = v77;
      if ( v78 >= 0x10 )
        v20 = (void **)v77[0];
      if ( *(char *)v20 > 0 )
      {
        v21 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v13 + 32LL))(v13);
        v22 = v77;
        if ( v78 >= 0x10 )
          v22 = (void **)v77[0];
        v23 = *((_QWORD *)a8 + 2) - v65;
        while ( 1 )
        {
          v24 = *(_BYTE *)v22;
          if ( *(_BYTE *)v22 == 127 || v24 <= 0 || v24 >= v23 )
            break;
          v23 -= v24;
          std::string::insert(a8, v23, 1uLL, v21);
          if ( *((char *)v22 + 1) > 0 )
            v22 = (void **)((char *)v22 + 1);
        }
        v17 = v64;
        v10 = v68;
        v18 = v65;
      }
    }
  }
  else
  {
    std::string::insert(a8, 0LL, v17 - *((_QWORD *)a8 + 2) + 1LL, a9);
  }
  v76 = 15LL;
  v75 = 0LL;
  LOBYTE(v74[0]) = 0;
  v25 = *(_QWORD *)v13;
  if ( a7 )
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, int *))(v25 + 88))(v13, &v62);
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 64LL))(v13, v72);
  }
  else
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, int *))(v25 + 80))(v13, &v62);
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v72);
  }
  std::string::operator=(v74, v72);
  if ( v73 >= 0x10 )
    operator delete(v72[0]);
  v81 = 15LL;
  v80 = 0LL;
  LOBYTE(v79[0]) = 0;
  if ( (*(_BYTE *)(v10 + 24) & 8) != 0 )
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 48LL))(v13, v72);
    std::string::operator=(v79, v72);
    if ( v73 >= 0x10 )
      operator delete(v72[0]);
  }
  LOBYTE(v26) = 0;
  v27 = 0LL;
  for ( i = 0LL; i < 4; ++i )
  {
    v29 = *((_BYTE *)&v62 + i);
    switch ( v29 )
    {
      case ' ':
        ++v27;
LABEL_50:
        v26 = (unsigned __int8)v26;
        if ( i != 3 )
          v26 = 1LL;
        continue;
      case '$':
        v27 += v80;
        continue;
      case '+':
        v27 += v75;
        continue;
    }
    if ( v29 != 118 )
    {
      if ( v29 != 120 )
        continue;
      goto LABEL_50;
    }
    v30 = v18 + 1;
    if ( *((_QWORD *)a8 + 2) > v18 )
      v30 = *((_QWORD *)a8 + 2);
    v27 += v30 + (v17 != 0);
  }
  v31 = *(_QWORD *)(v10 + 40);
  if ( v31 <= 0 || v31 <= v27 )
    v32 = 0LL;
  else
    v32 = v31 - v27;
  v33 = *(_DWORD *)(v10 + 24) & 0x1C0;
  v63 = v33;
  if ( v33 != 64 && (v33 != 256 || !(_BYTE)v26) )
  {
    v34 = *a3;
    v67 = *a3;
    if ( v32 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v67, a6);
        --v32;
      }
      while ( v32 );
      v34 = v67;
    }
    *a3 = v34;
    v32 = 0LL;
  }
  v35 = 0LL;
  *(_QWORD *)&v67 = 0LL;
  while ( 2 )
  {
    v36 = *((_BYTE *)&v62 + v35);
    if ( v36 != 32 )
    {
      switch ( v36 )
      {
        case '$':
          v57 = (unsigned __int8 *)v79;
          if ( v81 >= 0x10 )
            v57 = (unsigned __int8 *)v79[0];
          v38 = *a3;
          *(_OWORD *)v72 = *a3;
          v58 = v80;
          if ( !v80 )
            goto LABEL_91;
          do
          {
            std::ostreambuf_iterator<char>::operator=((__int64)v72, *v57++);
            --v58;
          }
          while ( v58 );
          break;
        case '+':
          if ( !v75 )
            goto LABEL_77;
          v56 = (unsigned __int8 *)v74;
          if ( v76 >= 0x10 )
            v56 = (unsigned __int8 *)v74[0];
          *(_OWORD *)v72 = *a3;
          std::ostreambuf_iterator<char>::operator=((__int64)v72, *v56);
          v38 = *(_OWORD *)v72;
          goto LABEL_76;
        case 'v':
          v42 = *((_QWORD *)v11 + 2);
          if ( !v64 )
          {
            if ( *((_QWORD *)v11 + 3) < 0x10uLL )
              v43 = v11;
            else
              v43 = *(unsigned __int8 **)v11;
            v38 = *a3;
            *(_OWORD *)v72 = *a3;
            if ( v42 )
            {
              do
              {
                std::ostreambuf_iterator<char>::operator=((__int64)v72, *v43++);
                --v42;
              }
              while ( v42 );
              break;
            }
LABEL_91:
            v33 = v63;
LABEL_76:
            *a3 = v38;
            goto LABEL_77;
          }
          v44 = v65;
          if ( v42 > v65 )
          {
            v49 = v42 - v65;
            if ( *((_QWORD *)v11 + 3) < 0x10uLL )
              v50 = v11;
            else
              v50 = *(unsigned __int8 **)v11;
            v51 = *a3;
            *(_OWORD *)v72 = *a3;
            if ( v49 )
            {
              do
              {
                std::ostreambuf_iterator<char>::operator=((__int64)v72, *v50++);
                --v49;
              }
              while ( v49 );
              v51 = *(_OWORD *)v72;
              v11 = v66;
            }
            *a3 = v51;
            v52 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, unsigned __int64, __int64))(*(_QWORD *)v13 + 24LL))(
                    v13,
                    i,
                    v26);
            std::ostreambuf_iterator<char>::operator=((__int64)a3, v52);
            if ( *((_QWORD *)v11 + 3) < 0x10uLL )
              v53 = v11;
            else
              v53 = *(unsigned __int8 **)v11;
            *(_OWORD *)v72 = *a3;
            v54 = &v53[*((_QWORD *)v11 + 2) - v65];
            v55 = v65;
            do
            {
              std::ostreambuf_iterator<char>::operator=((__int64)v72, *v54++);
              --v55;
            }
            while ( v55 );
          }
          else
          {
            std::ostreambuf_iterator<char>::operator=((__int64)a3, a9);
            v45 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v13 + 24LL))(v13);
            std::ostreambuf_iterator<char>::operator=((__int64)a3, v45);
            v38 = *a3;
            *(_OWORD *)v72 = *a3;
            v46 = v44 - *((_QWORD *)v11 + 2);
            if ( v46 )
            {
              do
              {
                std::ostreambuf_iterator<char>::operator=((__int64)v72, a9);
                --v46;
              }
              while ( v46 );
              v38 = *(_OWORD *)v72;
            }
            v47 = *((_QWORD *)v11 + 2);
            if ( *((_QWORD *)v11 + 3) < 0x10uLL )
              v48 = v11;
            else
              v48 = *(unsigned __int8 **)v11;
            *(_OWORD *)v72 = v38;
            if ( !v47 )
              goto LABEL_91;
            do
            {
              std::ostreambuf_iterator<char>::operator=((__int64)v72, *v48++);
              --v47;
            }
            while ( v47 );
          }
          break;
        case 'x':
          v37 = a6;
          goto LABEL_71;
        default:
          goto LABEL_77;
      }
      v38 = *(_OWORD *)v72;
      v11 = v66;
      goto LABEL_91;
    }
    *(_OWORD *)v72 = *a3;
    v37 = a6;
    std::ostreambuf_iterator<char>::operator=((__int64)v72, a6);
    *a3 = *(_OWORD *)v72;
LABEL_71:
    if ( v33 == 256 )
    {
      v38 = *a3;
      *(_OWORD *)v72 = *a3;
      if ( v32 )
      {
        do
        {
          std::ostreambuf_iterator<char>::operator=((__int64)v72, v37);
          --v32;
        }
        while ( v32 );
        v38 = *(_OWORD *)v72;
      }
      v32 = 0LL;
      goto LABEL_76;
    }
LABEL_77:
    v35 = v67 + 1;
    *(_QWORD *)&v67 = v35;
    if ( v35 < 4 )
      continue;
    break;
  }
  if ( v75 > 1 )
  {
    v39 = v74;
    if ( v76 >= 0x10 )
      v39 = (void **)v74[0];
    *(_OWORD *)v72 = *a3;
    v40 = (unsigned __int8 *)v39 + 1;
    v41 = v75 - 1;
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)v72, *v40++);
      --v41;
    }
    while ( v41 );
    *a3 = *(_OWORD *)v72;
  }
  *(_QWORD *)(v68 + 40) = 0LL;
  v59 = *a3;
  *(_OWORD *)v72 = *a3;
  if ( v32 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)v72, a6);
      --v32;
    }
    while ( v32 );
    v59 = *(_OWORD *)v72;
  }
  v60 = v69;
  *v69 = v59;
  if ( v81 >= 0x10 )
    operator delete(v79[0]);
  v81 = 15LL;
  v80 = 0LL;
  LOBYTE(v79[0]) = 0;
  if ( v76 >= 0x10 )
    operator delete(v74[0]);
  v76 = 15LL;
  v75 = 0LL;
  LOBYTE(v74[0]) = 0;
  if ( v78 >= 0x10 )
    operator delete(v77[0]);
  v78 = 15LL;
  v77[2] = 0LL;
  LOBYTE(v77[0]) = 0;
  if ( *((_QWORD *)v11 + 3) >= 0x10uLL )
    operator delete(*(void **)v11);
  *((_QWORD *)v11 + 3) = 15LL;
  *((_QWORD *)v11 + 2) = 0LL;
  *v11 = 0;
  return v60;
}
