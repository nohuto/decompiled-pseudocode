/*
 * XREFs of ?ReleaseSebReference@CSebNotifier@@QEAAXXZ @ 0x1800B0870
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCSebReference@@@std@@EEAAXXZ @ 0x1800793B0 (-_Destroy@-$_Ref_count_obj2@VCSebReference@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180013110 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x18006F308 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 *     ?ScheduleDeferredSebReferenceRelease@CSebNotifier@@AEAAJXZ @ 0x18010F66C (-ScheduleDeferredSebReferenceRelease@CSebNotifier@@AEAAJXZ.c)
 */

void __fastcall CSebNotifier::ReleaseSebReference(CSebNotifier *this)
{
  bool v2; // zf

  std::_Mutex_base::lock((CSebNotifier *)((char *)this + 8));
  v2 = (*(_DWORD *)this)-- == 1;
  if ( v2 && (int)CSebNotifier::ScheduleDeferredSebReferenceRelease(this) < 0 )
    CSebNotifier::PublishSebEvent(this, 0);
  _Mtx_unlock((CSebNotifier *)((char *)this + 8));
}
