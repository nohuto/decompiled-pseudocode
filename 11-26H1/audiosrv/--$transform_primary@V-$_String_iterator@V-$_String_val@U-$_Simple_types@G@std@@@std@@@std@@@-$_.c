/*
 * XREFs of ??$transform_primary@V?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@?$_Regex_traits@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@1@0@Z @ 0x180134BAC
 * Callers:
 *     ??$_Lookup_equiv@GV?$regex_traits@G@std@@@std@@YA_NGPEBU?$_Sequence@G@0@AEBV?$regex_traits@G@0@@Z @ 0x180133A0C (--$_Lookup_equiv@GV-$regex_traits@G@std@@@std@@YA_NGPEBU-$_Sequence@G@0@AEBV-$regex_traits@G@0@@.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18005E4A0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??$_Construct_n@PEAGPEAG@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K$$QEAPEAG1@Z @ 0x1801330E8 (--$_Construct_n@PEAGPEAG@-$vector@GV-$allocator@G@std@@@std@@AEAAX_K$$QEAPEAG1@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180135584 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy@?$vector@GV?$allocator@G@std@@@std@@AEAAXXZ @ 0x18013FD80 (-_Tidy@-$vector@GV-$allocator@G@std@@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::_Regex_traits<unsigned short>::transform_primary<std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>(
        _QWORD *a1,
        _QWORD *a2,
        _BYTE *a3,
        _BYTE *a4)
{
  __int128 v7; // [rsp+38h] [rbp-1h] BYREF
  __int64 v8; // [rsp+48h] [rbp+Fh]
  _BYTE *v9; // [rsp+50h] [rbp+17h] BYREF
  const void *v10[2]; // [rsp+58h] [rbp+1Fh] BYREF
  void *v11[4]; // [rsp+68h] [rbp+2Fh] BYREF

  v10[1] = a2;
  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  a2[3] = 7LL;
  *(_WORD *)a2 = 0;
  if ( a3 != a4 )
  {
    v7 = 0LL;
    v8 = 0LL;
    v10[0] = a3;
    v9 = a4;
    std::vector<unsigned short>::_Construct_n<unsigned short *,unsigned short *>((void **)&v7, (a4 - a3) >> 1, v10, &v9);
    std::ctype<unsigned short>::tolower(a1[1], v7, v7 + 2 * ((__int64)(*((_QWORD *)&v7 + 1) - v7) >> 1));
    (*(void (__fastcall **)(_QWORD, void **, _QWORD, __int64))(*(_QWORD *)*a1 + 32LL))(
      *a1,
      v11,
      v7,
      v7 + 2 * ((__int64)(*((_QWORD *)&v7 + 1) - v7) >> 1));
    std::wstring::operator=(a2, v11);
    std::wstring::~wstring(v11);
    std::vector<unsigned short>::_Tidy(&v7);
  }
  return a2;
}
