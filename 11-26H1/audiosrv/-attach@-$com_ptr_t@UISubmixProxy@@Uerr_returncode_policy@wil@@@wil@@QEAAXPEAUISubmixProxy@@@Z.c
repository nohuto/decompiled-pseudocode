/*
 * XREFs of ?attach@?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUISubmixProxy@@@Z @ 0x180078910
 * Callers:
 *     ?SetAudioHandle@CAudioStream@@QEAAJPEAUSystemAudioStream@@KPEAUIStreamInstanceProxy@@@Z @ 0x1800AA94C (-SetAudioHandle@CAudioStream@@QEAAJPEAUSystemAudioStream@@KPEAUIStreamInstanceProxy@@@Z.c)
 *     ??1?$out_param_t@V?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x180110DBC (--1-$out_param_t@V-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEA.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::attach(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
