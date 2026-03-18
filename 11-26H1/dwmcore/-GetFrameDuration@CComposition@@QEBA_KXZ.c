/*
 * XREFs of ?GetFrameDuration@CComposition@@QEBA_KXZ @ 0x18018C560
 * Callers:
 *     ?Ready@CTargetStats@@QEAA_N_K_N@Z @ 0x1800EF0B0 (-Ready@CTargetStats@@QEAA_N_K_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall CComposition::GetFrameDuration(CComposition *this)
{
  return *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 39) + 24LL))(*((_QWORD *)this + 39)) + 8);
}
