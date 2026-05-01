/*
 * XREFs of ??0_System_error@std@@IEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x180310254
 * Callers:
 *     ??0system_error@std@@QEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x180310594 (--0system_error@std@@QEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x1803100EC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0runtime_error@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x180310490 (--0runtime_error@std@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@@Z.c)
 *     ?_Makestr@_System_error@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@Verror_code@2@V32@@Z @ 0x180314EB8 (-_Makestr@_System_error@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@Verr.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180315204 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_System_error::_System_error(__int64 a1, __int128 *a2, __int64 **a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v10[4]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v11[32]; // [rsp+50h] [rbp-38h] BYREF

  *(_QWORD *)&v9 = a1;
  v5 = std::string::string(v10, a3);
  v9 = *a2;
  v6 = std::_System_error::_Makestr(v11, &v9, v5);
  std::runtime_error::runtime_error(a1, v6);
  std::string::_Tidy_deallocate(v11);
  v7 = *a2;
  *(_QWORD *)a1 = &std::_System_error::`vftable';
  result = a1;
  *(_OWORD *)(a1 + 24) = v7;
  return result;
}
