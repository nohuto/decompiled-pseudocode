/*
 * XREFs of ?SetIsControlDismissing@GuidedSnapAssistControl@@AEAAX_N@Z @ 0x18027F834
 * Callers:
 *     ?Show@GuidedSnapAssistControl@@QEAAXV?$shared_ptr@VGuidedSnapAssistData@@@std@@V?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18027F93C (-Show@GuidedSnapAssistControl@@QEAAXV-$shared_ptr@VGuidedSnapAssistData@@@std@@V-$com_ptr_t@UIAp.c)
 *     _lambda_83256061826219130c74760726d0f103_::operator() @ 0x1805BC9F4 (_lambda_83256061826219130c74760726d0f103_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall GuidedSnapAssistControl::SetIsControlDismissing(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi

  v1 = this + 5;
  AcquireSRWLockExclusive(this + 5);
  LOBYTE(this[6].Ptr) = 0;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
