/*
 * XREFs of ?do_get@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x180017CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Getloctxt@DV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBD@Z @ 0x18000EA5C (--$_Getloctxt@DV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     ?_Getfmt@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@IEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@PEBD@Z @ 0x180012184 (-_Getfmt@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@IEBA-AV-$istreamb.c)
 *     ?_Getint@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0HHAEAHAEBV?$ctype@G@2@@Z @ 0x18001235C (-_Getint@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHAEAV-$istrea.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180049C5C (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18005DF74 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int128 *__fastcall std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        __int128 *a4,
        __int64 a5,
        _DWORD *a6,
        _DWORD *a7,
        char a8)
{
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // r15
  void (__fastcall ***v15)(_QWORD, __int64); // rax
  _DWORD *v16; // rbx
  _DWORD *v17; // rax
  int v18; // r9d
  char *v19; // rax
  __int128 *v20; // r9
  __int128 *v21; // r8
  __int128 *v22; // rdx
  int v23; // ecx
  __int128 v24; // xmm0
  void (__fastcall *v25)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, _DWORD *); // rax
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  int v28; // eax
  int v30; // [rsp+20h] [rbp-60h]
  _DWORD *v31; // [rsp+28h] [rbp-58h]
  __int64 v32; // [rsp+30h] [rbp-50h]
  __int128 v33; // [rsp+50h] [rbp-30h] BYREF
  __int128 v34; // [rsp+60h] [rbp-20h] BYREF
  __int128 v35; // [rsp+70h] [rbp-10h] BYREF

  v12 = a5;
  v13 = **(_QWORD **)(a5 + 64);
  a5 = v13;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = std::use_facet<std::ctype<unsigned short>>((std::locale *)&a5);
  if ( v13 )
  {
    v15 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v15 )
      (**v15)(v15, 1LL);
  }
  LODWORD(a5) = 0;
  v16 = a6;
  if ( a8 <= 97 )
  {
    if ( a8 == 97 )
      goto LABEL_36;
    if ( a8 <= 82 )
    {
      if ( a8 == 82 )
      {
        v34 = *a4;
        v33 = *a3;
        v19 = "%H : %M";
        v20 = &v34;
        v21 = &v33;
LABEL_21:
        v22 = &v35;
LABEL_56:
        v24 = *std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getfmt(
                 a1,
                 v22,
                 v21,
                 v20,
                 v12,
                 a6,
                 (__int64)a7,
                 v19);
        goto LABEL_38;
      }
      if ( a8 != 65 )
      {
        if ( a8 != 66 )
        {
          if ( a8 != 67 )
          {
            if ( a8 != 68 )
            {
              switch ( a8 )
              {
                case 'H':
                  v32 = v14;
                  v31 = a7 + 2;
                  v30 = 23;
                  goto LABEL_19;
                case 'I':
                  v32 = v14;
                  v31 = a7 + 2;
                  v30 = 11;
                  goto LABEL_19;
                case 'M':
                  v17 = a7 + 1;
LABEL_16:
                  v32 = v14;
                  v31 = v17;
                  v30 = 59;
LABEL_19:
                  v18 = 0;
LABEL_53:
                  *v16 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
                            a1,
                            (__int64)a3,
                            (__int64)a4,
                            v18,
                            v30,
                            v31,
                            v32);
                  goto LABEL_75;
              }
              goto LABEL_73;
            }
            v33 = *a4;
            v34 = *a3;
            v19 = "%m / %d / %y";
            v20 = &v33;
            v21 = &v34;
            goto LABEL_21;
          }
          *v16 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
                    a1,
                    (__int64)a3,
                    (__int64)a4,
                    0,
                    99,
                    &a5,
                    v14);
          if ( (*(_BYTE *)v16 & 2) != 0 )
            goto LABEL_75;
          v23 = 100 * (a5 - 19);
LABEL_24:
          a7[5] = v23;
          goto LABEL_75;
        }
        goto LABEL_57;
      }
LABEL_36:
      v25 = *(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, _DWORD *))(*(_QWORD *)a1 + 48LL);
LABEL_37:
      v26 = *a4;
      v34 = *a3;
      v35 = v26;
      v25(a1, &v33, &v34, &v35, v12, a6, a7);
      v24 = v33;
      goto LABEL_38;
    }
    if ( a8 == 83 )
    {
      v17 = a7;
      goto LABEL_16;
    }
    if ( a8 != 84 )
    {
      if ( a8 == 85 || a8 == 87 )
      {
        v32 = v14;
        v31 = a7 + 7;
        v30 = 53;
        goto LABEL_19;
      }
      if ( a8 != 88 )
      {
        if ( a8 == 89 )
        {
          v34 = *a4;
          v33 = *a3;
          (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, _DWORD *))(*(_QWORD *)a1 + 64LL))(
            a1,
            &v35,
            &v33,
            &v34,
            v12,
            a6,
            a7);
          v24 = v35;
LABEL_38:
          *a3 = v24;
          goto LABEL_75;
        }
LABEL_73:
        *v16 |= 2u;
        goto LABEL_75;
      }
    }
    v19 = "%H : %M : S";
    goto LABEL_55;
  }
  if ( a8 > 110 )
  {
    if ( a8 == 112 )
    {
      v28 = std::_Getloctxt<char,std::istreambuf_iterator<unsigned short>>(
              (__int64)a3,
              (__int64)a4,
              0LL,
              ":AM:am:PM:pm");
      if ( v28 < 0 )
        goto LABEL_73;
      a7[2] += 12 * v28;
      goto LABEL_75;
    }
    if ( a8 == 114 )
    {
      v19 = "%I : %M : %S %p";
      goto LABEL_55;
    }
    if ( a8 != 116 )
    {
      if ( a8 == 119 )
      {
        v32 = v14;
        v31 = a7 + 6;
        v30 = 6;
        goto LABEL_19;
      }
      if ( a8 != 120 )
      {
        if ( a8 == 121 )
        {
          *v16 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
                    a1,
                    (__int64)a3,
                    (__int64)a4,
                    0,
                    99,
                    &a5,
                    v14);
          if ( (*(_BYTE *)v16 & 2) != 0 )
            goto LABEL_75;
          v23 = a5;
          if ( (int)a5 < 69 )
            v23 = a5 + 100;
          goto LABEL_24;
        }
        goto LABEL_73;
      }
      v19 = "%d / %m / %y";
LABEL_55:
      v27 = *a3;
      v35 = *a4;
      v34 = v27;
      v20 = &v35;
      v21 = &v34;
      v22 = &v33;
      goto LABEL_56;
    }
LABEL_70:
    v19 = " ";
    goto LABEL_55;
  }
  switch ( a8 )
  {
    case 'n':
      goto LABEL_70;
    case 'b':
      goto LABEL_57;
    case 'c':
      v19 = "%b %d %H : %M : %S %Y";
      goto LABEL_55;
    case 'd':
    case 'e':
      v32 = v14;
      v31 = a7 + 3;
      v30 = 31;
      goto LABEL_52;
    case 'h':
LABEL_57:
      v25 = *(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, _DWORD *))(*(_QWORD *)a1 + 56LL);
      goto LABEL_37;
    case 'j':
      v32 = v14;
      v31 = a7 + 7;
      v30 = 366;
LABEL_52:
      v18 = 1;
      goto LABEL_53;
  }
  if ( a8 != 109 )
    goto LABEL_73;
  *v16 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
            a1,
            (__int64)a3,
            (__int64)a4,
            1,
            12,
            &a5,
            v14);
  if ( (*(_BYTE *)v16 & 2) == 0 )
    a7[4] = a5 - 1;
LABEL_75:
  if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
    *v16 |= 1u;
  *a2 = *a3;
  return a2;
}
