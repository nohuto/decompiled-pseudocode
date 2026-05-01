/*
 * XREFs of ??1ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ @ 0x18005A8B4
 * Callers:
 *     ??_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z @ 0x18005A638 (--_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z.c)
 *     ?RunNotificationWorker@ModernResourceEnforcer@@IEAAXXZ @ 0x18005A740 (-RunNotificationWorker@ModernResourceEnforcer@@IEAAXXZ.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180070998 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ModernResourceEnforcer::ModernResourceEnforcerWorkItem::~ModernResourceEnforcerWorkItem(
        ModernResourceEnforcer::ModernResourceEnforcerWorkItem *this)
{
  char *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  if ( *((_DWORD *)this + 32) > 1u )
  {
    v3 = (void *)*((_QWORD *)this + 14);
    if ( v3 )
      HampFreeHeap(v3);
    v4 = (void *)*((_QWORD *)this + 15);
    if ( v4 )
      HampFreeHeap(v4);
  }
  v2 = (char *)*((_QWORD *)this + 1);
  if ( v2 != (char *)this + 24 )
    operator delete(v2);
}
