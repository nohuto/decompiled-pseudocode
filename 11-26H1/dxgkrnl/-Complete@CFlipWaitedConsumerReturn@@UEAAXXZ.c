/*
 * XREFs of ?Complete@CFlipWaitedConsumerReturn@@UEAAXXZ @ 0x140056910
 * Callers:
 *     <none>
 * Callees:
 *     ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x14005694C (-ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipWaitedConsumerReturn::Complete(CFlipWaitedConsumerReturn *this)
{
  FlipManagerObject::ConsumerAdjustUsageReference(*((FlipManagerObject **)this + 1), *((_QWORD *)this + 2), 0);
  (*(void (__fastcall **)(CFlipWaitedConsumerReturn *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
}
