/*
 * XREFs of ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x1800CAA8C
 * Callers:
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1802605C8 (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 * Callees:
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x1800CAAD8 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 */

wil::details::FeatureFunctorHost *__fastcall wil::details::FeatureFunctorHost::FeatureFunctorHost(
        wil::details::FeatureFunctorHost *this,
        int a2,
        const struct DiagnosticsInfo *a3)
{
  wil::details::FeatureFunctorHost *result; // rax

  *(_QWORD *)this = &wil::details::FeatureFunctorHost::`vftable';
  wil::ThreadErrorContext::ThreadErrorContext((wil::details::FeatureFunctorHost *)((char *)this + 8));
  *((_QWORD *)this + 3) = a3;
  result = this;
  *((_DWORD *)this + 8) = a2;
  return result;
}
