/*
 * XREFs of DpiFdoCleanupMipiDsi @ 0x14006D1D8
 * Callers:
 *     DpiFdoInitializeMipiDsi @ 0x14006B5B4 (DpiFdoInitializeMipiDsi.c)
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 *     DpiFdoResetFdo @ 0x140424504 (DpiFdoResetFdo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void (__fastcall *__fastcall DpiFdoCleanupMipiDsi(__int64 a1))(_QWORD)
{
  void (__fastcall *result)(_QWORD); // rax

  result = *(void (__fastcall **)(_QWORD))(a1 + 5624);
  if ( result )
  {
    result(*(_QWORD *)(a1 + 5608));
    result = 0LL;
    *(_OWORD *)(a1 + 5600) = 0LL;
    *(_OWORD *)(a1 + 5616) = 0LL;
    *(_OWORD *)(a1 + 5632) = 0LL;
    *(_QWORD *)(a1 + 5648) = 0LL;
  }
  return result;
}
