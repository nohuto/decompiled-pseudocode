/*
 * XREFs of ?Discard@CompositionTokenObject@@QEAAXXZ @ 0x14004D7E4
 * Callers:
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1400A2AE4 (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CompositionTokenObject::Discard(CompositionTokenObject *this)
{
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 5) + 56LL))((char *)this + 40);
}
