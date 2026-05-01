/*
 * XREFs of ?message@error_code@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x180315558
 * Callers:
 *     ??0system_error@std@@QEAA@Verror_code@1@@Z @ 0x18031050C (--0system_error@std@@QEAA@Verror_code@1@@Z.c)
 *     ?_Makestr@_System_error@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@Verror_code@2@V32@@Z @ 0x180314EB8 (-_Makestr@_System_error@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@Verr.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::error_code::message(unsigned int *a1, __int64 a2)
{
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)a1 + 1) + 16LL))(*((_QWORD *)a1 + 1), a2, *a1);
  return a2;
}
