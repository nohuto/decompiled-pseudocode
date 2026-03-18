/*
 * XREFs of ??0BaseGlobalsNonPaged@Base@Gre@@QEAA@XZ @ 0x1401969A8
 * Callers:
 *     InitializeGre @ 0x1402F3768 (InitializeGre.c)
 * Callees:
 *     <none>
 */

Gre::Base::BaseGlobalsNonPaged *__fastcall Gre::Base::BaseGlobalsNonPaged::BaseGlobalsNonPaged(
        Gre::Base::BaseGlobalsNonPaged *this)
{
  ExInitializeResourceLite((PERESOURCE)this);
  ExInitializeResourceLite((PERESOURCE)this + 1);
  ExInitializeResourceLite((PERESOURCE)this + 2);
  ExInitializeResourceLite((PERESOURCE)this + 3);
  ExInitializeResourceLite((PERESOURCE)this + 4);
  ExInitializeResourceLite((PERESOURCE)this + 5);
  ExInitializeResourceLite((PERESOURCE)this + 6);
  ExInitializeResourceLite((PERESOURCE)this + 7);
  ExInitializeResourceLite((PERESOURCE)this + 8);
  ExInitializeResourceLite((PERESOURCE)this + 9);
  ExInitializeResourceLite((PERESOURCE)this + 10);
  ExInitializeResourceLite((PERESOURCE)this + 11);
  ExInitializeResourceLite((PERESOURCE)this + 12);
  ExInitializeResourceLite((PERESOURCE)this + 13);
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)this + 26);
  ExInitializeResourceLite((PERESOURCE)((char *)this + 1512));
  ExInitializeResourceLite((PERESOURCE)((char *)this + 1616));
  ExInitializeResourceLite((PERESOURCE)((char *)this + 1720));
  ExInitializeResourceLite((PERESOURCE)((char *)this + 1824));
  return this;
}
