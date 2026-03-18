/*
 * XREFs of ?NotifyOfDwmTermination@CCompositionBuffer@@UEAAXXZ @ 0x1400A3A30
 * Callers:
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1400A3C60 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CCompositionBuffer::NotifyOfDwmTermination(CCompositionBuffer *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 32LL))(*((_QWORD *)this + 37));
}
