/*
 * XREFs of ?InitializeTelemetry@CDisplayAnimatedVisual@@AEAAXXZ @ 0x180074004
 * Callers:
 *     ?Start@CDisplayAnimatedVisual@@QEAAJXZ @ 0x18008CC00 (-Start@CDisplayAnimatedVisual@@QEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800544EC (-reset@-$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDisplayAnimatedVisual::InitializeTelemetry(CDisplayAnimatedVisual *this)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)((char *)this + 336);
  if ( !*((_QWORD *)this + 42) )
  {
    wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset((__int64 *)this + 42);
    if ( (int)DCompositionCreateAnimationStats(v1) >= 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v1 + 24LL))(*v1, 0LL);
  }
}
