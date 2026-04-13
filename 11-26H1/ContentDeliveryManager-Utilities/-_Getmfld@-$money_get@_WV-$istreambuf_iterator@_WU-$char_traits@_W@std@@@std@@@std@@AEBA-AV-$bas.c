/*
 * XREFs of ?_Getmfld@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0_NAEAVios_base@2@PEA_W@Z @ 0x180013180
 * Callers:
 *     ?do_get@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAO@Z @ 0x180017A80 (-do_get@-$money_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$istre.c)
 *     ?do_get@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x180017B90 (-do_get@-$money_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@M_ea_180017B90.c)
 * Callees:
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x18000BB20 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     ??$use_facet@V?$moneypunct@_W$00@std@@@std@@YAAEBV?$moneypunct@_W$00@0@AEBVlocale@0@@Z @ 0x18000FF04 (--$use_facet@V-$moneypunct@_W$00@std@@@std@@YAAEBV-$moneypunct@_W$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@_W$0A@@std@@@std@@YAAEBV?$moneypunct@_W$0A@@0@AEBVlocale@0@@Z @ 0x180010050 (--$use_facet@V-$moneypunct@_W$0A@@std@@@std@@YAAEBV-$moneypunct@_W$0A@@0@AEBVlocale@0@@Z.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180021B5D (--3@YAXPEAX@Z_0.c)
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x18004D728 (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18005A2B4 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x18005BB90 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18005C934 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18005DF74 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x180084ED0 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
_QWORD *__fastcall std::money_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getmfld(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int16 *a7)
{
  __int64 v7; // r15
  _QWORD *v9; // r13
  __int64 v10; // rbx
  int v11; // edi
  struct std::_Facet_base *v12; // r14
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  __int64 v15; // rbx
  int v16; // edi
  __int64 v17; // rcx
  void (__fastcall ***v18)(_QWORD, __int64); // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // rbx
  char v22; // al
  char v23; // bl
  __int64 v24; // r13
  unsigned __int16 *v25; // rax
  char v26; // al
  int v27; // r15d
  int v28; // r14d
  struct std::_Facet_base *v29; // rbx
  __int16 v30; // r13
  void **v31; // rcx
  unsigned __int64 v32; // r15
  __int64 v33; // rbx
  char v34; // al
  void **v35; // r14
  _QWORD *v36; // rdi
  __int16 v37; // cx
  __int16 *v38; // r8
  __int16 i; // ax
  void **v40; // rax
  void **v41; // rax
  void **v42; // rax
  void **v43; // rax
  void **v44; // rcx
  void *v45; // r9
  unsigned __int64 v46; // r8
  void **v47; // rax
  void **v48; // rax
  __int16 *v49; // r14
  __int16 v50; // cx
  __int16 *v51; // r8
  __int16 j; // ax
  __int16 v53; // bx
  char k; // al
  __int16 v55; // cx
  __int16 *v56; // r8
  __int16 m; // ax
  __int64 v58; // rbx
  int v59; // edi
  void **v60; // rbx
  bool v61; // zf
  char v62; // bl
  _QWORD *v63; // rcx
  int v64; // edi
  void **v65; // rbx
  char v66; // bl
  __int64 v67; // rbx
  __int64 v68; // rbx
  _WORD *v69; // rbx
  _WORD *v70; // rax
  _WORD *v71; // rbx
  _WORD *v72; // rax
  _WORD *v73; // rbx
  _QWORD *v74; // rax
  __int64 v75; // r8
  _QWORD *v76; // rax
  _WORD *v77; // rax
  unsigned __int64 v78; // rcx
  void **v79; // rbx
  void **v80; // rax
  void **v81; // rax
  _BYTE *v82; // rax
  unsigned int v84; // [rsp+30h] [rbp-D0h]
  char v85; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v86; // [rsp+40h] [rbp-C0h]
  struct std::_Facet_base *v87; // [rsp+48h] [rbp-B8h]
  __int64 v89; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v90; // [rsp+60h] [rbp-A0h]
  int v91; // [rsp+68h] [rbp-98h]
  int v92; // [rsp+6Ch] [rbp-94h]
  int v93; // [rsp+70h] [rbp-90h]
  _BYTE v94[4]; // [rsp+74h] [rbp-8Ch] BYREF
  __int16 *v95; // [rsp+78h] [rbp-88h]
  __int64 v96; // [rsp+80h] [rbp-80h]
  _QWORD *v97; // [rsp+88h] [rbp-78h]
  void *v98[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v99; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v100; // [rsp+A8h] [rbp-58h]
  _QWORD v101[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v102; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v103; // [rsp+C8h] [rbp-38h]
  void *v104[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v105; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v106; // [rsp+E8h] [rbp-18h]
  void *v107[3]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v108; // [rsp+108h] [rbp+8h]
  void *v109[3]; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 v110; // [rsp+128h] [rbp+28h]
  void *v111[3]; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int64 v112; // [rsp+148h] [rbp+48h]
  void *v113[3]; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v114; // [rsp+168h] [rbp+68h]

  v96 = -2LL;
  v7 = a4;
  v9 = a2;
  v90 = a2;
  v97 = a2;
  v95 = a7;
  v10 = **(_QWORD **)(a6 + 64);
  if ( a5 )
  {
    v89 = **(_QWORD **)(a6 + 64);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = 256;
    v12 = std::use_facet<std::moneypunct<wchar_t,1>>(&v89);
    v87 = v12;
    if ( v10 )
    {
      v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      if ( v13 )
        (**v13)(v13, 1LL);
    }
  }
  else
  {
    v89 = **(_QWORD **)(a6 + 64);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = 128;
    v12 = std::use_facet<std::moneypunct<wchar_t,0>>(&v89);
    v87 = v12;
    if ( v10 )
    {
      v14 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      if ( v14 )
        (**v14)(v14, 1LL);
    }
  }
  LOBYTE(v84) = 0;
  v85 = 0;
  v100 = 7LL;
  v99 = 0LL;
  LOWORD(v98[0]) = 0;
  (*(void (__fastcall **)(struct std::_Facet_base *, _BYTE *))(*(_QWORD *)v12 + 88LL))(v12, v94);
  v9[3] = 15LL;
  v9[2] = 0LL;
  *(_BYTE *)v9 = 0;
  v15 = **(_QWORD **)(a6 + 64);
  v89 = v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = v11 | 0x21;
  v17 = std::use_facet<std::ctype<wchar_t>>((std::locale *)&v89);
  v89 = v17;
  if ( v15 )
  {
    v18 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v18 )
      (**v18)(v18, 1LL);
    v17 = v89;
  }
  (*(void (__fastcall **)(__int64, const char *, char *, __int16 *))(*(_QWORD *)v17 + 88LL))(
    v17,
    "0123456789-",
    "",
    v95);
  v86 = 0LL;
  v20 = v84;
  v21 = 0LL;
  while ( v21 < 4 )
  {
    v22 = v94[v21];
    switch ( v22 )
    {
      case ' ':
        goto LABEL_20;
      case '$':
        (*(void (__fastcall **)(struct std::_Facet_base *, _QWORD *, __int64))(*(_QWORD *)v12 + 48LL))(v12, v101, v20);
        v16 |= 0x40u;
        if ( (*(_BYTE *)(a6 + 24) & 8) != 0 || (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v7) )
          goto LABEL_177;
        v69 = v101;
        if ( v103 >= 8 )
          v69 = (_WORD *)v101[0];
        if ( *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) == *v69 )
        {
LABEL_177:
          if ( v86 == 3 && v99 <= 1 )
          {
            if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v7) )
              goto LABEL_178;
            v71 = v101;
            if ( v103 >= 8 )
              v71 = (_WORD *)v101[0];
            if ( *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) != *v71 )
            {
LABEL_178:
              v72 = v101;
              if ( v103 >= 8 )
                v72 = (_WORD *)v101[0];
              v102 = 0LL;
              *v72 = 0;
            }
          }
        }
        else
        {
          v70 = v101;
          if ( v103 >= 8 )
            v70 = (_WORD *)v101[0];
          v102 = 0LL;
          *v70 = 0;
        }
        v73 = v101;
        if ( v103 >= 8 )
          v73 = (_WORD *)v101[0];
        while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v7) )
        {
          v74 = v101;
          v63 = (_QWORD *)v101[0];
          v19 = v103;
          if ( v103 >= 8 )
            v74 = (_QWORD *)v101[0];
          v75 = v102;
          if ( v73 == (_WORD *)((char *)v74 + 2 * v102) )
            goto LABEL_191;
          if ( *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) != *v73 )
            break;
          ++v73;
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
        }
        v19 = v103;
        v75 = v102;
        v63 = (_QWORD *)v101[0];
LABEL_191:
        v76 = v101;
        if ( v19 >= 8 )
          v76 = v63;
        v77 = (_WORD *)v76 + v75;
        v20 = (unsigned __int8)v84;
        if ( v73 != v77 )
          v20 = 1LL;
        v84 = v20;
        if ( v19 >= 8 )
          goto LABEL_138;
        goto LABEL_78;
      case '+':
        if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v7) )
        {
          v20 = v84;
          break;
        }
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 56LL))(v12, v104);
        v59 = v16 | 0x402;
        if ( !v105 )
          goto LABEL_125;
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 56LL))(v12, v111);
        v59 |= 0x1004u;
        v60 = v111;
        if ( v112 >= 8 )
          v60 = (void **)v111[0];
        v61 = *(_WORD *)v60 == *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
        v62 = 1;
        if ( !v61 )
LABEL_125:
          v62 = 0;
        if ( (v59 & 4) != 0 )
        {
          v59 &= ~4u;
          if ( v112 >= 8 )
            operator delete(v111[0]);
          v112 = 7LL;
          v111[2] = 0LL;
          LOWORD(v111[0]) = 0;
        }
        if ( (v59 & 2) != 0 )
        {
          v59 &= ~2u;
          if ( v106 >= 8 )
            operator delete(v104[0]);
        }
        if ( v62 )
        {
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 56LL))(v12, v104);
          v16 = v59 | 0x2000;
          if ( v100 >= 8 )
            operator delete(v98[0]);
          v100 = 7LL;
          v99 = 0LL;
          LOWORD(v98[0]) = 0;
          std::wstring::_Assign_rv(v98, v104);
          if ( v106 < 8 )
            goto LABEL_77;
          v63 = v104[0];
LABEL_138:
          operator delete(v63);
          goto LABEL_77;
        }
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 64LL))(v12, v104);
        v64 = v59 | 0x808;
        if ( !v105 )
          goto LABEL_143;
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 64LL))(v12, v113);
        v64 |= 0x4010u;
        v65 = v113;
        if ( v114 >= 8 )
          v65 = (void **)v113[0];
        v61 = *(_WORD *)v65 == *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
        v66 = 1;
        if ( !v61 )
LABEL_143:
          v66 = 0;
        if ( (v64 & 0x10) != 0 )
        {
          v64 &= ~0x10u;
          if ( v114 >= 8 )
            operator delete(v113[0]);
          v114 = 7LL;
          v113[2] = 0LL;
          LOWORD(v113[0]) = 0;
        }
        if ( (v64 & 8) != 0 )
        {
          v64 &= ~8u;
          if ( v106 >= 8 )
            operator delete(v104[0]);
        }
        if ( v66 )
        {
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 64LL))(v12, v104);
          v16 = v64 | 0x8000;
          if ( v100 >= 8 )
            operator delete(v98[0]);
          v100 = 7LL;
          v99 = 0LL;
          LOWORD(v98[0]) = 0;
          std::wstring::_Assign_rv(v98, v104);
          if ( v106 >= 8 )
            operator delete(v104[0]);
          v85 = 1;
          goto LABEL_77;
        }
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 56LL))(v12, v104);
        v16 = v64 | 0x10000;
        v67 = v105;
        if ( v106 >= 8 )
          operator delete(v104[0]);
        if ( v67 )
        {
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 64LL))(v12, v104);
          v16 |= 0x20000u;
          v68 = v105;
          if ( v106 >= 8 )
            operator delete(v104[0]);
          v20 = v84;
          v61 = v68 == 0;
          v21 = v86;
          if ( v61 )
            v85 = 1;
          break;
        }
LABEL_77:
        v20 = v84;
        goto LABEL_78;
      case 'v':
        v27 = 0;
        v92 = 0;
        v28 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, unsigned __int64, __int64))(*(_QWORD *)v12 + 72LL))(
                v12,
                v19,
                v20);
        v91 = v28;
        v29 = v87;
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v87 + 40LL))(v87, v109);
        v16 |= 0x200u;
        v93 = v16;
        if ( v109[2] )
        {
          v30 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v87 + 32LL))(v87);
          if ( v30 )
          {
            v31 = v109;
            if ( v110 >= 0x10 )
              v31 = (void **)v109[0];
            if ( *(_BYTE *)v31 < 0x7Fu )
            {
              v32 = 15LL;
              v108 = 15LL;
              LOWORD(v107[0]) = 0;
              v107[2] = (void *)1;
              v33 = 0LL;
              v34 = std::istreambuf_iterator<wchar_t>::equal(a3, a4);
              v35 = (void **)v107[0];
              if ( v34 )
                goto LABEL_61;
              v36 = v90;
              while ( 2 )
              {
                v37 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
                v19 = (unsigned __int64)v95;
                v38 = v95;
                for ( i = *v95; i && i != v37; i = *v38 )
                  ++v38;
                if ( (unsigned __int64)(v38 - v95) >= 0xA )
                {
                  v42 = v107;
                  if ( v32 >= 0x10 )
                    v42 = v35;
                  if ( !*((_BYTE *)v42 + v33)
                    || *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) != v30 )
                  {
LABEL_55:
                    v16 = v93;
                    if ( v33 )
                    {
                      v43 = v107;
                      if ( v32 >= 0x10 )
                        v43 = v35;
                      if ( *((char *)v43 + v33) <= 0 )
                        LOBYTE(v84) = 1;
                      else
                        ++v33;
                    }
LABEL_61:
                    v44 = v109;
                    v45 = v109[0];
                    v46 = v110;
                    if ( v110 >= 0x10 )
                      v44 = (void **)v109[0];
                    if ( !(_BYTE)v84 )
                    {
                      while ( v33 )
                      {
                        LOBYTE(v19) = *(_BYTE *)v44;
                        if ( *(_BYTE *)v44 == 127 )
                          break;
                        if ( --v33 )
                        {
                          v47 = v107;
                          if ( v32 >= 0x10 )
                            v47 = v35;
                          if ( (_BYTE)v19 != *((_BYTE *)v47 + v33) )
                            goto LABEL_70;
                        }
                        else
                        {
                          v48 = v107;
                          if ( v32 >= 0x10 )
                            v48 = v35;
                          if ( (char)v19 < *(char *)v48 )
                          {
LABEL_70:
                            LOBYTE(v84) = 1;
                            goto LABEL_71;
                          }
                        }
                        if ( *((char *)v44 + 1) > 0 )
                          v44 = (void **)((char *)v44 + 1);
                      }
                      if ( v32 >= 0x10 )
                        operator delete(v35);
LABEL_98:
                      v28 = v91;
                      v27 = v92;
                      v29 = v87;
                      goto LABEL_99;
                    }
LABEL_71:
                    if ( v32 >= 0x10 )
                    {
                      operator delete(v35);
                      v46 = v110;
                      v45 = v109[0];
                    }
                    if ( v46 >= 0x10 )
                      operator delete(v45);
                    v9 = v90;
LABEL_76:
                    v12 = v87;
                    v7 = a4;
                    goto LABEL_77;
                  }
                  std::string::append(v107, 1LL);
                  ++v33;
LABEL_53:
                  v35 = (void **)v107[0];
                  v32 = v108;
                }
                else
                {
                  std::string::append(v36, 1LL);
                  v40 = v107;
                  if ( v32 >= 0x10 )
                    v40 = v35;
                  if ( *((_BYTE *)v40 + v33) != 127 )
                  {
                    v41 = v107;
                    if ( v32 >= 0x10 )
                      v41 = v35;
                    ++*((_BYTE *)v41 + v33);
                    goto LABEL_53;
                  }
                }
                std::istreambuf_iterator<unsigned short>::_Inc(a3);
                if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
                  goto LABEL_55;
                continue;
              }
            }
          }
          v9 = v90;
        }
        if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
        {
          v49 = v95;
          do
          {
            v50 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
            v51 = v49;
            for ( j = *v49; j && j != v50; j = *v51 )
              ++v51;
            if ( (unsigned __int64)(v51 - v49) >= 0xA )
              break;
            std::string::append(v9, 1LL);
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
          }
          while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) );
          v16 = v93;
          goto LABEL_98;
        }
LABEL_99:
        v53 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v29 + 24LL))(v29);
        if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4)
          && v53
          && *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) == v53 )
        {
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
          for ( k = std::istreambuf_iterator<wchar_t>::equal(a3, a4);
                !k;
                k = std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
          {
            if ( v27 >= v28 )
              goto LABEL_113;
            v55 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
            v19 = (unsigned __int64)v95;
            v56 = v95;
            for ( m = *v95; m && m != v55; m = *v56 )
              ++v56;
            if ( (unsigned __int64)(v56 - v95) >= 0xA )
              goto LABEL_112;
            std::string::append(v90, 1LL);
            ++v27;
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
          }
          if ( v27 >= v28 )
            goto LABEL_113;
LABEL_112:
          LOBYTE(v84) = 1;
        }
LABEL_113:
        v9 = v90;
        if ( v90[2] )
        {
          if ( v27 < v28 )
          {
            v58 = (unsigned int)(v28 - v27);
            do
            {
              std::string::append(v9, 1LL);
              --v58;
            }
            while ( v58 );
          }
        }
        else
        {
          LOBYTE(v84) = 1;
        }
        if ( v110 >= 0x10 )
          operator delete(v109[0]);
        goto LABEL_76;
      case 'x':
LABEL_20:
        if ( v21 != 3 )
        {
          v23 = 0;
          if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v7) )
          {
            v24 = v89;
            do
            {
              v25 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a3);
              if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v24 + 32LL))(
                      v24,
                      72LL,
                      *v25) )
                break;
              v23 = 1;
              std::istreambuf_iterator<unsigned short>::_Inc(a3);
            }
            while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v7) );
            v9 = v90;
            v12 = v87;
          }
          if ( v94[v86] != 32 )
            goto LABEL_77;
          v26 = v84;
          v20 = 0LL;
          if ( !v23 )
            v26 = 1;
          LOBYTE(v20) = v26;
          v84 = v20;
LABEL_78:
          v21 = v86;
        }
        break;
    }
    v86 = ++v21;
    if ( (_BYTE)v20 )
      goto LABEL_211;
  }
  v78 = v99;
  if ( v99 <= 1 )
    goto LABEL_215;
  v79 = v98;
  if ( v100 >= 8 )
    v79 = (void **)v98[0];
  while ( 1 )
  {
    v79 = (void **)((char *)v79 + 2);
    v80 = v98;
    if ( v100 >= 8 )
      v80 = (void **)v98[0];
    if ( v79 == (void **)((char *)v80 + 2 * v78) )
      break;
    if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v7)
      || *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) != *(_WORD *)v79 )
    {
      v78 = v99;
      break;
    }
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
    v78 = v99;
  }
  v81 = v98;
  if ( v100 >= 8 )
    v81 = (void **)v98[0];
  if ( v79 == (void **)((char *)v81 + 2 * v78) )
  {
LABEL_215:
    if ( v85 )
      std::string::insert(v9, 0LL, 1uLL, 45);
  }
  else
  {
LABEL_211:
    if ( v9[3] < 0x10uLL )
      v82 = v9;
    else
      v82 = (_BYTE *)*v9;
    v9[2] = 0LL;
    *v82 = 0;
  }
  if ( v100 >= 8 )
    operator delete(v98[0]);
  return v9;
}
