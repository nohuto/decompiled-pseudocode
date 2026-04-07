/*
 * XREFs of ?InitializeTelemetry@CDisplayAnimatedVisual@@AEAAXXZ @ 0x18008D570
 * Callers:
 *     ?Start@CDisplayAnimatedVisual@@QEAAJXZ @ 0x1800992BC (-Start@CDisplayAnimatedVisual@@QEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004911C (-reset@-$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDisplayAnimatedVisual::InitializeTelemetry(CDisplayAnimatedVisual *this)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)((char *)this + 368);
  if ( !*((_QWORD *)this + 46) )
  {
    wil::com_ptr_t<IDCompositionAnimationStats,wil::err_returncode_policy>::reset((__int64 *)this + 46);
    if ( (int)DCompositionCreateAnimationStats(v1) >= 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v1 + 24LL))(*v1, 0LL);
  }
}
