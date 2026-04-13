/*
 * XREFs of ??0failure@ios_base@std@@QEAA@PEBDAEBVerror_code@2@@Z @ 0x18004BC3C
 * Callers:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18005CE50 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@PEBD@Z @ 0x180028CF0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@PEBD@Z.c)
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x18003E0F8 (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
std::ios_base::failure *__fastcall std::ios_base::failure::failure(
        std::ios_base::failure *this,
        char *a2,
        const struct std::error_code *a3)
{
  __int128 v5; // xmm6
  const char *v6; // rax
  const char *v8; // [rsp+20h] [rbp-48h] BYREF
  void *v9[4]; // [rsp+28h] [rbp-40h] BYREF

  v8 = (const char *)this;
  std::string::string(v9, a2);
  v5 = *(_OWORD *)a3;
  v6 = (const char *)v9;
  if ( v9[3] >= (void *)0x10 )
    v6 = (const char *)v9[0];
  v8 = v6;
  exception::exception(this, &v8);
  *(_QWORD *)this = &std::range_error::`vftable';
  *(_OWORD *)((char *)this + 24) = v5;
  std::string::_Tidy(v9, 1, 0LL);
  *(_QWORD *)this = &std::range_error::`vftable';
  return this;
}
