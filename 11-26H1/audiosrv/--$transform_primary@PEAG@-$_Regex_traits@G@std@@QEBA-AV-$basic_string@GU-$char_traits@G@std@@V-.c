/*
 * XREFs of ??$transform_primary@PEAG@?$_Regex_traits@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEAG0@Z @ 0x180149EB8
 * Callers:
 *     ?_Add_equiv@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEBG0_J@Z @ 0x18014B8EC (-_Add_equiv@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXPEBG0_J@Z.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18005E4A0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??$_Construct_n@PEAGPEAG@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K$$QEAPEAG1@Z @ 0x1801330E8 (--$_Construct_n@PEAGPEAG@-$vector@GV-$allocator@G@std@@@std@@AEAAX_K$$QEAPEAG1@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180135584 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy@?$vector@GV?$allocator@G@std@@@std@@AEAAXXZ @ 0x18013FD80 (-_Tidy@-$vector@GV-$allocator@G@std@@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::_Regex_traits<unsigned short>::transform_primary<unsigned short *>(
        _QWORD *a1,
        _QWORD *a2,
        _BYTE *a3,
        _BYTE *a4)
{
  __int128 v7; // [rsp+38h] [rbp-11h] BYREF
  __int64 v8; // [rsp+48h] [rbp-1h]
  _BYTE *v9; // [rsp+50h] [rbp+7h] BYREF
  const void *v10[2]; // [rsp+58h] [rbp+Fh] BYREF
  void *v11[4]; // [rsp+68h] [rbp+1Fh] BYREF

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
    std::wstring::operator=(a2, (__int64)v11);
    std::wstring::~wstring(v11);
    std::vector<unsigned short>::_Tidy((__int64)&v7);
  }
  return a2;
}
