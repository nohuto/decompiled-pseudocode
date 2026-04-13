/*
 * XREFs of ?_Getfmt@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@PEBD@Z @ 0x18001C750
 * Callers:
 *     ?do_get@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x18001EFC0 (-do_get@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istreambu.c)
 * Callees:
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x18000667C (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1800092EC (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18000BA44 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall std::time_get<char,std::istreambuf_iterator<char>>::_Getfmt(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        char *a8)
{
  __int64 v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rbx
  unsigned __int8 *v14; // rdx
  void (__fastcall ***v15)(_QWORD, __int64); // r8
  struct std::_Facet_base *v16; // r13
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  char *v18; // rsi
  _DWORD *v19; // rbx
  unsigned __int8 *v20; // rbp
  __int64 v21; // rcx
  int v22; // eax
  char v23; // al
  __int64 v24; // rcx
  int v25; // eax
  int v27; // [rsp+38h] [rbp-90h]
  int v28; // [rsp+40h] [rbp-88h]
  __int128 v29; // [rsp+60h] [rbp-68h] BYREF
  __int128 v30; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v31[72]; // [rsp+80h] [rbp-48h] BYREF
  __int64 v33; // [rsp+D8h] [rbp+10h] BYREF

  v11 = a1;
  v12 = a5;
  v13 = **(_QWORD **)(a5 + 64);
  v33 = v13;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v16 = std::use_facet<std::ctype<char>>(&v33);
  if ( v13 )
  {
    v17 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v15 = v17;
    if ( v17 )
      (**v17)(v17, 1LL);
  }
  v18 = a8;
  v19 = a6;
  while ( 1 )
  {
    v23 = *v18;
    if ( !*v18 )
      break;
    if ( v23 == 37 )
    {
      ++v18;
      v29 = *(_OWORD *)a4;
      v30 = *a3;
      LOBYTE(v28) = 0;
      LOBYTE(v27) = *v18;
      *a3 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, __int128 *, __int128 *, __int64, _DWORD *, __int64, int, int))(*(_QWORD *)v11 + 72LL))(
                         v11,
                         v31,
                         &v30,
                         &v29,
                         v12,
                         v19,
                         a7,
                         v27,
                         v28);
    }
    else if ( v23 == 32 )
    {
      if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
      {
        v20 = (unsigned __int8 *)a3 + 9;
        do
        {
          if ( !*((_BYTE *)a3 + 8) )
          {
            v21 = *(_QWORD *)a3;
            if ( !*(_QWORD *)a3
              || ((v14 = **(unsigned __int8 ***)(v21 + 56)) == 0LL || **(int **)(v21 + 80) <= 0
                ? (v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 48LL))(v21))
                : (v22 = *v14),
                  v22 == -1) )
            {
              *(_QWORD *)a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v22;
              v20 = (unsigned __int8 *)a3 + 9;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          if ( (*(_BYTE *)(*((_QWORD *)v16 + 3) + 2LL * *v20) & 0x48) == 0 )
            break;
          std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
        }
        while ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) );
        v11 = a1;
        v12 = a5;
      }
    }
    else
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v24 = *(_QWORD *)a3;
        if ( !*(_QWORD *)a3
          || ((v14 = **(unsigned __int8 ***)(v24 + 56)) == 0LL || **(int **)(v24 + 80) <= 0
            ? (v25 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v24 + 48LL))(
                       v24,
                       v14,
                       v15))
            : (v25 = *v14),
              v25 == -1) )
        {
          *(_QWORD *)a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v25;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      LOBYTE(v14) = *((_BYTE *)a3 + 9);
      if ( (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, unsigned __int8 *, _QWORD))(*(_QWORD *)v16 + 80LL))(
             v16,
             v14,
             0LL) != *v18 )
      {
        *v19 |= 2u;
        break;
      }
      std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
    }
    ++v18;
  }
  if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
    *v19 |= 1u;
  *a2 = *a3;
  return a2;
}
