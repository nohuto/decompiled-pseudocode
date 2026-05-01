/*
 * XREFs of ?_Makestr@_System_error@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@Verror_code@2@V32@@Z @ 0x180318C78
 * Callers:
 *     ??0_System_error@std@@IEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x180314134 (--0_System_error@std@@IEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1803144EC (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180319034 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ?message@error_code@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1803192B0 (-message@error_code@std@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_System_error::_Makestr(__int64 a1, __int64 a2, _QWORD *a3)
{
  _BYTE v7[32]; // [rsp+30h] [rbp-48h] BYREF

  if ( a3[2] )
    std::string::append(a3);
  std::error_code::message(a2, v7);
  std::string::append(a3);
  std::string::~string((__int64)v7);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)a3 + 1);
  a3[2] = 0LL;
  a3[3] = 15LL;
  *(_BYTE *)a3 = 0;
  std::string::~string((__int64)a3);
  return a1;
}
