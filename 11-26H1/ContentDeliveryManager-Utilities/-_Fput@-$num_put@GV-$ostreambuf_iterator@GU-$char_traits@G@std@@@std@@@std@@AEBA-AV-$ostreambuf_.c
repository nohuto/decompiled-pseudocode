/*
 * XREFs of ?_Fput@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEBD_K333@Z @ 0x1800109F0
 * Callers:
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GN@Z @ 0x180019A10 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180019A10.c)
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GO@Z @ 0x180019BD0 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180019BD0.c)
 * Callees:
 *     ?_Put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@PEB_W_K@Z @ 0x1800162B4 (-_Put@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ostreambu.c)
 *     ?_Rep@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@G_K@Z @ 0x180017540 (-_Rep@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostreambuf_i.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z @ 0x18001AF78 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180021B5D (--3@YAXPEAX@Z_0.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180049C5C (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x180049E14 (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18005CDA0 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall std::num_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::_Fput(
        int a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int16 a5,
        char *Str,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned __int64 a10)
{
  __int64 v13; // rdi
  const char *v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rdx
  void (__fastcall ***v17)(_QWORD, __int64); // r8
  void (__fastcall ***v18)(_QWORD, __int64); // rax
  __int64 v19; // rbx
  void **v20; // r9
  __int64 v21; // rbx
  void (__fastcall ***v22)(_QWORD, __int64); // r8
  __int64 v23; // r14
  void (__fastcall ***v24)(_QWORD, __int64); // rax
  __int64 v25; // rbx
  unsigned __int16 v26; // r12
  __int64 v27; // rax
  __int16 v28; // ax
  void **v29; // rcx
  __int64 v30; // r14
  void **v31; // rbx
  char v32; // al
  unsigned __int16 v33; // r12
  unsigned __int64 v34; // r14
  __int64 v35; // rbx
  __int64 v36; // rbx
  int v37; // eax
  unsigned __int16 v38; // r12
  __int128 *v39; // rax
  void **v40; // r9
  __int128 *v41; // rax
  void **v42; // r9
  __int128 v43; // xmm0
  void **v44; // r9
  void **v45; // rax
  __int128 v46; // xmm0
  __int64 v47; // rbx
  __int64 v49; // [rsp+28h] [rbp-A9h]
  __int16 Control; // [rsp+3Ch] [rbp-95h] BYREF
  __int64 v51; // [rsp+40h] [rbp-91h]
  _QWORD v52[2]; // [rsp+48h] [rbp-89h] BYREF
  __int128 v53; // [rsp+58h] [rbp-79h] BYREF
  _QWORD v54[2]; // [rsp+68h] [rbp-69h] BYREF
  __int64 v55; // [rsp+78h] [rbp-59h]
  __int64 v56; // [rsp+80h] [rbp-51h]
  void *v57[2]; // [rsp+88h] [rbp-49h] BYREF
  unsigned __int64 v58; // [rsp+98h] [rbp-39h]
  unsigned __int64 v59; // [rsp+A0h] [rbp-31h]
  void *v60[3]; // [rsp+A8h] [rbp-29h] BYREF
  unsigned __int64 v61; // [rsp+C0h] [rbp-11h]

  v56 = -2LL;
  v55 = a2;
  v13 = a10 && (*Str == 43 || *Str == 45);
  if ( (*(_DWORD *)(a4 + 24) & 0x3000) == 0x3000 )
  {
    v14 = "pP";
    if ( v13 + 2 <= a10 && Str[v13] == 48 && ((Str[v13 + 1] - 88) & 0xDF) == 0 )
      v13 += 2LL;
  }
  else
  {
    v14 = "eE";
  }
  v54[0] = strcspn(Str, v14);
  Control = 46;
  LOBYTE(Control) = *localeconv()->decimal_point;
  *(_QWORD *)&v53 = strcspn(Str, (const char *)&Control);
  v15 = **(_QWORD **)(a4 + 64);
  v52[0] = v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v52[0] = std::use_facet<std::ctype<unsigned short>>((std::locale *)v52);
  if ( v15 )
  {
    v18 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v17 = v18;
    if ( v18 )
      (**v18)(v18, 1LL);
  }
  v19 = v52[0];
  LOBYTE(v16) = 48;
  LOWORD(v51) = (*(__int64 (__fastcall **)(_QWORD, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v52[0] + 96LL))(
                  v52[0],
                  v16,
                  v17);
  v59 = 7LL;
  v58 = 0LL;
  LOWORD(v57[0]) = 0;
  std::wstring::assign(v57, a10, 0LL);
  v20 = v57;
  if ( v59 >= 8 )
    v20 = (void **)v57[0];
  (*(void (__fastcall **)(__int64, char *, char *, void **))(*(_QWORD *)v19 + 88LL))(v19, Str, &Str[a10], v20);
  v21 = **(_QWORD **)(a4 + 64);
  v52[0] = v21;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  v23 = std::use_facet<std::numpunct<unsigned short>>((std::locale *)v52);
  if ( v21 )
  {
    v24 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v22 = v24;
    if ( v24 )
      (**v24)(v24, 1LL);
  }
  (*(void (__fastcall **)(__int64, void **, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v23 + 40LL))(
    v23,
    v60,
    v22);
  LOWORD(v52[0]) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 32LL))(v23);
  v25 = v53;
  v26 = v51;
  if ( (_QWORD)v53 == a10 )
  {
    v27 = v54[0];
  }
  else
  {
    std::wstring::insert(v57, v54[0], a9, (unsigned __int16)v51);
    std::wstring::insert(v57, v25 + 1, a8, v26);
    v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 24LL))(v23);
    v29 = v57;
    if ( v59 >= 8 )
      v29 = (void **)v57[0];
    *((_WORD *)v29 + v25) = v28;
    v27 = v25;
  }
  v30 = v27 + a7;
  std::wstring::insert(v57, v27, a7, v26);
  v31 = v60;
  if ( v61 >= 0x10 )
    v31 = (void **)v60[0];
  v32 = *(_BYTE *)v31;
  if ( *(_BYTE *)v31 != 127 )
  {
    v33 = v52[0];
    do
    {
      if ( v32 <= 0 || v32 >= (unsigned __int64)(v30 - v13) )
        break;
      v30 -= v32;
      std::wstring::insert(v57, v30, 1LL, v33);
      if ( *((char *)v31 + 1) > 0 )
        v31 = (void **)((char *)v31 + 1);
      v32 = *(_BYTE *)v31;
    }
    while ( *(_BYTE *)v31 != 127 );
  }
  v34 = v58;
  v35 = *(_QWORD *)(a4 + 40);
  if ( v35 <= 0 || v35 <= v58 )
    v36 = 0LL;
  else
    v36 = v35 - v58;
  v37 = *(_DWORD *)(a4 + 24) & 0x1C0;
  v53 = *a3;
  if ( v37 == 64 )
  {
    v44 = v57;
    if ( v59 >= 8 )
      LODWORD(v44) = v57[0];
    v41 = (__int128 *)std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Put(
                        a1,
                        (unsigned int)v54,
                        (unsigned int)&v53,
                        (_DWORD)v44,
                        v13);
    v38 = a5;
    goto LABEL_49;
  }
  if ( v37 != 256 )
  {
    v38 = a5;
    v39 = (__int128 *)std::num_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::_Rep(
                        a1,
                        (unsigned int)v54,
                        (unsigned int)&v53,
                        a5,
                        v36);
    v36 = 0LL;
    v40 = v57;
    if ( v59 >= 8 )
      LODWORD(v40) = v57[0];
    v53 = *v39;
    v41 = (__int128 *)std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Put(
                        a1,
                        (unsigned int)v54,
                        (unsigned int)&v53,
                        (_DWORD)v40,
                        v13);
LABEL_49:
    v43 = *v41;
    goto LABEL_50;
  }
  v42 = v57;
  if ( v59 >= 8 )
    LODWORD(v42) = v57[0];
  v53 = *(_OWORD *)std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Put(
                     a1,
                     (unsigned int)v54,
                     (unsigned int)&v53,
                     (_DWORD)v42,
                     v13);
  v38 = a5;
  v43 = *(_OWORD *)std::num_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::_Rep(
                     a1,
                     (unsigned int)v54,
                     (unsigned int)&v53,
                     a5,
                     v36);
  v36 = 0LL;
LABEL_50:
  *a3 = v43;
  v45 = v57;
  if ( v59 >= 8 )
    LODWORD(v45) = v57[0];
  v53 = v43;
  v46 = *(_OWORD *)std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Put(
                     a1,
                     (unsigned int)v54,
                     (unsigned int)&v53,
                     (int)v45 + 2 * (int)v13,
                     v34 - v13);
  *(_QWORD *)(a4 + 40) = 0LL;
  v53 = v46;
  v49 = v36;
  v47 = v55;
  std::num_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::_Rep(a1, v55, (unsigned int)&v53, v38, v49);
  if ( v61 >= 0x10 )
    operator delete(v60[0]);
  v61 = 15LL;
  v60[2] = 0LL;
  LOBYTE(v60[0]) = 0;
  if ( v59 >= 8 )
    operator delete(v57[0]);
  return v47;
}
