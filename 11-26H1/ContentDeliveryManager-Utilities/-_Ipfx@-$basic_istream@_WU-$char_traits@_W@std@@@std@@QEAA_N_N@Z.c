/*
 * XREFs of ?_Ipfx@?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA_N_N@Z @ 0x1800A12D8
 * Callers:
 *     ??0sentry@?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA@AEAV12@_N@Z @ 0x18009FB64 (--0sentry@-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAA@AEAV12@_N@Z.c)
 * Callees:
 *     ??1locale@std@@QEAA@XZ @ 0x18004D320 (--1locale@std@@QEAA@XZ.c)
 *     ?_Gnavail@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@IEBA_JXZ @ 0x18005BAE4 (-_Gnavail@-$basic_streambuf@_WU-$char_traits@_W@std@@@std@@IEBA_JXZ.c)
 *     ?flush@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV12@XZ @ 0x18005E75C (-flush@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAAEAV12@XZ.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x18005E954 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?sbumpc@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@QEAAGXZ @ 0x18005EF08 (-sbumpc@-$basic_streambuf@_WU-$char_traits@_W@std@@@std@@QEAAGXZ.c)
 *     ?setstate@?$basic_ios@GU?$char_traits@G@std@@@std@@QEAAXH_N@Z @ 0x18005F29C (-setstate@-$basic_ios@GU-$char_traits@G@std@@@std@@QEAAXH_N@Z.c)
 *     ?sgetc@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@QEAAGXZ @ 0x18005F2C8 (-sgetc@-$basic_streambuf@_WU-$char_traits@_W@std@@@std@@QEAAGXZ.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x180084ED0 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall std::wistream::_Ipfx(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  std::locale *v6; // rax
  const struct std::locale::facet *v7; // rsi
  __int16 v8; // r8
  __int64 v9; // rdi
  _WORD **v10; // rax
  char v12; // [rsp+50h] [rbp+18h] BYREF

  v2 = *a1;
  v3 = *(int *)(*a1 + 4);
  if ( !*(_DWORD *)((char *)a1 + v3 + 16) )
  {
    v4 = *(__int64 *)((char *)a1 + v3 + 80);
    if ( v4 )
    {
      std::wostream::flush(v4);
      v2 = *a1;
    }
    v5 = (__int64)a1 + *(int *)(v2 + 4);
    if ( (*(_BYTE *)(v5 + 24) & 1) != 0 )
    {
      v6 = std::ios_base::getloc(v5, (std::locale *)&v12);
      v7 = std::use_facet<std::ctype<wchar_t>>(v6);
      std::locale::~locale((std::locale *)&v12);
      v8 = std::wstreambuf::sgetc(*(unsigned __int16 ****)((char *)a1 + *(int *)(*a1 + 4) + 72));
      while ( v8 != -1 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(const struct std::locale::facet *, __int64))(*(_QWORD *)v7 + 32LL))(
                v7,
                72LL) )
          goto LABEL_14;
        v9 = *(__int64 *)((char *)a1 + *(int *)(*a1 + 4) + 72);
        if ( std::wstreambuf::_Gnavail(v9) <= 1 )
        {
          if ( (unsigned __int16)std::wstreambuf::sbumpc(v9) == 0xFFFF )
            v8 = -1;
          else
            v8 = std::wstreambuf::sgetc((unsigned __int16 ***)v9);
        }
        else
        {
          --**(_DWORD **)(v9 + 80);
          v10 = *(_WORD ***)(v9 + 56);
          v8 = *++*v10;
        }
      }
      std::basic_ios<unsigned short>::setstate((__int64)a1 + *(int *)(*a1 + 4), 1, 0);
    }
LABEL_14:
    v2 = *a1;
    if ( !*(_DWORD *)((char *)a1 + *(int *)(*a1 + 4) + 16) )
      return 1;
  }
  std::basic_ios<unsigned short>::setstate((__int64)a1 + *(int *)(v2 + 4), 2, 0);
  return 0;
}
