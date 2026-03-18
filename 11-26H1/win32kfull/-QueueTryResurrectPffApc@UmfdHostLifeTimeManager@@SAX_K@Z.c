/*
 * XREFs of ?QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z @ 0x14034D830
 * Callers:
 *     _UmfdClientSendAndWaitForCompletion_::_2_::_lambda_1_::operator() @ 0x1400FD2F4 (_UmfdClientSendAndWaitForCompletion_--_2_--_lambda_1_--operator().c)
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x1402916D4 (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall UmfdHostLifeTimeManager::QueueTryResurrectPffApc(void *a1)
{
  if ( a1 )
    GrepQueueApc((void (*)(void *, void *, void *))UmfdHostLifeTimeManager::TryResurrectPffApcRoutine, a1, 0LL);
}
