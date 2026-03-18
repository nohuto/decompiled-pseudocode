/*
 * XREFs of ??$move@V?$move_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x18022961C
 * Callers:
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18014F7E0 (-clear_region@-$vector_facade@V-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V-$buffe.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ?attach@?$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIDisplayTarget@Core@Display@Devices@Windows@@@Z @ 0x1801B56D8 (-attach@-$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

__int64 __fastcall std::move<std::move_iterator<wil::com_ptr_t<IUnknown,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<IUnknown,wil::err_returncode_policy> *>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v4; // rbx
  __int64 v8; // r15
  __int64 *v9; // rsi
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a2;
  stdext::checked_array_iterator<char *>::_Verify_offset((__int64)a4, a3 - a2);
  v8 = *a4;
  v9 = (__int64 *)(*a4 + 8 * a4[2]);
  while ( v4 != a3 )
  {
    v10 = *v4;
    *v4 = 0LL;
    wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayTarget,wil::err_returncode_policy>::attach(v9++, v10);
    ++v4;
  }
  result = a1;
  a4[2] = ((__int64)v9 - v8) >> 3;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
