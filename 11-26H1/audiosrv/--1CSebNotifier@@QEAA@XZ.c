/*
 * XREFs of ??1CSebNotifier@@QEAA@XZ @ 0x18010EF34
 * Callers:
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x18010EE58 (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$1 @ 0x18016878D (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$1.c)
 * Callees:
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x18006F308 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 *     ?CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ @ 0x1800B0BF8 (-CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ.c)
 */

void __fastcall CSebNotifier::~CSebNotifier(CSebNotifier *this)
{
  if ( *((_QWORD *)this + 13) )
  {
    CSebNotifier::CancelDeferredSebReferenceRelease(this);
    CloseThreadpoolWait(*((PTP_WAIT *)this + 13));
    *((_QWORD *)this + 13) = 0LL;
  }
  CSebNotifier::PublishSebEvent(this, 0);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 12);
}
