/*
 * XREFs of ?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAEAVios_base@2@PEAD@Z @ 0x18001CC74
 * Callers:
 *     ?do_get@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAO@Z @ 0x18001ED50 (-do_get@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istreamb.c)
 *     ?do_get@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x18001EE60 (-do_get@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA_ea_18001EE60.c)
 * Callees:
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x18000667C (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1800092EC (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18000BA44 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x18000BB20 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     ??$use_facet@V?$moneypunct@D$00@std@@@std@@YAAEBV?$moneypunct@D$00@0@AEBVlocale@0@@Z @ 0x18001B988 (--$use_facet@V-$moneypunct@D$00@std@@@std@@YAAEBV-$moneypunct@D$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@D$0A@@std@@@std@@YAAEBV?$moneypunct@D$0A@@0@AEBVlocale@0@@Z @ 0x18001BAD4 (--$use_facet@V-$moneypunct@D$0A@@std@@@std@@YAAEBV-$moneypunct@D$0A@@0@AEBVlocale@0@@Z.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180021B5D (--3@YAXPEAX@Z_0.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18005C934 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800680E0 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
_QWORD *__fastcall std::money_get<char,std::istreambuf_iterator<char>>::_Getmfld(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 *a4,
        char a5,
        __int64 a6,
        char *a7)
{
  __int64 *v7; // r14
  _QWORD *v9; // r15
  __int64 v10; // rbx
  int v11; // r12d
  struct std::_Facet_base *v12; // rsi
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  __int64 v15; // rbx
  int v16; // r12d
  struct std::_Facet_base *v17; // rcx
  void (__fastcall ***v18)(_QWORD, __int64); // rax
  unsigned __int8 *v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // rbx
  char v22; // al
  char v23; // r14
  unsigned __int8 *v24; // rbx
  __int64 v25; // r12
  __int64 v26; // rcx
  int v27; // eax
  int v28; // r14d
  int v29; // esi
  struct std::_Facet_base *v30; // rbx
  char v31; // r15
  void **v32; // rcx
  unsigned __int64 v33; // r14
  __int64 v34; // rbx
  char v35; // al
  void **v36; // rsi
  _QWORD *v37; // r12
  __int64 v38; // rcx
  int v39; // eax
  char *v40; // r8
  char m; // al
  void **v42; // rax
  void **v43; // rax
  void **v44; // rax
  __int64 v45; // rcx
  int v46; // eax
  void **v47; // rax
  void **v48; // rcx
  void *v49; // r9
  unsigned __int64 v50; // r8
  void **v51; // rax
  void **v52; // rax
  char *v53; // rsi
  __int64 v54; // rcx
  unsigned __int8 *v55; // rdx
  int v56; // eax
  char *v57; // r8
  char i; // al
  char v59; // bl
  __int64 v60; // rcx
  int v61; // eax
  char j; // al
  __int64 v63; // rcx
  int v64; // eax
  char *v65; // r8
  char k; // al
  __int64 v67; // rbx
  int v68; // r12d
  char v69; // bl
  __int64 v70; // rcx
  unsigned __int8 *v71; // rdx
  int v72; // eax
  void **v73; // rcx
  void *v74; // r8
  unsigned __int64 v75; // rdx
  void *v76; // rcx
  int v77; // r12d
  char v78; // bl
  __int64 v79; // rcx
  unsigned __int8 *v80; // rdx
  int v81; // eax
  void **v82; // rcx
  void *v83; // r8
  unsigned __int64 v84; // rdx
  __int64 v85; // rbx
  __int64 v86; // rbx
  __int64 v87; // rcx
  unsigned __int8 *v88; // rdx
  int v89; // eax
  _BYTE *v90; // rax
  _BYTE *v91; // rbx
  __int64 v92; // rcx
  unsigned __int8 *v93; // rdx
  int v94; // eax
  _BYTE *v95; // rax
  unsigned __int8 *v96; // rbx
  _QWORD *v97; // rcx
  __int64 v98; // rcx
  unsigned __int8 *v99; // rdx
  int v100; // eax
  unsigned __int64 v101; // r9
  _QWORD *v102; // r8
  char v103; // al
  _QWORD *v104; // rdx
  int v105; // eax
  char v106; // al
  unsigned __int64 v107; // rcx
  void **v108; // rbx
  void **v109; // rax
  __int64 v110; // rcx
  unsigned __int8 *v111; // rdx
  int v112; // eax
  void **v113; // rax
  _BYTE *v114; // rax
  unsigned int v116; // [rsp+30h] [rbp-D0h]
  char v117; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v118; // [rsp+40h] [rbp-C0h]
  int v119; // [rsp+48h] [rbp-B8h]
  struct std::_Facet_base *v121; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v122; // [rsp+60h] [rbp-A0h]
  int v123; // [rsp+68h] [rbp-98h]
  int v124; // [rsp+6Ch] [rbp-94h]
  struct std::_Facet_base *v125; // [rsp+70h] [rbp-90h]
  _BYTE v126[8]; // [rsp+78h] [rbp-88h] BYREF
  char *v127; // [rsp+80h] [rbp-80h]
  __int64 v128; // [rsp+88h] [rbp-78h]
  _QWORD *v129; // [rsp+90h] [rbp-70h]
  _QWORD v130[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v131; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v132; // [rsp+B0h] [rbp-50h]
  void *v133[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v134; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v135; // [rsp+D0h] [rbp-30h]
  void *v136[2]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v137; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v138; // [rsp+F0h] [rbp-10h]
  void *v139[3]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v140; // [rsp+110h] [rbp+10h]
  void *v141[3]; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int64 v142; // [rsp+130h] [rbp+30h]
  void *v143[3]; // [rsp+138h] [rbp+38h] BYREF
  unsigned __int64 v144; // [rsp+150h] [rbp+50h]
  void *v145[3]; // [rsp+158h] [rbp+58h] BYREF
  unsigned __int64 v146; // [rsp+170h] [rbp+70h]

  v128 = -2LL;
  v7 = a4;
  v9 = a2;
  v122 = a2;
  v129 = a2;
  v127 = a7;
  v10 = **(_QWORD **)(a6 + 64);
  if ( a5 )
  {
    v121 = **(struct std::_Facet_base ***)(a6 + 64);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = 256;
    v12 = std::use_facet<std::moneypunct<char,1>>((__int64 *)&v121);
    v125 = v12;
    if ( v10 )
    {
      v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      if ( v13 )
        (**v13)(v13, 1LL);
    }
  }
  else
  {
    v121 = **(struct std::_Facet_base ***)(a6 + 64);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = 128;
    v12 = std::use_facet<std::moneypunct<char,0>>((__int64 *)&v121);
    v125 = v12;
    if ( v10 )
    {
      v14 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      if ( v14 )
        (**v14)(v14, 1LL);
    }
  }
  LOBYTE(v116) = 0;
  v117 = 0;
  v138 = 15LL;
  v137 = 0LL;
  LOBYTE(v136[0]) = 0;
  (*(void (__fastcall **)(struct std::_Facet_base *, _BYTE *))(*(_QWORD *)v12 + 88LL))(v12, v126);
  v9[3] = 15LL;
  v9[2] = 0LL;
  *(_BYTE *)v9 = 0;
  v15 = **(_QWORD **)(a6 + 64);
  v121 = (struct std::_Facet_base *)v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = v11 | 0x21;
  v119 = v16;
  v17 = std::use_facet<std::ctype<char>>((__int64 *)&v121);
  v121 = v17;
  if ( v15 )
  {
    v18 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v18 )
      (**v18)(v18, 1LL);
    v17 = v121;
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, char *))(*(_QWORD *)v17 + 56LL))(
    v17,
    "0123456789-",
    "",
    v127);
  v118 = 0LL;
  v20 = v116;
  v21 = 0LL;
  while ( 2 )
  {
    if ( v21 >= 4 )
    {
      v107 = v137;
      if ( v137 > 1 )
      {
        v108 = v136;
        if ( v138 >= 0x10 )
          v108 = (void **)v136[0];
        while ( 1 )
        {
          v108 = (void **)((char *)v108 + 1);
          v109 = v136;
          if ( v138 >= 0x10 )
            v109 = (void **)v136[0];
          if ( v108 == (void **)((char *)v109 + v107) )
            goto LABEL_322;
          if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, v7) )
            break;
          if ( !*(_BYTE *)(a3 + 8) )
          {
            v110 = *(_QWORD *)a3;
            if ( !*(_QWORD *)a3
              || ((v111 = **(unsigned __int8 ***)(v110 + 56)) == 0LL || **(int **)(v110 + 80) <= 0
                ? (v112 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v110 + 48LL))(v110))
                : (v112 = *v111),
                  v112 == -1) )
            {
              *(_QWORD *)a3 = 0LL;
            }
            else
            {
              *(_BYTE *)(a3 + 9) = v112;
            }
            *(_BYTE *)(a3 + 8) = 1;
          }
          if ( *(_BYTE *)(a3 + 9) != *(_BYTE *)v108 )
            break;
          std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
          v107 = v137;
        }
        v107 = v137;
LABEL_322:
        v113 = v136;
        if ( v138 >= 0x10 )
          v113 = (void **)v136[0];
        if ( v108 != (void **)((char *)v113 + v107) )
          break;
      }
      if ( v117 )
        std::string::insert(v9, 0LL, 1uLL, 45);
      goto LABEL_331;
    }
    v22 = v126[v21];
    switch ( v22 )
    {
      case ' ':
LABEL_20:
        if ( v21 != 3 )
        {
          v23 = 0;
          if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
          {
            v24 = (unsigned __int8 *)(a3 + 9);
            v25 = (__int64)v121;
            do
            {
              if ( !*(_BYTE *)(a3 + 8) )
              {
                v26 = *(_QWORD *)a3;
                if ( !*(_QWORD *)a3
                  || ((v19 = **(unsigned __int8 ***)(v26 + 56)) == 0LL || **(int **)(v26 + 80) <= 0
                    ? (v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 48LL))(v26))
                    : (v27 = *v19),
                      v27 == -1) )
                {
                  *(_QWORD *)a3 = 0LL;
                }
                else
                {
                  *(_BYTE *)(a3 + 9) = v27;
                  v24 = (unsigned __int8 *)(a3 + 9);
                }
                *(_BYTE *)(a3 + 8) = 1;
              }
              if ( (*(_BYTE *)(*(_QWORD *)(v25 + 24) + 2LL * *v24) & 0x48) == 0 )
                break;
              v23 = 1;
              std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
            }
            while ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) );
            v16 = v119;
            v9 = v122;
          }
          v21 = v118;
          if ( v126[v118] == 32 )
          {
            v106 = v116;
            if ( !v23 )
              v106 = 1;
            LOBYTE(v116) = v106;
          }
          v7 = a4;
          goto LABEL_102;
        }
        goto LABEL_103;
      case '$':
        (*(void (__fastcall **)(struct std::_Facet_base *, _QWORD *, __int64))(*(_QWORD *)v12 + 48LL))(v12, v130, v20);
        v16 |= 0x40u;
        v119 = v16;
        if ( (*(_BYTE *)(a6 + 24) & 8) == 0 && !std::istreambuf_iterator<char>::equal((__int64 *)a3, v7) )
        {
          if ( !*(_BYTE *)(a3 + 8) )
          {
            v87 = *(_QWORD *)a3;
            if ( !*(_QWORD *)a3
              || ((v88 = **(unsigned __int8 ***)(v87 + 56)) == 0LL || **(int **)(v87 + 80) <= 0
                ? (v89 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v87 + 48LL))(v87))
                : (v89 = *v88),
                  v89 == -1) )
            {
              *(_QWORD *)a3 = 0LL;
            }
            else
            {
              *(_BYTE *)(a3 + 9) = v89;
            }
            *(_BYTE *)(a3 + 8) = 1;
          }
          v90 = v130;
          if ( v132 >= 0x10 )
            v90 = (_BYTE *)v130[0];
          if ( *(_BYTE *)(a3 + 9) != *v90 )
            goto LABEL_261;
        }
        if ( v118 == 3 && v137 <= 1 )
        {
          if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, v7) )
            goto LABEL_261;
          v91 = v130;
          if ( v132 >= 0x10 )
            v91 = (_BYTE *)v130[0];
          if ( !*(_BYTE *)(a3 + 8) )
          {
            v92 = *(_QWORD *)a3;
            if ( !*(_QWORD *)a3
              || ((v93 = **(unsigned __int8 ***)(v92 + 56)) == 0LL || **(int **)(v92 + 80) <= 0
                ? (v94 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v92 + 48LL))(v92))
                : (v94 = *v93),
                  v94 == -1) )
            {
              *(_QWORD *)a3 = 0LL;
            }
            else
            {
              *(_BYTE *)(a3 + 9) = v94;
            }
            *(_BYTE *)(a3 + 8) = 1;
          }
          if ( *(_BYTE *)(a3 + 9) != *v91 )
          {
LABEL_261:
            v95 = v130;
            v131 = 0LL;
            if ( v132 >= 0x10 )
              v95 = (_BYTE *)v130[0];
            *v95 = 0;
          }
        }
        v96 = (unsigned __int8 *)v130;
        if ( v132 >= 0x10 )
          v96 = (unsigned __int8 *)v130[0];
        while ( 1 )
        {
          v103 = std::istreambuf_iterator<char>::equal((__int64 *)a3, v7);
          v101 = v132;
          v102 = (_QWORD *)v130[0];
          if ( v103 )
            break;
          v97 = v130;
          if ( v132 >= 0x10 )
            v97 = (_QWORD *)v130[0];
          if ( v96 == (unsigned __int8 *)((char *)v97 + v131) )
            break;
          if ( !*(_BYTE *)(a3 + 8) )
          {
            v98 = *(_QWORD *)a3;
            if ( !*(_QWORD *)a3
              || ((v99 = **(unsigned __int8 ***)(v98 + 56)) == 0LL || **(int **)(v98 + 80) <= 0
                ? (v100 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v98 + 48LL))(v98),
                   v101 = v132,
                   v102 = (_QWORD *)v130[0])
                : (_QWORD *)(v100 = *v99),
                  v100 == -1) )
            {
              *(_QWORD *)a3 = 0LL;
            }
            else
            {
              *(_BYTE *)(a3 + 9) = v100;
            }
            *(_BYTE *)(a3 + 8) = 1;
          }
          if ( *(_BYTE *)(a3 + 9) != *v96 )
            break;
          ++v96;
          std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
        }
        v104 = v130;
        if ( v101 >= 0x10 )
          v104 = v102;
        v19 = (unsigned __int8 *)v104 + v131;
        v105 = (unsigned __int8)v116;
        if ( v96 != v19 )
          v105 = 1;
        v116 = v105;
        if ( v101 < 0x10 )
          goto LABEL_101;
        v76 = v102;
        goto LABEL_195;
      case '+':
        if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, v7) )
          goto LABEL_102;
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 56LL))(v12, v133);
        v68 = v16 | 0x402;
        v69 = 0;
        if ( v134 )
        {
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 56LL))(v12, v143);
          v68 |= 0x1004u;
          if ( !*(_BYTE *)(a3 + 8) )
          {
            v70 = *(_QWORD *)a3;
            if ( !*(_QWORD *)a3
              || ((v71 = **(unsigned __int8 ***)(v70 + 56)) == 0LL || **(int **)(v70 + 80) <= 0
                ? (v72 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 48LL))(v70))
                : (v72 = *v71),
                  v72 == -1) )
            {
              *(_QWORD *)a3 = 0LL;
            }
            else
            {
              *(_BYTE *)(a3 + 9) = v72;
            }
            *(_BYTE *)(a3 + 8) = 1;
          }
          v73 = v143;
          v74 = v143[0];
          v75 = v144;
          if ( v144 >= 0x10 )
            v73 = (void **)v143[0];
          if ( *(_BYTE *)v73 == *(_BYTE *)(a3 + 9) )
            v69 = 1;
        }
        else
        {
          v75 = v144;
          v74 = v143[0];
        }
        if ( (v68 & 4) != 0 )
        {
          v68 &= ~4u;
          if ( v75 >= 0x10 )
            operator delete(v74);
          v144 = 15LL;
          v143[2] = 0LL;
          LOBYTE(v143[0]) = 0;
        }
        if ( (v68 & 2) != 0 )
        {
          v68 &= ~2u;
          if ( v135 >= 0x10 )
            operator delete(v133[0]);
        }
        if ( !v69 )
        {
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 64LL))(v12, v133);
          v77 = v68 | 0x808;
          v78 = 0;
          if ( v134 )
          {
            (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 64LL))(v12, v145);
            v77 |= 0x4010u;
            if ( !*(_BYTE *)(a3 + 8) )
            {
              v79 = *(_QWORD *)a3;
              if ( !*(_QWORD *)a3
                || ((v80 = **(unsigned __int8 ***)(v79 + 56)) == 0LL || **(int **)(v79 + 80) <= 0
                  ? (v81 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v79 + 48LL))(v79))
                  : (v81 = *v80),
                    v81 == -1) )
              {
                *(_QWORD *)a3 = 0LL;
              }
              else
              {
                *(_BYTE *)(a3 + 9) = v81;
              }
              *(_BYTE *)(a3 + 8) = 1;
            }
            v82 = v145;
            v83 = v145[0];
            v84 = v146;
            if ( v146 >= 0x10 )
              v82 = (void **)v145[0];
            if ( *(_BYTE *)v82 == *(_BYTE *)(a3 + 9) )
              v78 = 1;
          }
          else
          {
            v84 = v146;
            v83 = v145[0];
          }
          if ( (v77 & 0x10) != 0 )
          {
            v77 &= ~0x10u;
            if ( v84 >= 0x10 )
              operator delete(v83);
            v146 = 15LL;
            v145[2] = 0LL;
            LOBYTE(v145[0]) = 0;
          }
          if ( (v77 & 8) != 0 )
          {
            v77 &= ~8u;
            if ( v135 >= 0x10 )
              operator delete(v133[0]);
          }
          if ( v78 )
          {
            std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
            (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 64LL))(v12, v133);
            v16 = v77 | 0x8000;
            v119 = v16;
            std::string::operator=(v136, v133);
            if ( v135 >= 0x10 )
              operator delete(v133[0]);
          }
          else
          {
            (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 56LL))(v12, v133);
            v16 = v77 | 0x10000;
            v119 = v16;
            v85 = v134;
            if ( v135 >= 0x10 )
              operator delete(v133[0]);
            if ( !v85 )
              goto LABEL_101;
            (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 64LL))(v12, v133);
            v16 |= 0x20000u;
            v119 = v16;
            v86 = v134;
            if ( v135 >= 0x10 )
              operator delete(v133[0]);
            if ( v86 )
              goto LABEL_101;
          }
          v117 = 1;
          goto LABEL_101;
        }
        std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 56LL))(v12, v133);
        v16 = v68 | 0x2000;
        v119 = v16;
        std::string::operator=(v136, v133);
        if ( v135 < 0x10 )
          goto LABEL_101;
        v76 = v133[0];
LABEL_195:
        operator delete(v76);
        goto LABEL_101;
    }
    if ( v22 != 118 )
    {
      if ( v22 != 120 )
        goto LABEL_103;
      goto LABEL_20;
    }
    v28 = 0;
    v124 = 0;
    v29 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, unsigned __int8 *, __int64))(*(_QWORD *)v12 + 72LL))(
            v12,
            v19,
            v20);
    v123 = v29;
    v30 = v125;
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v125 + 40LL))(v125, v141);
    v16 |= 0x200u;
    v119 = v16;
    if ( !v141[2] )
    {
LABEL_108:
      if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
      {
        v53 = v127;
        do
        {
          if ( !*(_BYTE *)(a3 + 8) )
          {
            v54 = *(_QWORD *)a3;
            if ( !*(_QWORD *)a3
              || ((v55 = **(unsigned __int8 ***)(v54 + 56)) == 0LL || **(int **)(v54 + 80) <= 0
                ? (v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 48LL))(v54))
                : (v56 = *v55),
                  v56 == -1) )
            {
              *(_QWORD *)a3 = 0LL;
            }
            else
            {
              *(_BYTE *)(a3 + 9) = v56;
            }
            *(_BYTE *)(a3 + 8) = 1;
          }
          v57 = v53;
          for ( i = *v53; i && i != *(_BYTE *)(a3 + 9); i = *v57 )
            ++v57;
          if ( (unsigned __int64)(v57 - v53) >= 0xA )
            break;
          std::string::append(v9, 1LL);
          std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
        }
        while ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) );
        goto LABEL_126;
      }
LABEL_127:
      v59 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v30 + 24LL))(v30);
      if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) && v59 )
      {
        if ( !*(_BYTE *)(a3 + 8) )
        {
          v60 = *(_QWORD *)a3;
          if ( !*(_QWORD *)a3
            || ((v19 = **(unsigned __int8 ***)(v60 + 56)) == 0LL || **(int **)(v60 + 80) <= 0
              ? (v61 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 48LL))(v60))
              : (v61 = *v19),
                v61 == -1) )
          {
            *(_QWORD *)a3 = 0LL;
          }
          else
          {
            *(_BYTE *)(a3 + 9) = v61;
          }
          *(_BYTE *)(a3 + 8) = 1;
        }
        if ( *(_BYTE *)(a3 + 9) == v59 )
        {
          std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
          for ( j = std::istreambuf_iterator<char>::equal((__int64 *)a3, a4);
                !j;
                j = std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
          {
            if ( v28 >= v29 )
              goto LABEL_161;
            if ( !*(_BYTE *)(a3 + 8) )
            {
              v63 = *(_QWORD *)a3;
              if ( !*(_QWORD *)a3
                || ((v19 = **(unsigned __int8 ***)(v63 + 56)) == 0LL || **(int **)(v63 + 80) <= 0
                  ? (v64 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 48LL))(v63))
                  : (v64 = *v19),
                    v64 == -1) )
              {
                *(_QWORD *)a3 = 0LL;
              }
              else
              {
                *(_BYTE *)(a3 + 9) = v64;
              }
              *(_BYTE *)(a3 + 8) = 1;
            }
            v65 = v127;
            for ( k = *v127; k && k != *(_BYTE *)(a3 + 9); k = *v65 )
              ++v65;
            if ( (unsigned __int64)(v65 - v127) >= 0xA )
              goto LABEL_160;
            std::string::append(v122, 1LL);
            ++v28;
            std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
          }
          if ( v28 >= v29 )
            goto LABEL_161;
LABEL_160:
          LOBYTE(v116) = 1;
        }
      }
LABEL_161:
      v9 = v122;
      if ( v122[2] )
      {
        if ( v28 < v29 )
        {
          v67 = (unsigned int)(v29 - v28);
          do
          {
            std::string::append(v9, 1LL);
            --v67;
          }
          while ( v67 );
        }
      }
      else
      {
        LOBYTE(v116) = 1;
      }
      if ( v142 >= 0x10 )
        operator delete(v141[0]);
      goto LABEL_100;
    }
    v31 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v30 + 32LL))(v30);
    if ( !v31 )
      goto LABEL_107;
    v32 = v141;
    if ( v142 >= 0x10 )
      v32 = (void **)v141[0];
    if ( *(_BYTE *)v32 >= 0x7Fu )
    {
LABEL_107:
      v9 = v122;
      goto LABEL_108;
    }
    v33 = 15LL;
    v140 = 15LL;
    LOWORD(v139[0]) = 0;
    v139[2] = (void *)1;
    v34 = 0LL;
    v35 = std::istreambuf_iterator<char>::equal((__int64 *)a3, a4);
    v36 = (void **)v139[0];
    if ( v35 )
      goto LABEL_79;
    v37 = v122;
    while ( 1 )
    {
      if ( !*(_BYTE *)(a3 + 8) )
      {
        v38 = *(_QWORD *)a3;
        if ( !*(_QWORD *)a3
          || ((v19 = **(unsigned __int8 ***)(v38 + 56)) == 0LL || **(int **)(v38 + 80) <= 0
            ? (v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 48LL))(v38))
            : (v39 = *v19),
              v39 == -1) )
        {
          *(_QWORD *)a3 = 0LL;
        }
        else
        {
          *(_BYTE *)(a3 + 9) = v39;
        }
        *(_BYTE *)(a3 + 8) = 1;
      }
      v40 = v127;
      for ( m = *v127; m && m != *(_BYTE *)(a3 + 9); m = *v40 )
        ++v40;
      if ( (unsigned __int64)(v40 - v127) >= 0xA )
        break;
      std::string::append(v37, 1LL);
      v42 = v139;
      if ( v33 >= 0x10 )
        v42 = v36;
      if ( *((_BYTE *)v42 + v34) == 127 )
        goto LABEL_72;
      v43 = v139;
      if ( v33 >= 0x10 )
        v43 = v36;
      ++*((_BYTE *)v43 + v34);
LABEL_71:
      v36 = (void **)v139[0];
      v33 = v140;
LABEL_72:
      std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
      if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
        goto LABEL_73;
    }
    v44 = v139;
    if ( v33 >= 0x10 )
      v44 = v36;
    if ( *((_BYTE *)v44 + v34) )
    {
      if ( !*(_BYTE *)(a3 + 8) )
      {
        v45 = *(_QWORD *)a3;
        if ( !*(_QWORD *)a3
          || ((v19 = **(unsigned __int8 ***)(v45 + 56)) == 0LL || **(int **)(v45 + 80) <= 0
            ? (v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 48LL))(v45))
            : (v46 = *v19),
              v46 == -1) )
        {
          *(_QWORD *)a3 = 0LL;
        }
        else
        {
          *(_BYTE *)(a3 + 9) = v46;
        }
        *(_BYTE *)(a3 + 8) = 1;
      }
      if ( *(_BYTE *)(a3 + 9) == v31 )
      {
        std::string::append(v139, 1LL);
        ++v34;
        goto LABEL_71;
      }
    }
LABEL_73:
    v16 = v119;
    if ( v34 )
    {
      v47 = v139;
      if ( v33 >= 0x10 )
        v47 = v36;
      if ( *((char *)v47 + v34) <= 0 )
        LOBYTE(v116) = 1;
      else
        ++v34;
    }
LABEL_79:
    v48 = v141;
    v49 = v141[0];
    v50 = v142;
    if ( v142 >= 0x10 )
      v48 = (void **)v141[0];
    if ( !(_BYTE)v116 )
    {
      while ( v34 )
      {
        LOBYTE(v19) = *(_BYTE *)v48;
        if ( *(_BYTE *)v48 == 127 )
          break;
        if ( --v34 )
        {
          v51 = v139;
          if ( v33 >= 0x10 )
            v51 = v36;
          if ( (_BYTE)v19 != *((_BYTE *)v51 + v34) )
            goto LABEL_94;
        }
        if ( !v34 )
        {
          v52 = v139;
          if ( v33 >= 0x10 )
            v52 = v36;
          if ( (char)v19 < *(char *)v52 )
          {
LABEL_94:
            LOBYTE(v116) = 1;
            goto LABEL_95;
          }
        }
        if ( *((char *)v48 + 1) > 0 )
          v48 = (void **)((char *)v48 + 1);
      }
      if ( v33 >= 0x10 )
        operator delete(v36);
LABEL_126:
      v29 = v123;
      v28 = v124;
      v30 = v125;
      goto LABEL_127;
    }
LABEL_95:
    if ( v33 >= 0x10 )
    {
      operator delete(v36);
      v50 = v142;
      v49 = v141[0];
    }
    if ( v50 >= 0x10 )
      operator delete(v49);
    v9 = v122;
LABEL_100:
    v7 = a4;
LABEL_101:
    v21 = v118;
LABEL_102:
    v20 = v116;
LABEL_103:
    v118 = ++v21;
    if ( !(_BYTE)v20 )
    {
      v12 = v125;
      continue;
    }
    break;
  }
  if ( v9[3] < 0x10uLL )
    v114 = v9;
  else
    v114 = (_BYTE *)*v9;
  v9[2] = 0LL;
  *v114 = 0;
LABEL_331:
  if ( v138 >= 0x10 )
    operator delete(v136[0]);
  return v9;
}
